#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006F[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002BC000;
    case 2u: goto L_002BC008;
    case 3u: goto L_002BC040;
    case 4u: goto L_002BC048;
    case 5u: goto L_002BC070;
    case 6u: goto L_002BC0A4;
    case 7u: goto L_002BC0CC;
    case 8u: goto L_002BC110;
    case 9u: goto L_002BC160;
    case 10u: goto L_002BC170;
    case 11u: goto L_002BC188;
    case 12u: goto L_002BC1A0;
    case 13u: goto L_002BC224;
    case 14u: goto L_002BC230;
    case 15u: goto L_002BC260;
    case 16u: goto L_002BC284;
    case 17u: goto L_002BC2FC;
    case 18u: goto L_002BC318;
    case 19u: goto L_002BC334;
    case 20u: goto L_002BC3EC;
    case 21u: goto L_002BC488;
    case 22u: goto L_002BC4A4;
    case 23u: goto L_002BC4BC;
    case 24u: goto L_002BC4F0;
    case 25u: goto L_002BC530;
    case 26u: goto L_002BC53C;
    case 27u: goto L_002BC5A0;
    case 28u: goto L_002BC5D4;
    case 29u: goto L_002BC604;
    case 30u: goto L_002BC614;
    case 31u: goto L_002BC628;
    case 32u: goto L_002BC630;
    case 33u: goto L_002BC640;
    case 34u: goto L_002BC664;
    case 35u: goto L_002BC680;
    case 36u: goto L_002BC6D8;
    case 37u: goto L_002BC6E8;
    case 38u: goto L_002BC700;
    case 39u: goto L_002BC720;
    case 40u: goto L_002BC73C;
    case 41u: goto L_002BC810;
    case 42u: goto L_002BC82C;
    case 43u: goto L_002BC848;
    case 44u: goto L_002BC858;
    case 45u: goto L_002BC8CC;
    case 46u: goto L_002BC900;
    case 47u: goto L_002BC950;
    case 48u: goto L_002BC980;
    case 49u: goto L_002BC994;
    case 50u: goto L_002BC9D8;
    case 51u: goto L_002BC9E0;
    case 52u: goto L_002BC9F0;
    case 53u: goto L_002BCA8C;
    case 54u: goto L_002BCA98;
    case 55u: goto L_002BCAB0;
    case 56u: goto L_002BCAC8;
    case 57u: goto L_002BCAD4;
    case 58u: goto L_002BCADC;
    case 59u: goto L_002BCB10;
    case 60u: goto L_002BCB70;
    case 61u: goto L_002BCB7C;
    case 62u: goto L_002BCBAC;
    case 63u: goto L_002BCBCC;
    case 64u: goto L_002BCBE4;
    case 65u: goto L_002BCC10;
    case 66u: goto L_002BCC6C;
    case 67u: goto L_002BCCE0;
    case 68u: goto L_002BCD08;
    case 69u: goto L_002BCD4C;
    case 70u: goto L_002BCD8C;
    case 71u: goto L_002BCD9C;
    case 72u: goto L_002BCE10;
    case 73u: goto L_002BCE4C;
    case 74u: goto L_002BCE6C;
    case 75u: goto L_002BCE94;
    case 76u: goto L_002BCE98;
    case 77u: goto L_002BCEA8;
    case 78u: goto L_002BCF34;
    case 79u: goto L_002BCF70;
    case 80u: goto L_002BCFA0;
    case 81u: goto L_002BCFD4;
    case 82u: goto L_002BD004;
    case 83u: goto L_002BD014;
    case 84u: goto L_002BD024;
    case 85u: goto L_002BD038;
    case 86u: goto L_002BD04C;
    case 87u: goto L_002BD054;
    case 88u: goto L_002BD064;
    case 89u: goto L_002BD070;
    case 90u: goto L_002BD090;
    case 91u: goto L_002BD0E8;
    case 92u: goto L_002BD0F8;
    case 93u: goto L_002BD110;
    case 94u: goto L_002BD130;
    case 95u: goto L_002BD158;
    case 96u: goto L_002BD1EC;
    case 97u: goto L_002BD208;
    case 98u: goto L_002BD2BC;
    case 99u: goto L_002BD2D8;
    case 100u: goto L_002BD2F8;
    case 101u: goto L_002BD30C;
    case 102u: goto L_002BD340;
    case 103u: goto L_002BD354;
    case 104u: goto L_002BD3A0;
    case 105u: goto L_002BD3F0;
    case 106u: goto L_002BD400;
    case 107u: goto L_002BD418;
    case 108u: goto L_002BD430;
    case 109u: goto L_002BD4C0;
    case 110u: goto L_002BD4D0;
    case 111u: goto L_002BD590;
    case 112u: goto L_002BD5B0;
    case 113u: goto L_002BD5C4;
    case 114u: goto L_002BD5F0;
    case 115u: goto L_002BD600;
    case 116u: goto L_002BD63C;
    case 117u: goto L_002BD648;
    case 118u: goto L_002BD658;
    case 119u: goto L_002BD6A0;
    case 120u: goto L_002BD6B0;
    case 121u: goto L_002BD6E0;
    case 122u: goto L_002BD6F0;
    case 123u: goto L_002BD700;
    case 124u: goto L_002BD710;
    case 125u: goto L_002BD720;
    case 126u: goto L_002BD730;
    case 127u: goto L_002BD740;
    case 128u: goto L_002BD750;
    case 129u: goto L_002BD760;
    case 130u: goto L_002BD770;
    case 131u: goto L_002BD780;
    case 132u: goto L_002BD798;
    case 133u: goto L_002BD7B0;
    case 134u: goto L_002BD7C8;
    case 135u: goto L_002BD7E0;
    case 136u: goto L_002BD7F8;
    case 137u: goto L_002BD810;
    case 138u: goto L_002BD820;
    case 139u: goto L_002BD844;
    case 140u: goto L_002BD85C;
    case 141u: goto L_002BD880;
    case 142u: goto L_002BD8B4;
    case 143u: goto L_002BD8D0;
    case 144u: goto L_002BD8F4;
    case 145u: goto L_002BD90C;
    case 146u: goto L_002BD91C;
    case 147u: goto L_002BD92C;
    case 148u: goto L_002BD940;
    case 149u: goto L_002BD950;
    case 150u: goto L_002BD990;
    case 151u: goto L_002BD9A4;
    case 152u: goto L_002BDA20;
    case 153u: goto L_002BDA58;
    case 154u: goto L_002BDA68;
    case 155u: goto L_002BDA94;
    case 156u: goto L_002BDAA4;
    case 157u: goto L_002BDAB4;
    case 158u: goto L_002BDAC0;
    case 159u: goto L_002BDAD8;
    case 160u: goto L_002BDAF4;
    case 161u: goto L_002BDB3C;
    case 162u: goto L_002BDB74;
    case 163u: goto L_002BDBB0;
    case 164u: goto L_002BDBE4;
    case 165u: goto L_002BDBF8;
    case 166u: goto L_002BDC60;
    case 167u: goto L_002BDC70;
    case 168u: goto L_002BDC80;
    case 169u: goto L_002BDC8C;
    case 170u: goto L_002BDCA4;
    case 171u: goto L_002BDCC0;
    case 172u: goto L_002BDD14;
    case 173u: goto L_002BDD50;
    case 174u: goto L_002BDD88;
    case 175u: goto L_002BDD98;
    case 176u: goto L_002BDDC4;
    case 177u: goto L_002BDDD4;
    case 178u: goto L_002BDDE4;
    case 179u: goto L_002BDDF0;
    case 180u: goto L_002BDE08;
    case 181u: goto L_002BDE24;
    case 182u: goto L_002BDE4C;
    case 183u: goto L_002BDE60;
    case 184u: goto L_002BDED0;
    case 185u: goto L_002BDEEC;
    case 186u: goto L_002BDF68;
    case 187u: goto L_002BDF90;
    case 188u: goto L_002BDFC8;
    case 189u: goto L_002BDFD0;
    case 190u: goto L_002BE01C;
    case 191u: goto L_002BE024;
    case 192u: goto L_002BE060;
    case 193u: goto L_002BE06C;
    case 194u: goto L_002BE0AC;
    case 195u: goto L_002BE0E0;
    case 196u: goto L_002BE0EC;
    case 197u: goto L_002BE130;
    case 198u: goto L_002BE148;
    case 199u: goto L_002BE1E0;
    case 200u: goto L_002BE1F0;
    case 201u: goto L_002BE260;
    case 202u: goto L_002BE268;
    case 203u: goto L_002BE2A0;
    case 204u: goto L_002BE2C0;
    case 205u: goto L_002BE2CC;
    case 206u: goto L_002BE310;
    case 207u: goto L_002BE330;
    case 208u: goto L_002BE344;
    case 209u: goto L_002BE380;
    case 210u: goto L_002BE388;
    case 211u: goto L_002BE3B0;
    case 212u: goto L_002BE3E0;
    case 213u: goto L_002BE400;
    case 214u: goto L_002BE40C;
    case 215u: goto L_002BE438;
    case 216u: goto L_002BE470;
    case 217u: goto L_002BE484;
    case 218u: goto L_002BE4D0;
    case 219u: goto L_002BE4F0;
    case 220u: goto L_002BE510;
    case 221u: goto L_002BE530;
    case 222u: goto L_002BE550;
    case 223u: goto L_002BE570;
    case 224u: goto L_002BE590;
    case 225u: goto L_002BE5B0;
    case 226u: goto L_002BE5D0;
    case 227u: goto L_002BE5F0;
    case 228u: goto L_002BE610;
    case 229u: goto L_002BE660;
    case 230u: goto L_002BE670;
    case 231u: goto L_002BE690;
    case 232u: goto L_002BE6F0;
    case 233u: goto L_002BE810;
    case 234u: goto L_002BE840;
    case 235u: goto L_002BE8B0;
    case 236u: goto L_002BE990;
    case 237u: goto L_002BEA10;
    case 238u: goto L_002BEA50;
    case 239u: goto L_002BEA70;
    case 240u: goto L_002BEB70;
    case 241u: goto L_002BEC30;
    case 242u: goto L_002BEC74;
    case 243u: goto L_002BED04;
    case 244u: goto L_002BEDA0;
    case 245u: goto L_002BEE60;
    case 246u: goto L_002BEEE0;
    case 247u: goto L_002BEF1C;
    case 248u: goto L_002BEF28;
    case 249u: goto L_002BF020;
    case 250u: goto L_002BF034;
    case 251u: goto L_002BF070;
    case 252u: goto L_002BF0B0;
    case 253u: goto L_002BF0F0;
    case 254u: goto L_002BF270;
    case 255u: goto L_002BF2A0;
    case 256u: goto L_002BF3F0;
    case 257u: goto L_002BF428;
    case 258u: goto L_002BF46C;
    case 259u: goto L_002BF4D0;
    case 260u: goto L_002BF518;
    case 261u: goto L_002BF550;
    case 262u: goto L_002BF580;
    case 263u: goto L_002BF630;
    case 264u: goto L_002BF670;
    case 265u: goto L_002BF6AC;
    case 266u: goto L_002BF710;
    case 267u: goto L_002BF760;
    case 268u: goto L_002BF79C;
    case 269u: goto L_002BF800;
    case 270u: goto L_002BF850;
    case 271u: goto L_002BF894;
    case 272u: goto L_002BF8D0;
    case 273u: goto L_002BF920;
    case 274u: goto L_002BF964;
    case 275u: goto L_002BF9A0;
    case 276u: goto L_002BF9F0;
    case 277u: goto L_002BFA24;
    case 278u: goto L_002BFA60;
    case 279u: goto L_002BFAD0;
    case 280u: goto L_002BFB04;
    case 281u: goto L_002BFB74;
    case 282u: goto L_002BFBF0;
    case 283u: goto L_002BFC10;
    case 284u: goto L_002BFC84;
    case 285u: goto L_002BFCC0;
    case 286u: goto L_002BFCD8;
    case 287u: goto L_002BFD70;
    case 288u: goto L_002BFD84;
    case 289u: goto L_002BFE20;
    case 290u: goto L_002BFE48;
    case 291u: goto L_002BFEB4;
    case 292u: goto L_002BFF20;
    case 293u: goto L_002BFF50;
    case 294u: goto L_002BFFB8;
    default: bad_entry(c, 0x002BC000u); return;
    }
L_002BC000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC008u); c.f[12] = c.f[26];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC008u) [[unlikely]] return; }
L_002BC008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BC040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002BC05C; } }
L_002BC048:
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 104u)));
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[6]);
    c.budget -= 5;
L_002BC05C:
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC048u | kUnwind; return; } goto L_002BC048; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0A4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_006E(c, 422u, depth + 1u); else { c.pc = 0x002BAAB0u; return; } if (c.pc != 0x002BC0A4u) [[unlikely]] return; }
L_002BC0A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9488u);
    set32(c.r[2], c.r[2].w[0] + 9504u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0CCu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BC0CCu) [[unlikely]] return; }
L_002BC0CC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[16].w[0] + 112u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 128u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 145u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 146u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BC188; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9488u);
    set32(c.r[2], c.r[2].w[0] + 9504u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC164; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC160u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BC160u) [[unlikely]] return; }
L_002BC160:
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BC164:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC170u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x002BC170u) [[unlikely]] return; }
L_002BC170:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BC18C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC188u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BC188u) [[unlikely]] return; }
L_002BC188:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BC18C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC224; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC1EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC21C; } }
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BC21C; } }
L_002BC1EC:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC21C; } }
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BC21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC224u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x002BC224u) [[unlikely]] return; }
L_002BC224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 144u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BC4D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BC4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_002BC4C4; } }
L_002BC260:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_002BC284; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC284u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x002BC284u) [[unlikely]] return; }
L_002BC284:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_002BC2B4; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[13] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_002BC2C0; } }
L_002BC2B4:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
L_002BC2C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BC320; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC304; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 136u)));  if (t) { goto L_002BC338; } }
L_002BC2E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC2FCu) [[unlikely]] return; }
L_002BC2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC334; } }
L_002BC304:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC318u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC318u) [[unlikely]] return; }
L_002BC318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC334; } }
L_002BC320:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC334u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC334u) [[unlikely]] return; }
L_002BC334:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 1;
L_002BC338:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_002BC360; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[3] = ld32((c.r[17].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_002BC370; } }
L_002BC360:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[17].w[0] + 56u));
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
L_002BC370:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    st32((c.r[2].w[0] + 20u), c.f[3]);
    st32((c.r[2].w[0] + 24u), c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_002BC3DC; } }
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_002BC468; } }
L_002BC3DC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC3ECu) [[unlikely]] return; }
L_002BC3EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC424; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC414; } }
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_002BC468; } }
L_002BC414:
    ld128((c.r[17].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_002BC468; } }
L_002BC424:
    ld128((c.r[17].w[0] + 112u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 17;
L_002BC468:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 146u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC490; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC488u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC488u) [[unlikely]] return; }
L_002BC488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_002BC4A8; } }
L_002BC490:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC4A4u) [[unlikely]] return; }
L_002BC4A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_002BC4A8:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4BCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x002BC4BCu) [[unlikely]] return; }
L_002BC4BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 2;
L_002BC4C4:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC260u | kUnwind; return; } goto L_002BC260; } }
L_002BC4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BC4F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002BC534; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC530u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BC530u) [[unlikely]] return; }
L_002BC530:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BC534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC53Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BC53Cu) [[unlikely]] return; }
L_002BC53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC570; } }
    ld128((c.r[19].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    ld128((c.r[18].w[0]) & ~15u, c.r[4]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[4]);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 11;
L_002BC570:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[3].w[0] + 52u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BC5A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[21] = c.f[14];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5D4u); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_006E(c, 422u, depth + 1u); else { c.pc = 0x002BAAB0u; return; } if (c.pc != 0x002BC5D4u) [[unlikely]] return; }
L_002BC5D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 9392u);
    set32(c.r[3], c.r[3].w[0] + 9408u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), c.f[21]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC604u); st32((c.r[16].w[0] + 112u), c.f[20]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BC604u) [[unlikely]] return; }
L_002BC604:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC614u); st32((c.r[16].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002BC614u) [[unlikely]] return; }
L_002BC614:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC628u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BC628u) [[unlikely]] return; }
L_002BC628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC630u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BC630u) [[unlikely]] return; }
L_002BC630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BC640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC640u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002BC640u) [[unlikely]] return; }
L_002BC640:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC664u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BC664u) [[unlikely]] return; }
L_002BC664:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BC680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BC700; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9392u);
    set32(c.r[2], c.r[2].w[0] + 9408u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC6D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BC6D8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC6D8u) [[unlikely]] return; }
L_002BC6D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6E8u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x002BC6E8u) [[unlikely]] return; }
L_002BC6E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BC704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC700u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BC700u) [[unlikely]] return; }
L_002BC700:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BC704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BC8D0; } }
L_002BC73C:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_002BC76C; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[13] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_002BC778; } }
L_002BC76C:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
L_002BC778:
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_002BC7A4; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[2] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_002BC7AC; } }
L_002BC7A4:
    c.f[3] = ld32((c.r[17].w[0] + 108u));
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.budget -= 2;
L_002BC7AC:
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    st32((c.r[3].w[0] + 160u), c.f[3]);
    st32((c.r[3].w[0] + 164u), c.f[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BC834; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BC818; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC7FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_002BC84C; } }
L_002BC7FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC810u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC810u) [[unlikely]] return; }
L_002BC810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC848; } }
L_002BC818:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC82Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC82Cu) [[unlikely]] return; }
L_002BC82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC848; } }
L_002BC834:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC848u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC848u) [[unlikely]] return; }
L_002BC848:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002BC84C:
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC858u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC858u) [[unlikely]] return; }
L_002BC858:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC874; } }
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_002BC8B8; } }
L_002BC874:
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = ld32((c.r[17].w[0] + 140u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 17;
L_002BC8B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC8CCu) [[unlikely]] return; }
L_002BC8CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BC8D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC73Cu | kUnwind; return; } goto L_002BC73C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BC900:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.f[23] = c.f[14];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[22] = c.f[15];
    c.f[24] = c.f[16];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC950u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_006E(c, 422u, depth + 1u); else { c.pc = 0x002BAAB0u; return; } if (c.pc != 0x002BC950u) [[unlikely]] return; }
L_002BC950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9296u);
    set32(c.r[2], c.r[2].w[0] + 9312u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 112u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[18].w[0] + 120u), c.f[23]);
    st32((c.r[18].w[0] + 124u), c.f[22]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC980u); st32((c.r[18].w[0] + 144u), c.f[24]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002BC980u) [[unlikely]] return; }
L_002BC980:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC994u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BC994u) [[unlikely]] return; }
L_002BC994:
    st32((c.r[18].w[0] + 148u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 152u), 0u);
    st32((c.r[18].w[0] + 156u), 0u);
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    st32((c.r[18].w[0] + 164u), c.f[0]);
    st32((c.r[18].w[0] + 168u), 0u);
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    st32((c.r[18].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    st32((c.r[18].w[0] + 176u), c.f[0]);
    c.budget -= 17;
L_002BC9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9E0u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BC9E0u) [[unlikely]] return; }
L_002BC9E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] << 2);  if (t) { goto L_002BC9F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002BC9F0u) [[unlikely]] return; }
L_002BC9F0:
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002BC9F4:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[4].w[0] + 100u);  if (t) { goto L_002BCA40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BCA24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BCA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0])));  if (t) { goto L_002BCA5C; } }
L_002BCA24:
    c.f[21] = ld32((c.r[18].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[22], c.f[0]);  if (t) { goto L_002BCA58; } }
L_002BCA40:
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[20] = c.f[22];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[21] = fp::sub(c.f[23], c.f[0]);
    c.budget -= 6;
L_002BCA58:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_002BCA5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 160u), c.f[21]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 164u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC9D8u | kUnwind; return; } goto L_002BC9D8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002BCAC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA8Cu); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002BCA8Cu) [[unlikely]] return; }
L_002BCA8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA98u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BCA98u) [[unlikely]] return; }
L_002BCA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCAB0; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002BCAB0u) [[unlikely]] return; }
L_002BCAB0:
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 116u)));
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002BCAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAC8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BCAC8u) [[unlikely]] return; }
L_002BCAC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x002BCAD4u) [[unlikely]] return; }
L_002BCAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCADCu); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BCADCu) [[unlikely]] return; }
L_002BCADC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BCB10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BCBE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9296u);
    set32(c.r[2], c.r[2].w[0] + 9312u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BCB70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BCB70; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCB70u) [[unlikely]] return; }
L_002BCB70:
    st32((c.r[17].w[0] + 116u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 3;
L_002BCB7C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 100u);  if (t) { goto L_002BCBB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BCBAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BCBAC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCBACu) [[unlikely]] return; }
L_002BCBAC:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_002BCBB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCB7Cu | kUnwind; return; } goto L_002BCB7C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x002BCBCCu) [[unlikely]] return; }
L_002BCBCC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BCBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BCBE4u) [[unlikely]] return; }
L_002BCBE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BCBE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BCC10:
    st32((c.r[4].w[0] + 120u), c.f[12]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 124u), c.f[13]);
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::sub(c.f[13], c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    st32((c.r[4].w[0] + 164u), c.f[0]);
    st32((c.r[4].w[0] + 168u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    st32((c.r[4].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::sub(c.f[13], c.f[0]);
    st32((c.r[4].w[0] + 176u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 2u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], 0u + 1u);
    c.budget -= 23;
L_002BCC6C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_002BCC9C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_002BCC8C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002BCC8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { goto L_002BCCB0; } }
L_002BCC8C:
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[13], c.f[0]);  if (t) { goto L_002BCCAC; } }
L_002BCC9C:
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.f[2] = c.f[13];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 4;
L_002BCCAC:
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 1;
L_002BCCB0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], ld32((c.r[3].w[0] + 100u)));
    st32((c.r[7].w[0] + 160u), c.f[3]);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[7].w[0] + 164u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCC6Cu | kUnwind; return; } goto L_002BCC6C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCCE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 10;
L_002BCD08:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = 0u;
    c.f[20] = ld32((c.r[17].w[0] + 40u));
    c.f[13] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 15648u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[22] = fp::add(c.f[3], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD4Cu); c.f[21] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x002BCD4Cu) [[unlikely]] return; }
L_002BCD4C:
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.f[12] = c.f[22];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.f[21];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD8Cu); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCD8Cu) [[unlikely]] return; }
L_002BCD8C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCD9Cu) [[unlikely]] return; }
L_002BCD9C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCDB8; } }
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_002BCDFC; } }
L_002BCDB8:
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = ld32((c.r[17].w[0] + 140u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 17;
L_002BCDFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCE10u) [[unlikely]] return; }
L_002BCE10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCD08u | kUnwind; return; } goto L_002BCD08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.f[22] = ld32((c.r[17].w[0] + 32u));
    c.f[20] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = c.f[22];
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE4Cu); c.f[13] = fp::add(c.f[21], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCE4Cu) [[unlikely]] return; }
L_002BCE4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    c.f[13] = c.f[21];
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE6Cu); c.f[12] = fp::add(c.f[22], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCE6Cu) [[unlikely]] return; }
L_002BCE6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::add(c.f[22], c.f[0]);
    c.f[13] = fp::add(c.f[21], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE94u); c.f[12] = fp::sub(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCE94u) [[unlikely]] return; }
L_002BCE94:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCE98:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCEA8u) [[unlikely]] return; }
L_002BCEA8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCED0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 100u);
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_002BCF20; } }
L_002BCED0:
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 100u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = ld32((c.r[17].w[0] + 140u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 20;
L_002BCF20:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCF34u) [[unlikely]] return; }
L_002BCF34:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCE98u | kUnwind; return; } goto L_002BCE98; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BCF70:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[29].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 128u) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[5]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BCFA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[21] = c.f[14];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFD4u); c.f[20] = c.f[15];  if (depth < kMaxDepth) unit_006E(c, 422u, depth + 1u); else { c.pc = 0x002BAAB0u; return; } if (c.pc != 0x002BCFD4u) [[unlikely]] return; }
L_002BCFD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9200u);
    set32(c.r[2], c.r[2].w[0] + 9216u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), c.f[21]);
    st32((c.r[16].w[0] + 108u), c.f[20]);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD004u); st32((c.r[16].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BD004u) [[unlikely]] return; }
L_002BD004:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD014u); st128((c.r[16].w[0] + 128u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BD014u) [[unlikely]] return; }
L_002BD014:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD024u); st128((c.r[16].w[0] + 144u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002BD024u) [[unlikely]] return; }
L_002BD024:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 160u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 176u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD038u); st8((c.r[16].w[0] + 180u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002BD038u) [[unlikely]] return; }
L_002BD038:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD04Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BD04Cu) [[unlikely]] return; }
L_002BD04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD054u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002BD054u) [[unlikely]] return; }
L_002BD054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BD064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD064u);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x002BD064u) [[unlikely]] return; }
L_002BD064:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD070u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002BD070u) [[unlikely]] return; }
L_002BD070:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BD090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BD110; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9200u);
    set32(c.r[2], c.r[2].w[0] + 9216u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD0E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD0E8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0E8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD0E8u) [[unlikely]] return; }
L_002BD0E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0F8u); st32((c.r[17].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x002BD0F8u) [[unlikely]] return; }
L_002BD0F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BD114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BD110u) [[unlikely]] return; }
L_002BD110:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BD114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BD130:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_002BD310; } }
L_002BD158:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_002BD188; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[20] = ld32((c.r[17].w[0] + 40u));
    c.f[22] = fp::add(c.f[3], c.f[2]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[21] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_002BD194; } }
L_002BD188:
    c.f[22] = ld32((c.r[17].w[0] + 32u));
    c.f[21] = ld32((c.r[17].w[0] + 36u));
    c.f[20] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
L_002BD194:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { goto L_002BD1C0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_002BD1C8; } }
L_002BD1C0:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 2;
L_002BD1C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[2].w[0] + 160u), c.f[2]);
    st32((c.r[2].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.f[13] = ld32((c.r[17].w[0] + 56u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1ECu); c.f[12] = ld32((c.r[17].w[0] + 52u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD1ECu) [[unlikely]] return; }
L_002BD1EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD208u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD208u) [[unlikely]] return; }
L_002BD208:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0] + 144u) & ~15u, c.r[2]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    ld128((c.r[17].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[29].w[0] + 108u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 180u));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] & 1ull;  if (t) { goto L_002BD2C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_002BD2A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD2A0; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_002BD2A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD2C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2BCu); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002BD2BCu) [[unlikely]] return; }
L_002BD2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 112u));  if (t) { goto L_002BD2DC; } }
L_002BD2C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2D8u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x002BD2D8u) [[unlikely]] return; }
L_002BD2D8:
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.budget -= 1;
L_002BD2DC:
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2F8u); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x002BD2F8u) [[unlikely]] return; }
L_002BD2F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD30Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD30Cu) [[unlikely]] return; }
L_002BD30C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BD310:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD158u | kUnwind; return; } goto L_002BD158; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BD340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002BD354u) [[unlikely]] return; }
L_002BD354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 9104u);
    set32(c.r[3], c.r[3].w[0] + 9120u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BD418; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 9104u);
    set32(c.r[2], c.r[2].w[0] + 9120u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD3F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3F0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002BD3F0u) [[unlikely]] return; }
L_002BD3F0:
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_002BD3F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD400u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC110u; return; } if (c.pc != 0x002BD400u) [[unlikely]] return; }
L_002BD400:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BD41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BD418u) [[unlikely]] return; }
L_002BD418:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BD41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BD430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BD588; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BD540; } }
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], 0u + 3u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD530; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BD530; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD4AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 168u)));  if (t) { goto L_002BD534; } }
L_002BD4AC:
    set32(c.r[16], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_002BD530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4C0u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x002BD4C0u) [[unlikely]] return; }
L_002BD4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4D0u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0000(c, 76u, depth + 1u); else { c.pc = 0x00100600u; return; } if (c.pc != 0x002BD4D0u) [[unlikely]] return; }
L_002BD4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_002BD508; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_002BD530; } }
L_002BD508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 10;
L_002BD530:
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    c.budget -= 1;
L_002BD534:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_002BD588; } }
L_002BD540:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002BD580; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD580; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), 0u);  if (t) { goto L_002BD584; } }
L_002BD568:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_002BD580:
    st32((c.r[17].w[0] + 168u), 0u);
    c.budget -= 1;
L_002BD584:
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 1;
L_002BD588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD590u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 12u, depth + 1u); else { c.pc = 0x002BC1A0u; return; } if (c.pc != 0x002BD590u) [[unlikely]] return; }
L_002BD590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BD5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 449u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002BD5C4u) [[unlikely]] return; }
L_002BD5C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD5F0:
    st32((c.r[4].w[0] + 164u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 172u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 176u), c.r[7].w[0]);  c.pc = t; return; }
L_002BD600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 80u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD640; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD63C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD63Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002BD63Cu) [[unlikely]] return; }
L_002BD63C:
    st32((c.r[17].w[0] + 160u), 0u);
    c.budget -= 1;
L_002BD640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD648u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002BD648u) [[unlikely]] return; }
L_002BD648:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002BD66C; } }
L_002BD658:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 5;
L_002BD66C:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD658u | kUnwind; return; } goto L_002BD658; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    st32((c.r[17].w[0] + 136u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BD6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_002BD6B0:
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[13]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[14]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.f[0]);  c.pc = t; return; }
L_002BD6E0:
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), c.r[6].w[0]);  c.pc = t; return; }
L_002BD6F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABD0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_002BD700:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB440u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 454u, depth); }
L_002BD710:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBD90u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 493u, depth); }
L_002BD720:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC110u | kUnwind; return; } goto L_002BC110; }
L_002BD730:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC680u | kUnwind; return; } goto L_002BC680; }
L_002BD740:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCB10u | kUnwind; return; } goto L_002BCB10; }
L_002BD750:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD090u | kUnwind; return; } goto L_002BD090; }
L_002BD760:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD3A0u | kUnwind; return; } goto L_002BD3A0; }
L_002BD770:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAED0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 434u, depth); }
L_002BD780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 18u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD798u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002BD798u) [[unlikely]] return; }
L_002BD798:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002BD7C8u) [[unlikely]] return; }
L_002BD7C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002BD7F8u) [[unlikely]] return; }
L_002BD7F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD810:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_002BD820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BD85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD844u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002BD844u) [[unlikely]] return; }
L_002BD844:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0]), 0u);  if (t) { goto L_002BD85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD85Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BD85Cu) [[unlikely]] return; }
L_002BD85C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BD880:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8B4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002BD8B4u) [[unlikely]] return; }
L_002BD8B4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[20].w[0]), 0u);  if (t) { goto L_002BD8D8; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 173u, depth + 1u); else { c.pc = 0x002BDD50u; return; } if (c.pc != 0x002BD8D0u) [[unlikely]] return; }
L_002BD8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002BD924; } }
L_002BD8D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002BD8FC; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 152u, depth + 1u); else { c.pc = 0x002BDA20u; return; } if (c.pc != 0x002BD8F4u) [[unlikely]] return; }
L_002BD8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD920; } }
L_002BD8FC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002BD914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD90Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 163u, depth + 1u); else { c.pc = 0x002BDBB0u; return; } if (c.pc != 0x002BD90Cu) [[unlikely]] return; }
L_002BD90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD920; } }
L_002BD914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD91Cu);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BD91Cu) [[unlikely]] return; }
L_002BD91C:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_002BD920:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002BD924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD92Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 187u, depth + 1u); else { c.pc = 0x002BDF90u; return; } if (c.pc != 0x002BD92Cu) [[unlikely]] return; }
L_002BD92C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD940u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002BD940u) [[unlikely]] return; }
L_002BD940:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_002BD978; } }
L_002BD950:
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
L_002BD978:
    set32(c.r[17], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD950u | kUnwind; return; } goto L_002BD950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BD9E0; } }
L_002BD990:
    set32(c.r[2], c.r[16].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9A4u); set32(c.r[6], c.r[2].w[0] + 86u);  if (depth < kMaxDepth) unit_006F(c, 184u, depth + 1u); else { c.pc = 0x002BDED0u; return; } if (c.pc != 0x002BD9A4u) [[unlikely]] return; }
L_002BD9A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD9DC; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], c.r[17].w[0] << 3);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], 0u - 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[16].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 86u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 12;
L_002BD9DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BD9E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 32u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD990u | kUnwind; return; } goto L_002BD990; } }
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BDA20:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BDAD0; } }
L_002BDA58:
    set32(c.r[2], c.r[19].w[0] << 7);
    set32(c.r[18], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_002BDAB8; } }
L_002BDA68:
    set32(c.r[2], c.r[18].w[0] << 7);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 115u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDAB4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 115u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002BDAB4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA94u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDA94u) [[unlikely]] return; }
L_002BDA94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAA4u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDAA4u) [[unlikely]] return; }
L_002BDAA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAB4u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDAB4u) [[unlikely]] return; }
L_002BDAB4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002BDAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAC0u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDAC0u) [[unlikely]] return; }
L_002BDAC0:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDA68u | kUnwind; return; } goto L_002BDA68; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002BDAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAD8u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDAD8u) [[unlikely]] return; }
L_002BDAD8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDA58u | kUnwind; return; } goto L_002BDA58; } }
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BDB6C; } }
L_002BDAF4:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 115u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_002BDB80; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BDB5C; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { goto L_002BDB5C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BDB5C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[16], c.r[3].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 113u, depth + 1u); else { c.pc = 0x0012D2A0u; return; } if (c.pc != 0x002BDB3Cu) [[unlikely]] return; }
L_002BDB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDB5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_002BDB5C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002BDB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB74u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDB74u) [[unlikely]] return; }
L_002BDB74:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDAF4u | kUnwind; return; } goto L_002BDAF4; } }
L_002BDB80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002BDBB0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BDC9C; } }
L_002BDBE4:
    set32(c.r[2], c.r[19].w[0] << 7);
    set32(c.r[18], c.r[19].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 4270u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_002BDC84; } }
L_002BDBF8:
    set32(c.r[2], c.r[18].w[0] << 7);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDC80; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002BDC80; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC60u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDC60u) [[unlikely]] return; }
L_002BDC60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC70u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDC70u) [[unlikely]] return; }
L_002BDC70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC80u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDC80u) [[unlikely]] return; }
L_002BDC80:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002BDC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC8Cu);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDC8Cu) [[unlikely]] return; }
L_002BDC8C:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDBF8u | kUnwind; return; } goto L_002BDBF8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002BDC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCA4u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDCA4u) [[unlikely]] return; }
L_002BDCA4:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDBE4u | kUnwind; return; } goto L_002BDBE4; } }
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BDD0C; } }
L_002BDCC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21410u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BDD20; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002BDD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD14u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDD14u) [[unlikely]] return; }
L_002BDD14:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDCC0u | kUnwind; return; } goto L_002BDCC0; } }
L_002BDD20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002BDD50:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BDE00; } }
L_002BDD88:
    set32(c.r[2], c.r[19].w[0] << 7);
    set32(c.r[18], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_002BDDE8; } }
L_002BDD98:
    set32(c.r[2], c.r[18].w[0] << 7);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDDE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_002BDDE4; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDC4u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDDC4u) [[unlikely]] return; }
L_002BDDC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDD4u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDDD4u) [[unlikely]] return; }
L_002BDDD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDE4u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x002BDDE4u) [[unlikely]] return; }
L_002BDDE4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002BDDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDF0u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDDF0u) [[unlikely]] return; }
L_002BDDF0:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDD98u | kUnwind; return; } goto L_002BDD98; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002BDE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE08u);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDE08u) [[unlikely]] return; }
L_002BDE08:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDD88u | kUnwind; return; } goto L_002BDD88; } }
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BDE44; } }
L_002BDE24:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 114u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002BDE5C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002BDE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE4Cu);  if (depth < kMaxDepth) unit_005B(c, 404u, depth + 1u); else { c.pc = 0x0026FB90u; return; } if (c.pc != 0x002BDE4Cu) [[unlikely]] return; }
L_002BDE4C:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDE24u | kUnwind; return; } goto L_002BDE24; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BDE5C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BDE60:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { goto L_002BDE94; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002BDE94; } }
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 5;
L_002BDE94:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDE60u | kUnwind; return; } goto L_002BDE60; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002BDED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEECu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002BDEECu) [[unlikely]] return; }
L_002BDEEC:
    set32(c.r[4], c.r[16].w[0] - 86u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 294u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDF1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BDF70; } }
L_002BDF1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002BDF30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BDF70; } }
L_002BDF30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002BDF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002BDF74; } }
L_002BDF40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002BDF50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDF70; } }
L_002BDF50:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BDF70; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 115u, depth + 1u); else { c.pc = 0x0012D300u; return; } if (c.pc != 0x002BDF68u) [[unlikely]] return; }
L_002BDF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDF70; } }
L_002BDF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BDF74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BDF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BDFB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE044; } }
L_002BDFB4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BDFC8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002BE010; } }
L_002BDFC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFD0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002BDFD0u) [[unlikely]] return; }
L_002BDFD0:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 294u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDFF8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BDFF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDFC8u | kUnwind; return; } goto L_002BDFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002BE044; } }
L_002BE010:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BE040; } }
    set32(c.r[4], c.r[16].w[0] + 86u);
    c.budget -= 1;
L_002BE01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 115u, depth + 1u); else { c.pc = 0x0012D300u; return; } if (c.pc != 0x002BE024u) [[unlikely]] return; }
L_002BE024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE030; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BE030:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 86u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE01Cu | kUnwind; return; } goto L_002BE01C; } }
L_002BE040:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BE044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BE060:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002BE090; } }
L_002BE06C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BE08C; } }
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002BE08C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002BE090:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE06Cu | kUnwind; return; } goto L_002BE06C; } }
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002BE0C0; } }
L_002BE0AC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { goto L_002BE0C4; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE0C0:
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 1;
L_002BE0C4:
    set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE0ACu | kUnwind; return; } goto L_002BE0AC; } }
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_002BE0E0:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_002BE110; } }
L_002BE0EC:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BE10C; } }
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_002BE10C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002BE110:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE0ECu | kUnwind; return; } goto L_002BE0EC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE130:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[9], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
L_002BE148:
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;  if (t) { goto L_002BE15C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);  if (t) { goto L_002BE16C; } }
L_002BE15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE16C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - c.r[11].w[0]);  if (t) { goto L_002BE16C; } }
L_002BE16C:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002BE18C; } }
L_002BE180:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_002BE18C; } }
    set32(c.r[6], c.r[11].w[0] - 1u);
    c.budget -= 1;
L_002BE18C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002BE1AC; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[10], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BE1C4; } }
L_002BE1AC:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[10], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE148u | kUnwind; return; } goto L_002BE148; } }
L_002BE1C4:
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_002BE1E0:
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002BE244; } }
L_002BE1F0:
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_002BE208; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_002BE224; } }
L_002BE208:
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002BE220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_002BE224; } }
L_002BE220:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002BE224:
    c.r[6].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002BE238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE244; } }
L_002BE238:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], c.r[2].w[0] << 3);  if (t) { goto L_002BE248; } }
    set32(c.r[2], c.r[8].w[0] - 1u);
    c.budget -= 1;
L_002BE244:
    set32(c.r[6], c.r[2].w[0] << 3);
    c.budget -= 1;
L_002BE248:
    set32(c.r[7], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE1F0u | kUnwind; return; } goto L_002BE1F0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_002BE260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002BE288; } }
L_002BE268:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BE284; } }
    st32((c.r[7].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_002BE284:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002BE288:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE268u | kUnwind; return; } goto L_002BE268; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE2A0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_002BE2C0:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE2F0; } }
L_002BE2CC:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BE2EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE300; } }
L_002BE2EC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002BE2F0:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE2CCu | kUnwind; return; } goto L_002BE2CC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002BE300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE310:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002BE330:
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_002BE364; } }
L_002BE344:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BE360; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002BE360:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002BE364:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE344u | kUnwind; return; } goto L_002BE344; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE380:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002BE388:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE388u | kUnwind; return; } goto L_002BE388; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002BE3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BE3E4; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002BE3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3E0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002BE3E0u) [[unlikely]] return; }
L_002BE3E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BE3E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE400:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[8].w[0] << 2);
    c.budget -= 3;
L_002BE40C:
    set32(c.r[7], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BE420; } }
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002BE420:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE40Cu | kUnwind; return; } goto L_002BE40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002BE44C; } }
L_002BE438:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_002BE450; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE44C:
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 1;
L_002BE450:
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE438u | kUnwind; return; } goto L_002BE438; } }
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_002BE470:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[8], 0u - 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[2], 0u + 30u);
    c.budget -= 5;
L_002BE484:
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[3].d[0] = c.r[6].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_002BE498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 31u);  if (t) { goto L_002BE4A8; } }
L_002BE498:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BE4A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 31u);  if (t) { goto L_002BE4A8; } }
L_002BE4A8:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_002BE4C4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE484u | kUnwind; return; } goto L_002BE484; } }
L_002BE4C4:
    st32((c.r[9].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; return; }
L_002BE4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE4F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27568u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27120u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27312u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27248u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27184u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27440u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27376u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 27056u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 26992u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002BE610:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 250u);  if (t) { goto L_002BE628; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BE64C; } }
L_002BE628:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE650; } }
L_002BE64C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE670u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002BE670u) [[unlikely]] return; }
L_002BE670:
    c.r[1].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BE680; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE680:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BE690:
    ld128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[6].d[0];
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002BE6D8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002BE6D8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BE6D0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002BE6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE6DC; } }
L_002BE6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_002BE6DC; } }
L_002BE6D8:
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 1;
L_002BE6DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE6F0:
    set32(c.r[8], ld32((c.r[4].w[0] + 984u)));
    set32(c.r[3], 0u + 3u);
    c.r[6].d[0] = ld8((c.r[8].w[0] + 368u));
    set32(c.r[7], c.r[8].w[0] + 224u);
    ld128((c.r[8].w[0] + 224u) & ~15u, c.r[4]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; st128((c.r[5].w[0]) & ~15u, c.r[4]);  if (t) { goto L_002BE76C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002BE758; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BE744; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BE730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[5].w[0]));  if (t) { goto L_002BE780; } }
L_002BE730:
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BE77C; } }
L_002BE744:
    c.f[0] = ld32((c.r[8].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_002BE77C; } }
L_002BE758:
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002BE77C; } }
L_002BE76C:
    c.f[0] = ld32((c.r[8].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_002BE77C:
    c.f[1] = ld32((c.r[5].w[0]));
    c.budget -= 1;
L_002BE780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_002BE7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_002BE7BC; } }
L_002BE7A0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BE7BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_002BE7BC; } }
L_002BE7BC:
    st32((c.r[5].w[0]), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C80000u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_002BE7E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_002BE800; } }
L_002BE7E4:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BE800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_002BE800; } }
L_002BE800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[1]);  c.pc = t; return; }
L_002BE810:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE834; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 378u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE834; } }
L_002BE830:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE834:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE840:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE8A4; } }
L_002BE854:
    c.f[2] = ld32((c.r[4].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE8A4; } }
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002BE8A0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE8A0; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE8A4; } }
L_002BE8A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BE8A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE8B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002BE8C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE984; } }
L_002BE8C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BE95C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE938; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002BE914; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BE8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BE984; } }
L_002BE8F0:
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE984; } }
L_002BE914:
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE984; } }
L_002BE938:
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE984; } }
L_002BE95C:
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE984; } }
L_002BE980:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE984:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BE990:
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_002BE9C8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BE9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEA08; } }
L_002BE9C8:
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEA04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEA08; } }
L_002BEA04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BEA08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BEA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002BEA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEA60; } }
L_002BEA34:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 369u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BEA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEA60; } }
L_002BEA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA50u); set32(c.r[5], ld32((c.r[3].w[0] + 240u)));  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x002BEA50u) [[unlikely]] return; }
L_002BEA50:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEA60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BEA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEA70:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEA84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEB60; } }
L_002BEA84:
    c.f[2] = ld32((c.r[4].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);  if (t) { goto L_002BEAB8; } }
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEAB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEB60; } }
L_002BEAB8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEAF0; } }
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_002BEAF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEB60; } }
L_002BEAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_002BEAF4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_002BEB30; } }
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEB2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEB60; } }
L_002BEB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_002BEB30:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEB60; } }
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEB60; } }
L_002BEB5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BEB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BEB70:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEB84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEC24; } }
L_002BEB84:
    set32(c.r[6], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[6].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BEBE0; } }
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEC20; } }
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEC24; } }
L_002BEBE0:
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEC20; } }
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEC24; } }
L_002BEC20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BEC24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BEC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BEC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BED90; } }
L_002BEC50:
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002BECFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC74u);  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x002BEC74u) [[unlikely]] return; }
L_002BEC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BECBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BED90; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BED8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BED94; } }
L_002BECBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BED8C; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BED8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED90; } }
L_002BECFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED04u);  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x002BED04u) [[unlikely]] return; }
L_002BED04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BED4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BED8C; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BED8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED90; } }
L_002BED4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BED8C; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BED8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BED90; } }
L_002BED8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BED90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BED94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEDA0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEDB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEE54; } }
L_002BEDB4:
    set32(c.r[6], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[6].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002BEE10; } }
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEE50; } }
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEE54; } }
L_002BEE10:
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEE50; } }
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEE54; } }
L_002BEE50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BEE54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BEE60:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEED8; } }
L_002BEE74:
    c.f[2] = ld32((c.r[4].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_002BEEA8; } }
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEED8; } }
L_002BEEA8:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BEED4; } }
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BEED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEED8; } }
L_002BEED4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BEED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BEEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BEF08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF000; } }
L_002BEF08:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002BEF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF1Cu); set32(c.r[4], c.r[3].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x002BEF1Cu) [[unlikely]] return; }
L_002BEF1C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF28u); set32(c.r[4], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x002BEF28u) [[unlikely]] return; }
L_002BEF28:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BEF3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF000; } }
L_002BEF3C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002BEF40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[17].w[0] + 224u);  if (t) { goto L_002BEFD8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEFB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BEF90; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BEF6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF000; } }
L_002BEF6C:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002BF004; } }
L_002BEF90:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BEFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF000; } }
L_002BEFB4:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF000; } }
L_002BEFD8:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BEFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF000; } }
L_002BEFFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BF004:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BF020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF034u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002BF034u) [[unlikely]] return; }
L_002BF034:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF054; } }
L_002BF048:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 250ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002BF054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF070:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 253u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 252u);  if (t) { goto L_002BF088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF0A0; } }
L_002BF088:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BF098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF0A0; } }
L_002BF098:
    c.r[2].d[0] = c.r[3].d[0] ^ 251ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002BF0A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF0B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 644u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BF0C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF0E0; } }
L_002BF0C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 6;
L_002BF0E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF0F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF25C; } }
L_002BF100:
    c.f[1] = ld32((c.r[4].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002BF1BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[4].w[0] + 1020u));
    c.f[1] = ld32((c.r[1].w[0] - 26752u));
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.f[3] = fp::add(c.f[1], c.f[2]);
    c.f[2] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2];  if (t) { goto L_002BF144; } }
    c.f[1] = c.f[3];
    c.budget -= 1;
L_002BF144:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[2];  if (t) { goto L_002BF154; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_002BF154:
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26760u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF25C; } }
L_002BF174:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[2];  if (t) { goto L_002BF184; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_002BF184:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[3], c.f[0]);  if (t) { goto L_002BF1A0; } }
L_002BF198:
    c.f[3] = c.f[2];
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 2;
L_002BF1A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF25C; } }
L_002BF1BC:
    c.f[2] = ld32((c.r[4].w[0] + 1020u));
    c.f[1] = ld32((c.r[1].w[0] - 26752u));
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.f[3] = fp::add(c.f[1], c.f[2]);
    c.f[2] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2];  if (t) { goto L_002BF1E0; } }
    c.f[1] = c.f[3];
    c.budget -= 1;
L_002BF1E0:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[2];  if (t) { goto L_002BF1F0; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_002BF1F0:
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26776u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF25C; } }
L_002BF210:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[2];  if (t) { goto L_002BF220; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_002BF220:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[3], c.f[0]);  if (t) { goto L_002BF23C; } }
L_002BF234:
    c.f[3] = c.f[2];
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 2;
L_002BF23C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26784u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF25C; } }
L_002BF258:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF25C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF290; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 224u);  if (t) { goto L_002BF298; } }
L_002BF290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BF3E4; } }
L_002BF298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF2A0u); set32(c.r[5], c.r[5].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x002BF2A0u) [[unlikely]] return; }
L_002BF2A0:
    c.f[2] = ld32((c.r[16].w[0] + 1024u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[4] = ld32((c.r[1].w[0] - 26752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.f[5] = fp::add(c.f[4], c.f[0]);
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = fp::add(c.f[4], c.f[3]);  if (t) { goto L_002BF354; } }
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2];  if (t) { goto L_002BF2DC; } }
    c.f[1] = c.f[5];
    c.budget -= 1;
L_002BF2DC:
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[2];  if (t) { goto L_002BF2EC; } }
    c.f[0] = c.f[5];
    c.budget -= 1;
L_002BF2EC:
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26760u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF3E0; } }
L_002BF30C:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[2];  if (t) { goto L_002BF31C; } }
    c.f[0] = c.f[5];
    c.budget -= 1;
L_002BF31C:
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[5], c.f[0]);  if (t) { goto L_002BF338; } }
L_002BF330:
    c.f[5] = c.f[2];
    c.f[1] = fp::sub(c.f[5], c.f[0]);
    c.budget -= 2;
L_002BF338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF3E0; } }
L_002BF354:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = c.f[2];  if (t) { goto L_002BF364; } }
    c.f[1] = c.f[5];
    c.budget -= 1;
L_002BF364:
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[2];  if (t) { goto L_002BF374; } }
    c.f[0] = c.f[5];
    c.budget -= 1;
L_002BF374:
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26776u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF3E0; } }
L_002BF394:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[2];  if (t) { goto L_002BF3A4; } }
    c.f[0] = c.f[5];
    c.budget -= 1;
L_002BF3A4:
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF3B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[5], c.f[0]);  if (t) { goto L_002BF3C0; } }
L_002BF3B8:
    c.f[5] = c.f[2];
    c.f[1] = fp::sub(c.f[5], c.f[0]);
    c.budget -= 2;
L_002BF3C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26784u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BF3DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF3E0; } }
L_002BF3DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BF3E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF3F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BF414; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002BF41C; } }
L_002BF414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF4B8; } }
L_002BF41C:
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF428u); set32(c.r[4], ld32((c.r[17].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x002BF428u) [[unlikely]] return; }
L_002BF428:
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF46Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x002BF46Cu) [[unlikely]] return; }
L_002BF46C:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 112u);
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
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF4B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BF4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BF4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 10000u);  if (t) { goto L_002BF4F4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BF568; } }
L_002BF4F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10000u);  if (t) { goto L_002BF510; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BF568; } }
L_002BF510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF518u);  if (depth < kMaxDepth) unit_0070(c, 79u, depth + 1u); else { c.pc = 0x002C1900u; return; } if (c.pc != 0x002BF518u) [[unlikely]] return; }
L_002BF518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF530; } }
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002BF568; } }
L_002BF530:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF558; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 224u);  if (t) { goto L_002BF558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF550u); set32(c.r[5], c.r[2].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x002BF550u) [[unlikely]] return; }
L_002BF550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BF56C; } }
L_002BF558:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_002BF568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BF56C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF580:
    set32(c.r[2], ld32((c.r[4].w[0] + 720u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_002BF598; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_002BF5A0; } }
L_002BF598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF628; } }
L_002BF5A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BF5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF628; } }
L_002BF5C0:
    set32(c.r[5], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BF5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF628; } }
L_002BF5D8:
    set32(c.r[5], ld32((c.r[2].w[0] + 464u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BF5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF628; } }
L_002BF5F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BF600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF628; } }
L_002BF600:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 371u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BF618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF628; } }
L_002BF618:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002BF628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BF628; } }
L_002BF628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF630:
    set32(c.r[2], ld32((c.r[4].w[0] + 988u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_002BF65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF65C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF660; } }
L_002BF65C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BF670:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002BF6AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BF724; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002BF724; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF724; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002BF724; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 224u);  if (t) { goto L_002BF724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF710u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002BF710u) [[unlikely]] return; }
L_002BF710:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF724; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002BF724:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF6ACu | kUnwind; return; } goto L_002BF6AC; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BF760:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
L_002BF79C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BF814; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002BF814; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF814; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002BF814; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 224u);  if (t) { goto L_002BF814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF800u); set32(c.r[4], c.r[20].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002BF800u) [[unlikely]] return; }
L_002BF800:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF814; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002BF814:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF79Cu | kUnwind; return; } goto L_002BF79C; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BF850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 17;
L_002BF894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF8E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002BF8E4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[3].w[0] + 224u);  if (t) { goto L_002BF8E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8D0u); set32(c.r[4], c.r[21].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002BF8D0u) [[unlikely]] return; }
L_002BF8D0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF8E4; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002BF8E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF894u | kUnwind; return; } goto L_002BF894; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BF920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull | 40000ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 624u)));
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 17;
L_002BF964:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF9B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002BF9B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[3].w[0] + 224u);  if (t) { goto L_002BF9B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9A0u); set32(c.r[4], c.r[21].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002BF9A0u) [[unlikely]] return; }
L_002BF9A0:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BF9B4; } }
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.f[20] = c.f[0];
    c.budget -= 2;
L_002BF9B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF964u | kUnwind; return; } goto L_002BF964; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BF9F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 10000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 13;
L_002BFA24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFA98; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002BFA98; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 224u);  if (t) { goto L_002BFA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA60u); set32(c.r[4], c.r[21].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002BFA60u) [[unlikely]] return; }
L_002BFA60:
    set32(c.r[2], 0u + 4900u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BFA98; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BFA98; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BFA98:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFA24u | kUnwind; return; } goto L_002BFA24; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BFAD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 10000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 13;
L_002BFB04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFBAC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002BFBAC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFB58; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BFB4C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFB4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002BFB5C; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BFB58:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BFB5C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFBAC; } }
    set32(c.r[5], c.r[3].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB74u); set32(c.r[4], c.r[21].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002BFB74u) [[unlikely]] return; }
L_002BFB74:
    c.r[2].d[0] = 0ull | 40000ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BFBAC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 640u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BFBAC; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BFBAC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFB04u | kUnwind; return; } goto L_002BFB04; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BFBF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BFC98; } }
L_002BFC10:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BFC94; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002BFC94; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFC60; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BFC54; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFC54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002BFC64; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BFC60:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BFC64:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFC94; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC84u);  if (depth < kMaxDepth) unit_0034(c, 156u, depth + 1u); else { c.pc = 0x001D1970u; return; } if (c.pc != 0x002BFC84u) [[unlikely]] return; }
L_002BFC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_002BFCA8; } }
L_002BFC94:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BFC98:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFC10u | kUnwind; return; } goto L_002BFC10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFCA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BFCC0:
    set32(c.r[9], ld32((c.r[4].w[0] + 624u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1641u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_002BFD54; } }
L_002BFCD8:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFD50; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[4].d[0];  if (t) { goto L_002BFD50; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002BFD20; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 371u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BFD14; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFD14:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;  if (t) { goto L_002BFD24; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BFD20:
    c.r[4].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BFD24:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002BFD50; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002BFD50; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BFD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFD64; } }
L_002BFD50:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002BFD54:
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFCD8u | kUnwind; return; } goto L_002BFCD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFD64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFD70:
    set32(c.r[8], ld32((c.r[4].w[0] + 624u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_002BFDFC; } }
L_002BFD84:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFDF8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_002BFDF8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002BFDCC; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 371u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BFDC0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFDC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_002BFDD0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BFDCC:
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BFDD0:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BFDF8; } }
    c.r[3].d[0] = ld64((c.r[2].w[0] + 712u));
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFE0C; } }
L_002BFDF8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002BFDFC:
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFD84u | kUnwind; return; } goto L_002BFD84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFE0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFE20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BFEF0; } }
L_002BFE48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BFEEC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFE90; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BFE84; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFE84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002BFE94; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BFE90:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BFE94:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFEEC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFEEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEB4u);  if (depth < kMaxDepth) unit_0034(c, 145u, depth + 1u); else { c.pc = 0x001D1730u; return; } if (c.pc != 0x002BFEB4u) [[unlikely]] return; }
L_002BFEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFEEC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BFEEC; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002BFF00; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 368u));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002BFEEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002BFF04; } }
L_002BFEEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BFEF0:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFE48u | kUnwind; return; } goto L_002BFE48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002BFF04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BFF20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 5u, depth); } }
L_002BFF50:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFF94; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BFF88; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFF88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_002BFF98; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002BFF94:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BFF98:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFB8u);  if (depth < kMaxDepth) unit_0034(c, 145u, depth + 1u); else { c.pc = 0x001D1730u; return; } if (c.pc != 0x002BFFB8u) [[unlikely]] return; }
L_002BFFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 1555u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1551u);  if (t) { goto L_002BFFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 6u, depth); } }
L_002BFFEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    [[clang::musttail]] return unit_0070(c, 2u, depth);
}

}
