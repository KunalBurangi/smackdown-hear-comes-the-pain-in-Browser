#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0077[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0,
    13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24,
    0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357,
    0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
};

void unit_0077(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002DC000;
    case 2u: goto L_002DC018;
    case 3u: goto L_002DC020;
    case 4u: goto L_002DC038;
    case 5u: goto L_002DC050;
    case 6u: goto L_002DC080;
    case 7u: goto L_002DC090;
    case 8u: goto L_002DC10C;
    case 9u: goto L_002DC118;
    case 10u: goto L_002DC15C;
    case 11u: goto L_002DC16C;
    case 12u: goto L_002DC174;
    case 13u: goto L_002DC180;
    case 14u: goto L_002DC18C;
    case 15u: goto L_002DC328;
    case 16u: goto L_002DC350;
    case 17u: goto L_002DC3B4;
    case 18u: goto L_002DC3DC;
    case 19u: goto L_002DC404;
    case 20u: goto L_002DC42C;
    case 21u: goto L_002DC454;
    case 22u: goto L_002DC464;
    case 23u: goto L_002DC470;
    case 24u: goto L_002DC47C;
    case 25u: goto L_002DC488;
    case 26u: goto L_002DC4A0;
    case 27u: goto L_002DC4C0;
    case 28u: goto L_002DC4D8;
    case 29u: goto L_002DC508;
    case 30u: goto L_002DC520;
    case 31u: goto L_002DC530;
    case 32u: goto L_002DC540;
    case 33u: goto L_002DC558;
    case 34u: goto L_002DC560;
    case 35u: goto L_002DC570;
    case 36u: goto L_002DC580;
    case 37u: goto L_002DC58C;
    case 38u: goto L_002DC598;
    case 39u: goto L_002DC5AC;
    case 40u: goto L_002DC5C0;
    case 41u: goto L_002DC5D0;
    case 42u: goto L_002DC5E0;
    case 43u: goto L_002DC5F0;
    case 44u: goto L_002DC610;
    case 45u: goto L_002DC634;
    case 46u: goto L_002DC65C;
    case 47u: goto L_002DC678;
    case 48u: goto L_002DC6A4;
    case 49u: goto L_002DC6B8;
    case 50u: goto L_002DC6C8;
    case 51u: goto L_002DC6D8;
    case 52u: goto L_002DC6E8;
    case 53u: goto L_002DC6FC;
    case 54u: goto L_002DC728;
    case 55u: goto L_002DC738;
    case 56u: goto L_002DC764;
    case 57u: goto L_002DC7A4;
    case 58u: goto L_002DC7AC;
    case 59u: goto L_002DC7BC;
    case 60u: goto L_002DC810;
    case 61u: goto L_002DC818;
    case 62u: goto L_002DC820;
    case 63u: goto L_002DC840;
    case 64u: goto L_002DC854;
    case 65u: goto L_002DC87C;
    case 66u: goto L_002DC89C;
    case 67u: goto L_002DC8C0;
    case 68u: goto L_002DC8D8;
    case 69u: goto L_002DC904;
    case 70u: goto L_002DC930;
    case 71u: goto L_002DC950;
    case 72u: goto L_002DC968;
    case 73u: goto L_002DC980;
    case 74u: goto L_002DC990;
    case 75u: goto L_002DC9E4;
    case 76u: goto L_002DC9EC;
    case 77u: goto L_002DCA00;
    case 78u: goto L_002DCA14;
    case 79u: goto L_002DCA48;
    case 80u: goto L_002DCA54;
    case 81u: goto L_002DCA64;
    case 82u: goto L_002DCA8C;
    case 83u: goto L_002DCAAC;
    case 84u: goto L_002DCAD0;
    case 85u: goto L_002DCAE8;
    case 86u: goto L_002DCB14;
    case 87u: goto L_002DCB40;
    case 88u: goto L_002DCB60;
    case 89u: goto L_002DCB68;
    case 90u: goto L_002DCB70;
    case 91u: goto L_002DCBE4;
    case 92u: goto L_002DCC00;
    case 93u: goto L_002DCC14;
    case 94u: goto L_002DCC2C;
    case 95u: goto L_002DCC40;
    case 96u: goto L_002DCC94;
    case 97u: goto L_002DCCAC;
    case 98u: goto L_002DCCC0;
    case 99u: goto L_002DCCD0;
    case 100u: goto L_002DCD2C;
    case 101u: goto L_002DCD3C;
    case 102u: goto L_002DCD5C;
    case 103u: goto L_002DCD6C;
    case 104u: goto L_002DCD88;
    case 105u: goto L_002DCD9C;
    case 106u: goto L_002DCDAC;
    case 107u: goto L_002DCDC0;
    case 108u: goto L_002DCE30;
    case 109u: goto L_002DCE40;
    case 110u: goto L_002DCE50;
    case 111u: goto L_002DCE70;
    case 112u: goto L_002DCEB0;
    case 113u: goto L_002DCEE8;
    case 114u: goto L_002DCF3C;
    case 115u: goto L_002DCF5C;
    case 116u: goto L_002DCF6C;
    case 117u: goto L_002DCF80;
    case 118u: goto L_002DCFC0;
    case 119u: goto L_002DCFF8;
    case 120u: goto L_002DD030;
    case 121u: goto L_002DD050;
    case 122u: goto L_002DD084;
    case 123u: goto L_002DD0A4;
    case 124u: goto L_002DD0B4;
    case 125u: goto L_002DD0C8;
    case 126u: goto L_002DD108;
    case 127u: goto L_002DD140;
    case 128u: goto L_002DD178;
    case 129u: goto L_002DD198;
    case 130u: goto L_002DD1C4;
    case 131u: goto L_002DD1E4;
    case 132u: goto L_002DD1F4;
    case 133u: goto L_002DD208;
    case 134u: goto L_002DD248;
    case 135u: goto L_002DD280;
    case 136u: goto L_002DD2B8;
    case 137u: goto L_002DD2D8;
    case 138u: goto L_002DD310;
    case 139u: goto L_002DD330;
    case 140u: goto L_002DD368;
    case 141u: goto L_002DD3A0;
    case 142u: goto L_002DD3C0;
    case 143u: goto L_002DD3D0;
    case 144u: goto L_002DD3DC;
    case 145u: goto L_002DD3EC;
    case 146u: goto L_002DD3F4;
    case 147u: goto L_002DD400;
    case 148u: goto L_002DD428;
    case 149u: goto L_002DD47C;
    case 150u: goto L_002DD4B4;
    case 151u: goto L_002DD4D4;
    case 152u: goto L_002DD4F0;
    case 153u: goto L_002DD560;
    case 154u: goto L_002DD568;
    case 155u: goto L_002DD57C;
    case 156u: goto L_002DD590;
    case 157u: goto L_002DD608;
    case 158u: goto L_002DD614;
    case 159u: goto L_002DD624;
    case 160u: goto L_002DD638;
    case 161u: goto L_002DD674;
    case 162u: goto L_002DD68C;
    case 163u: goto L_002DD6A4;
    case 164u: goto L_002DD708;
    case 165u: goto L_002DD718;
    case 166u: goto L_002DD7CC;
    case 167u: goto L_002DD7E0;
    case 168u: goto L_002DD7F8;
    case 169u: goto L_002DD808;
    case 170u: goto L_002DD830;
    case 171u: goto L_002DD850;
    case 172u: goto L_002DD890;
    case 173u: goto L_002DD930;
    case 174u: goto L_002DD978;
    case 175u: goto L_002DD9A0;
    case 176u: goto L_002DD9B0;
    case 177u: goto L_002DD9C8;
    case 178u: goto L_002DD9D8;
    case 179u: goto L_002DDA10;
    case 180u: goto L_002DDA40;
    case 181u: goto L_002DDA50;
    case 182u: goto L_002DDA60;
    case 183u: goto L_002DDA6C;
    case 184u: goto L_002DDAA8;
    case 185u: goto L_002DDAC8;
    case 186u: goto L_002DDB20;
    case 187u: goto L_002DDB40;
    case 188u: goto L_002DDB60;
    case 189u: goto L_002DDB80;
    case 190u: goto L_002DDBA0;
    case 191u: goto L_002DDBF8;
    case 192u: goto L_002DDC18;
    case 193u: goto L_002DDC38;
    case 194u: goto L_002DDC78;
    case 195u: goto L_002DDCB0;
    case 196u: goto L_002DDCD0;
    case 197u: goto L_002DDCF0;
    case 198u: goto L_002DDD20;
    case 199u: goto L_002DDD30;
    case 200u: goto L_002DDD44;
    case 201u: goto L_002DDDA0;
    case 202u: goto L_002DDDC0;
    case 203u: goto L_002DDDE0;
    case 204u: goto L_002DDDFC;
    case 205u: goto L_002DDE0C;
    case 206u: goto L_002DDE20;
    case 207u: goto L_002DDE7C;
    case 208u: goto L_002DDE9C;
    case 209u: goto L_002DDEBC;
    case 210u: goto L_002DDF14;
    case 211u: goto L_002DDF78;
    case 212u: goto L_002DDFAC;
    case 213u: goto L_002DDFCC;
    case 214u: goto L_002DDFEC;
    case 215u: goto L_002DE020;
    case 216u: goto L_002DE054;
    case 217u: goto L_002DE074;
    case 218u: goto L_002DE094;
    case 219u: goto L_002DE0B4;
    case 220u: goto L_002DE0D4;
    case 221u: goto L_002DE0E4;
    case 222u: goto L_002DE0F8;
    case 223u: goto L_002DE164;
    case 224u: goto L_002DE184;
    case 225u: goto L_002DE1A4;
    case 226u: goto L_002DE1C4;
    case 227u: goto L_002DE1E4;
    case 228u: goto L_002DE1F4;
    case 229u: goto L_002DE208;
    case 230u: goto L_002DE278;
    case 231u: goto L_002DE298;
    case 232u: goto L_002DE2B8;
    case 233u: goto L_002DE2FC;
    case 234u: goto L_002DE30C;
    case 235u: goto L_002DE320;
    case 236u: goto L_002DE384;
    case 237u: goto L_002DE3A4;
    case 238u: goto L_002DE3C4;
    case 239u: goto L_002DE400;
    case 240u: goto L_002DE438;
    case 241u: goto L_002DE44C;
    case 242u: goto L_002DE4A4;
    case 243u: goto L_002DE4C4;
    case 244u: goto L_002DE4E4;
    case 245u: goto L_002DE500;
    case 246u: goto L_002DE514;
    case 247u: goto L_002DE56C;
    case 248u: goto L_002DE58C;
    case 249u: goto L_002DE5AC;
    case 250u: goto L_002DE5F0;
    case 251u: goto L_002DE604;
    case 252u: goto L_002DE630;
    case 253u: goto L_002DE674;
    case 254u: goto L_002DE6FC;
    case 255u: goto L_002DE778;
    case 256u: goto L_002DE7D0;
    case 257u: goto L_002DE904;
    case 258u: goto L_002DEA60;
    case 259u: goto L_002DEA70;
    case 260u: goto L_002DEA80;
    case 261u: goto L_002DEA90;
    case 262u: goto L_002DEAA0;
    case 263u: goto L_002DEAC4;
    case 264u: goto L_002DEAF4;
    case 265u: goto L_002DEB08;
    case 266u: goto L_002DEB34;
    case 267u: goto L_002DECE0;
    case 268u: goto L_002DED38;
    case 269u: goto L_002DED48;
    case 270u: goto L_002DED60;
    case 271u: goto L_002DED80;
    case 272u: goto L_002DEDB0;
    case 273u: goto L_002DEDE0;
    case 274u: goto L_002DEE10;
    case 275u: goto L_002DEEA0;
    case 276u: goto L_002DEEE4;
    case 277u: goto L_002DEEF8;
    case 278u: goto L_002DEF18;
    case 279u: goto L_002DEF30;
    case 280u: goto L_002DEF40;
    case 281u: goto L_002DEF98;
    case 282u: goto L_002DEFC0;
    case 283u: goto L_002DEFCC;
    case 284u: goto L_002DEFF0;
    case 285u: goto L_002DF050;
    case 286u: goto L_002DF074;
    case 287u: goto L_002DF07C;
    case 288u: goto L_002DF090;
    case 289u: goto L_002DF0B0;
    case 290u: goto L_002DF0E4;
    case 291u: goto L_002DF118;
    case 292u: goto L_002DF130;
    case 293u: goto L_002DF14C;
    case 294u: goto L_002DF160;
    case 295u: goto L_002DF188;
    case 296u: goto L_002DF1B0;
    case 297u: goto L_002DF1E0;
    case 298u: goto L_002DF1F8;
    case 299u: goto L_002DF210;
    case 300u: goto L_002DF250;
    case 301u: goto L_002DF290;
    case 302u: goto L_002DF2B0;
    case 303u: goto L_002DF300;
    case 304u: goto L_002DF310;
    case 305u: goto L_002DF320;
    case 306u: goto L_002DF344;
    case 307u: goto L_002DF378;
    case 308u: goto L_002DF388;
    case 309u: goto L_002DF3C0;
    case 310u: goto L_002DF418;
    case 311u: goto L_002DF428;
    case 312u: goto L_002DF440;
    case 313u: goto L_002DF460;
    case 314u: goto L_002DF4A0;
    case 315u: goto L_002DF4B0;
    case 316u: goto L_002DF4C0;
    case 317u: goto L_002DF574;
    case 318u: goto L_002DF590;
    case 319u: goto L_002DF624;
    case 320u: goto L_002DF65C;
    case 321u: goto L_002DF670;
    case 322u: goto L_002DF690;
    case 323u: goto L_002DF6B0;
    case 324u: goto L_002DF6C0;
    case 325u: goto L_002DF6D0;
    case 326u: goto L_002DF6E4;
    case 327u: goto L_002DF6F0;
    case 328u: goto L_002DF730;
    case 329u: goto L_002DF770;
    case 330u: goto L_002DF77C;
    case 331u: goto L_002DF794;
    case 332u: goto L_002DF7B0;
    case 333u: goto L_002DF7F0;
    case 334u: goto L_002DF840;
    case 335u: goto L_002DF86C;
    case 336u: goto L_002DF8B0;
    case 337u: goto L_002DF98C;
    case 338u: goto L_002DF9FC;
    case 339u: goto L_002DFA30;
    case 340u: goto L_002DFA50;
    case 341u: goto L_002DFA70;
    case 342u: goto L_002DFA80;
    case 343u: goto L_002DFA9C;
    case 344u: goto L_002DFAA8;
    case 345u: goto L_002DFAE0;
    case 346u: goto L_002DFAE8;
    case 347u: goto L_002DFB0C;
    case 348u: goto L_002DFB40;
    case 349u: goto L_002DFB8C;
    case 350u: goto L_002DFB98;
    case 351u: goto L_002DFBA4;
    case 352u: goto L_002DFBBC;
    case 353u: goto L_002DFBE0;
    case 354u: goto L_002DFC34;
    case 355u: goto L_002DFC3C;
    case 356u: goto L_002DFCE0;
    case 357u: goto L_002DFCFC;
    case 358u: goto L_002DFD14;
    case 359u: goto L_002DFD40;
    case 360u: goto L_002DFD80;
    case 361u: goto L_002DFDB8;
    case 362u: goto L_002DFDC8;
    case 363u: goto L_002DFE70;
    case 364u: goto L_002DFE88;
    case 365u: goto L_002DFED0;
    case 366u: goto L_002DFEE4;
    case 367u: goto L_002DFF10;
    case 368u: goto L_002DFFC0;
    case 369u: goto L_002DFFF0;
    default: bad_entry(c, 0x002DC000u); return;
    }
L_002DC000:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[14] = 0u;
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC018u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC018u) [[unlikely]] return; }
L_002DC018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC020u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 179u, depth + 1u); else { c.pc = 0x0015E0B0u; return; } if (c.pc != 0x002DC020u) [[unlikely]] return; }
L_002DC020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC038u); st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x002DC038u) [[unlikely]] return; }
L_002DC038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002DC050:
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] + 48u);
    st32((c.r[4].w[0] + 68u), 0u);
    c.budget -= 10;
    { set32(c.r[4], c.r[4].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002276C0u | kUnwind; return; } [[clang::musttail]] return unit_0049(c, 280u, depth); }
L_002DC080:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 45u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_002DC090:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 296u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 58u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DC0EC; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 8199ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002DC0F0; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002DC0EC:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002DC0F0:
    set32(c.r[2], 0u + 2u);
    if (c.r[4].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11952u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC10Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x002DC10Cu) [[unlikely]] return; }
L_002DC10C:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC118u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002DC118u) [[unlikely]] return; }
L_002DC118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13024u);
    set32(c.r[3], c.r[3].w[0] + 13112u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13172u);
    set32(c.r[3], 0u + 10752u);
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 52u), c.r[16].w[0]);
    set32(c.r[2], 0u + 15311u);
    st32((c.r[20].w[0] + 56u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC15Cu); st16((c.r[29].w[0] + 110u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002DC15Cu) [[unlikely]] return; }
L_002DC15C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC16Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0029(c, 297u, depth + 1u); else { c.pc = 0x001A78D0u; return; } if (c.pc != 0x002DC16Cu) [[unlikely]] return; }
L_002DC16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC174u); set32(c.r[4], c.r[20].w[0] + 104u);  if (depth < kMaxDepth) unit_0076(c, 539u, depth + 1u); else { c.pc = 0x002DBEA0u; return; } if (c.pc != 0x002DC174u) [[unlikely]] return; }
L_002DC174:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC180u); st32((c.r[20].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DC180u) [[unlikely]] return; }
L_002DC180:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC18Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DC18Cu) [[unlikely]] return; }
L_002DC18C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[20].w[0] + 192u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[16].w[0]) & ~15u, c.r[4]);
    st128((c.r[20].w[0] + 208u) & ~15u, c.r[4]);
    st32((c.r[20].w[0] + 244u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 240u), 0u);
    st32((c.r[20].w[0] + 252u), 0u);
    st8((c.r[20].w[0] + 248u), static_cast<std::uint8_t>(0u));
    ld128((c.r[20].w[0] + 192u) & ~15u, c.r[3]);
    st128((c.r[20].w[0] + 224u) & ~15u, c.r[3]);
    st32((c.r[20].w[0] + 268u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 272u), 0u);
    st32((c.r[20].w[0] + 276u), 0u);
    st32((c.r[20].w[0] + 280u), 0u);
    st32((c.r[20].w[0] + 368u), 0u);
    st32((c.r[20].w[0] + 372u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 376u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 380u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 300u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DC218; } }
    set32(c.r[2], c.r[3].w[0] - 6u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_002DC218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DC218; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_002DC218; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DC220; } }
L_002DC218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 180u), 0u);  if (t) { goto L_002DC2F0; } }
L_002DC220:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002DC234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_002DC2F0; } }
L_002DC234:
    set32(c.r[3], ld32((c.r[4].w[0] + 296u)));
    set32(c.r[2], c.r[3].w[0] - 20u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002DC2C0; } }
    set32(c.r[2], c.r[3].w[0] - 63u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 67u);  if (t) { goto L_002DC2BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DC2BC; } }
    set32(c.r[2], c.r[3].w[0] - 50u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 54u);  if (t) { goto L_002DC2BC; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DC2BC; } }
    set32(c.r[2], c.r[3].w[0] - 37u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 30u);  if (t) { goto L_002DC2BC; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DC2BC; } }
    set32(c.r[2], c.r[3].w[0] - 33u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 82u);  if (t) { goto L_002DC2BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DC2BC; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 58u);  if (t) { goto L_002DC2C8; } }
L_002DC2BC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002DC2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_002DC2F0; } }
L_002DC2C8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DC2E0; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DC2EC; } }
L_002DC2E0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_002DC2F0; } }
L_002DC2EC:
    st32((c.r[20].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_002DC2F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 296u)));
    set32(c.r[2], c.r[3].w[0] - 58u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DC318; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002DC320; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DC318:
    st32((c.r[20].w[0] + 268u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_002DC320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC328u);  if (depth < kMaxDepth) unit_0077(c, 250u, depth + 1u); else { c.pc = 0x002DE5F0u; return; } if (c.pc != 0x002DC328u) [[unlikely]] return; }
L_002DC328:
    st8((c.r[20].w[0] + 264u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DC350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DC4A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13024u);
    set32(c.r[3], c.r[3].w[0] + 13112u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13172u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC3B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC3B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC3B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC3B4u) [[unlikely]] return; }
L_002DC3B4:
    st32((c.r[17].w[0] + 176u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC3DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC3DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC3DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC3DCu) [[unlikely]] return; }
L_002DC3DC:
    st32((c.r[17].w[0] + 272u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC404; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC404; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC404u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC404u) [[unlikely]] return; }
L_002DC404:
    st32((c.r[17].w[0] + 276u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC42C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC42C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC42Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC42Cu) [[unlikely]] return; }
L_002DC42C:
    st32((c.r[17].w[0] + 280u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC454; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC454; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC454u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC454u) [[unlikely]] return; }
L_002DC454:
    set32(c.r[4], c.r[17].w[0] + 104u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC464u); st32((c.r[17].w[0] + 368u), 0u);  if (depth < kMaxDepth) unit_0076(c, 542u, depth + 1u); else { c.pc = 0x002DBEF0u; return; } if (c.pc != 0x002DC464u) [[unlikely]] return; }
L_002DC464:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC470u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0029(c, 301u, depth + 1u); else { c.pc = 0x001A79B0u; return; } if (c.pc != 0x002DC470u) [[unlikely]] return; }
L_002DC470:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC47Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002DC47Cu) [[unlikely]] return; }
L_002DC47C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x002DC488u) [[unlikely]] return; }
L_002DC488:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DC4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC4A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DC4A0u) [[unlikely]] return; }
L_002DC4A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DC4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DC4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC4D8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DC4D8u) [[unlikely]] return; }
L_002DC4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002DC508; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DC4EC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_002DC4EC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC508u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 381u, depth + 1u); else { c.pc = 0x0012ED90u; return; } if (c.pc != 0x002DC508u) [[unlikely]] return; }
L_002DC508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DC520:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130300u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 32u, depth); }
L_002DC530:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302B0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 29u, depth); }
L_002DC540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC558u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x002DC558u) [[unlikely]] return; }
L_002DC558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC560u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x002DC560u) [[unlikely]] return; }
L_002DC560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DC598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC570u);  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x00243030u; return; } if (c.pc != 0x002DC570u) [[unlikely]] return; }
L_002DC570:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC580u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x002DC580u) [[unlikely]] return; }
L_002DC580:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC58Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 313u, depth + 1u); else { c.pc = 0x001A7B60u; return; } if (c.pc != 0x002DC58Cu) [[unlikely]] return; }
L_002DC58C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC598u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002DC598u) [[unlikely]] return; }
L_002DC598:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_002DC688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DC5ACu) [[unlikely]] return; }
L_002DC5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DC5C0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5C0u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_002A(c, 312u, depth + 1u); else { c.pc = 0x001AB5D0u; return; } if (c.pc != 0x002DC5C0u) [[unlikely]] return; }
L_002DC5C0:
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5D0u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002DC5D0u) [[unlikely]] return; }
L_002DC5D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002DC5E0u) [[unlikely]] return; }
L_002DC5E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5F0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002DC5F0u) [[unlikely]] return; }
L_002DC5F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DC618; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC610u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC610u) [[unlikely]] return; }
L_002DC610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC678; } }
L_002DC618:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DC63C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC634u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC634u) [[unlikely]] return; }
L_002DC634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC678; } }
L_002DC63C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DC664; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC65Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC65Cu) [[unlikely]] return; }
L_002DC65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC678; } }
L_002DC664:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC678u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC678u) [[unlikely]] return; }
L_002DC678:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = ld32((c.r[1].w[0] - 23544u));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_002DC688:
    set32(c.r[2], ld32((c.r[17].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002DC704; } }
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6A4u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DC6A4u) [[unlikely]] return; }
L_002DC6A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DC6B8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002DC6B8u) [[unlikely]] return; }
L_002DC6B8:
    st32((c.r[17].w[0] + 368u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6C8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002DC6C8u) [[unlikely]] return; }
L_002DC6C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002DC6D8u) [[unlikely]] return; }
L_002DC6D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 368u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002DC6E8u) [[unlikely]] return; }
L_002DC6E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 368u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC6FCu); set32(c.r[5], 0u + 159u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC6FCu) [[unlikely]] return; }
L_002DC6FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 368u)));
    st32((c.r[2].w[0] + 104u), 0u);
    c.budget -= 2;
L_002DC704:
    st32((c.r[17].w[0] + 256u), 0u);
    set32(c.r[2], 0u + 25u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC728u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DC728u) [[unlikely]] return; }
L_002DC728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002DC73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC738u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002DC738u) [[unlikely]] return; }
L_002DC738:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_002DC73C:
    st32((c.r[17].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 272u)));
    c.f[0] = ld32((c.r[1].w[0] + 1420u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 160u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC764u); st32((c.r[3].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DC764u) [[unlikely]] return; }
L_002DC764:
    set32(c.r[5], ld32((c.r[17].w[0] + 272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[13] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = 0u;
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7A4u); c.f[14] = ld32((c.r[1].w[0] - 23544u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC7A4u) [[unlikely]] return; }
L_002DC7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7ACu); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DC7ACu) [[unlikely]] return; }
L_002DC7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002DC7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x002DC7BCu) [[unlikely]] return; }
L_002DC7BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_002DC7C0:
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.f[1] = ld32((c.r[1].w[0] + 1420u));
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 160u), c.f[1]);
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC810u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC810u) [[unlikely]] return; }
L_002DC810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC818u);  if (depth < kMaxDepth) unit_0091(c, 281u, depth + 1u); else { c.pc = 0x003461D0u; return; } if (c.pc != 0x002DC818u) [[unlikely]] return; }
L_002DC818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC820u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002DC820u) [[unlikely]] return; }
L_002DC820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DC840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC854u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x002DC854u) [[unlikely]] return; }
L_002DC854:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DC8E8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DC884; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC87Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC87Cu) [[unlikely]] return; }
L_002DC87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC8D8; } }
L_002DC884:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DC8A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC89Cu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC89Cu) [[unlikely]] return; }
L_002DC89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC8D8; } }
L_002DC8A4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DC8C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC8C0u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC8C0u) [[unlikely]] return; }
L_002DC8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC8D8; } }
L_002DC8C8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC8D8u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC8D8u) [[unlikely]] return; }
L_002DC8D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = ld32((c.r[1].w[0] - 23544u));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_002DC8E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002DC910; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC904u); set32(c.r[5], 0u + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC904u) [[unlikely]] return; }
L_002DC904:
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    st32((c.r[3].w[0] + 104u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_002DC910:
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002DC934; } }
    set32(c.r[4], c.r[16].w[0] + 104u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC930u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 5u, depth + 1u); else { c.pc = 0x002DC050u; return; } if (c.pc != 0x002DC930u) [[unlikely]] return; }
L_002DC930:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002DC934:
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DC950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC968u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x002DC968u) [[unlikely]] return; }
L_002DC968:
    set32(c.r[3], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002DCA64; } }
    set32(c.r[17], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC980u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DC980u) [[unlikely]] return; }
L_002DC980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DC990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC990u);  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x002DC990u) [[unlikely]] return; }
L_002DC990:
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u + 405u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.f[1] = ld32((c.r[1].w[0] + 1420u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9E4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC9E4u) [[unlikely]] return; }
L_002DC9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DC9ECu) [[unlikely]] return; }
L_002DC9EC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA00u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DCA00u) [[unlikely]] return; }
L_002DCA00:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA14u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DCA14u) [[unlikely]] return; }
L_002DCA14:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 153u);
    set32(c.r[3], 0u + 102u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA48u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002DCA48u) [[unlikely]] return; }
L_002DCA48:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x00161400u; return; } if (c.pc != 0x002DCA54u) [[unlikely]] return; }
L_002DCA54:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA64u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00161410u; return; } if (c.pc != 0x002DCA64u) [[unlikely]] return; }
L_002DCA64:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DCAF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DCA94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCA8Cu) [[unlikely]] return; }
L_002DCA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCAE8; } }
L_002DCA94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DCAB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAACu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCAACu) [[unlikely]] return; }
L_002DCAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCAE8; } }
L_002DCAB4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DCAD8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAD0u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCAD0u) [[unlikely]] return; }
L_002DCAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCAE8; } }
L_002DCAD8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCAE8u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCAE8u) [[unlikely]] return; }
L_002DCAE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = ld32((c.r[1].w[0] - 23544u));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_002DCAF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DCB1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB14u); set32(c.r[5], 0u + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCB14u) [[unlikely]] return; }
L_002DCB14:
    set32(c.r[3], ld32((c.r[16].w[0] + 368u)));
    st32((c.r[3].w[0] + 104u), 0u);
    c.budget -= 2;
L_002DCB1C:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DCB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 264u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DCBE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB60u);  if (depth < kMaxDepth) unit_0077(c, 112u, depth + 1u); else { c.pc = 0x002DCEB0u; return; } if (c.pc != 0x002DCB60u) [[unlikely]] return; }
L_002DCB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 172u, depth + 1u); else { c.pc = 0x002DD890u; return; } if (c.pc != 0x002DCB68u) [[unlikely]] return; }
L_002DCB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 152u, depth + 1u); else { c.pc = 0x002DD4F0u; return; } if (c.pc != 0x002DCB70u) [[unlikely]] return; }
L_002DCB70:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 248u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCBA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_002DCBDC; } }
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002DCBD8; } }
L_002DCBA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 252u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DCBD8; } }
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002DCBD8:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 1;
L_002DCBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCBE4u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x002DCBE4u) [[unlikely]] return; }
L_002DCBE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DCC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 209u, depth + 1u); else { c.pc = 0x00243000u; return; } if (c.pc != 0x002DCC14u) [[unlikely]] return; }
L_002DCC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCC2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCC2Cu) [[unlikely]] return; }
L_002DCC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DCC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DCC8C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 260u), c.r[3].w[0]);  if (t) { goto L_002DCCAC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 51u);
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[16].w[0] + 256u), c.r[3].w[0]);  if (t) { goto L_002DCCAC; } }
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 256u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002DCCB0; } }
L_002DCC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC94u);  if (depth < kMaxDepth) unit_0077(c, 111u, depth + 1u); else { c.pc = 0x002DCE70u; return; } if (c.pc != 0x002DCC94u) [[unlikely]] return; }
L_002DCC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCCAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCCACu) [[unlikely]] return; }
L_002DCCAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002DCCB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DCCC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DCCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DCD04; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] - 85u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 256u), c.r[3].w[0]);  if (t) { goto L_002DCD04; } }
    st32((c.r[16].w[0] + 256u), 0u);
    c.budget -= 1;
L_002DCD04:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002DCD64; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002DCDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD2Cu); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_009E(c, 76u, depth + 1u); else { c.pc = 0x00378BC0u; return; } if (c.pc != 0x002DCD2Cu) [[unlikely]] return; }
L_002DCD2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD3Cu);  if (depth < kMaxDepth) unit_00AA(c, 252u, depth + 1u); else { c.pc = 0x003AA380u; return; } if (c.pc != 0x002DCD3Cu) [[unlikely]] return; }
L_002DCD3C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DCDAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCD5Cu) [[unlikely]] return; }
L_002DCD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002DCDB0; } }
L_002DCD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD6Cu);  if (depth < kMaxDepth) unit_0077(c, 111u, depth + 1u); else { c.pc = 0x002DCE70u; return; } if (c.pc != 0x002DCD6Cu) [[unlikely]] return; }
L_002DCD6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCDAC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DCD94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD88u);  if (depth < kMaxDepth) unit_0091(c, 274u, depth + 1u); else { c.pc = 0x00346110u; return; } if (c.pc != 0x002DCD88u) [[unlikely]] return; }
L_002DCD88:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002DCDAC; } }
L_002DCD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD9Cu);  if (depth < kMaxDepth) unit_0091(c, 284u, depth + 1u); else { c.pc = 0x00346200u; return; } if (c.pc != 0x002DCD9Cu) [[unlikely]] return; }
L_002DCD9C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCDACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCDACu) [[unlikely]] return; }
L_002DCDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002DCDB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DCDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DCDFC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] - 85u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[16].w[0] + 256u), c.r[3].w[0]);  if (t) { goto L_002DCE58; } }
    st32((c.r[16].w[0] + 256u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002DCE5C; } }
L_002DCDFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002DCE38; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002DCE58; } }
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCE30u) [[unlikely]] return; }
L_002DCE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCE58; } }
L_002DCE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE40u);  if (depth < kMaxDepth) unit_0077(c, 111u, depth + 1u); else { c.pc = 0x002DCE70u; return; } if (c.pc != 0x002DCE40u) [[unlikely]] return; }
L_002DCE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DCE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE50u);  if (depth < kMaxDepth) unit_0091(c, 284u, depth + 1u); else { c.pc = 0x00346200u; return; } if (c.pc != 0x002DCE50u) [[unlikely]] return; }
L_002DCE50:
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_002DCE58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002DCE5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DCE70:
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002DCE8C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DCE8C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DCE8C:
    set32(c.r[3], ld32((c.r[4].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DCEA8; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DCEA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DCEA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DCEB0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 440u)));
    set32(c.r[4], 0u + 830u);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 14;
L_002DCEE8:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 372u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002DCEFC; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002DCEFC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCEE8u | kUnwind; return; } goto L_002DCEE8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002DD058; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DD4D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 23552u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF3Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DCF3Cu) [[unlikely]] return; }
L_002DCF3C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF5Cu); set32(c.r[4], ld32((c.r[18].w[0] + 372u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DCF5Cu) [[unlikely]] return; }
L_002DCF5C:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF6Cu); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DCF6Cu) [[unlikely]] return; }
L_002DCF6C:
    c.r[1].d[0] = c.r[2].sd[0] < 351ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DCFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF80u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DCF80u) [[unlikely]] return; }
L_002DCF80:
    set32(c.r[3], 0u + 31500u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002DCF90; } }
    breakpoint(c, 0x002DCF8Cu);
    c.budget -= 1;
L_002DCF90:
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFC0u); set32(c.r[4], ld32((c.r[18].w[0] + 372u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DCFC0u) [[unlikely]] return; }
L_002DCFC0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.budget -= 2;
L_002DCFC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x436D0000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFF8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCFF8u) [[unlikely]] return; }
L_002DCFF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD030u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD030u) [[unlikely]] return; }
L_002DD030:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD050u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD050u) [[unlikely]] return; }
L_002DD050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002DD4D8; } }
L_002DD058:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002DD2E0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DD198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 23552u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD084u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD084u) [[unlikely]] return; }
L_002DD084:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD0A4u); set32(c.r[4], ld32((c.r[18].w[0] + 372u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD0A4u) [[unlikely]] return; }
L_002DD0A4:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD0B4u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DD0B4u) [[unlikely]] return; }
L_002DD0B4:
    c.r[1].d[0] = c.r[2].sd[0] < 351ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DD110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD0C8u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DD0C8u) [[unlikely]] return; }
L_002DD0C8:
    set32(c.r[3], 0u + 31500u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002DD0D8; } }
    breakpoint(c, 0x002DD0D4u);
    c.budget -= 1;
L_002DD0D8:
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD108u); set32(c.r[4], ld32((c.r[18].w[0] + 372u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD108u) [[unlikely]] return; }
L_002DD108:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.budget -= 2;
L_002DD110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43630000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD140u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD140u) [[unlikely]] return; }
L_002DD140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD178u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD178u) [[unlikely]] return; }
L_002DD178:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD198u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD198u) [[unlikely]] return; }
L_002DD198:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DD4D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 23560u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23560u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1C4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD1C4u) [[unlikely]] return; }
L_002DD1C4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1E4u); set32(c.r[4], ld32((c.r[18].w[0] + 376u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD1E4u) [[unlikely]] return; }
L_002DD1E4:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD1F4u); st32((c.r[16].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DD1F4u) [[unlikely]] return; }
L_002DD1F4:
    c.r[1].d[0] = c.r[2].sd[0] < 351ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DD250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD208u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DD208u) [[unlikely]] return; }
L_002DD208:
    set32(c.r[3], 0u + 31500u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002DD218; } }
    breakpoint(c, 0x002DD214u);
    c.budget -= 1;
L_002DD218:
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD248u); set32(c.r[4], ld32((c.r[18].w[0] + 376u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD248u) [[unlikely]] return; }
L_002DD248:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.budget -= 2;
L_002DD250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD280u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD280u) [[unlikely]] return; }
L_002DD280:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2B8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD2B8u) [[unlikely]] return; }
L_002DD2B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2D8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD2D8u) [[unlikely]] return; }
L_002DD2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD4D4; } }
L_002DD2E0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002DD4D4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DD3C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 23552u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD310u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD310u) [[unlikely]] return; }
L_002DD310:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD330u); set32(c.r[4], ld32((c.r[18].w[0] + 372u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD330u) [[unlikely]] return; }
L_002DD330:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43630000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD368u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD368u) [[unlikely]] return; }
L_002DD368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3A0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD3A0u) [[unlikely]] return; }
L_002DD3A0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3C0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD3C0u) [[unlikely]] return; }
L_002DD3C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002DD4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3D0u); set32(c.r[4], ld32((c.r[18].w[0] + 376u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD3D0u) [[unlikely]] return; }
L_002DD3D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3DCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002DD3DCu) [[unlikely]] return; }
L_002DD3DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3ECu); set32(c.r[5], c.r[5].w[0] - 23584u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002DD3ECu) [[unlikely]] return; }
L_002DD3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD3F4u); set32(c.r[4], ld32((c.r[18].w[0] + 380u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD3F4u) [[unlikely]] return; }
L_002DD3F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD400u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002DD400u) [[unlikely]] return; }
L_002DD400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 23560u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23560u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD428u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD428u) [[unlikely]] return; }
L_002DD428:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43790000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD47Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD47Cu) [[unlikely]] return; }
L_002DD47C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD4B4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD4B4u) [[unlikely]] return; }
L_002DD4B4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD4D4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD4D4u) [[unlikely]] return; }
L_002DD4D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002DD4D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002DD4F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11936u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 168u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[6].w[0]), c.r[5].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11928u);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 24;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 440u)));  if (t) { goto L_002DD560; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD560u) [[unlikely]] return; }
L_002DD560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD568u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD568u) [[unlikely]] return; }
L_002DD568:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD57Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD57Cu) [[unlikely]] return; }
L_002DD57C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD590u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD590u) [[unlikely]] return; }
L_002DD590:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[20].w[0] + 256u));
    c.f[1] = ld32((c.r[1].w[0] - 23568u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 23576u));
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 256u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 256u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 276u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD608u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002DD608u) [[unlikely]] return; }
L_002DD608:
    set32(c.r[4], ld32((c.r[20].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD614u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 36u, depth + 1u); else { c.pc = 0x00161400u; return; } if (c.pc != 0x002DD614u) [[unlikely]] return; }
L_002DD614:
    set32(c.r[4], ld32((c.r[20].w[0] + 276u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD624u); set32(c.r[6], 0u + 35u);  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00161410u; return; } if (c.pc != 0x002DD624u) [[unlikely]] return; }
L_002DD624:
    set32(c.r[4], ld32((c.r[20].w[0] + 276u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD638u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD638u) [[unlikely]] return; }
L_002DD638:
    c.f[1] = ld32((c.r[20].w[0] + 256u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23568u));
    set32(c.r[2], ld32((c.r[20].w[0] + 272u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD674u) [[unlikely]] return; }
L_002DD674:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002DD864; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DD864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 268u)));  if (t) { goto L_002DD858; } }
L_002DD68C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6A4u); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD6A4u) [[unlikely]] return; }
L_002DD6A4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    st32((c.r[19].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    st32((c.r[19].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 268u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DD6DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[19].w[0] + 176u)));  if (t) { goto L_002DD6EC; } }
L_002DD6DC:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 160u));
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 4;
L_002DD6EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C50000u);
    c.f[14] = ld32((c.r[1].w[0] - 23544u));
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD708u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD708u) [[unlikely]] return; }
L_002DD708:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD718u); set32(c.r[4], ld32((c.r[2].w[0] + 168u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD718u) [[unlikely]] return; }
L_002DD718:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    st32((c.r[19].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002DD810; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 256u)));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DD810; } }
    ld128((c.r[19].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    ld128((c.r[20].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[20].w[0] + 268u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);  if (t) { goto L_002DD7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0] + 176u)));  if (t) { goto L_002DD7B0; } }
L_002DD7A8:
    c.f[12] = ld32((c.r[2].w[0] + 160u));
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 2;
L_002DD7B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C50000u);
    c.f[14] = ld32((c.r[1].w[0] - 23544u));
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD7CCu) [[unlikely]] return; }
L_002DD7CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7E0u); set32(c.r[4], ld32((c.r[2].w[0] + 168u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD7E0u) [[unlikely]] return; }
L_002DD7E0:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD7F8u) [[unlikely]] return; }
L_002DD7F8:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD808u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD808u) [[unlikely]] return; }
L_002DD808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_002DD854; } }
L_002DD810:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD830u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD830u) [[unlikely]] return; }
L_002DD830:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD850u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD850u) [[unlikely]] return; }
L_002DD850:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DD854:
    set32(c.r[3], ld32((c.r[20].w[0] + 268u)));
    c.budget -= 1;
L_002DD858:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD68Cu | kUnwind; return; } goto L_002DD68C; } }
L_002DD864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002DD890:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 440u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 444u)));
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DE5C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002DD8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002DE5C4; } }
L_002DD8D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DD8F0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002DDEC8; } }
L_002DD8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] - 11920u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DDA64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD930u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD930u) [[unlikely]] return; }
L_002DD930:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[5]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD978u); st32((c.r[16].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DD978u) [[unlikely]] return; }
L_002DD978:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 364u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 45u);  if (t) { goto L_002DD9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9A0u); set32(c.r[4], 0u + 612u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD9A0u) [[unlikely]] return; }
L_002DD9A0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[4], 0u + 612u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9B0u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD9B0u) [[unlikely]] return; }
L_002DD9B0:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_002DD9E0; } }
    set32(c.r[4], 0u + 45u);
    c.budget -= 1;
L_002DD9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9C8u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD9C8u) [[unlikely]] return; }
L_002DD9C8:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[4], 0u + 45u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9D8u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002DD9D8u) [[unlikely]] return; }
L_002DD9D8:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_002DD9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AE0000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA10u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDA10u) [[unlikely]] return; }
L_002DDA10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AE0000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA40u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDA40u) [[unlikely]] return; }
L_002DDA40:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDA50u) [[unlikely]] return; }
L_002DDA50:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDA60u) [[unlikely]] return; }
L_002DDA60:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DDA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA6Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DDA6Cu) [[unlikely]] return; }
L_002DDA6C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[5], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 300u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 316u), c.r[3].w[0]);  if (t) { goto L_002DDB64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002DDAA8:
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DDAC8u) [[unlikely]] return; }
L_002DDAC8:
    c.f[0] = c.r[16].w[0];
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = ld32((c.r[5].w[0] + 188u));
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB20u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDB20u) [[unlikely]] return; }
L_002DDB20:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB40u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDB40u) [[unlikely]] return; }
L_002DDB40:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB60u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDB60u) [[unlikely]] return; }
L_002DDB60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DDB64:
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDAA8u | kUnwind; return; } goto L_002DDAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DDC3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002DDB80:
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 308u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDBA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DDBA0u) [[unlikely]] return; }
L_002DDBA0:
    c.f[0] = c.r[16].w[0];
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = ld32((c.r[5].w[0] + 188u));
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDBF8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDBF8u) [[unlikely]] return; }
L_002DDBF8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC18u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDC18u) [[unlikely]] return; }
L_002DDC18:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC38u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDC38u) [[unlikely]] return; }
L_002DDC38:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DDC3C:
    set32(c.r[3], ld32((c.r[18].w[0] + 360u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDB80u | kUnwind; return; } goto L_002DDB80; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002DDCFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DDC78u) [[unlikely]] return; }
L_002DDC78:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCB0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDCB0u) [[unlikely]] return; }
L_002DDCB0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCD0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDCD0u) [[unlikely]] return; }
L_002DDCD0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCF0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDCF0u) [[unlikely]] return; }
L_002DDCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE5C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002DDCFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DE5C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DDD20u) [[unlikely]] return; }
L_002DDD20:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD30u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DDD30u) [[unlikely]] return; }
L_002DDD30:
    c.r[1].d[0] = c.r[2].sd[0] < 273ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DDD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DDD44u) [[unlikely]] return; }
L_002DDD44:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
L_002DDD70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B90000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDA0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDDA0u) [[unlikely]] return; }
L_002DDDA0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDC0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDDC0u) [[unlikely]] return; }
L_002DDDC0:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDE0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDDE0u) [[unlikely]] return; }
L_002DDDE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 336u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DDDFCu) [[unlikely]] return; }
L_002DDDFC:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE0Cu); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DDE0Cu) [[unlikely]] return; }
L_002DDE0C:
    c.r[1].d[0] = c.r[2].sd[0] < 273ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DDE4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DDE20u) [[unlikely]] return; }
L_002DDE20:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
L_002DDE4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E70000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B90000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE7Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDE7Cu) [[unlikely]] return; }
L_002DDE7C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE9Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDE9Cu) [[unlikely]] return; }
L_002DDE9C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEBCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDEBCu) [[unlikely]] return; }
L_002DDEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE5C0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002DDEC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE3CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] - 11888u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; c.r[20].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_002DDF08; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DDF0C; } }
    set32(c.r[20], c.r[20].w[0] - 2u);
    c.budget -= 1;
L_002DDF08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DDF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF14u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DDF14u) [[unlikely]] return; }
L_002DDF14:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[4].w[0];
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[6]);
    set32(c.r[6], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 300u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[20] = ld32((c.r[4].w[0] + 140u));  if (t) { goto L_002DDFF4; } }
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DDF78u) [[unlikely]] return; }
L_002DDF78:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[12];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFACu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDFACu) [[unlikely]] return; }
L_002DDFAC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFCCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDFCCu) [[unlikely]] return; }
L_002DDFCC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFECu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDFECu) [[unlikely]] return; }
L_002DDFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE5C0; } }
L_002DDFF4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002DE0A8; } }
    st32((c.r[17].w[0] + 16u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE020u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DE020u) [[unlikely]] return; }
L_002DE020:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE054u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE054u) [[unlikely]] return; }
L_002DE054:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE074u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE074u) [[unlikely]] return; }
L_002DE074:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE094u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE094u) [[unlikely]] return; }
L_002DE094:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_002DE0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_002DE1AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002DE0B4:
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DE0D4u) [[unlikely]] return; }
L_002DE0D4:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0E4u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DE0E4u) [[unlikely]] return; }
L_002DE0E4:
    c.r[1].d[0] = c.r[2].sd[0] < 273ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DE124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DE0F8u) [[unlikely]] return; }
L_002DE0F8:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
L_002DE124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.f[1] = c.r[19].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE164u); c.f[13] = fp::add(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE164u) [[unlikely]] return; }
L_002DE164:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE184u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE184u) [[unlikely]] return; }
L_002DE184:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1A4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE1A4u) [[unlikely]] return; }
L_002DE1A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002DE1AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE0B4u | kUnwind; return; } goto L_002DE0B4; } }
    set32(c.r[19], c.r[16].w[0] + c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002DE2BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002DE1C4:
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DE1E4u) [[unlikely]] return; }
L_002DE1E4:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1F4u); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DE1F4u) [[unlikely]] return; }
L_002DE1F4:
    c.r[1].d[0] = c.r[2].sd[0] < 273ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] - c.r[20].w[0]);  if (t) { goto L_002DE238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE208u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DE208u) [[unlikely]] return; }
L_002DE208:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] - c.r[20].w[0]);
    c.budget -= 12;
L_002DE238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[13] = fp::add(c.f[20], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE278u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE278u) [[unlikely]] return; }
L_002DE278:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE298u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE298u) [[unlikely]] return; }
L_002DE298:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2B8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE2B8u) [[unlikely]] return; }
L_002DE2B8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002DE2BC:
    set32(c.r[4], ld32((c.r[18].w[0] + 364u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE1C4u | kUnwind; return; } goto L_002DE1C4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DE5C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DE2FCu) [[unlikely]] return; }
L_002DE2FC:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE30Cu); st32((c.r[17].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DE30Cu) [[unlikely]] return; }
L_002DE30C:
    c.r[1].d[0] = c.r[2].sd[0] < 273ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DE34C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE320u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002DE320u) [[unlikely]] return; }
L_002DE320:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 11;
L_002DE34C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[20];
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE384u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE384u) [[unlikely]] return; }
L_002DE384:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE3A4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE3A4u) [[unlikely]] return; }
L_002DE3A4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE3C4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE3C4u) [[unlikely]] return; }
L_002DE3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE5C0; } }
L_002DE3CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] - 11856u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE400u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002DE400u) [[unlikely]] return; }
L_002DE400:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[5], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 256u)));
    st32((c.r[17].w[0] + 300u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 316u), c.r[3].w[0]);  if (t) { goto L_002DE4E8; } }
L_002DE438:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE44Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DE44Cu) [[unlikely]] return; }
L_002DE44C:
    c.f[0] = c.r[16].w[0];
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = ld32((c.r[5].w[0] + 108u));
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4A4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE4A4u) [[unlikely]] return; }
L_002DE4A4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4C4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE4C4u) [[unlikely]] return; }
L_002DE4C4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4E4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE4E4u) [[unlikely]] return; }
L_002DE4E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DE4E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE438u | kUnwind; return; } goto L_002DE438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DE5B0; } }
L_002DE500:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002DE514u) [[unlikely]] return; }
L_002DE514:
    c.f[0] = c.r[16].w[0];
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = ld32((c.r[5].w[0] + 108u));
    c.f[12] = c.r[3].w[0];
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE56Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE56Cu) [[unlikely]] return; }
L_002DE56C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE58Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE58Cu) [[unlikely]] return; }
L_002DE58C:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5ACu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DE5ACu) [[unlikely]] return; }
L_002DE5AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DE5B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 360u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE500u | kUnwind; return; } goto L_002DE500; } }
L_002DE5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002DE5C4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002DE5F0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[7], c.r[7].w[0] - 11824u);
    set32(c.r[6], c.r[29].w[0]);
    set32(c.r[5], 0u + 17u);
    c.budget -= 5;
L_002DE604:
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE604u | kUnwind; return; } goto L_002DE604; } }
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[5], 0u + 118u);
    c.budget -= 4;
L_002DE630:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[6].w[0] + 284u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[6].w[0] + 308u), c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0] + 332u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE630u | kUnwind; return; } goto L_002DE630; } }
    st32((c.r[4].w[0] + 356u), 0u);
    st32((c.r[4].w[0] + 360u), 0u);
    st32((c.r[4].w[0] + 364u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002DE6EC; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_002DE6D0; } }
L_002DE674:
    set32(c.r[5], ld32((c.r[6].w[0] + 300u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] << 1);  if (t) { goto L_002DE7B8; } }
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002DE6CC; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[8].w[0] + 1u);
    st32((c.r[4].w[0] + 364u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 332u), c.r[6].w[0]);
    c.budget -= 6;
L_002DE6CC:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002DE6D0:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 288u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE674u | kUnwind; return; } goto L_002DE674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 180u)));  if (t) { goto L_002DE7BC; } }
L_002DE6EC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002DE744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_002DE72C; } }
L_002DE6FC:
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[4].w[0] + 364u), c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 332u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 12;
L_002DE72C:
    set32(c.r[3], ld32((c.r[6].w[0] + 288u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE6FCu | kUnwind; return; } goto L_002DE6FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 288u);  if (t) { goto L_002DEA4C; } }
L_002DE744:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 300u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[3].w[0] + 288u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_002DE7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_002DE7A8; } }
L_002DE778:
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[4].w[0] + 364u), c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 332u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 12;
L_002DE7A8:
    set32(c.r[3], ld32((c.r[6].w[0] + 288u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE778u | kUnwind; return; } goto L_002DE778; } }
L_002DE7B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 1;
L_002DE7BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002DE8FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002DE8E0; } }
L_002DE7D0:
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[7].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_002DE8DC; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002DE868; } }
    set32(c.r[8], ld32((c.r[8].w[0] + 300u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 356u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE838; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[9].w[0] << 2);
    st32((c.r[4].w[0] + 356u), c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 284u), c.r[8].w[0]);  if (t) { goto L_002DE8DC; } }
L_002DE838:
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 360u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE8DC; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[9].w[0] << 2);
    st32((c.r[4].w[0] + 360u), c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 308u), c.r[8].w[0]);  if (t) { goto L_002DE8DC; } }
L_002DE868:
    set32(c.r[8], ld32((c.r[8].w[0] + 300u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 360u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE8B0; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[9].w[0] << 2);
    st32((c.r[4].w[0] + 360u), c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 308u), c.r[8].w[0]);  if (t) { goto L_002DE8DC; } }
L_002DE8B0:
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[9], ld32((c.r[4].w[0] + 356u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE8DC; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[9].w[0] << 2);
    st32((c.r[4].w[0] + 356u), c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 284u), c.r[8].w[0]);
    c.budget -= 6;
L_002DE8DC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002DE8E0:
    set32(c.r[8], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[8].w[0] + 288u)));
    c.r[6].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE7D0u | kUnwind; return; } goto L_002DE7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DEA48; } }
L_002DE8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 52u)));  if (t) { goto L_002DEA30; } }
L_002DE904:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002DE99C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 300u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 356u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 1);  if (t) { goto L_002DE960; } }
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 356u), c.r[7].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 284u), c.r[5].w[0]);  if (t) { goto L_002DEA28; } }
L_002DE960:
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 360u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 1);  if (t) { goto L_002DEA28; } }
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 360u), c.r[7].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 308u), c.r[5].w[0]);  if (t) { goto L_002DEA28; } }
L_002DE99C:
    set32(c.r[7], ld32((c.r[5].w[0] + 300u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 360u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 1);  if (t) { goto L_002DE9F0; } }
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 360u), c.r[7].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 308u), c.r[5].w[0]);  if (t) { goto L_002DEA28; } }
L_002DE9F0:
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[9], ld32((c.r[4].w[0] + 356u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 1);  if (t) { goto L_002DEA28; } }
    set32(c.r[7], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 356u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 284u), c.r[5].w[0]);
    c.budget -= 9;
L_002DEA28:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 2;
L_002DEA30:
    set32(c.r[6], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 288u)));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[6].d[0] = c.r[3].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE904u | kUnwind; return; } goto L_002DE904; } }
L_002DEA48:
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_002DEA4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DEA60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC520u | kUnwind; return; } goto L_002DC520; }
L_002DEA70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC350u | kUnwind; return; } goto L_002DC350; }
L_002DEA80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCB40u | kUnwind; return; } goto L_002DCB40; }
L_002DEA90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC350u | kUnwind; return; } goto L_002DC350; }
L_002DEAA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAC4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002DEAC4u) [[unlikely]] return; }
L_002DEAC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13232u);
    set32(c.r[3], c.r[3].w[0] + 13248u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], 0u + 10240u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAF4u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DEAF4u) [[unlikely]] return; }
L_002DEAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DEB08; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB08u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002C(c, 41u, depth + 1u); else { c.pc = 0x001B0720u; return; } if (c.pc != 0x002DEB08u) [[unlikely]] return; }
L_002DEB08:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(10240ll);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 48u));
    set32(c.r[2], 0u - 16384u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 256u);
    set32(c.r[16], c.r[17].w[0] + 48u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB34u); st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x002DEB34u) [[unlikely]] return; }
L_002DEB34:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[13], 0u - 1009u);
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[4].d[0] = c.r[3].d[0] << 14;
    c.r[3].d[0] = c.r[2].d[0] | 16383ull;
    set32(c.r[8], 0u - 5u);
    c.r[2].d[0] = 0ull & 63ull;
    set32(c.r[6], 0u - 25u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[14], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st64((c.r[16].w[0]), c.r[4].d[0]);
    set32(c.r[3], 0u - 4u);
    c.r[15].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[11].d[0] = c.r[2].d[0] << 30;
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], 0u - 61u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[10].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[9], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] << 7);
    c.r[3].d[0] = 0ull & 3ull;
    set32(c.r[25], 0u - 129u);
    c.r[4].d[0] = c.r[15].d[0] & c.r[13].d[0];
    set32(c.r[7], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[4].d[0] | c.r[14].d[0];
    c.r[3].d[0] = 0ull & 16383ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].d[0] = c.r[3].d[0] << 37;
    c.r[20].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 31ull;
    c.r[13].d[0] = c.r[4].d[0] << 16;
    c.r[14].d[0] = c.r[3].d[0] << 32;
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.r[3].d[0] = 0ull & 15ull;
    c.r[19].d[0] = c.r[13].d[0] | c.r[14].d[0];
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 121u);
    set32(c.r[15], 0u - 32u);
    c.r[13].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.r[24].d[0] = 0ull & 31ull;
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    c.r[2].d[0] = 0ull & 7ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[14], c.r[2].w[0] << 5);
    c.r[20].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[13], 0u - 225u);
    set32(c.r[12], 0u - 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[20].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st64((c.r[16].w[0]), c.r[10].d[0]);
    c.r[10].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld64((c.r[16].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & c.r[19].d[0];
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[16].w[0]), c.r[5].d[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[25].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[18].d[0];
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[15].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[24].d[0];
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 56u), c.r[12].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 107;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DECE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DED60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13232u);
    set32(c.r[2], c.r[2].w[0] + 13248u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DED38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DED38; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DED38u) [[unlikely]] return; }
L_002DED38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED48u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002DED48u) [[unlikely]] return; }
L_002DED48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DED64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DED60u) [[unlikely]] return; }
L_002DED60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DED64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DED80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDB0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002C(c, 49u, depth + 1u); else { c.pc = 0x001B0820u; return; } if (c.pc != 0x002DEDB0u) [[unlikely]] return; }
L_002DEDB0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 48u));
    set32(c.r[3], 0u - 16384u);
    c.r[4].d[0] = c.r[17].d[0] & 16383ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DEDE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[4].w[0] + 48u);
    set32(c.r[5], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE10u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x002DEE10u) [[unlikely]] return; }
L_002DEE10:
    c.r[3].d[0] = c.r[17].d[0] & 15ull;
    c.r[4].d[0] = c.r[18].d[0] & 15ull;
    c.r[5].d[0] = c.r[3].d[0] << 30;
    set32(c.r[7], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[10].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], 0u - 61u);
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[9].d[0] = c.r[4].d[0] << 14;
    c.r[8].d[0] = c.r[3].d[0] | 16383ull;
    set32(c.r[3], 0u - 4u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[16].w[0]), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DEEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DEF18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4516u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DEF18; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_002DEF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEE4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DEEE4u) [[unlikely]] return; }
L_002DEEE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DEEFC; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 294u, depth + 1u); else { c.pc = 0x002DF160u; return; } if (c.pc != 0x002DEEF8u) [[unlikely]] return; }
L_002DEEF8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002DEEFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4516u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF18u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002DEF18u) [[unlikely]] return; }
L_002DEF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DEF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002DEF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DEFD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DEFD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DEFD4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002DEF84; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_002DEF84:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEF98u) [[unlikely]] return; }
L_002DEF98:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002DEFD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DEFD4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 273u, depth + 1u); else { c.pc = 0x002DEDE0u; return; } if (c.pc != 0x002DEFC0u) [[unlikely]] return; }
L_002DEFC0:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 271u, depth + 1u); else { c.pc = 0x002DED80u; return; } if (c.pc != 0x002DEFCCu) [[unlikely]] return; }
L_002DEFCC:
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 2;
L_002DEFD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DEFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002DF07C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002DF07C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DF07C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF07C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF07C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF050u) [[unlikely]] return; }
L_002DF050:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DF07C; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23536u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DF074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF07Cu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_002C(c, 58u, depth + 1u); else { c.pc = 0x001B0B50u; return; } if (c.pc != 0x002DF07Cu) [[unlikely]] return; }
L_002DF07C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DF108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0B0u);  if (depth < kMaxDepth) unit_001A(c, 37u, depth + 1u); else { c.pc = 0x00168880u; return; } if (c.pc != 0x002DF0B0u) [[unlikely]] return; }
L_002DF0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002DF0C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 34u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_002DF108; } }
L_002DF0C4:
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DF108; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_002DF0DC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002DF0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0E4u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002DF0E4u) [[unlikely]] return; }
L_002DF0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF0F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002DF0F8; } }
L_002DF0F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF108; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 382u));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_002DF108:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF118u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B0BC0u; return; } if (c.pc != 0x002DF118u) [[unlikely]] return; }
L_002DF118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF14Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF14Cu) [[unlikely]] return; }
L_002DF14C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DF160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF188u); c.r[5].d[0] = c.r[2].d[0] | 21332ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x002DF188u) [[unlikely]] return; }
L_002DF188:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13216u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DF1F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1E0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x002DF1E0u) [[unlikely]] return; }
L_002DF1E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DF1FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DF1F8u) [[unlikely]] return; }
L_002DF1F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DF1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_002DF23C; } }
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 4516u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002DF23C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 48u));
    st64((c.r[5].w[0] + 72u), c.r[3].d[0]);
    c.budget -= 3;
L_002DF23C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DF250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_002DF27C; } }
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4516u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF27C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[2].w[0] + 48u));  if (t) { goto L_002DF280; } }
L_002DF27C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DF290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002DF2A4; } }
    set32(c.r[8], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 1;
L_002DF2A4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002DF2E4; } }
L_002DF2B0:
    set32(c.r[3], ld32((c.r[8].w[0] + 60u)));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF2DC; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002DF2DC; } }
    st8((c.r[3].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002DF2DC:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002DF2E4:
    c.r[3].d[0] = ld16((c.r[8].w[0] + 64u));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF2B0u | kUnwind; return; } goto L_002DF2B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DF300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DEFF0u | kUnwind; return; } goto L_002DEFF0; }
L_002DF310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DECE0u | kUnwind; return; } goto L_002DECE0; }
L_002DF320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF344u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002DF344u) [[unlikely]] return; }
L_002DF344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13296u);
    set32(c.r[3], c.r[3].w[0] + 13312u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 272u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 56u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF378u); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002DF378u) [[unlikely]] return; }
L_002DF378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DF388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002DF388u) [[unlikely]] return; }
L_002DF388:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 66u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[18].w[0] + 68u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DF3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DF440; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13296u);
    set32(c.r[2], c.r[2].w[0] + 13312u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DF418; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DF418; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF418u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF418u) [[unlikely]] return; }
L_002DF418:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF428u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002DF428u) [[unlikely]] return; }
L_002DF428:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DF444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DF440u) [[unlikely]] return; }
L_002DF440:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DF444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF460:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DF498; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002DF488; } }
    st16((c.r[4].w[0] + 66u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 68u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002DF494; } }
L_002DF488:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002DF494; } }
    st16((c.r[4].w[0] + 66u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002DF494:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DF498:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DF4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002DF4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DF4C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DF65C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002DF4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_002DF530; } }
L_002DF4F4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002DF504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_002DF530; } }
L_002DF504:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 11;
L_002DF530:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002DF65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45560000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[5].d[0] = c.r[2].d[0] | 21332ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4516u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF574u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002DF574u) [[unlikely]] return; }
L_002DF574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DF580; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002DF580:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002DF65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF590u);  if (depth < kMaxDepth) unit_0077(c, 300u, depth + 1u); else { c.pc = 0x002DF250u; return; } if (c.pc != 0x002DF590u) [[unlikely]] return; }
L_002DF590:
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4D800000u);
    set32(c.r[9], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[8], c.r[29].w[0] + 40u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    c.f[14] = c.r[3].w[0];
    st64((c.r[9].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[8].w[0]));
    st64((c.r[7].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 35u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[9].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[9].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 37;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF624u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF624u) [[unlikely]] return; }
L_002DF624:
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF65Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF65Cu) [[unlikely]] return; }
L_002DF65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF670:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 66u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_002DF690:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 68u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_002DF6B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF4C0u | kUnwind; return; } goto L_002DF4C0; }
L_002DF6C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF3C0u | kUnwind; return; } goto L_002DF3C0; }
L_002DF6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF6E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 236u, depth + 1u); else { c.pc = 0x0029A770u; return; } if (c.pc != 0x002DF6E4u) [[unlikely]] return; }
L_002DF6E4:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF6F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002DF6F0u) [[unlikely]] return; }
L_002DF6F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 13440u);
    set32(c.r[3], c.r[3].w[0] + 13460u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 96u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DF730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DF794; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13440u);
    set32(c.r[2], c.r[2].w[0] + 13460u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 80u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF770u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002DF770u) [[unlikely]] return; }
L_002DF770:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF77Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 238u, depth + 1u); else { c.pc = 0x0029A7E0u; return; } if (c.pc != 0x002DF77Cu) [[unlikely]] return; }
L_002DF77C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DF798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF794u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DF794u) [[unlikely]] return; }
L_002DF794:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DF798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF7B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[2], c.r[17].w[0] + 96u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7F0u); st32((c.r[17].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x002DF7F0u) [[unlikely]] return; }
L_002DF7F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[4] = c.r[2].w[0];
    c.f[3] = ld32((c.r[1].w[0] - 23448u));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF840u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002DF840u) [[unlikely]] return; }
L_002DF840:
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[1].w[0] - 23456u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF86Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002DF86Cu) [[unlikely]] return; }
L_002DF86C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], 0u + 28u);
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 100u));
    c.f[1] = ld32((c.r[5].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] - 23464u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DF8EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23472u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_002DF908; } }
L_002DF8EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23480u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DF908; } }
    c.f[0] = ld32((c.r[1].w[0] - 23472u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 2;
L_002DF908:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = c.f[2] ^ fp::kSign;  if (t) { goto L_002DF920; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_002DF920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23488u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DF994; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    set32(c.r[6], 0u + 300u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002DFA54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 25200u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[9].w[0] + 1u);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF98Cu); st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002DF98Cu) [[unlikely]] return; }
L_002DF98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { goto L_002DFA54; } }
L_002DF994:
    c.f[0] = ld32((c.r[1].w[0] - 23496u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DFA04; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 164u)));
    set32(c.r[6], 0u + 370u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002DFA54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[9].d[0] = ld8((c.r[1].w[0] + 28008u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 25200u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], c.r[9].w[0] + 1u);
    mmi::div(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9FCu); st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002DF9FCu) [[unlikely]] return; }
L_002DF9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { goto L_002DFA54; } }
L_002DFA04:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DFA38; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    set32(c.r[3], 0u + 390u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DFA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA30u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002DFA30u) [[unlikely]] return; }
L_002DFA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { goto L_002DFA54; } }
L_002DFA38:
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    set32(c.r[3], 0u + 391u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DFA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA50u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002DFA50u) [[unlikely]] return; }
L_002DFA50:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_002DFA54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DFA70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DFA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002DFA9Cu) [[unlikely]] return; }
L_002DFA9C:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002DFAA8u) [[unlikely]] return; }
L_002DFAA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13360u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 13412u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2352u);
    set32(c.r[6], c.r[6].w[0] - 2256u);
    set32(c.r[7], 0u + 128u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAE0u); set32(c.r[8], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002DFAE0u) [[unlikely]] return; }
L_002DFAE0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 300u);
    c.budget -= 2;
L_002DFAE8:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 2704u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFAE8u | kUnwind; return; } goto L_002DFAE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002DFB0C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 2992u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 3024u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 2672u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFB0Cu | kUnwind; return; } goto L_002DFB0C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DFB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DFBBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 13360u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 13412u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 112u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 2256u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB8Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002DFB8Cu) [[unlikely]] return; }
L_002DFB8C:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002DFB98u) [[unlikely]] return; }
L_002DFB98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002DFBA4u) [[unlikely]] return; }
L_002DFBA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DFBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002DFBBCu) [[unlikely]] return; }
L_002DFBBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DFBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DFBE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 28360u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DFC34; } }
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[16] = c.f[13];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC34u); c.f[17] = c.f[13];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002DFC34u) [[unlikely]] return; }
L_002DFC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DFD18; } }
L_002DFC3C:
    set32(c.r[6], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DFD24; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_002DFD14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFD14; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DFD14; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 15080u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[19].w[0] + c.r[6].w[0]);  if (t) { goto L_002DFCC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[6].w[0]);  if (t) { goto L_002DFCC0; } }
    st32((c.r[3].w[0] + 2992u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 3024u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 2672u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2704u), 0u);  if (t) { goto L_002DFD14; } }
L_002DFCC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 2672u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[16].w[0] + 2672u);  if (t) { goto L_002DFCD4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002DFCD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFCE0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 9u, depth + 1u); else { c.pc = 0x002E0180u; return; } if (c.pc != 0x002DFCE0u) [[unlikely]] return; }
L_002DFCE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 15250u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_002DFD04; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFCFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 369u, depth + 1u); else { c.pc = 0x002DFFF0u; return; } if (c.pc != 0x002DFCFCu) [[unlikely]] return; }
L_002DFCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002DFD18; } }
L_002DFD04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 3024u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD14u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 359u, depth + 1u); else { c.pc = 0x002DFD40u; return; } if (c.pc != 0x002DFD14u) [[unlikely]] return; }
L_002DFD14:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DFD18:
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFC3Cu | kUnwind; return; } goto L_002DFC3C; } }
L_002DFD24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DFD40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[5].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x002DFD80u) [[unlikely]] return; }
L_002DFD80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DFD94; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_002DFD98; } }
L_002DFD94:
    set32(c.r[4], ld32((c.r[20].w[0] + 468u)));
    c.budget -= 1;
L_002DFD98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDB8u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x002DFDB8u) [[unlikely]] return; }
L_002DFDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002DFDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDC8u);  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x002DFDC8u) [[unlikely]] return; }
L_002DFDC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);  if (t) { goto L_002DFDDC; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2992u), c.r[4].w[0]);  if (t) { goto L_002DFFCC; } }
L_002DFDDC:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);  if (t) { goto L_002DFDFC; } }
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 2672u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    c.budget -= 4;
L_002DFDFC:
    set32(c.r[4], ld32((c.r[3].w[0] + 2672u)));
    set32(c.r[16], c.r[3].w[0] + 2672u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002DFE18; } }
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002DFE18:
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002DFE60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFE5C; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DFE5C:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_002DFE60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002DFE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE70u);  if (depth < kMaxDepth) unit_0078(c, 18u, depth + 1u); else { c.pc = 0x002E0350u; return; } if (c.pc != 0x002DFE70u) [[unlikely]] return; }
L_002DFE70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002DFE88; } }
    c.f[12] = ld32((c.r[1].w[0] - 23504u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE88u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 332u, depth + 1u); else { c.pc = 0x002DF7B0u; return; } if (c.pc != 0x002DFE88u) [[unlikely]] return; }
L_002DFE88:
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFF18; } }
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[17], c.r[2].w[0] + 2992u);
    set32(c.r[2], ld32((c.r[2].w[0] + 2992u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002DFEEC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[4], 0u + 40u);
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFED0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002DFED0u) [[unlikely]] return; }
L_002DFED0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 157u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002DFEE4u) [[unlikely]] return; }
L_002DFEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[19].w[0]));  if (t) { goto L_002DFF30; } }
L_002DFEEC:
    set32(c.r[7], c.r[2].w[0] - 40u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    set32(c.r[6], c.r[21].w[0] + 16u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002DFF10u) [[unlikely]] return; }
L_002DFF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DFF2C; } }
L_002DFF18:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], 0u - 1u);  if (t) { goto L_002DFF2C; } }
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 2992u), c.r[4].w[0]);
    c.budget -= 2;
L_002DFF2C:
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 1;
L_002DFF30:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFF48; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002DFFCC; } }
L_002DFF48:
    set32(c.r[4], ld32((c.r[20].w[0] + 644u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2704u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 2704u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2704u)));
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002DFFCC; } }
    c.f[0] = ld32((c.r[20].w[0] + 1020u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 300u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 15090u);
    st32((c.r[20].w[0] + 212u), c.f[0]);
    st32((c.r[20].w[0] + 944u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 464u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFC0u); st32((c.r[2].w[0] + 2704u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002DFFC0u) [[unlikely]] return; }
L_002DFFC0:
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[3].w[0] + 2992u), c.r[4].w[0]);
    c.budget -= 3;
L_002DFFCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DFFF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.budget -= 4;
    [[clang::musttail]] return unit_0078(c, 1u, depth);
}

}
