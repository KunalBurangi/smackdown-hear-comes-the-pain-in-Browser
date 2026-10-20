#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342,
    0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356,
    0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372,
    373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401,
    0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F0000;
    case 2u: goto L_002F0040;
    case 3u: goto L_002F0048;
    case 4u: goto L_002F00A8;
    case 5u: goto L_002F00B4;
    case 6u: goto L_002F00D4;
    case 7u: goto L_002F00E4;
    case 8u: goto L_002F013C;
    case 9u: goto L_002F0144;
    case 10u: goto L_002F0174;
    case 11u: goto L_002F0184;
    case 12u: goto L_002F01A0;
    case 13u: goto L_002F01E0;
    case 14u: goto L_002F0210;
    case 15u: goto L_002F024C;
    case 16u: goto L_002F0278;
    case 17u: goto L_002F0284;
    case 18u: goto L_002F02D0;
    case 19u: goto L_002F02F4;
    case 20u: goto L_002F0330;
    case 21u: goto L_002F036C;
    case 22u: goto L_002F03B0;
    case 23u: goto L_002F03DC;
    case 24u: goto L_002F03F8;
    case 25u: goto L_002F0414;
    case 26u: goto L_002F0430;
    case 27u: goto L_002F0440;
    case 28u: goto L_002F0450;
    case 29u: goto L_002F04A0;
    case 30u: goto L_002F0514;
    case 31u: goto L_002F05A0;
    case 32u: goto L_002F05C0;
    case 33u: goto L_002F0630;
    case 34u: goto L_002F0670;
    case 35u: goto L_002F06D4;
    case 36u: goto L_002F0700;
    case 37u: goto L_002F071C;
    case 38u: goto L_002F0730;
    case 39u: goto L_002F076C;
    case 40u: goto L_002F07AC;
    case 41u: goto L_002F07EC;
    case 42u: goto L_002F0860;
    case 43u: goto L_002F0894;
    case 44u: goto L_002F08C0;
    case 45u: goto L_002F08F4;
    case 46u: goto L_002F0904;
    case 47u: goto L_002F091C;
    case 48u: goto L_002F0940;
    case 49u: goto L_002F095C;
    case 50u: goto L_002F096C;
    case 51u: goto L_002F0994;
    case 52u: goto L_002F09BC;
    case 53u: goto L_002F09D8;
    case 54u: goto L_002F0A00;
    case 55u: goto L_002F0A2C;
    case 56u: goto L_002F0A54;
    case 57u: goto L_002F0A68;
    case 58u: goto L_002F0A88;
    case 59u: goto L_002F0AB8;
    case 60u: goto L_002F0AD0;
    case 61u: goto L_002F0AF0;
    case 62u: goto L_002F0AF8;
    case 63u: goto L_002F0B10;
    case 64u: goto L_002F0B1C;
    case 65u: goto L_002F0B34;
    case 66u: goto L_002F0B54;
    case 67u: goto L_002F0B70;
    case 68u: goto L_002F0BD0;
    case 69u: goto L_002F0C24;
    case 70u: goto L_002F0C50;
    case 71u: goto L_002F0C58;
    case 72u: goto L_002F0C64;
    case 73u: goto L_002F0C8C;
    case 74u: goto L_002F0CA4;
    case 75u: goto L_002F0CB0;
    case 76u: goto L_002F0CC8;
    case 77u: goto L_002F0CE8;
    case 78u: goto L_002F0D04;
    case 79u: goto L_002F0D6C;
    case 80u: goto L_002F0D74;
    case 81u: goto L_002F0E40;
    case 82u: goto L_002F0E58;
    case 83u: goto L_002F0E68;
    case 84u: goto L_002F0E84;
    case 85u: goto L_002F0E9C;
    case 86u: goto L_002F0EF0;
    case 87u: goto L_002F0F10;
    case 88u: goto L_002F0F28;
    case 89u: goto L_002F0F30;
    case 90u: goto L_002F0F40;
    case 91u: goto L_002F0F54;
    case 92u: goto L_002F0FB0;
    case 93u: goto L_002F0FFC;
    case 94u: goto L_002F1024;
    case 95u: goto L_002F104C;
    case 96u: goto L_002F1074;
    case 97u: goto L_002F109C;
    case 98u: goto L_002F10AC;
    case 99u: goto L_002F10C4;
    case 100u: goto L_002F10E0;
    case 101u: goto L_002F1104;
    case 102u: goto L_002F112C;
    case 103u: goto L_002F1154;
    case 104u: goto L_002F1194;
    case 105u: goto L_002F11D4;
    case 106u: goto L_002F11F0;
    case 107u: goto L_002F1200;
    case 108u: goto L_002F1210;
    case 109u: goto L_002F1288;
    case 110u: goto L_002F12B0;
    case 111u: goto L_002F12C0;
    case 112u: goto L_002F1318;
    case 113u: goto L_002F133C;
    case 114u: goto L_002F1354;
    case 115u: goto L_002F138C;
    case 116u: goto L_002F13A8;
    case 117u: goto L_002F13B8;
    case 118u: goto L_002F13C8;
    case 119u: goto L_002F13DC;
    case 120u: goto L_002F13E4;
    case 121u: goto L_002F13EC;
    case 122u: goto L_002F13FC;
    case 123u: goto L_002F140C;
    case 124u: goto L_002F141C;
    case 125u: goto L_002F1430;
    case 126u: goto L_002F1480;
    case 127u: goto L_002F14C0;
    case 128u: goto L_002F14DC;
    case 129u: goto L_002F1500;
    case 130u: goto L_002F1514;
    case 131u: goto L_002F153C;
    case 132u: goto L_002F155C;
    case 133u: goto L_002F1590;
    case 134u: goto L_002F15A8;
    case 135u: goto L_002F15AC;
    case 136u: goto L_002F15D8;
    case 137u: goto L_002F1610;
    case 138u: goto L_002F17CC;
    case 139u: goto L_002F18B0;
    case 140u: goto L_002F18D8;
    case 141u: goto L_002F18F0;
    case 142u: goto L_002F1948;
    case 143u: goto L_002F1958;
    case 144u: goto L_002F1A48;
    case 145u: goto L_002F1A60;
    case 146u: goto L_002F1A80;
    case 147u: goto L_002F1A94;
    case 148u: goto L_002F1AF0;
    case 149u: goto L_002F1B3C;
    case 150u: goto L_002F1B64;
    case 151u: goto L_002F1B8C;
    case 152u: goto L_002F1B9C;
    case 153u: goto L_002F1BB4;
    case 154u: goto L_002F1BD0;
    case 155u: goto L_002F1BF4;
    case 156u: goto L_002F1C34;
    case 157u: goto L_002F1C5C;
    case 158u: goto L_002F1C70;
    case 159u: goto L_002F1C9C;
    case 160u: goto L_002F1CB4;
    case 161u: goto L_002F1CB8;
    case 162u: goto L_002F1CE4;
    case 163u: goto L_002F1D04;
    case 164u: goto L_002F1D30;
    case 165u: goto L_002F1D50;
    case 166u: goto L_002F1D80;
    case 167u: goto L_002F1D90;
    case 168u: goto L_002F1DC8;
    case 169u: goto L_002F1DD8;
    case 170u: goto L_002F1DF4;
    case 171u: goto L_002F1E04;
    case 172u: goto L_002F1E20;
    case 173u: goto L_002F1E30;
    case 174u: goto L_002F1E4C;
    case 175u: goto L_002F1E84;
    case 176u: goto L_002F1E9C;
    case 177u: goto L_002F1EA4;
    case 178u: goto L_002F1EB4;
    case 179u: goto L_002F1EC4;
    case 180u: goto L_002F1EE0;
    case 181u: goto L_002F1F10;
    case 182u: goto L_002F1F28;
    case 183u: goto L_002F1F40;
    case 184u: goto L_002F1FA8;
    case 185u: goto L_002F1FC0;
    case 186u: goto L_002F1FD0;
    case 187u: goto L_002F1FE4;
    case 188u: goto L_002F2000;
    case 189u: goto L_002F2030;
    case 190u: goto L_002F2050;
    case 191u: goto L_002F209C;
    case 192u: goto L_002F20C4;
    case 193u: goto L_002F20D4;
    case 194u: goto L_002F20EC;
    case 195u: goto L_002F2110;
    case 196u: goto L_002F2138;
    case 197u: goto L_002F214C;
    case 198u: goto L_002F2160;
    case 199u: goto L_002F2188;
    case 200u: goto L_002F21B0;
    case 201u: goto L_002F21C0;
    case 202u: goto L_002F21E0;
    case 203u: goto L_002F21F0;
    case 204u: goto L_002F2224;
    case 205u: goto L_002F2230;
    case 206u: goto L_002F2250;
    case 207u: goto L_002F2270;
    case 208u: goto L_002F2290;
    case 209u: goto L_002F22B0;
    case 210u: goto L_002F22C0;
    case 211u: goto L_002F22D4;
    case 212u: goto L_002F22EC;
    case 213u: goto L_002F2310;
    case 214u: goto L_002F2338;
    case 215u: goto L_002F2350;
    case 216u: goto L_002F2380;
    case 217u: goto L_002F2390;
    case 218u: goto L_002F23CC;
    case 219u: goto L_002F2420;
    case 220u: goto L_002F2440;
    case 221u: goto L_002F245C;
    case 222u: goto L_002F2474;
    case 223u: goto L_002F2488;
    case 224u: goto L_002F24A0;
    case 225u: goto L_002F24D0;
    case 226u: goto L_002F24E4;
    case 227u: goto L_002F2510;
    case 228u: goto L_002F255C;
    case 229u: goto L_002F256C;
    case 230u: goto L_002F2584;
    case 231u: goto L_002F25A0;
    case 232u: goto L_002F25B4;
    case 233u: goto L_002F25F8;
    case 234u: goto L_002F2610;
    case 235u: goto L_002F2624;
    case 236u: goto L_002F265C;
    case 237u: goto L_002F2670;
    case 238u: goto L_002F2684;
    case 239u: goto L_002F26B4;
    case 240u: goto L_002F26C4;
    case 241u: goto L_002F26E0;
    case 242u: goto L_002F26F4;
    case 243u: goto L_002F2724;
    case 244u: goto L_002F2740;
    case 245u: goto L_002F27A8;
    case 246u: goto L_002F27B4;
    case 247u: goto L_002F27D0;
    case 248u: goto L_002F27E0;
    case 249u: goto L_002F27F0;
    case 250u: goto L_002F2800;
    case 251u: goto L_002F2810;
    case 252u: goto L_002F2820;
    case 253u: goto L_002F2830;
    case 254u: goto L_002F2840;
    case 255u: goto L_002F2850;
    case 256u: goto L_002F2860;
    case 257u: goto L_002F2870;
    case 258u: goto L_002F28FC;
    case 259u: goto L_002F2908;
    case 260u: goto L_002F2954;
    case 261u: goto L_002F2964;
    case 262u: goto L_002F2974;
    case 263u: goto L_002F29D0;
    case 264u: goto L_002F29E0;
    case 265u: goto L_002F29F0;
    case 266u: goto L_002F2A4C;
    case 267u: goto L_002F2A5C;
    case 268u: goto L_002F2A6C;
    case 269u: goto L_002F2AC8;
    case 270u: goto L_002F2AD8;
    case 271u: goto L_002F2AE8;
    case 272u: goto L_002F2B44;
    case 273u: goto L_002F2B54;
    case 274u: goto L_002F2B64;
    case 275u: goto L_002F2BA8;
    case 276u: goto L_002F2BC0;
    case 277u: goto L_002F2BD4;
    case 278u: goto L_002F2BEC;
    case 279u: goto L_002F2C18;
    case 280u: goto L_002F2C30;
    case 281u: goto L_002F2C44;
    case 282u: goto L_002F2C5C;
    case 283u: goto L_002F2C70;
    case 284u: goto L_002F2C88;
    case 285u: goto L_002F2CC0;
    case 286u: goto L_002F2CC8;
    case 287u: goto L_002F2CD8;
    case 288u: goto L_002F2CF4;
    case 289u: goto L_002F2D0C;
    case 290u: goto L_002F2D24;
    case 291u: goto L_002F2D3C;
    case 292u: goto L_002F2D54;
    case 293u: goto L_002F2D6C;
    case 294u: goto L_002F2D84;
    case 295u: goto L_002F2D9C;
    case 296u: goto L_002F2DD0;
    case 297u: goto L_002F2DF8;
    case 298u: goto L_002F2E30;
    case 299u: goto L_002F2E70;
    case 300u: goto L_002F2E98;
    case 301u: goto L_002F2EC0;
    case 302u: goto L_002F2EE8;
    case 303u: goto L_002F2F10;
    case 304u: goto L_002F2F40;
    case 305u: goto L_002F2F70;
    case 306u: goto L_002F2F98;
    case 307u: goto L_002F2FC0;
    case 308u: goto L_002F2FE8;
    case 309u: goto L_002F3000;
    case 310u: goto L_002F3020;
    case 311u: goto L_002F3120;
    case 312u: goto L_002F3154;
    case 313u: goto L_002F3194;
    case 314u: goto L_002F321C;
    case 315u: goto L_002F3228;
    case 316u: goto L_002F32E8;
    case 317u: goto L_002F3304;
    case 318u: goto L_002F3334;
    case 319u: goto L_002F3348;
    case 320u: goto L_002F335C;
    case 321u: goto L_002F3380;
    case 322u: goto L_002F3388;
    case 323u: goto L_002F33A0;
    case 324u: goto L_002F33EC;
    case 325u: goto L_002F3448;
    case 326u: goto L_002F3490;
    case 327u: goto L_002F349C;
    case 328u: goto L_002F34B4;
    case 329u: goto L_002F34C0;
    case 330u: goto L_002F34DC;
    case 331u: goto L_002F34E8;
    case 332u: goto L_002F350C;
    case 333u: goto L_002F3514;
    case 334u: goto L_002F351C;
    case 335u: goto L_002F352C;
    case 336u: goto L_002F353C;
    case 337u: goto L_002F3544;
    case 338u: goto L_002F354C;
    case 339u: goto L_002F3554;
    case 340u: goto L_002F3564;
    case 341u: goto L_002F3574;
    case 342u: goto L_002F357C;
    case 343u: goto L_002F358C;
    case 344u: goto L_002F359C;
    case 345u: goto L_002F35A4;
    case 346u: goto L_002F35AC;
    case 347u: goto L_002F35B4;
    case 348u: goto L_002F35BC;
    case 349u: goto L_002F35C4;
    case 350u: goto L_002F35CC;
    case 351u: goto L_002F35D4;
    case 352u: goto L_002F35DC;
    case 353u: goto L_002F35E4;
    case 354u: goto L_002F35EC;
    case 355u: goto L_002F35F4;
    case 356u: goto L_002F35FC;
    case 357u: goto L_002F3604;
    case 358u: goto L_002F360C;
    case 359u: goto L_002F3614;
    case 360u: goto L_002F361C;
    case 361u: goto L_002F3624;
    case 362u: goto L_002F362C;
    case 363u: goto L_002F3634;
    case 364u: goto L_002F363C;
    case 365u: goto L_002F3644;
    case 366u: goto L_002F364C;
    case 367u: goto L_002F3654;
    case 368u: goto L_002F365C;
    case 369u: goto L_002F3664;
    case 370u: goto L_002F366C;
    case 371u: goto L_002F3674;
    case 372u: goto L_002F367C;
    case 373u: goto L_002F3680;
    case 374u: goto L_002F369C;
    case 375u: goto L_002F36B4;
    case 376u: goto L_002F3774;
    case 377u: goto L_002F3790;
    case 378u: goto L_002F37D0;
    case 379u: goto L_002F37EC;
    case 380u: goto L_002F380C;
    case 381u: goto L_002F383C;
    case 382u: goto L_002F3860;
    case 383u: goto L_002F3878;
    case 384u: goto L_002F38A8;
    case 385u: goto L_002F38C4;
    case 386u: goto L_002F38F8;
    case 387u: goto L_002F392C;
    case 388u: goto L_002F3944;
    case 389u: goto L_002F3964;
    case 390u: goto L_002F39AC;
    case 391u: goto L_002F39C4;
    case 392u: goto L_002F39D4;
    case 393u: goto L_002F39EC;
    case 394u: goto L_002F3A0C;
    case 395u: goto L_002F3A18;
    case 396u: goto L_002F3A60;
    case 397u: goto L_002F3AA4;
    case 398u: goto L_002F3B20;
    case 399u: goto L_002F3B50;
    case 400u: goto L_002F3BB0;
    case 401u: goto L_002F3BFC;
    case 402u: goto L_002F3C08;
    case 403u: goto L_002F3C20;
    case 404u: goto L_002F3C38;
    case 405u: goto L_002F3C54;
    case 406u: goto L_002F3C6C;
    case 407u: goto L_002F3C80;
    case 408u: goto L_002F3C98;
    case 409u: goto L_002F3CAC;
    case 410u: goto L_002F3CBC;
    case 411u: goto L_002F3CE4;
    case 412u: goto L_002F3CFC;
    case 413u: goto L_002F3DB0;
    case 414u: goto L_002F3DC8;
    case 415u: goto L_002F3E00;
    case 416u: goto L_002F3E88;
    case 417u: goto L_002F3F20;
    case 418u: goto L_002F3F38;
    case 419u: goto L_002F3F90;
    case 420u: goto L_002F3FA8;
    case 421u: goto L_002F3FCC;
    case 422u: goto L_002F3FE0;
    default: bad_entry(c, 0x002F0000u); return;
    }
L_002F0000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    fpu_div(c, 0u, c.f[2], c.f[20]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[2]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.f[0] = c.r[17].w[0];
    c.f[21] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0040u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0040u) [[unlikely]] return; }
L_002F0040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_002F00AC; } }
L_002F0048:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.f[20] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[20].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], c.r[18].w[0] + 8u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[2]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    c.f[0] = c.r[17].w[0];
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.f[21] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00A8u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F00A8u) [[unlikely]] return; }
L_002F00A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_002F00AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00B4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F00B4u) [[unlikely]] return; }
L_002F00B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 256u);
    set32(c.r[2], ld32((c.r[20].w[0])));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00D4u); st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F00D4u) [[unlikely]] return; }
L_002F00D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F00E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00E4u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002F00E4u) [[unlikely]] return; }
L_002F00E4:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.f[1] = c.r[18].w[0];
    set32(c.r[2], c.r[17].w[0] + 8u);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F013Cu); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F013Cu) [[unlikely]] return; }
L_002F013C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0144u); set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F0144u) [[unlikely]] return; }
L_002F0144:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], 0u + 272u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[5].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0174u); st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F0174u) [[unlikely]] return; }
L_002F0174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F0184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0184u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002F0184u) [[unlikely]] return; }
L_002F0184:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[7], 0u + 8u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01A0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x002F01A0u) [[unlikely]] return; }
L_002F01A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002F0218; } }
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    fpu_div(c, 0u, c.f[1], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.f[14] = ld32((c.r[1].w[0] - 22944u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01E0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x002F01E0u) [[unlikely]] return; }
L_002F01E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + 8u);
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0210u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0210u) [[unlikely]] return; }
L_002F0210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_002F027C; } }
L_002F0218:
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    fpu_div(c, 0u, c.f[1], c.f[20]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[1]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.f[14] = ld32((c.r[1].w[0] - 22944u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F024Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x002F024Cu) [[unlikely]] return; }
L_002F024C:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.f[1] = c.r[18].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0278u); c.f[14] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0278u) [[unlikely]] return; }
L_002F0278:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_002F027C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0284u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F0284u) [[unlikely]] return; }
L_002F0284:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F02D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F031C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02F4u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F02F4u) [[unlikely]] return; }
L_002F02F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 10;
L_002F031C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F0358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0330u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F0330u) [[unlikely]] return; }
L_002F0330:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 10;
L_002F0358:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F0394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F036Cu); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F036Cu) [[unlikely]] return; }
L_002F036C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 10;
L_002F0394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F03B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F03DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F03DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F03DCu) [[unlikely]] return; }
L_002F03DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F03F8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F03F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F03F8u) [[unlikely]] return; }
L_002F03F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F0414; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0414u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0414u) [[unlikely]] return; }
L_002F0414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F0430:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE120u | kUnwind; return; } [[clang::musttail]] return unit_007B(c, 258u, depth); }
L_002F0440:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECF80u | kUnwind; return; } [[clang::musttail]] return unit_007B(c, 124u, depth); }
L_002F0450:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F04A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F0538; } }
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[16].w[0] + 32u);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[6] = c.r[2];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 5u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 1u, 4u, 5u, c.vu0.vf[0].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0514u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x002F0514u) [[unlikely]] return; }
L_002F0514:
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002F0538; } }
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002F0538:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_002F05AC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002F0560; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_002F0590; } }
L_002F0560:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002F0574; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F058C; } }
L_002F0574:
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 6;
L_002F058C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_002F0590:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05A0u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x002F05A0u) [[unlikely]] return; }
L_002F05A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 3;
L_002F05AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F05C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0630u); st128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002F0630u) [[unlikely]] return; }
L_002F0630:
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[3]);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 104u), 0u);
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F0670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[17].w[0] + 16u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06D4u); st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002F06D4u) [[unlikely]] return; }
L_002F06D4:
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[17].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 80u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 104u), 0u);
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F0700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F071Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002F071Cu) [[unlikely]] return; }
L_002F071C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 15824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0730u); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 28u, depth + 1u); else { c.pc = 0x002F0450u; return; } if (c.pc != 0x002F0730u) [[unlikely]] return; }
L_002F0730:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F076Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F076Cu) [[unlikely]] return; }
L_002F076C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F07ACu) [[unlikely]] return; }
L_002F07AC:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07ECu); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F07ECu) [[unlikely]] return; }
L_002F07EC:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[16].w[0] + 96u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 30u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 516u), 0u);
    st32((c.r[16].w[0] + 512u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 520u), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    st32((c.r[16].w[0] + 524u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 528u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 228u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 232u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 224u));
    st32((c.r[16].w[0] + 208u), c.f[0]);
    st32((c.r[16].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 232u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F0860:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F091C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15824u);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_002F0894:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 96u);  if (t) { goto L_002F08C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F08C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F08C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F08C0u) [[unlikely]] return; }
L_002F08C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0894u | kUnwind; return; } goto L_002F0894; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F08F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F08F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F08F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F08F4u) [[unlikely]] return; }
L_002F08F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0904u); st32((c.r[18].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002F0904u) [[unlikely]] return; }
L_002F0904:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F0920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F091Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F091Cu) [[unlikely]] return; }
L_002F091C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002F0920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F0940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_002F095C:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F096Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F096Cu) [[unlikely]] return; }
L_002F096C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[18], c.r[2].w[0] + 96u);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0994u) [[unlikely]] return; }
L_002F0994:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 208u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F095Cu | kUnwind; return; } goto L_002F095C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F09BCu) [[unlikely]] return; }
L_002F09BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F09D8u) [[unlikely]] return; }
L_002F09D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F0A00:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 528u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F0B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002F0A9C; } }
L_002F0A2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A54u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002F0A54u) [[unlikely]] return; }
L_002F0A54:
    set32(c.r[25], ld32((c.r[2].w[0] + 56u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0A68u) [[unlikely]] return; }
L_002F0A68:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st128((c.r[2].w[0] + 384u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0A88u) [[unlikely]] return; }
L_002F0A88:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st128((c.r[2].w[0] + 448u) & ~15u, c.r[3]);
    c.budget -= 5;
L_002F0A9C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0A2Cu | kUnwind; return; } goto L_002F0A2C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0AB8u) [[unlikely]] return; }
L_002F0AB8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 384u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0AD0u) [[unlikely]] return; }
L_002F0AD0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 384u);
    set32(c.r[6], c.r[17].w[0] + 448u);
    set32(c.r[7], c.r[17].w[0] + 400u);
    set32(c.r[8], c.r[17].w[0] + 464u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AF0u); st128((c.r[17].w[0] + 448u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007C(c, 32u, depth + 1u); else { c.pc = 0x002F05C0u; return; } if (c.pc != 0x002F0AF0u) [[unlikely]] return; }
L_002F0AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AF8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002F0AF8u) [[unlikely]] return; }
L_002F0AF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0B10u) [[unlikely]] return; }
L_002F0B10:
    st32((c.r[17].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B1Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002F0B1Cu) [[unlikely]] return; }
L_002F0B1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0B34u) [[unlikely]] return; }
L_002F0B34:
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 236u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B54u); set32(c.r[5], c.r[17].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0B54u) [[unlikely]] return; }
L_002F0B54:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B70u); set32(c.r[5], c.r[17].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0B70u) [[unlikely]] return; }
L_002F0B70:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F0B78:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002F0B90; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 520u), c.r[3].w[0]);  if (t) { goto L_002F0EF0; } }
L_002F0B90:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0D04; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 512u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F0BD8; } }
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BD0u); set32(c.r[6], c.r[2].w[0] + 448u);  if (depth < kMaxDepth) unit_007C(c, 34u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x002F0BD0u) [[unlikely]] return; }
L_002F0BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0D04; } }
L_002F0BD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 516u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 516u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 516u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002F0BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 2u);  if (t) { goto L_002F0C08; } }
L_002F0BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 2u);  if (t) { goto L_002F0C08; } }
L_002F0C08:
    st32((c.r[17].w[0] + 516u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 512u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 516u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C24u); c.f[20] = ld32((c.r[2].w[0] + 224u));  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x002F0C24u) [[unlikely]] return; }
L_002F0C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 384u);
    set32(c.r[6], c.r[17].w[0] + 448u);
    set32(c.r[7], c.r[17].w[0] + 400u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[8], c.r[17].w[0] + 464u);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C50u); st32((c.r[17].w[0] + 208u), c.f[0]);  if (depth < kMaxDepth) unit_007C(c, 32u, depth + 1u); else { c.pc = 0x002F05C0u; return; } if (c.pc != 0x002F0C50u) [[unlikely]] return; }
L_002F0C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C58u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140410u; return; } if (c.pc != 0x002F0C58u) [[unlikely]] return; }
L_002F0C58:
    set32(c.r[5], ld32((c.r[17].w[0] + 524u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002F0C64u) [[unlikely]] return; }
L_002F0C64:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[17].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 516u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C8Cu); st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002F0C8Cu) [[unlikely]] return; }
L_002F0C8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0CA4u) [[unlikely]] return; }
L_002F0CA4:
    st32((c.r[17].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CB0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002F0CB0u) [[unlikely]] return; }
L_002F0CB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CC8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0CC8u) [[unlikely]] return; }
L_002F0CC8:
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 236u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CE8u); set32(c.r[5], c.r[17].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0CE8u) [[unlikely]] return; }
L_002F0CE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D04u); set32(c.r[5], c.r[17].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0D04u) [[unlikely]] return; }
L_002F0D04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22896u));
    c.f[3] = ld32((c.r[17].w[0] + 208u));
    c.f[2] = ld32((c.r[17].w[0] + 232u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = ld32((c.r[1].w[0] - 22904u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F0D40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22912u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_002F0D5C; } }
L_002F0D40:
    c.f[0] = ld32((c.r[1].w[0] - 22920u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0D5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22912u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 3;
L_002F0D5C:
    st32((c.r[17].w[0] + 232u), c.f[1]);
    c.f[12] = ld32((c.r[17].w[0] + 232u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D6Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 31u, depth + 1u); else { c.pc = 0x00144760u; return; } if (c.pc != 0x002F0D6Cu) [[unlikely]] return; }
L_002F0D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F0E44; } }
L_002F0D74:
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 256u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 51;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E40u); set32(c.r[5], c.r[29].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0E40u) [[unlikely]] return; }
L_002F0E40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F0E44:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0D74u | kUnwind; return; } goto L_002F0D74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E58u); set32(c.r[4], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_007C(c, 29u, depth + 1u); else { c.pc = 0x002F04A0u; return; } if (c.pc != 0x002F0E58u) [[unlikely]] return; }
L_002F0E58:
    set32(c.r[6], c.r[17].w[0] + 176u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E68u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x002F0E68u) [[unlikely]] return; }
L_002F0E68:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E84u); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0E84u) [[unlikely]] return; }
L_002F0E84:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0E9Cu) [[unlikely]] return; }
L_002F0E9C:
    set32(c.r[2], c.r[17].w[0] + 128u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::subbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[17].w[0] + 176u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EF0u); set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F0EF0u) [[unlikely]] return; }
L_002F0EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002F0F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F28u); set32(c.r[4], ld32((c.r[4].w[0] + 108u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002F0F28u) [[unlikely]] return; }
L_002F0F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F30u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002F0F30u) [[unlikely]] return; }
L_002F0F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F0F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002F0F54u) [[unlikely]] return; }
L_002F0F54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + 16160u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F0FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F10C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16160u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F0FFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F0FFC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F0FFCu) [[unlikely]] return; }
L_002F0FFC:
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1024; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1024; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1024u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1024u) [[unlikely]] return; }
L_002F1024:
    st32((c.r[17].w[0] + 148u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F104C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F104C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F104Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F104Cu) [[unlikely]] return; }
L_002F104C:
    st32((c.r[17].w[0] + 152u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1074; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1074; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1074u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1074u) [[unlikely]] return; }
L_002F1074:
    st32((c.r[17].w[0] + 140u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F109C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F109C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F109Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F109Cu) [[unlikely]] return; }
L_002F109C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10ACu); st32((c.r[17].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002F10ACu) [[unlikely]] return; }
L_002F10AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F10C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F10C4u) [[unlikely]] return; }
L_002F10C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F10C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F10E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1104u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F1104u) [[unlikely]] return; }
L_002F1104:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F112Cu); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002F112Cu) [[unlikely]] return; }
L_002F112C:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1154u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002F1154u) [[unlikely]] return; }
L_002F1154:
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1194u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F1194u) [[unlikely]] return; }
L_002F1194:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F11D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F11D4u) [[unlikely]] return; }
L_002F11D4:
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F11F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_002F1200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002F1210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F123C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F123C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 2;
L_002F123C:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F141C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F12A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1280; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1280; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_002F1280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1288u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002F1288u) [[unlikely]] return; }
L_002F1288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1354; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_002F1354; } }
L_002F12A0:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F12B0u) [[unlikely]] return; }
L_002F12B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F12C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 125u, depth + 1u); else { c.pc = 0x002F1430u; return; } if (c.pc != 0x002F12C0u) [[unlikely]] return; }
L_002F12C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 148u)));  if (t) { goto L_002F1358; } }
L_002F12C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1354; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[2] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[1] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 48u), c.f[2]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1318u); st32((c.r[29].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_007C(c, 217u, depth + 1u); else { c.pc = 0x002F2390u; return; } if (c.pc != 0x002F1318u) [[unlikely]] return; }
L_002F1318:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1354; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F1340; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F133Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F133Cu) [[unlikely]] return; }
L_002F133C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002F1340:
    set32(c.r[2], 0u + 60u);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1354u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 125u, depth + 1u); else { c.pc = 0x002F1430u; return; } if (c.pc != 0x002F1354u) [[unlikely]] return; }
L_002F1354:
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_002F1358:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F141C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F1420; } }
L_002F1374:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F138Cu); set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002F138Cu) [[unlikely]] return; }
L_002F138C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13A8u); set32(c.r[5], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002F13A8u) [[unlikely]] return; }
L_002F13A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13B8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002F13B8u) [[unlikely]] return; }
L_002F13B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13C8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002F13C8u) [[unlikely]] return; }
L_002F13C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F141C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13DCu);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F13DCu) [[unlikely]] return; }
L_002F13DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13E4u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F13E4u) [[unlikely]] return; }
L_002F13E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13ECu); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F13ECu) [[unlikely]] return; }
L_002F13EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002F13FCu) [[unlikely]] return; }
L_002F13FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F140Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002F140Cu) [[unlikely]] return; }
L_002F140C:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F141Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002F141Cu) [[unlikely]] return; }
L_002F141C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F1420:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F1430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F155C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002F1544; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1480; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1480; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1480u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1480u) [[unlikely]] return; }
L_002F1480:
    st32((c.r[16].w[0] + 136u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F14C0u) [[unlikely]] return; }
L_002F14C0:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F14DCu); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F14DCu) [[unlikely]] return; }
L_002F14DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1500u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002F1500u) [[unlikely]] return; }
L_002F1500:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 435u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1514u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002F1514u) [[unlikely]] return; }
L_002F1514:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F155C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F155C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F153Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F153Cu) [[unlikely]] return; }
L_002F153C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F155C; } }
L_002F1544:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002F155C; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F155Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002F155Cu) [[unlikely]] return; }
L_002F155C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002F15E8; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 28348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F15E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1590u);  if (depth < kMaxDepth) unit_0066(c, 213u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x002F1590u) [[unlikely]] return; }
L_002F1590:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15A8u);  if (depth < kMaxDepth) unit_0066(c, 213u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x002F15A8u) [[unlikely]] return; }
L_002F15A8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F15AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002F15D8u) [[unlikely]] return; }
L_002F15D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F15ACu | kUnwind; return; } goto L_002F15AC; } }
L_002F15E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F16D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    set32(c.r[4], 0u + 14u);
    set32(c.r[3], 0u + 8u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), 0ull);
    st64((c.r[9].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 38;
L_002F16D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F18D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F17D4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002F18D8; } }
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F17B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 39;
L_002F17B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F17CCu) [[unlikely]] return; }
L_002F17CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F18DC; } }
L_002F17D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002F18D8; } }
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F1898; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 39;
L_002F1898:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F18B0u) [[unlikely]] return; }
L_002F18B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F18D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F18D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F18D8u) [[unlikely]] return; }
L_002F18D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F18DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F18F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002F1A60; } }
    set32(c.r[2], 0u + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[4].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1948u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002F1948u) [[unlikely]] return; }
L_002F1948:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1958u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002F1958u) [[unlikely]] return; }
L_002F1958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002F1A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 38;
L_002F1A10:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[3].d[0] | 12801ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st64((c.r[2].w[0] + 192u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st64((c.r[2].w[0] + 192u), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1A48u) [[unlikely]] return; }
L_002F1A48:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1A60u) [[unlikely]] return; }
L_002F1A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002F1A94u) [[unlikely]] return; }
L_002F1A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 16080u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F1AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F1BB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16080u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1B3C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1B3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1B3Cu) [[unlikely]] return; }
L_002F1B3C:
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1B64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1B64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1B64u) [[unlikely]] return; }
L_002F1B64:
    st32((c.r[17].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1B8C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F1B8C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1B8Cu) [[unlikely]] return; }
L_002F1B8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B9Cu); st32((c.r[17].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002F1B9Cu) [[unlikely]] return; }
L_002F1B9C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F1BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F1BB4u) [[unlikely]] return; }
L_002F1BB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F1BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F1BF4u) [[unlikely]] return; }
L_002F1BF4:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C34u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F1C34u) [[unlikely]] return; }
L_002F1C34:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C5Cu); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002F1C5Cu) [[unlikely]] return; }
L_002F1C5C:
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F1C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C9Cu); set32(c.r[4], ld32((c.r[4].w[0] + 132u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F1C9Cu) [[unlikely]] return; }
L_002F1C9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CB4u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F1CB4u) [[unlikely]] return; }
L_002F1CB4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1CB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CE4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002F1CE4u) [[unlikely]] return; }
L_002F1CE4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1CB8u | kUnwind; return; } goto L_002F1CB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D04u); c.r[5].d[0] = c.r[2].d[0] | 20300ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002F1D04u) [[unlikely]] return; }
L_002F1D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F1D10; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002F1D10:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D30u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x002F1D30u) [[unlikely]] return; }
L_002F1D30:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D50u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x002F1D50u) [[unlikely]] return; }
L_002F1D50:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 60u);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 140u)));  c.pc = t; return; }
L_002F1D90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1EC4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1DFC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1DC8u) [[unlikely]] return; }
L_002F1DC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DD8u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002F1DD8u) [[unlikely]] return; }
L_002F1DD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DF4u); set32(c.r[5], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002F1DF4u) [[unlikely]] return; }
L_002F1DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (t) { goto L_002F1E94; } }
L_002F1DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E04u); set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002F1E04u) [[unlikely]] return; }
L_002F1E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1E90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E20u);  if (depth < kMaxDepth) unit_003E(c, 407u, depth + 1u); else { c.pc = 0x001FBB90u; return; } if (c.pc != 0x002F1E20u) [[unlikely]] return; }
L_002F1E20:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002F1E30u) [[unlikely]] return; }
L_002F1E30:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E4Cu); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1E4Cu) [[unlikely]] return; }
L_002F1E4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[13] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u - 1u);
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[16] = ld32((c.r[1].w[0] - 22656u));
    c.f[15] = c.f[13];
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E84u); c.f[17] = c.f[13];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002F1E84u) [[unlikely]] return; }
L_002F1E84:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
L_002F1E90:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_002F1E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E9Cu);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F1E9Cu) [[unlikely]] return; }
L_002F1E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EA4u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F1EA4u) [[unlikely]] return; }
L_002F1EA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002F1EB4u) [[unlikely]] return; }
L_002F1EB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1EC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002F1EC4u) [[unlikely]] return; }
L_002F1EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F1EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1F28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1F10u) [[unlikely]] return; }
L_002F1F10:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1F28u) [[unlikely]] return; }
L_002F1F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F1F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] <= 0; c.r[1].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_002F1FC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 30u);  if (t) { goto L_002F1FC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1F9C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002F1F9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FA8u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002F1FA8u) [[unlikely]] return; }
L_002F1FA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F1FC0u) [[unlikely]] return; }
L_002F1FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F1FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002F1FE4u) [[unlikely]] return; }
L_002F1FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 15984u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2000u) [[unlikely]] return; }
L_002F2000:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2030:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F2050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F20EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 15984u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F209C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F209C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F209Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F209Cu) [[unlikely]] return; }
L_002F209C:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F20C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F20C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F20C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F20C4u) [[unlikely]] return; }
L_002F20C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F20D4u); st32((c.r[17].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002F20D4u) [[unlikely]] return; }
L_002F20D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F20F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F20ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F20ECu) [[unlikely]] return; }
L_002F20EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F20F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F2110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002F213C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2138u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F2138u) [[unlikely]] return; }
L_002F2138:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_002F213C:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F214Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F214Cu) [[unlikely]] return; }
L_002F214C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[2].w[0] - 2000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2160u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002F2160u) [[unlikely]] return; }
L_002F2160:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2188u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002F2188u) [[unlikely]] return; }
L_002F2188:
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21B0u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002F21B0u) [[unlikely]] return; }
L_002F21B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F21C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F21E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_002F21F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F2234; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F2234; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2224u) [[unlikely]] return; }
L_002F2224:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2230u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F2230u) [[unlikely]] return; }
L_002F2230:
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F2234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2250:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F2270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2290u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2290u) [[unlikely]] return; }
L_002F2290:
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2338; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F2338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22B0u);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F22B0u) [[unlikely]] return; }
L_002F22B0:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F22C0u) [[unlikely]] return; }
L_002F22C0:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F22D4u) [[unlikely]] return; }
L_002F22D4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002F22ECu) [[unlikely]] return; }
L_002F22EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2310u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002F2310u) [[unlikely]] return; }
L_002F2310:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2338u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002F2338u) [[unlikely]] return; }
L_002F2338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F2350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F2380; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2380; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2380u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2380u) [[unlikely]] return; }
L_002F2380:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F2390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 22824u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002F23CCu) [[unlikely]] return; }
L_002F23CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F23DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F24B0; } }
L_002F23DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F23EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F24B0; } }
L_002F23EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F23FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002F24B4; } }
L_002F23FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F2410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F24B0; } }
L_002F2410:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2420u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2420u) [[unlikely]] return; }
L_002F2420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F2430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F24B0; } }
L_002F2430:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2440u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x002F2440u) [[unlikely]] return; }
L_002F2440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F24AC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F2474; } }
    set32(c.r[16], c.r[17].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F245Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 418u, depth + 1u); else { c.pc = 0x0026BFB0u; return; } if (c.pc != 0x002F245Cu) [[unlikely]] return; }
L_002F245C:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2474u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005B(c, 3u, depth + 1u); else { c.pc = 0x0026C0D0u; return; } if (c.pc != 0x002F2474u) [[unlikely]] return; }
L_002F2474:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F24A4; } }
    set32(c.r[16], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 418u, depth + 1u); else { c.pc = 0x0026BFB0u; return; } if (c.pc != 0x002F2488u) [[unlikely]] return; }
L_002F2488:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24A0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_005B(c, 3u, depth + 1u); else { c.pc = 0x0026C0D0u; return; } if (c.pc != 0x002F24A0u) [[unlikely]] return; }
L_002F24A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F24A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F24B0; } }
L_002F24AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F24B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002F24B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F24D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 186u, depth + 1u); else { c.pc = 0x002F1FD0u; return; } if (c.pc != 0x002F24E4u) [[unlikely]] return; }
L_002F24E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 15888u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F2584; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 15888u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F255C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F255C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F255Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F255Cu) [[unlikely]] return; }
L_002F255C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F256Cu); st32((c.r[17].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_007C(c, 190u, depth + 1u); else { c.pc = 0x002F2050u; return; } if (c.pc != 0x002F256Cu) [[unlikely]] return; }
L_002F256C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F2588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2584u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F2584u) [[unlikely]] return; }
L_002F2584:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F2588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F25A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x002F2110u; return; } if (c.pc != 0x002F25B4u) [[unlikely]] return; }
L_002F25B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002F25FC; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F25F8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F25F8u) [[unlikely]] return; }
L_002F25F8:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_002F25FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2624u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 203u, depth + 1u); else { c.pc = 0x002F21F0u; return; } if (c.pc != 0x002F2624u) [[unlikely]] return; }
L_002F2624:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F265C; } }
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F265C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F265Cu);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F265Cu) [[unlikely]] return; }
L_002F265C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2684u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 207u, depth + 1u); else { c.pc = 0x002F2270u; return; } if (c.pc != 0x002F2684u) [[unlikely]] return; }
L_002F2684:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;  if (t) { goto L_002F26A0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002F26A0; } }
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 1;
L_002F26A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F26C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26B4u);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F26B4u) [[unlikely]] return; }
L_002F26B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002F26C4u) [[unlikely]] return; }
L_002F26C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F26E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 215u, depth + 1u); else { c.pc = 0x002F2350u; return; } if (c.pc != 0x002F26F4u) [[unlikely]] return; }
L_002F26F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F2724; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F2724; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2724u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2724u) [[unlikely]] return; }
L_002F2724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F27B4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 30u);  if (t) { goto L_002F27B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F27A0; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002F27A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27A8u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002F27A8u) [[unlikely]] return; }
L_002F27A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27B4u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0049(c, 146u, depth + 1u); else { c.pc = 0x00225E70u; return; } if (c.pc != 0x002F27B4u) [[unlikely]] return; }
L_002F27B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F27D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2670u | kUnwind; return; } goto L_002F2670; }
L_002F27E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F26E0u | kUnwind; return; } goto L_002F26E0; }
L_002F27F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2740u | kUnwind; return; } goto L_002F2740; }
L_002F2800:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2270u | kUnwind; return; } goto L_002F2270; }
L_002F2810:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2350u | kUnwind; return; } goto L_002F2350; }
L_002F2820:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1D90u | kUnwind; return; } goto L_002F1D90; }
L_002F2830:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1EE0u | kUnwind; return; } goto L_002F1EE0; }
L_002F2840:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1F40u | kUnwind; return; } goto L_002F1F40; }
L_002F2850:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1210u | kUnwind; return; } goto L_002F1210; }
L_002F2860:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1610u | kUnwind; return; } goto L_002F1610; }
L_002F2870:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 15u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], 0u + 55u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 41u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 48u);
    st32((c.r[4].w[0]), 0u);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], 0u + 34u);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1128u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 1132u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 1136u), c.r[2].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F28FCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F28FCu) [[unlikely]] return; }
L_002F28FC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[21].w[0] + 1152u) & ~15u, c.r[2]);
    c.budget -= 3;
L_002F2908:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 1104u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2908u | kUnwind; return; } goto L_002F2908; } }
    st32((c.r[21].w[0] + 548u), 0u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[21].w[0] + 552u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[21].w[0] + 556u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 560u), 0u);
    st32((c.r[21].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 68u), 0u);
    st32((c.r[21].w[0] + 72u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2954u); st32((c.r[21].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2954u) [[unlikely]] return; }
L_002F2954:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2964u); st128((c.r[21].w[0] + 80u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2964u) [[unlikely]] return; }
L_002F2964:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2974u); st128((c.r[21].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2974u) [[unlikely]] return; }
L_002F2974:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[21].w[0] + 112u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 9u);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22592u));
    st32((c.r[21].w[0] + 136u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22588u));
    st32((c.r[21].w[0] + 140u), c.f[0]);
    st32((c.r[21].w[0] + 144u), 0u);
    st32((c.r[21].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 164u), 0u);
    st32((c.r[21].w[0] + 168u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29D0u); st32((c.r[21].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F29D0u) [[unlikely]] return; }
L_002F29D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29E0u); st128((c.r[21].w[0] + 176u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F29E0u) [[unlikely]] return; }
L_002F29E0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29F0u); st128((c.r[21].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F29F0u) [[unlikely]] return; }
L_002F29F0:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 8u);
    st128((c.r[21].w[0] + 208u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22584u));
    st32((c.r[21].w[0] + 232u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22580u));
    st32((c.r[21].w[0] + 236u), c.f[0]);
    st32((c.r[21].w[0] + 240u), 0u);
    st32((c.r[21].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 260u), 0u);
    st32((c.r[21].w[0] + 264u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A4Cu); st32((c.r[21].w[0] + 268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2A4Cu) [[unlikely]] return; }
L_002F2A4C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A5Cu); st128((c.r[21].w[0] + 272u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2A5Cu) [[unlikely]] return; }
L_002F2A5C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A6Cu); st128((c.r[21].w[0] + 288u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2A6Cu) [[unlikely]] return; }
L_002F2A6C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[21].w[0] + 304u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22584u));
    st32((c.r[21].w[0] + 328u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22580u));
    st32((c.r[21].w[0] + 332u), c.f[0]);
    st32((c.r[21].w[0] + 336u), 0u);
    st32((c.r[21].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 356u), 0u);
    st32((c.r[21].w[0] + 360u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AC8u); st32((c.r[21].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2AC8u) [[unlikely]] return; }
L_002F2AC8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AD8u); st128((c.r[21].w[0] + 368u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2AD8u) [[unlikely]] return; }
L_002F2AD8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AE8u); st128((c.r[21].w[0] + 384u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2AE8u) [[unlikely]] return; }
L_002F2AE8:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], 0u + 3u);
    st128((c.r[21].w[0] + 400u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22568u));
    st32((c.r[21].w[0] + 424u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22564u));
    st32((c.r[21].w[0] + 428u), c.f[0]);
    st32((c.r[21].w[0] + 432u), 0u);
    st32((c.r[21].w[0] + 448u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 452u), 0u);
    st32((c.r[21].w[0] + 456u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B44u); st32((c.r[21].w[0] + 460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2B44u) [[unlikely]] return; }
L_002F2B44:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B54u); st128((c.r[21].w[0] + 464u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2B54u) [[unlikely]] return; }
L_002F2B54:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B64u); st128((c.r[21].w[0] + 480u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2B64u) [[unlikely]] return; }
L_002F2B64:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 208u);
    st128((c.r[21].w[0] + 496u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 516u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22560u));
    st32((c.r[21].w[0] + 520u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22556u));
    st32((c.r[21].w[0] + 524u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BA8u); st32((c.r[21].w[0] + 528u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2BA8u) [[unlikely]] return; }
L_002F2BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F2BC0; } }
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BC0u); set32(c.r[7], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002F2BC0u) [[unlikely]] return; }
L_002F2BC0:
    st32((c.r[21].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[4], 0u + 208u);
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BD4u); st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2BD4u) [[unlikely]] return; }
L_002F2BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F2BEC; } }
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BECu); set32(c.r[7], c.r[21].w[0] + 160u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002F2BECu) [[unlikely]] return; }
L_002F2BEC:
    st32((c.r[21].w[0] + 564u), c.r[2].w[0]);
    set32(c.r[5], c.r[21].w[0] + 832u);
    set32(c.r[2], ld32((c.r[21].w[0] + 564u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 208u);
    st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[21].w[0] + 564u)));
    st32((c.r[2].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 564u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C18u); st32((c.r[2].w[0] + 192u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2C18u) [[unlikely]] return; }
L_002F2C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F2C30; } }
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C30u); set32(c.r[7], c.r[21].w[0] + 256u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002F2C30u) [[unlikely]] return; }
L_002F2C30:
    st32((c.r[21].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[4], 0u + 208u);
    set32(c.r[2], ld32((c.r[21].w[0] + 604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C44u); st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2C44u) [[unlikely]] return; }
L_002F2C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F2C5C; } }
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C5Cu); set32(c.r[7], c.r[21].w[0] + 352u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002F2C5Cu) [[unlikely]] return; }
L_002F2C5C:
    st32((c.r[21].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[21].w[0] + 612u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C70u); st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2C70u) [[unlikely]] return; }
L_002F2C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F2C88; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C88u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002F2C88u) [[unlikely]] return; }
L_002F2C88:
    st32((c.r[21].w[0] + 620u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 620u)));
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CC0u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2CC0u) [[unlikely]] return; }
L_002F2CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CC8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2CC8u) [[unlikely]] return; }
L_002F2CC8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CD8u); st128((c.r[21].w[0] + 720u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F2CD8u) [[unlikely]] return; }
L_002F2CD8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[21].w[0] + 720u);
    set32(c.r[4], 0u + 160u);
    st128((c.r[21].w[0] + 736u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 620u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CF4u); st32((c.r[2].w[0] + 140u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2CF4u) [[unlikely]] return; }
L_002F2CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002F2D0C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D0Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002F2D0Cu) [[unlikely]] return; }
L_002F2D0C:
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D24u); st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2D24u) [[unlikely]] return; }
L_002F2D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F2D3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D3Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002F2D3Cu) [[unlikely]] return; }
L_002F2D3C:
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D54u); st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2D54u) [[unlikely]] return; }
L_002F2D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F2D6C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D6Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002F2D6Cu) [[unlikely]] return; }
L_002F2D6C:
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D84u); st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2D84u) [[unlikely]] return; }
L_002F2D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F2D9C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D9Cu); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002F2D9Cu) [[unlikely]] return; }
L_002F2D9C:
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 192u);
    st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[1].w[0] - 22572u));
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22576u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DD0u); st32((c.r[2].w[0] + 56u), c.f[1]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F2DD0u) [[unlikely]] return; }
L_002F2DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2DF8; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 11u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DF8u); c.f[15] = c.f[12];  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BCFA0u; return; } if (c.pc != 0x002F2DF8u) [[unlikely]] return; }
L_002F2DF8:
    st32((c.r[21].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[3].w[0] + 180u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F2E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F3000; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 544u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2E70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2E70; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2E70u) [[unlikely]] return; }
L_002F2E70:
    st32((c.r[17].w[0] + 544u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 564u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2E98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2E98; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2E98u) [[unlikely]] return; }
L_002F2E98:
    st32((c.r[17].w[0] + 564u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 604u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2EC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2EC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2EC0u) [[unlikely]] return; }
L_002F2EC0:
    st32((c.r[17].w[0] + 604u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 612u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2EE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2EE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2EE8u) [[unlikely]] return; }
L_002F2EE8:
    st32((c.r[17].w[0] + 612u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 620u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F10; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2F10u) [[unlikely]] return; }
L_002F2F10:
    st32((c.r[17].w[0] + 620u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2F40u) [[unlikely]] return; }
L_002F2F40:
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 1;
L_002F2F44:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F70; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2F70u) [[unlikely]] return; }
L_002F2F70:
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 1;
L_002F2F74:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F98; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2F98u) [[unlikely]] return; }
L_002F2F98:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2FC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2FC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2FC0u) [[unlikely]] return; }
L_002F2FC0:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002F2FEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2FE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2FE8u) [[unlikely]] return; }
L_002F2FE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002F2FEC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 40u), 0u);  if (t) { goto L_002F3000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F3000u) [[unlikely]] return; }
L_002F3000:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3020:
    set32(c.r[5], ld32((c.r[4].w[0] + 1128u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002F3098; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F3098; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 144u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002F304C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[7].w[0] + 24u));  if (t) { goto L_002F3058; } }
L_002F304C:
    set32(c.r[3], ld32((c.r[7].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    c.budget -= 3;
L_002F3058:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] - c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[3].w[0] + 844u), c.r[5].w[0]);
    c.budget -= 16;
L_002F3098:
    set32(c.r[6], ld32((c.r[4].w[0] + 1132u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002F310C; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F310C; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 144u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F30C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[7].w[0] + 24u));  if (t) { goto L_002F30D0; } }
L_002F30C4:
    set32(c.r[3], ld32((c.r[7].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    c.budget -= 3;
L_002F30D0:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 255u);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 844u), c.r[4].w[0]);
    c.budget -= 15;
L_002F310C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3120:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 13;
L_002F3154:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 568u), 0u);
    st32((c.r[2].w[0] + 752u), 0u);
    st32((c.r[2].w[0] + 756u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1136u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F318C; } }
    ld128((c.r[18].w[0] + 1152u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 832u) & ~15u, c.r[3]);  if (t) { goto L_002F31A4; } }
L_002F318C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3194u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002F3194u) [[unlikely]] return; }
L_002F3194:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st128((c.r[2].w[0] + 832u) & ~15u, c.r[3]);
    c.budget -= 4;
L_002F31A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3154u | kUnwind; return; } goto L_002F3154; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 1128u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 1132u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 696u), 0u);
    st32((c.r[18].w[0] + 700u), 0u);
    st32((c.r[18].w[0] + 704u), 0u);
    st32((c.r[18].w[0] + 708u), 0u);
    st32((c.r[18].w[0] + 712u), 0u);
    st32((c.r[18].w[0] + 716u), 0u);
    st32((c.r[18].w[0] + 608u), 0u);
    st32((c.r[18].w[0] + 264u), 0u);
    st32((c.r[18].w[0] + 360u), 0u);
    st32((c.r[18].w[0] + 616u), 0u);
    st32((c.r[18].w[0] + 456u), 0u);
    st32((c.r[18].w[0] + 624u), 0u);
    st32((c.r[18].w[0] + 628u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F321Cu); st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_007C(c, 399u, depth + 1u); else { c.pc = 0x002F3B50u; return; } if (c.pc != 0x002F321Cu) [[unlikely]] return; }
L_002F321C:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3228u); set32(c.r[4], c.r[18].w[0] + 1040u);  if (depth < kMaxDepth) unit_006E(c, 14u, depth + 1u); else { c.pc = 0x002B8170u; return; } if (c.pc != 0x002F3228u) [[unlikely]] return; }
L_002F3228:
    set32(c.r[3], c.r[18].w[0] + 1040u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[18].w[0] + 568u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 752u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 55u);  if (t) { goto L_002F327C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_002F3278; } }
    set32(c.r[3], 0u + 65u);
    st32((c.r[18].w[0] + 756u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], 0u + 58u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 51u);
    set32(c.r[2], 0u + 44u);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002F32A0; } }
L_002F3278:
    set32(c.r[2], 0u + 55u);
    c.budget -= 1;
L_002F327C:
    set32(c.r[3], 0u + 48u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], 0u + 41u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], 0u + 34u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 756u), c.r[2].w[0]);
    c.budget -= 9;
L_002F32A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002F32D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[21], 0u + 3u);  if (t) { goto L_002F32C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 1u);  if (t) { goto L_002F32EC; } }
L_002F32C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002F32F0; } }
L_002F32D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002F32EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F32E8u); set32(c.r[5], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_006E(c, 91u, depth + 1u); else { c.pc = 0x002B8550u; return; } if (c.pc != 0x002F32E8u) [[unlikely]] return; }
L_002F32E8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F32EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_002F32F0:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_002F3910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002F3340; } }
L_002F3304:
    set32(c.r[2], 0u + 50u);
    set32(c.r[3], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F332C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[18].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] - 22504u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 572u), c.r[3].w[0]);  if (t) { goto L_002F333C; } }
L_002F332C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3334u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002F3334u) [[unlikely]] return; }
L_002F3334:
    set32(c.r[3], c.r[18].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0] + 572u), c.r[2].w[0]);
    c.budget -= 2;
L_002F333C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002F3340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3348u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 100u, depth + 1u); else { c.pc = 0x002B8770u; return; } if (c.pc != 0x002F3348u) [[unlikely]] return; }
L_002F3348:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3304u | kUnwind; return; } goto L_002F3304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F335Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 95u, depth + 1u); else { c.pc = 0x002B86C0u; return; } if (c.pc != 0x002F335Cu) [[unlikely]] return; }
L_002F335C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3394; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 604u)));
    set32(c.r[5], c.r[18].w[0] + 824u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3380u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3380u) [[unlikely]] return; }
L_002F3380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3388u); set32(c.r[4], 0u + 45u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F3388u) [[unlikely]] return; }
L_002F3388:
    st32((c.r[18].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + 608u);
    st32((c.r[18].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 3;
L_002F3394:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 13u, depth + 1u); else { c.pc = 0x002F4190u; return; } if (c.pc != 0x002F33A0u) [[unlikely]] return; }
L_002F33A0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F33F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33ECu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F33ECu) [[unlikely]] return; }
L_002F33EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_002F3494; } }
L_002F33F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_002F3454; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_002F3450; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 69u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3448u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3448u) [[unlikely]] return; }
L_002F3448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3490; } }
L_002F3450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.budget -= 1;
L_002F3454:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3490u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3490u) [[unlikely]] return; }
L_002F3490:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_002F3494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F349Cu);  if (depth < kMaxDepth) unit_006E(c, 99u, depth + 1u); else { c.pc = 0x002B8710u; return; } if (c.pc != 0x002F349Cu) [[unlikely]] return; }
L_002F349C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 387u);  if (t) { goto L_002F34C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34B4u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F34B4u) [[unlikely]] return; }
L_002F34B4:
    st32((c.r[18].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34C0u); set32(c.r[4], 0u + 387u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F34C0u) [[unlikely]] return; }
L_002F34C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 600u), c.r[2].w[0]);  if (t) { goto L_002F34E0; } }
L_002F34C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 387u);  if (t) { goto L_002F34E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34DCu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F34DCu) [[unlikely]] return; }
L_002F34DC:
    st32((c.r[18].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 1;
L_002F34E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34E8u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_000C(c, 51u, depth + 1u); else { c.pc = 0x00130510u; return; } if (c.pc != 0x002F34E8u) [[unlikely]] return; }
L_002F34E8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F3680; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F350C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3514u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 71u, depth + 1u); else { c.pc = 0x002F4BA0u; return; } if (c.pc != 0x002F3514u) [[unlikely]] return; }
L_002F3514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F351C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F3534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F352Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 73u, depth + 1u); else { c.pc = 0x002F4CD0u; return; } if (c.pc != 0x002F352Cu) [[unlikely]] return; }
L_002F352C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F353Cu);  if (depth < kMaxDepth) unit_007D(c, 74u, depth + 1u); else { c.pc = 0x002F4D30u; return; } if (c.pc != 0x002F353Cu) [[unlikely]] return; }
L_002F353C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F354Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 75u, depth + 1u); else { c.pc = 0x002F4DB0u; return; } if (c.pc != 0x002F354Cu) [[unlikely]] return; }
L_002F354C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3554:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F356C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3564u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 69u, depth + 1u); else { c.pc = 0x002F4A70u; return; } if (c.pc != 0x002F3564u) [[unlikely]] return; }
L_002F3564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F356C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3574u);  if (depth < kMaxDepth) unit_007D(c, 86u, depth + 1u); else { c.pc = 0x002F54E0u; return; } if (c.pc != 0x002F3574u) [[unlikely]] return; }
L_002F3574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F357C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F3594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F358Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 76u, depth + 1u); else { c.pc = 0x002F4E00u; return; } if (c.pc != 0x002F358Cu) [[unlikely]] return; }
L_002F358C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F359Cu);  if (depth < kMaxDepth) unit_007D(c, 85u, depth + 1u); else { c.pc = 0x002F5440u; return; } if (c.pc != 0x002F359Cu) [[unlikely]] return; }
L_002F359C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F35A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 72u, depth + 1u); else { c.pc = 0x002F4C20u; return; } if (c.pc != 0x002F35ACu) [[unlikely]] return; }
L_002F35AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F35B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 77u, depth + 1u); else { c.pc = 0x002F4E80u; return; } if (c.pc != 0x002F35BCu) [[unlikely]] return; }
L_002F35BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F35C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 78u, depth + 1u); else { c.pc = 0x002F4F40u; return; } if (c.pc != 0x002F35CCu) [[unlikely]] return; }
L_002F35CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F35D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 70u, depth + 1u); else { c.pc = 0x002F4AE0u; return; } if (c.pc != 0x002F35DCu) [[unlikely]] return; }
L_002F35DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F35E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 70u, depth + 1u); else { c.pc = 0x002F4AE0u; return; } if (c.pc != 0x002F35ECu) [[unlikely]] return; }
L_002F35EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F35F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 79u, depth + 1u); else { c.pc = 0x002F5000u; return; } if (c.pc != 0x002F35FCu) [[unlikely]] return; }
L_002F35FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F360Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 80u, depth + 1u); else { c.pc = 0x002F50C0u; return; } if (c.pc != 0x002F360Cu) [[unlikely]] return; }
L_002F360C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F361Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 81u, depth + 1u); else { c.pc = 0x002F51D0u; return; } if (c.pc != 0x002F361Cu) [[unlikely]] return; }
L_002F361C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F362Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 68u, depth + 1u); else { c.pc = 0x002F4A40u; return; } if (c.pc != 0x002F362Cu) [[unlikely]] return; }
L_002F362C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F363Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 82u, depth + 1u); else { c.pc = 0x002F52C0u; return; } if (c.pc != 0x002F363Cu) [[unlikely]] return; }
L_002F363C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F364Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 83u, depth + 1u); else { c.pc = 0x002F5320u; return; } if (c.pc != 0x002F364Cu) [[unlikely]] return; }
L_002F364C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F365Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 84u, depth + 1u); else { c.pc = 0x002F53A0u; return; } if (c.pc != 0x002F365Cu) [[unlikely]] return; }
L_002F365C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F366Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 70u, depth + 1u); else { c.pc = 0x002F4AE0u; return; } if (c.pc != 0x002F366Cu) [[unlikely]] return; }
L_002F366C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F3680; } }
L_002F3674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F367Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 70u, depth + 1u); else { c.pc = 0x002F4AE0u; return; } if (c.pc != 0x002F367Cu) [[unlikely]] return; }
L_002F367C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F3680:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] + 696u);
    set32(c.r[4], ld32((c.r[18].w[0] + 612u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F369Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F369Cu) [[unlikely]] return; }
L_002F369C:
    set32(c.r[4], ld32((c.r[18].w[0] + 564u)));
    set32(c.r[5], c.r[18].w[0] + 752u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F36B4u); set32(c.r[6], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F36B4u) [[unlikely]] return; }
L_002F36B4:
    set32(c.r[2], c.r[18].w[0] + 568u);
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F3900; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002F3900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002F3900; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F3708; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F3710; } }
L_002F3708:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002F3710:
    set32(c.r[5], ld32((c.r[18].w[0] + 564u)));
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] | 19ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[3] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3774u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3774u) [[unlikely]] return; }
L_002F3774:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 22544u);
    set32(c.r[6], c.r[6].w[0] - 22528u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3790u); set32(c.r[7], 0u + 60u);  if (depth < kMaxDepth) unit_006F(c, 24u, depth + 1u); else { c.pc = 0x002BC4F0u; return; } if (c.pc != 0x002F3790u) [[unlikely]] return; }
L_002F3790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] | 19ull;
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[4]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[12] = fp::add(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37D0u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F37D0u) [[unlikely]] return; }
L_002F37D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 22544u);
    set32(c.r[6], c.r[6].w[0] - 22528u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F37ECu); set32(c.r[7], 0u + 60u);  if (depth < kMaxDepth) unit_006F(c, 24u, depth + 1u); else { c.pc = 0x002BC4F0u; return; } if (c.pc != 0x002F37ECu) [[unlikely]] return; }
L_002F37EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1132u), c.r[2].w[0]);  if (t) { goto L_002F3864; } }
L_002F380C:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[3].w[0] + 48u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F383Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 95u, depth + 1u); else { c.pc = 0x002B86C0u; return; } if (c.pc != 0x002F383Cu) [[unlikely]] return; }
L_002F383C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[19].w[0] + 1u);  if (t) { goto L_002F3858; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3860; } }
L_002F3858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3860u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 15u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x002F3860u) [[unlikely]] return; }
L_002F3860:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002F3864:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F380Cu | kUnwind; return; } goto L_002F380C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3878u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 99u, depth + 1u); else { c.pc = 0x002B8710u; return; } if (c.pc != 0x002F3878u) [[unlikely]] return; }
L_002F3878:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F38CC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F38B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38A8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_007D(c, 15u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x002F38A8u) [[unlikely]] return; }
L_002F38A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F39E4; } }
L_002F38B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F39E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38C4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_007D(c, 15u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x002F38C4u) [[unlikely]] return; }
L_002F38C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F39E0; } }
L_002F38CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F39E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002F39E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38F8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_007D(c, 15u, depth + 1u); else { c.pc = 0x002F4200u; return; } if (c.pc != 0x002F38F8u) [[unlikely]] return; }
L_002F38F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F39E0; } }
L_002F3900:
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F39E0; } }
L_002F3910:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002F396C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 612u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F392Cu); set32(c.r[5], c.r[18].w[0] + 696u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F392Cu) [[unlikely]] return; }
L_002F392C:
    set32(c.r[4], ld32((c.r[18].w[0] + 564u)));
    set32(c.r[5], c.r[18].w[0] + 752u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3944u); set32(c.r[6], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3944u) [[unlikely]] return; }
L_002F3944:
    set32(c.r[2], c.r[18].w[0] + 568u);
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3964u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 87u, depth + 1u); else { c.pc = 0x002F55A0u; return; } if (c.pc != 0x002F3964u) [[unlikely]] return; }
L_002F3964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F39E0; } }
L_002F396C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002F39E0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 696u), 0u);
    st32((c.r[18].w[0] + 700u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 612u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39ACu); set32(c.r[5], c.r[18].w[0] + 696u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F39ACu) [[unlikely]] return; }
L_002F39AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 564u)));
    set32(c.r[5], c.r[18].w[0] + 752u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39C4u); set32(c.r[6], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F39C4u) [[unlikely]] return; }
L_002F39C4:
    set32(c.r[2], c.r[18].w[0] + 568u);
    set32(c.r[4], 0u + 687u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39D4u); st32((c.r[18].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F39D4u) [[unlikely]] return; }
L_002F39D4:
    st32((c.r[18].w[0] + 616u), c.r[2].w[0]);
    set32(c.r[2], c.r[18].w[0] + 616u);
    st32((c.r[18].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 3;
L_002F39E0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F39E4:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_002F39EC:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[3].w[0] + 80u);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 418u);  if (t) { goto L_002F3AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A0Cu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F3A0Cu) [[unlikely]] return; }
L_002F3A0C:
    st32((c.r[18].w[0] + 624u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A18u); set32(c.r[4], 0u + 418u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F3A18u) [[unlikely]] return; }
L_002F3A18:
    st32((c.r[18].w[0] + 628u), c.r[2].w[0]);
    c.f[0] = 0u;
    set32(c.r[2], c.r[18].w[0] + 624u);
    st32((c.r[18].w[0] + 456u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 564u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[21], c.r[2].w[0] + 8u);  if (t) { goto L_002F3A90; } }
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A60u); set32(c.r[4], c.r[18].w[0] + 160u);  if (depth < kMaxDepth) unit_006E(c, 486u, depth + 1u); else { c.pc = 0x002BBCA0u; return; } if (c.pc != 0x002F3A60u) [[unlikely]] return; }
L_002F3A60:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[21].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 704u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 708u), c.f[0]);  if (t) { goto L_002F3AD0; } }
L_002F3A90:
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AA4u); set32(c.r[4], c.r[18].w[0] + 160u);  if (depth < kMaxDepth) unit_006E(c, 486u, depth + 1u); else { c.pc = 0x002BBCA0u; return; } if (c.pc != 0x002F3AA4u) [[unlikely]] return; }
L_002F3AA4:
    c.f[0] = ld32((c.r[21].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 704u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[20].w[0] + 708u), c.f[0]);
    c.budget -= 11;
L_002F3AD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F3AD4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F39ECu | kUnwind; return; } goto L_002F39EC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F3AFC; } }
    st32((c.r[18].w[0] + 624u), 0u);
    st32((c.r[18].w[0] + 628u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 456u), 0u);  if (t) { goto L_002F3B08; } }
L_002F3AFC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002F3B08; } }
    st32((c.r[18].w[0] + 628u), 0u);
    c.budget -= 1;
L_002F3B08:
    set32(c.r[4], ld32((c.r[18].w[0] + 620u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B20u); set32(c.r[5], c.r[18].w[0] + 704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3B20u) [[unlikely]] return; }
L_002F3B20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F3B50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F3BB8; } }
    c.r[5].d[0] = ld8((c.r[21].w[0] + 4u));
    c.r[6].d[0] = ld8((c.r[21].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BB0u); set32(c.r[4], c.r[22].w[0] + 976u);  if (depth < kMaxDepth) unit_006E(c, 15u, depth + 1u); else { c.pc = 0x002B8180u; return; } if (c.pc != 0x002F3BB0u) [[unlikely]] return; }
L_002F3BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[22].w[0] + 976u);  if (t) { goto L_002F3C24; } }
L_002F3BB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3BF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002F3BE8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F3BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3BF4; } }
L_002F3BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 352u);  if (t) { goto L_002F3BF4; } }
L_002F3BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 353u);  if (t) { goto L_002F3BF4; } }
L_002F3BF0:
    set32(c.r[4], 0u + 354u);
    c.budget -= 1;
L_002F3BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BFCu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F3BFCu) [[unlikely]] return; }
L_002F3BFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C08u); set32(c.r[4], 0u + 413u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002F3C08u) [[unlikely]] return; }
L_002F3C08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] + 976u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C20u); set32(c.r[5], c.r[5].w[0] - 22400u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002F3C20u) [[unlikely]] return; }
L_002F3C20:
    set32(c.r[5], c.r[22].w[0] + 976u);
    c.budget -= 1;
L_002F3C24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[22].w[0] + 548u), c.r[5].w[0]);
    c.f[12] = ld32((c.r[1].w[0] - 22592u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C38u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x002F3C38u) [[unlikely]] return; }
L_002F3C38:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 255u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002F3D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C54u);  if (depth < kMaxDepth) unit_006E(c, 94u, depth + 1u); else { c.pc = 0x002B8690u; return; } if (c.pc != 0x002F3C54u) [[unlikely]] return; }
L_002F3C54:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3C8C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C6Cu); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 13u, depth + 1u); else { c.pc = 0x002B8160u; return; } if (c.pc != 0x002F3C6Cu) [[unlikely]] return; }
L_002F3C6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 3u);
    c.f[12] = ld32((c.r[1].w[0] - 22592u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C80u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x002F3C80u) [[unlikely]] return; }
L_002F3C80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 25u);  if (t) { goto L_002F3CB4; } }
L_002F3C8C:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C98u); set32(c.r[19], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 13u, depth + 1u); else { c.pc = 0x002B8160u; return; } if (c.pc != 0x002F3C98u) [[unlikely]] return; }
L_002F3C98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 3u);
    c.f[12] = ld32((c.r[1].w[0] - 22592u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x002F3CACu) [[unlikely]] return; }
L_002F3CAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F3CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CBCu); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_006E(c, 13u, depth + 1u); else { c.pc = 0x002B8160u; return; } if (c.pc != 0x002F3CBCu) [[unlikely]] return; }
L_002F3CBC:
    st32((c.r[22].w[0] + 552u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002F3D18; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002F3D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CE4u);  if (depth < kMaxDepth) unit_006E(c, 13u, depth + 1u); else { c.pc = 0x002B8160u; return; } if (c.pc != 0x002F3CE4u) [[unlikely]] return; }
L_002F3CE4:
    st32((c.r[22].w[0] + 556u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 22512u);
    st32((c.r[22].w[0] + 560u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3CFCu); set32(c.r[4], ld32((c.r[21].w[0] + 16u)));  if (depth < kMaxDepth) unit_006E(c, 94u, depth + 1u); else { c.pc = 0x002B8690u; return; } if (c.pc != 0x002F3CFCu) [[unlikely]] return; }
L_002F3CFC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], 0u + 2u);  if (t) { goto L_002F3D10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002F3D30; } }
L_002F3D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[23].w[0] + c.r[17].w[0]);  if (t) { goto L_002F3D34; } }
L_002F3D18:
    st32((c.r[22].w[0] + 556u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 560u), 0u);  if (t) { goto L_002F3D30; } }
L_002F3D24:
    st32((c.r[22].w[0] + 552u), 0u);
    st32((c.r[22].w[0] + 556u), 0u);
    st32((c.r[22].w[0] + 560u), 0u);
    c.budget -= 3;
L_002F3D30:
    set32(c.r[3], c.r[23].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_002F3D34:
    set32(c.r[2], 0u + 251u);
    set32(c.r[3], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[20], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 1));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[22].w[0] + 632u), c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[22].w[0] + 636u), 0u);
    st32((c.r[22].w[0] + 640u), c.f[0]);
    c.f[0] = 0u;
    c.budget -= 18;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[22].w[0] + 644u), 0u);  if (t) { goto L_002F3E2C; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 40u)));
    c.f[2] = ld32((c.r[22].w[0]));
    c.f[1] = ld32((c.r[22].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3DB0u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3DB0u) [[unlikely]] return; }
L_002F3DB0:
    set32(c.r[4], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[5], c.r[22].w[0] + 632u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3DC8u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3DC8u) [[unlikely]] return; }
L_002F3DC8:
    c.f[0] = c.r[20].w[0];
    set32(c.r[3], ld32((c.r[22].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[20].w[0] - 502u);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    st32((c.r[3].w[0] + 108u), c.r[2].w[0]);
    ld128((c.r[1].w[0] - 22608u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[22].w[0] + 40u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[3].w[0] + 128u) & ~15u, c.r[2]);
    ld128((c.r[1].w[0] - 22624u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 144u) & ~15u, c.r[2]);
    c.budget -= 14;
L_002F3E00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    ld128((c.r[1].w[0] - 22640u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; st128((c.r[3].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002F3E14; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002F3E14:
    c.f[0] = c.r[4].w[0];
    set32(c.r[2], ld32((c.r[22].w[0] + 40u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.f[0]);  if (t) { goto L_002F3E38; } }
L_002F3E2C:
    set32(c.r[2], ld32((c.r[22].w[0] + 40u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.f[0]);
    c.budget -= 3;
L_002F3E38:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[23].w[0]) >> 1));  if (t) { goto L_002F3F40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_002F3E90; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002F3E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[22].w[0] + 544u)));  if (t) { goto L_002F3F94; } }
L_002F3E60:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[22].w[0] + 648u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 652u), 0u);
    st32((c.r[22].w[0] + 656u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 660u), 0u);
    set32(c.r[4], ld32((c.r[22].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E88u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3E88u) [[unlikely]] return; }
L_002F3E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3F90; } }
L_002F3E90:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[30].w[0]) >> 1));
    set32(c.r[4], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[23].w[0]) >> 1));
    set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[23].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + 5u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[4].w[0] + 5u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[22].w[0] + 648u), c.f[1]);
    set32(c.r[3], c.r[2].w[0] + 6u);
    st32((c.r[22].w[0] + 652u), 0u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[22].w[0] + 656u), c.f[0]);
    c.f[1] = c.r[3].w[0];
    st32((c.r[22].w[0] + 660u), 0u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[22].w[0] + 680u), c.f[1]);
    st32((c.r[22].w[0] + 684u), 0u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 52u)));
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 36;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F20u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3F20u) [[unlikely]] return; }
L_002F3F20:
    set32(c.r[4], ld32((c.r[22].w[0] + 52u)));
    set32(c.r[5], c.r[22].w[0] + 680u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F38u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3F38u) [[unlikely]] return; }
L_002F3F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3F90; } }
L_002F3F40:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.f[1] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[22].w[0] + 648u), c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[22].w[0] + 652u), 0u);
    st32((c.r[22].w[0] + 656u), c.f[0]);
    st32((c.r[22].w[0] + 660u), 0u);
    set32(c.r[4], ld32((c.r[22].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F90u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3F90u) [[unlikely]] return; }
L_002F3F90:
    set32(c.r[4], ld32((c.r[22].w[0] + 544u)));
    c.budget -= 1;
L_002F3F94:
    set32(c.r[5], c.r[22].w[0] + 648u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FA8u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3FA8u) [[unlikely]] return; }
L_002F3FA8:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_007D(c, 7u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_007D(c, 6u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FCCu);  if (depth < kMaxDepth) unit_006E(c, 13u, depth + 1u); else { c.pc = 0x002B8160u; return; } if (c.pc != 0x002F3FCCu) [[unlikely]] return; }
L_002F3FCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 3u);
    c.f[12] = ld32((c.r[1].w[0] - 22592u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x002F3FE0u) [[unlikely]] return; }
L_002F3FE0:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[2].w[0] + 25u);  if (t) { [[clang::musttail]] return unit_007D(c, 4u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);  if (t) { [[clang::musttail]] return unit_007D(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007D(c, 5u, depth); } }
    [[clang::musttail]] return unit_007D(c, 1u, depth);
}

}
