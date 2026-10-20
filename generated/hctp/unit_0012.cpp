#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0012[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0,
    63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327,
};

void unit_0012(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00148000;
    case 2u: goto L_00148010;
    case 3u: goto L_00148028;
    case 4u: goto L_00148040;
    case 5u: goto L_00148060;
    case 6u: goto L_00148080;
    case 7u: goto L_00148088;
    case 8u: goto L_001480C0;
    case 9u: goto L_00148100;
    case 10u: goto L_00148118;
    case 11u: goto L_00148130;
    case 12u: goto L_00148140;
    case 13u: goto L_00148178;
    case 14u: goto L_001481B0;
    case 15u: goto L_001481B8;
    case 16u: goto L_001481D4;
    case 17u: goto L_001481F4;
    case 18u: goto L_00148204;
    case 19u: goto L_00148230;
    case 20u: goto L_00148258;
    case 21u: goto L_0014827C;
    case 22u: goto L_001482A0;
    case 23u: goto L_001482C4;
    case 24u: goto L_001482DC;
    case 25u: goto L_001482F0;
    case 26u: goto L_00148310;
    case 27u: goto L_00148328;
    case 28u: goto L_00148344;
    case 29u: goto L_001483D4;
    case 30u: goto L_001484A0;
    case 31u: goto L_0014851C;
    case 32u: goto L_001485A0;
    case 33u: goto L_00148600;
    case 34u: goto L_00148620;
    case 35u: goto L_00148640;
    case 36u: goto L_00148670;
    case 37u: goto L_00148690;
    case 38u: goto L_001486C0;
    case 39u: goto L_001486F0;
    case 40u: goto L_00148710;
    case 41u: goto L_00148738;
    case 42u: goto L_00148750;
    case 43u: goto L_00148780;
    case 44u: goto L_00148798;
    case 45u: goto L_001487B0;
    case 46u: goto L_001487DC;
    case 47u: goto L_001487F0;
    case 48u: goto L_00148804;
    case 49u: goto L_00148810;
    case 50u: goto L_00148840;
    case 51u: goto L_00148860;
    case 52u: goto L_00148880;
    case 53u: goto L_001488A4;
    case 54u: goto L_001488D0;
    case 55u: goto L_001488D8;
    case 56u: goto L_001488EC;
    case 57u: goto L_00148900;
    case 58u: goto L_00148908;
    case 59u: goto L_00148930;
    case 60u: goto L_00148960;
    case 61u: goto L_0014896C;
    case 62u: goto L_00148978;
    case 63u: goto L_00148980;
    case 64u: goto L_00148990;
    case 65u: goto L_001489B0;
    case 66u: goto L_001489E4;
    case 67u: goto L_001489EC;
    case 68u: goto L_00148A04;
    case 69u: goto L_00148A1C;
    case 70u: goto L_00148A24;
    case 71u: goto L_00148A40;
    case 72u: goto L_00148A50;
    case 73u: goto L_00148A74;
    case 74u: goto L_00148A9C;
    case 75u: goto L_00148AA4;
    case 76u: goto L_00148AB8;
    case 77u: goto L_00148ACC;
    case 78u: goto L_00148AD4;
    case 79u: goto L_00148AF0;
    case 80u: goto L_00148B20;
    case 81u: goto L_00148B2C;
    case 82u: goto L_00148B44;
    case 83u: goto L_00148B60;
    case 84u: goto L_00148B7C;
    case 85u: goto L_00148BE0;
    case 86u: goto L_00148BF4;
    case 87u: goto L_00148C04;
    case 88u: goto L_00148C14;
    case 89u: goto L_00148C34;
    case 90u: goto L_00148C44;
    case 91u: goto L_00148C64;
    case 92u: goto L_00148C78;
    case 93u: goto L_00148C90;
    case 94u: goto L_00148CA0;
    case 95u: goto L_00148CB0;
    case 96u: goto L_00148CB8;
    case 97u: goto L_00148CC0;
    case 98u: goto L_00148CC8;
    case 99u: goto L_00148CF0;
    case 100u: goto L_00148D18;
    case 101u: goto L_00148D28;
    case 102u: goto L_00148D30;
    case 103u: goto L_00148D38;
    case 104u: goto L_00148D50;
    case 105u: goto L_00148D64;
    case 106u: goto L_00148D74;
    case 107u: goto L_00148D80;
    case 108u: goto L_00148DA8;
    case 109u: goto L_00148DB8;
    case 110u: goto L_00148DE0;
    case 111u: goto L_00148DF0;
    case 112u: goto L_00148E04;
    case 113u: goto L_00148E20;
    case 114u: goto L_00148E2C;
    case 115u: goto L_00148E50;
    case 116u: goto L_00148E74;
    case 117u: goto L_00148EA0;
    case 118u: goto L_00148EC0;
    case 119u: goto L_00148EFC;
    case 120u: goto L_00148F08;
    case 121u: goto L_00148F20;
    case 122u: goto L_00148F40;
    case 123u: goto L_00148F74;
    case 124u: goto L_00148F80;
    case 125u: goto L_00148F9C;
    case 126u: goto L_00148FB0;
    case 127u: goto L_00148FC4;
    case 128u: goto L_00148FCC;
    case 129u: goto L_00148FF0;
    case 130u: goto L_00149000;
    case 131u: goto L_00149030;
    case 132u: goto L_0014903C;
    case 133u: goto L_00149078;
    case 134u: goto L_00149080;
    case 135u: goto L_00149090;
    case 136u: goto L_001490B0;
    case 137u: goto L_001490CC;
    case 138u: goto L_00149120;
    case 139u: goto L_00149140;
    case 140u: goto L_00149150;
    case 141u: goto L_00149184;
    case 142u: goto L_0014918C;
    case 143u: goto L_001491A4;
    case 144u: goto L_001491B4;
    case 145u: goto L_001491D0;
    case 146u: goto L_00149200;
    case 147u: goto L_00149214;
    case 148u: goto L_00149254;
    case 149u: goto L_0014925C;
    case 150u: goto L_00149274;
    case 151u: goto L_0014928C;
    case 152u: goto L_0014929C;
    case 153u: goto L_001492C0;
    case 154u: goto L_00149304;
    case 155u: goto L_00149338;
    case 156u: goto L_0014947C;
    case 157u: goto L_001494A0;
    case 158u: goto L_001494B0;
    case 159u: goto L_001494E0;
    case 160u: goto L_00149504;
    case 161u: goto L_0014951C;
    case 162u: goto L_00149540;
    case 163u: goto L_00149684;
    case 164u: goto L_00149698;
    case 165u: goto L_00149760;
    case 166u: goto L_0014977C;
    case 167u: goto L_001497D4;
    case 168u: goto L_001497EC;
    case 169u: goto L_00149820;
    case 170u: goto L_00149844;
    case 171u: goto L_0014985C;
    case 172u: goto L_00149874;
    case 173u: goto L_00149880;
    case 174u: goto L_00149890;
    case 175u: goto L_001498A0;
    case 176u: goto L_001498C4;
    case 177u: goto L_001498DC;
    case 178u: goto L_00149900;
    case 179u: goto L_00149924;
    case 180u: goto L_00149940;
    case 181u: goto L_00149978;
    case 182u: goto L_00149980;
    case 183u: goto L_0014999C;
    case 184u: goto L_001499C8;
    case 185u: goto L_001499E8;
    case 186u: goto L_00149A60;
    case 187u: goto L_00149A80;
    case 188u: goto L_00149AC0;
    case 189u: goto L_00149B20;
    case 190u: goto L_00149B40;
    case 191u: goto L_00149B64;
    case 192u: goto L_00149B7C;
    case 193u: goto L_00149BA0;
    case 194u: goto L_00149BC8;
    case 195u: goto L_00149BE4;
    case 196u: goto L_00149C00;
    case 197u: goto L_00149C30;
    case 198u: goto L_00149C50;
    case 199u: goto L_00149C90;
    case 200u: goto L_00149CAC;
    case 201u: goto L_00149CCC;
    case 202u: goto L_00149CD8;
    case 203u: goto L_00149D50;
    case 204u: goto L_00149D80;
    case 205u: goto L_00149DC4;
    case 206u: goto L_00149DF0;
    case 207u: goto L_00149E08;
    case 208u: goto L_00149E20;
    case 209u: goto L_00149E38;
    case 210u: goto L_00149E50;
    case 211u: goto L_00149E68;
    case 212u: goto L_00149E80;
    case 213u: goto L_00149EB0;
    case 214u: goto L_00149F68;
    case 215u: goto L_00149F8C;
    case 216u: goto L_0014A040;
    case 217u: goto L_0014A100;
    case 218u: goto L_0014A160;
    case 219u: goto L_0014A194;
    case 220u: goto L_0014A220;
    case 221u: goto L_0014A24C;
    case 222u: goto L_0014A2AC;
    case 223u: goto L_0014A2B4;
    case 224u: goto L_0014A3A0;
    case 225u: goto L_0014A3BC;
    case 226u: goto L_0014A3C4;
    case 227u: goto L_0014A3EC;
    case 228u: goto L_0014A420;
    case 229u: goto L_0014A43C;
    case 230u: goto L_0014A44C;
    case 231u: goto L_0014A464;
    case 232u: goto L_0014A478;
    case 233u: goto L_0014A490;
    case 234u: goto L_0014A4C0;
    case 235u: goto L_0014A4F0;
    case 236u: goto L_0014A52C;
    case 237u: goto L_0014A544;
    case 238u: goto L_0014A568;
    case 239u: goto L_0014A63C;
    case 240u: goto L_0014A6B0;
    case 241u: goto L_0014A724;
    case 242u: goto L_0014A7C8;
    case 243u: goto L_0014A804;
    case 244u: goto L_0014A840;
    case 245u: goto L_0014A880;
    case 246u: goto L_0014A8E4;
    case 247u: goto L_0014A930;
    case 248u: goto L_0014A93C;
    case 249u: goto L_0014A960;
    case 250u: goto L_0014A980;
    case 251u: goto L_0014A9A0;
    case 252u: goto L_0014A9AC;
    case 253u: goto L_0014A9D0;
    case 254u: goto L_0014AA40;
    case 255u: goto L_0014AB70;
    case 256u: goto L_0014ABA8;
    case 257u: goto L_0014ABC0;
    case 258u: goto L_0014ABD0;
    case 259u: goto L_0014AC30;
    case 260u: goto L_0014ACA0;
    case 261u: goto L_0014ACC0;
    case 262u: goto L_0014ACF0;
    case 263u: goto L_0014AD04;
    case 264u: goto L_0014ADA0;
    case 265u: goto L_0014ADD0;
    case 266u: goto L_0014ADE8;
    case 267u: goto L_0014AE00;
    case 268u: goto L_0014AE2C;
    case 269u: goto L_0014AEB8;
    case 270u: goto L_0014AEC4;
    case 271u: goto L_0014AEE0;
    case 272u: goto L_0014AF18;
    case 273u: goto L_0014AF30;
    case 274u: goto L_0014AF5C;
    case 275u: goto L_0014B068;
    case 276u: goto L_0014B074;
    case 277u: goto L_0014B090;
    case 278u: goto L_0014B0C8;
    case 279u: goto L_0014B0E0;
    case 280u: goto L_0014B10C;
    case 281u: goto L_0014B140;
    case 282u: goto L_0014B1D8;
    case 283u: goto L_0014B1E4;
    case 284u: goto L_0014B200;
    case 285u: goto L_0014B238;
    case 286u: goto L_0014B250;
    case 287u: goto L_0014B2A0;
    case 288u: goto L_0014B320;
    case 289u: goto L_0014B380;
    case 290u: goto L_0014B3AC;
    case 291u: goto L_0014B500;
    case 292u: goto L_0014B5F4;
    case 293u: goto L_0014B608;
    case 294u: goto L_0014B660;
    case 295u: goto L_0014B6A0;
    case 296u: goto L_0014B6E0;
    case 297u: goto L_0014B710;
    case 298u: goto L_0014B73C;
    case 299u: goto L_0014B750;
    case 300u: goto L_0014B770;
    case 301u: goto L_0014B808;
    case 302u: goto L_0014B81C;
    case 303u: goto L_0014B83C;
    case 304u: goto L_0014B878;
    case 305u: goto L_0014B880;
    case 306u: goto L_0014B888;
    case 307u: goto L_0014B8C0;
    case 308u: goto L_0014B994;
    case 309u: goto L_0014B9A8;
    case 310u: goto L_0014BA58;
    case 311u: goto L_0014BA68;
    case 312u: goto L_0014BAB0;
    case 313u: goto L_0014BCC4;
    case 314u: goto L_0014BCD8;
    case 315u: goto L_0014BD18;
    case 316u: goto L_0014BD20;
    case 317u: goto L_0014BD2C;
    case 318u: goto L_0014BD38;
    case 319u: goto L_0014BDC0;
    case 320u: goto L_0014BDFC;
    case 321u: goto L_0014BE04;
    case 322u: goto L_0014BE10;
    case 323u: goto L_0014BE1C;
    case 324u: goto L_0014BE30;
    case 325u: goto L_0014BF9C;
    case 326u: goto L_0014BFF4;
    case 327u: goto L_0014BFFC;
    default: bad_entry(c, 0x00148000u); return;
    }
L_00148000:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00147FC8u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 327u, depth); } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 4488u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0014804C; } }
L_00148028:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[4], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { goto L_00148048; } }
L_00148040:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0014804C; } }
L_00148048:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0014804C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148028u | kUnwind; return; } goto L_00148028; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4488u)));
    c.budget -= 8;
L_00148080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0])));  if (t) { goto L_0014820C; } }
L_00148088:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], ld32((c.r[18].w[0])));  if (t) { goto L_001480AC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00148154; } }
L_001480AC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 86u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 12u);  if (t) { goto L_00148154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001480C0u);  if (depth < kMaxDepth) unit_0011(c, 240u, depth + 1u); else { c.pc = 0x001473A0u; return; } if (c.pc != 0x001480C0u) [[unlikely]] return; }
L_001480C0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00148154; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00148120; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001480F4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00148130; } }
L_001480F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148100u); set32(c.r[4], c.r[2].w[0] << 8);  if (depth < kMaxDepth) unit_0011(c, 308u, depth + 1u); else { c.pc = 0x00147DA0u; return; } if (c.pc != 0x00148100u) [[unlikely]] return; }
L_00148100:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148118u); set32(c.r[6], c.r[2].w[0] << 8);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00148118u) [[unlikely]] return; }
L_00148118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00148134; } }
L_00148120:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148130u); set32(c.r[6], c.r[2].w[0] << 8);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00148130u) [[unlikely]] return; }
L_00148130:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00148134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148140u); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 276u, depth + 1u); else { c.pc = 0x001478F0u; return; } if (c.pc != 0x00148140u) [[unlikely]] return; }
L_00148140:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), 0u);  if (t) { goto L_00148214; } }
L_00148154:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014820C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0014820C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148178u);  if (depth < kMaxDepth) unit_0012(c, 83u, depth + 1u); else { c.pc = 0x00148B60u; return; } if (c.pc != 0x00148178u) [[unlikely]] return; }
L_00148178:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00148190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014820C; } }
L_00148190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0014820C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 86u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001481B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 228u, depth + 1u); else { c.pc = 0x00147250u; return; } if (c.pc != 0x001481B0u) [[unlikely]] return; }
L_001481B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481B8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0012(c, 93u, depth + 1u); else { c.pc = 0x00148C90u; return; } if (c.pc != 0x001481B8u) [[unlikely]] return; }
L_001481B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[1].w[0] + 20008u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481D4u); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 276u, depth + 1u); else { c.pc = 0x001478F0u; return; } if (c.pc != 0x001481D4u) [[unlikely]] return; }
L_001481D4:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[1].w[0] + 4488u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 32u, depth + 1u); else { c.pc = 0x0014C590u; return; } if (c.pc != 0x001481F4u) [[unlikely]] return; }
L_001481F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 4488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148204u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00148204u) [[unlikely]] return; }
L_00148204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00148218; } }
L_0014820C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148088u | kUnwind; return; } goto L_00148088; } }
L_00148214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00148218:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00148230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20008u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_0014828C; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 4488u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00148284; } }
L_00148258:
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[6].w[0])));  if (t) { goto L_00148270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148284; } }
L_00148270:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014827Cu); st32((c.r[5].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 320u, depth + 1u); else { c.pc = 0x00147ED0u; return; } if (c.pc != 0x0014827Cu) [[unlikely]] return; }
L_0014827C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00148290; } }
L_00148284:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148258u | kUnwind; return; } goto L_00148258; } }
L_0014828C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00148290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001482A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4488u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001482DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001482C4u);  if (depth < kMaxDepth) unit_0012(c, 5u, depth + 1u); else { c.pc = 0x00148060u; return; } if (c.pc != 0x001482C4u) [[unlikely]] return; }
L_001482C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20016u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001482DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001482DCu);  if (depth < kMaxDepth) unit_0012(c, 19u, depth + 1u); else { c.pc = 0x00148230u; return; } if (c.pc != 0x001482DCu) [[unlikely]] return; }
L_001482DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001482F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148310u); set32(c.r[4], c.r[4].w[0] + 19948u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00148310u) [[unlikely]] return; }
L_00148310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20200000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 47u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] | 8224ull;  if (t) { goto L_00148394; } }
L_00148328:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_00148338; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00148338:
    st32((c.r[29].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00148364; } }
L_00148344:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00148370; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);  if (t) { goto L_00148370; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00148364:
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148344u | kUnwind; return; } goto L_00148344; } }
L_00148370:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_001483A0; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00148394:
    c.r[2].d[0] = c.r[8].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148328u | kUnwind; return; } goto L_00148328; } }
L_001483A0:
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001483B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001485E4; } }
L_001483B4:
    set32(c.r[3], ld32((c.r[1].w[0] + 15808u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001483C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001485E4; } }
L_001483C8:
    set32(c.r[6], c.r[4].w[0] - 2u);
    set32(c.r[9], 0u + 255u);
    set32(c.r[10], 0u - 1u);
    c.budget -= 3;
L_001483D4:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[10].d[0];  if (t) { goto L_001483E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001485E4; } }
L_001483E8:
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[9].d[0];  if (t) { goto L_00148404; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 19944u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 4;
L_00148404:
    c.r[8].d[0] = ld8((c.r[3].w[0] + 5u));
    c.r[5].d[0] = c.r[8].d[0] << 57;
    c.r[5].d[0] = c.r[5].d[0] >> 61;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[5], c.r[2].w[0] << 2);  if (t) { goto L_00148430; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001483D4u | kUnwind; return; } goto L_001483D4; } }
L_00148430:
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00148458; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00148470; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001483D4u | kUnwind; return; } goto L_001483D4; } }
L_00148458:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001483D4u | kUnwind; return; } goto L_001483D4; } }
L_00148470:
    c.r[2].d[0] = c.r[8].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { goto L_0014857C; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], 0u + 32u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_001484E8; } }
L_001484A0:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;  if (t) { goto L_001484F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_001484C0; } }
    set32(c.r[2], c.r[5].w[0] - 87u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001484D0; } }
L_001484C0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] - 48u);  if (t) { goto L_001484CC; } }
    set32(c.r[2], c.r[5].w[0] - 55u);
    c.budget -= 1;
L_001484CC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001484D0:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[7].w[0] << 4);
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
L_001484E8:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001484A0u | kUnwind; return; } goto L_001484A0; } }
L_001484F4:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[6].d[0] = c.r[7].d[0] & 65535ull;
    c.r[7].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[4], 0u - 2048u);
    c.r[5].d[0] = c.r[5].d[0] & 4095ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_00148568; } }
L_0014851C:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0014854C; } }
    set32(c.r[4], c.r[7].w[0] + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 19936u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 19936u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19940u), c.r[3].w[0]);  if (t) { goto L_001485E4; } }
L_0014854C:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] >> 11);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_00148568:
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014851Cu | kUnwind; return; } goto L_0014851C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001485E4; } }
L_0014857C:
    c.r[4].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[5], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[3].w[0] + 8u);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_001485D8; } }
L_001485A0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001485D4; } }
    c.r[4].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 19936u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[1].w[0] + 19936u), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19940u), c.r[3].w[0]);  if (t) { goto L_001485E4; } }
L_001485D4:
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 1;
L_001485D8:
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001485A0u | kUnwind; return; } goto L_001485A0; } }
L_001485E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00148600:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[4], c.r[4].w[0] + 12976u);
    set32(c.r[5], c.r[5].w[0] - 31168u);
    set32(c.r[6], 0u + 88u);
    c.budget -= 7;
    { set32(c.r[7], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00100720u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 86u, depth); }
L_00148620:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[4], c.r[4].w[0] + 4512u);
    set32(c.r[5], c.r[5].w[0] - 31168u);
    set32(c.r[6], 0u + 88u);
    c.budget -= 7;
    { set32(c.r[7], 0u + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00100720u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 86u, depth); }
L_00148640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00148674; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00148670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148670u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00148670u) [[unlikely]] return; }
L_00148670:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00148674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00148690:
    st32((c.r[4].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st16((c.r[4].w[0] + 86u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_001486C0:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_0012[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001486F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18560u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st64((c.r[4].w[0] + 8u), 0ull);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00148710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 18560u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[4].w[0] + 8u), 0ull);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148738u); st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x00148738u) [[unlikely]] return; }
L_00148738:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00148750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148798; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 18560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148780u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 179u, depth + 1u); else { c.pc = 0x00146C60u; return; } if (c.pc != 0x00148780u) [[unlikely]] return; }
L_00148780:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0014879C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00148798u) [[unlikely]] return; }
L_00148798:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014879C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001487B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00148868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001487DCu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x001487DCu) [[unlikely]] return; }
L_001487DC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_001487F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001487F0u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x001487F0u) [[unlikely]] return; }
L_001487F0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001487F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { goto L_00148808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148804u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 179u, depth + 1u); else { c.pc = 0x00146C60u; return; } if (c.pc != 0x00148804u) [[unlikely]] return; }
L_00148804:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_00148808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148810u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00148810u) [[unlikely]] return; }
L_00148810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[2], c.r[2].w[0] - 31040u);
    st32((c.r[29].w[0] + 72u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 76u), 0u);  if (t) { goto L_0014884C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148840u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 297u, depth + 1u); else { c.pc = 0x00147C80u; return; } if (c.pc != 0x00148840u) [[unlikely]] return; }
L_00148840:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_00148868; } }
L_0014884C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148860u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 293u, depth + 1u); else { c.pc = 0x00147C00u; return; } if (c.pc != 0x00148860u) [[unlikely]] return; }
L_00148860:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 80u));
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 2;
L_00148868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00148880:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488A4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x001488A4u) [[unlikely]] return; }
L_001488A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18592u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488D0u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001488D0u) [[unlikely]] return; }
L_001488D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 290u, depth + 1u); else { c.pc = 0x00147BB0u; return; } if (c.pc != 0x001488D8u) [[unlikely]] return; }
L_001488D8:
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[2], 0u - 2048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488ECu); c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x001488ECu) [[unlikely]] return; }
L_001488EC:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148900u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x00148900u) [[unlikely]] return; }
L_00148900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148908u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00148908u) [[unlikely]] return; }
L_00148908:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00148930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18592u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148960u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00148960u) [[unlikely]] return; }
L_00148960:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014896Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0014896Cu) [[unlikely]] return; }
L_0014896C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148978u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00148978u) [[unlikely]] return; }
L_00148978:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_00148980:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00148994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148990u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00148990u) [[unlikely]] return; }
L_00148990:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00148994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001489B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489E4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001489E4u) [[unlikely]] return; }
L_001489E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001489ECu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001489ECu) [[unlikely]] return; }
L_001489EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00148A04; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x00148A04u) [[unlikely]] return; }
L_00148A04:
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00148A1Cu) [[unlikely]] return; }
L_00148A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A24u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00148A24u) [[unlikely]] return; }
L_00148A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00148A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148A50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A74u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00148A74u) [[unlikely]] return; }
L_00148A74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18608u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A9Cu); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00148A9Cu) [[unlikely]] return; }
L_00148A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148AA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 290u, depth + 1u); else { c.pc = 0x00147BB0u; return; } if (c.pc != 0x00148AA4u) [[unlikely]] return; }
L_00148AA4:
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[2], 0u - 2048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148AB8u); c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00148AB8u) [[unlikely]] return; }
L_00148AB8:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148ACCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x00148ACCu) [[unlikely]] return; }
L_00148ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148AD4u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00148AD4u) [[unlikely]] return; }
L_00148AD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00148AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148B44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18608u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B20u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00148B20u) [[unlikely]] return; }
L_00148B20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00148B2Cu) [[unlikely]] return; }
L_00148B2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00148B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00148B44u) [[unlikely]] return; }
L_00148B44:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00148B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00148B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00148B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00148BC8; } }
L_00148B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B7Cu);  if (depth < kMaxDepth) unit_00AD(c, 161u, depth + 1u); else { c.pc = 0x003B5668u; return; } if (c.pc != 0x00148B7Cu) [[unlikely]] return; }
L_00148B7C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00148BC0; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00148BB8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00148BB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00148BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148BC8; } }
L_00148BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00148BC4; } }
L_00148BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00148BC4; } }
L_00148BC0:
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_00148BC4:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00148BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00148BE0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148BF4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00148BF4u) [[unlikely]] return; }
L_00148BF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C04u); set32(c.r[5], c.r[5].w[0] - 12864u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00148C04u) [[unlikely]] return; }
L_00148C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148C24; } }
L_00148C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148C24; } }
    set32(c.r[3], 0u + 47u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00148C24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C34u); set32(c.r[5], c.r[5].w[0] - 12856u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00148C34u) [[unlikely]] return; }
L_00148C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148C14u | kUnwind; return; } goto L_00148C14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_00148C70; } }
L_00148C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00148C54; } }
    set32(c.r[3], 0u + 92u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00148C54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C64u); set32(c.r[5], c.r[5].w[0] - 12848u);  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x00148C64u) [[unlikely]] return; }
L_00148C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148C44u | kUnwind; return; } goto L_00148C44; } }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_00148C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 56u, depth + 1u); else { c.pc = 0x003B49E8u; return; } if (c.pc != 0x00148C78u) [[unlikely]] return; }
L_00148C78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00148C90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AD(c, 77u, depth); }
L_00148CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00148CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CB8u);  if (depth < kMaxDepth) unit_00AD(c, 490u, depth + 1u); else { c.pc = 0x003B7FB0u; return; } if (c.pc != 0x00148CB8u) [[unlikely]] return; }
L_00148CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CC0u);  if (depth < kMaxDepth) unit_00BA(c, 338u, depth + 1u); else { c.pc = 0x003EA680u; return; } if (c.pc != 0x00148CC0u) [[unlikely]] return; }
L_00148CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 161u, depth + 1u); else { c.pc = 0x003B5668u; return; } if (c.pc != 0x00148CC8u) [[unlikely]] return; }
L_00148CC8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148CB0u | kUnwind; return; } goto L_00148CB0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00148CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 143u, depth + 1u); else { c.pc = 0x003B53E0u; return; } if (c.pc != 0x00148D18u) [[unlikely]] return; }
L_00148D18:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 114u, depth + 1u); else { c.pc = 0x003B50C0u; return; } if (c.pc != 0x00148D28u) [[unlikely]] return; }
L_00148D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 94u, depth + 1u); else { c.pc = 0x00148CA0u; return; } if (c.pc != 0x00148D30u) [[unlikely]] return; }
L_00148D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 159u, depth + 1u); else { c.pc = 0x003B5638u; return; } if (c.pc != 0x00148D38u) [[unlikely]] return; }
L_00148D38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00148D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00148D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D64u);  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5100u; return; } if (c.pc != 0x00148D64u) [[unlikely]] return; }
L_00148D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00148D78; } }
L_00148D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D74u);  if (depth < kMaxDepth) unit_00AD(c, 126u, depth + 1u); else { c.pc = 0x003B51F0u; return; } if (c.pc != 0x00148D74u) [[unlikely]] return; }
L_00148D74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00148D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00148D80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DA8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 143u, depth + 1u); else { c.pc = 0x003B53E0u; return; } if (c.pc != 0x00148DA8u) [[unlikely]] return; }
L_00148DA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148DB8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 114u, depth + 1u); else { c.pc = 0x003B50C0u; return; } if (c.pc != 0x00148DB8u) [[unlikely]] return; }
L_00148DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00148DE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AD(c, 155u, depth); }
L_00148DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E04u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0012(c, 85u, depth + 1u); else { c.pc = 0x00148BE0u; return; } if (c.pc != 0x00148E04u) [[unlikely]] return; }
L_00148E04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00148E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00148E30; } }
L_00148E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E20u);  if (depth < kMaxDepth) unit_0012(c, 110u, depth + 1u); else { c.pc = 0x00148DE0u; return; } if (c.pc != 0x00148E20u) [[unlikely]] return; }
L_00148E20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 93u, depth + 1u); else { c.pc = 0x00148C90u; return; } if (c.pc != 0x00148E2Cu) [[unlikely]] return; }
L_00148E2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00148E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00148E50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E74u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00148E74u) [[unlikely]] return; }
L_00148E74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 18544u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148EA0u); st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 122u, depth + 1u); else { c.pc = 0x00148F40u; return; } if (c.pc != 0x00148EA0u) [[unlikely]] return; }
L_00148EA0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00148EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18544u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00148EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148EFCu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00148EFCu) [[unlikely]] return; }
L_00148EFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00148F08u) [[unlikely]] return; }
L_00148F08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00148F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00148F20u) [[unlikely]] return; }
L_00148F20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00148F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00148F40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F74u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00148F74u) [[unlikely]] return; }
L_00148F74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F80u); st32((c.r[17].w[0] + 40u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0011(c, 290u, depth + 1u); else { c.pc = 0x00147BB0u; return; } if (c.pc != 0x00148F80u) [[unlikely]] return; }
L_00148F80:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[17].w[0] + 36u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F9Cu); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00148F9Cu) [[unlikely]] return; }
L_00148F9C:
    set32(c.r[3], c.r[18].w[0] + 2047u);
    set32(c.r[2], 0u - 2048u);
    c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FB0u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00148FB0u) [[unlikely]] return; }
L_00148FB0:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x00148FC4u) [[unlikely]] return; }
L_00148FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148FCCu); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00148FCCu) [[unlikely]] return; }
L_00148FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00148FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18528u);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st8((c.r[4].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_00149030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_0014903C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00149090; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18528u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0014907C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149078u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00149078u) [[unlikely]] return; }
L_00149078:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0014907C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 1;
L_00149080:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00149094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149090u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00149090u) [[unlikely]] return; }
L_00149090:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00149094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001490B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001490CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 295u, depth + 1u); else { c.pc = 0x0014B6A0u; return; } if (c.pc != 0x001490CCu) [[unlikely]] return; }
L_001490CC:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001490E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149104; } }
L_001490E4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 22u));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
L_00149104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
L_00149140:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149150u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00149150u) [[unlikely]] return; }
L_00149150:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00149164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001491B4; } }
L_00149164:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149184; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149184u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00149184u) [[unlikely]] return; }
L_00149184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014918Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014918Cu) [[unlikely]] return; }
L_0014918C:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491A4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x001491A4u) [[unlikely]] return; }
L_001491A4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491B4u); st8((c.r[19].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0012(c, 136u, depth + 1u); else { c.pc = 0x001490B0u; return; } if (c.pc != 0x001491B4u) [[unlikely]] return; }
L_001491B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001491D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149200u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00149200u) [[unlikely]] return; }
L_00149200:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0014921C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149214u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x00149214u) [[unlikely]] return; }
L_00149214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00149224; } }
L_0014921C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00149224:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00149234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014929C; } }
L_00149234:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149254; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149254u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00149254u) [[unlikely]] return; }
L_00149254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014925Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014925Cu) [[unlikely]] return; }
L_0014925C:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x00149274u) [[unlikely]] return; }
L_00149274:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0014928C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014928Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0014928Cu) [[unlikely]] return; }
L_0014928C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014929Cu); st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0012(c, 136u, depth + 1u); else { c.pc = 0x001490B0u; return; } if (c.pc != 0x0014929Cu) [[unlikely]] return; }
L_0014929C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001492C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001492FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149480; } }
L_001492FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149304u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 295u, depth + 1u); else { c.pc = 0x0014B6A0u; return; } if (c.pc != 0x00149304u) [[unlikely]] return; }
L_00149304:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[19].w[0] + 28u), c.r[16].w[0]);  if (t) { goto L_00149318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149480; } }
L_00149318:
    set32(c.r[2], 0u + 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149338u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 297u, depth + 1u); else { c.pc = 0x0014B710u; return; } if (c.pc != 0x00149338u) [[unlikely]] return; }
L_00149338:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 4u));
    set32(c.r[4], 0u - 5u);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    set32(c.r[2], 0u - 25u);
    c.r[6].d[0] = c.r[5].d[0] << 61;
    st64((c.r[19].w[0]), c.r[3].d[0]);
    c.r[5].d[0] = c.r[5].d[0] << 59;
    c.r[3].d[0] = c.r[6].d[0] >> 63;
    c.r[6].d[0] = c.r[5].d[0] >> 62;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[6].d[0] & 3ull;
    c.r[6].d[0] = ld8((c.r[19].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 4u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 20u));
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 22u));
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 48u), 0u);
    st32((c.r[19].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 32;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[19].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_001493C8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] & 16383ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001493CC; } }
L_001493C8:
    st16((c.r[19].w[0] + 64u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001493CC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_001493E8; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] << 13;
    c.r[2].d[0] = c.r[2].d[0] >> 50;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001493EC; } }
L_001493E8:
    st16((c.r[19].w[0] + 66u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_001493EC:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    c.r[3].d[0] = c.r[2].d[0] | 31ull;
    c.r[6].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[4], 0u - 16384u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 16383ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 66u));
    c.r[4].d[0] = ld64((c.r[19].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 16383ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[19].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[19].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 68u));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014946C; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 48u));
    st64((c.r[19].w[0] + 8u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 56u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[19].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_00149474; } }
L_0014946C:
    st64((c.r[19].w[0] + 8u), 0ull);
    st64((c.r[19].w[0] + 16u), 0ull);
    c.budget -= 2;
L_00149474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014947Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 157u, depth + 1u); else { c.pc = 0x001494A0u; return; } if (c.pc != 0x0014947Cu) [[unlikely]] return; }
L_0014947C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00149480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001494A0:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BEA0u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 580u, depth); }
L_001494B0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), 0u);  c.pc = t; return; }
L_001494E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014951C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149504u);  if (depth < kMaxDepth) unit_0012(c, 169u, depth + 1u); else { c.pc = 0x00149820u; return; } if (c.pc != 0x00149504u) [[unlikely]] return; }
L_00149504:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00149520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014951Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0014951Cu) [[unlikely]] return; }
L_0014951C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00149520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149540:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52480000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17241ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014958C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), 0u);  if (t) { goto L_001495A0; } }
L_0014958C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x54590000u);
    c.r[2].d[0] = c.r[2].d[0] | 16964ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001495A0; } }
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001495A0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 12832u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[17], c.r[17].w[0] + 10u);  if (t) { goto L_001495F4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00149610; } }
L_001495F4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00149610:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00149640; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0014965C; } }
L_00149640:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0014965C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149684u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00149684u) [[unlikely]] return; }
L_00149684:
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00149734; } }
L_00149698:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    st16((c.r[7].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 6u));
    st16((c.r[7].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 39;
L_00149734:
    c.r[3].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149698u | kUnwind; return; } goto L_00149698; } }
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_001497AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149760u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00149760u) [[unlikely]] return; }
L_00149760:
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[7], ld32((c.r[20].w[0] + 16u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001497A0; } }
L_0014977C:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 9;
L_001497A0:
    c.r[3].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014977Cu | kUnwind; return; } goto L_0014977C; } }
L_001497AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 1);  if (t) { goto L_001497EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001497D4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001497D4u) [[unlikely]] return; }
L_001497D4:
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 2u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001497ECu); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001497ECu) [[unlikely]] return; }
L_001497EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00149820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149844u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00149844u) [[unlikely]] return; }
L_00149844:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014985C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014985Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0014985Cu) [[unlikely]] return; }
L_0014985C:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149874u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00149874u) [[unlikely]] return; }
L_00149874:
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_00149880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149890:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001498A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001498DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498C4u);  if (depth < kMaxDepth) unit_0012(c, 178u, depth + 1u); else { c.pc = 0x00149900u; return; } if (c.pc != 0x001498C4u) [[unlikely]] return; }
L_001498C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001498E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001498DCu) [[unlikely]] return; }
L_001498DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001498E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149924u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00149924u) [[unlikely]] return; }
L_00149924:
    st32((c.r[16].w[0] + 4u), 0u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00149A44; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00149A44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149978u);  if (depth < kMaxDepth) unit_0012(c, 178u, depth + 1u); else { c.pc = 0x00149900u; return; } if (c.pc != 0x00149978u) [[unlikely]] return; }
L_00149978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00149980u) [[unlikely]] return; }
L_00149980:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014999Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0014999Cu) [[unlikely]] return; }
L_0014999C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 40u), c.r[4].w[0]);  if (t) { goto L_00149A24; } }
L_001499C8:
    set32(c.r[4], ld32((c.r[5].w[0] + 40u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00149A10; } }
L_001499E8:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
L_00149A10:
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001499E8u | kUnwind; return; } goto L_001499E8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00149A24:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001499C8u | kUnwind; return; } goto L_001499C8; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00149A44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00149A60:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149A70; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_00149A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149A80:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00149AA0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149AA8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00149AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149AB8; } }
L_00149AA8:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
L_00149AB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149B20u); st32((c.r[4].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 228u, depth + 1u); else { c.pc = 0x0014A420u; return; } if (c.pc != 0x00149B20u) [[unlikely]] return; }
L_00149B20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00149B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149B64u);  if (depth < kMaxDepth) unit_0012(c, 193u, depth + 1u); else { c.pc = 0x00149BA0u; return; } if (c.pc != 0x00149B64u) [[unlikely]] return; }
L_00149B64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00149B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149B7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00149B7Cu) [[unlikely]] return; }
L_00149B7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00149B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BC8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00149BC8u) [[unlikely]] return; }
L_00149BC8:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);  if (t) { goto L_00149BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BE4u); set32(c.r[5], c.r[5].w[0] - 25600u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x00149BE4u) [[unlikely]] return; }
L_00149BE4:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00149C34; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00149C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149C30u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00149C30u) [[unlikely]] return; }
L_00149C30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00149C34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00149D28; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_00149C90; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149C90u); set32(c.r[5], c.r[5].w[0] - 25600u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x00149C90u) [[unlikely]] return; }
L_00149C90:
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[19].w[0] << 7);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149CACu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00149CACu) [[unlikely]] return; }
L_00149CAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25264u);
    set32(c.r[6], c.r[6].w[0] - 25600u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149CCCu); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00149CCCu) [[unlikely]] return; }
L_00149CCC:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00149CF8; } }
L_00149CD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] << 7);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 8;
L_00149CF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149CD8u | kUnwind; return; } goto L_00149CD8; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 73u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_00149D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00149D50:
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 112u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 116u), 0u);  c.pc = t; return; }
L_00149D80:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 73u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014A140; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00149DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0014A144; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00149DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_0014A0F4; } }
L_00149DC4:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[17].w[0] << 7);
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 448u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149DF0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 235u, depth + 1u); else { c.pc = 0x0014A4F0u; return; } if (c.pc != 0x00149DF0u) [[unlikely]] return; }
L_00149DF0:
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 432u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E08u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 235u, depth + 1u); else { c.pc = 0x0014A4F0u; return; } if (c.pc != 0x00149E08u) [[unlikely]] return; }
L_00149E08:
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E20u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0012(c, 235u, depth + 1u); else { c.pc = 0x0014A4F0u; return; } if (c.pc != 0x00149E20u) [[unlikely]] return; }
L_00149E20:
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E38u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0012(c, 235u, depth + 1u); else { c.pc = 0x0014A4F0u; return; } if (c.pc != 0x00149E38u) [[unlikely]] return; }
L_00149E38:
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E50u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0012(c, 235u, depth + 1u); else { c.pc = 0x0014A4F0u; return; } if (c.pc != 0x00149E50u) [[unlikely]] return; }
L_00149E50:
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E68u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0012(c, 235u, depth + 1u); else { c.pc = 0x0014A4F0u; return; } if (c.pc != 0x00149E68u) [[unlikely]] return; }
L_00149E68:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00149E9C; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149E80u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 76u, depth + 1u); else { c.pc = 0x00145720u; return; } if (c.pc != 0x00149E80u) [[unlikely]] return; }
L_00149E80:
    set32(c.r[3], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[18].w[0] + 32u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_00149EF8; } }
L_00149E9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[19].w[0] << 7);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_00149EB0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149EB0u | kUnwind; return; } goto L_00149EB0; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 11;
L_00149EF8:
    set32(c.r[2], c.r[29].w[0] + 448u);
    set32(c.r[6], c.r[29].w[0] + 472u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[29].w[0] + 464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[17].w[0] << 7);
    st32((c.r[6].w[0]), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] - 12760u));
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    c.f[3] = ld32((c.r[29].w[0] + 476u));
    c.f[2] = ld32((c.r[29].w[0] + 472u));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 164u), c.f[3]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F68u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x00149F68u) [[unlikely]] return; }
L_00149F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F8Cu); st32((c.r[29].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x00149F8Cu) [[unlikely]] return; }
L_00149F8C:
    set32(c.r[3], c.r[29].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 45;
L_0014A040:
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[16].w[0]) & ~15u, c.r[6]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], c.r[29].w[0] + 404u);
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    set32(c.r[7], c.r[16].w[0] + 92u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 400u));
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 401u));
    st8((c.r[16].w[0] + 89u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 402u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 403u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 45;
L_0014A0F4:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149DC4u | kUnwind; return; } goto L_00149DC4; } }
L_0014A100:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014A134; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0014A12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), 0u);  if (t) { goto L_0014A134; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0014A12C:
    st8((c.r[18].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0014A134:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 3;
L_0014A140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0014A144:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_0014A160:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014A374; } }
    set32(c.r[19], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0014A364; } }
L_0014A194:
    set32(c.r[7], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[7].w[0] << 7);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[6].w[0] + c.r[4].w[0]);  if (t) { goto L_0014A360; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    set32(c.r[9], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    set32(c.r[8], c.r[29].w[0] + 216u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[17].w[0] + 88u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[9].w[0]), c.f[1]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[8].w[0]), c.f[1]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 23;
L_0014A220:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A220u | kUnwind; return; } goto L_0014A220; } }
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 200u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
L_0014A24C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A24Cu | kUnwind; return; } goto L_0014A24C; } }
    ld128((c.r[17].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    st32((c.r[16].w[0] + 164u), c.f[1]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = ld32((c.r[29].w[0] + 216u));
    c.f[13] = ld32((c.r[29].w[0] + 220u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A2ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014A2ACu) [[unlikely]] return; }
L_0014A2AC:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 2;
L_0014A2B4:
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A2B4u | kUnwind; return; } goto L_0014A2B4; } }
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[16].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 200u));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 203u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 202u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 201u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[16].w[0] + 144u), c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[3]);
    st32((c.r[16].w[0] + 152u), c.f[2]);
    st32((c.r[16].w[0] + 156u), c.f[1]);
    c.budget -= 36;
L_0014A360:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0014A364:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A194u | kUnwind; return; } goto L_0014A194; } }
L_0014A374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0014A3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014A400; } }
L_0014A3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0014A3F0; } }
L_0014A3C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014A3EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A3ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014A3ECu) [[unlikely]] return; }
L_0014A3EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0014A3F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A3C4u | kUnwind; return; } goto L_0014A3C4; } }
L_0014A400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014A420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
L_0014A43C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014A44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A44Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0014A44Cu) [[unlikely]] return; }
L_0014A44C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0014A478; } }
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0014A464u) [[unlikely]] return; }
L_0014A464:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0014A478u) [[unlikely]] return; }
L_0014A478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014A490:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014A4B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 4;
L_0014A4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014A4C0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0014A4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0014A4DC; } }
L_0014A4D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    c.budget -= 3;
L_0014A4DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  c.pc = t; return; }
L_0014A4F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A52Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 247u, depth + 1u); else { c.pc = 0x0014A930u; return; } if (c.pc != 0x0014A52Cu) [[unlikely]] return; }
L_0014A52C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A544u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 251u, depth + 1u); else { c.pc = 0x0014A9A0u; return; } if (c.pc != 0x0014A544u) [[unlikely]] return; }
L_0014A544:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0014A90C; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 12800u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_0012[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014A568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A614; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014A600; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0014A594; } }
    c.f[2] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0]));  if (t) { goto L_0014A5D0; } }
L_0014A594:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] - c.r[3].w[0]);  if (t) { goto L_0014A5B0; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A5CC; } }
L_0014A5B0:
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 7;
L_0014A5CC:
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 1;
L_0014A5D0:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_0014A6A4; } }
L_0014A600:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_0014A6A4; } }
L_0014A614:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014A69C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0014A63C; } }
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_0014A6A4; } }
L_0014A63C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014A654; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0]));  if (t) { goto L_0014A684; } }
L_0014A654:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0014A668; } }
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A680; } }
L_0014A668:
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 6;
L_0014A680:
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_0014A684:
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_0014A6A4; } }
L_0014A69C:
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 2;
L_0014A6A4:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0]), c.r[3].d[0]);  if (t) { goto L_0014A910; } }
L_0014A6B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A7EC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0014A7C8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0014A6DC; } }
    c.f[3] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0014A718; } }
L_0014A6DC:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] - c.r[3].w[0]);  if (t) { goto L_0014A6F8; } }
    c.f[3] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A714; } }
L_0014A6F8:
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.budget -= 7;
L_0014A714:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014A718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
L_0014A724:
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0; c.f[2] = fp::mul(c.f[3], c.f[1]);  if (t) { goto L_0014A758; } }
    c.f[1] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0014A774; } }
L_0014A758:
    set32(c.r[5], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0014A774:
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014A794; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);  if (t) { goto L_0014A7AC; } }
L_0014A794:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[29].w[0]);
    c.budget -= 6;
L_0014A7AC:
    st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A724u | kUnwind; return; } goto L_0014A724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0014A904; } }
L_0014A7C8:
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A7C8u | kUnwind; return; } goto L_0014A7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A900; } }
L_0014A7EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0014A8E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0014A828; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014A804:
    set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A804u | kUnwind; return; } goto L_0014A804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A900; } }
L_0014A828:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014A840; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0014A870; } }
L_0014A840:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0014A854; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A86C; } }
L_0014A854:
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 6;
L_0014A86C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014A870:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_0014A880:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014A8B0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[6].w[0] + c.r[29].w[0]);  if (t) { goto L_0014A8C8; } }
L_0014A8B0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[29].w[0]);
    c.budget -= 6;
L_0014A8C8:
    st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A880u | kUnwind; return; } goto L_0014A880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A900; } }
L_0014A8E4:
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 96u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A8E4u | kUnwind; return; } goto L_0014A8E4; } }
L_0014A900:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0014A904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0]), c.r[3].d[0]);  if (t) { goto L_0014A910; } }
L_0014A90C:
    st64((c.r[18].w[0]), 0ull);
    c.budget -= 1;
L_0014A910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014A930:
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0014A98C; } }
L_0014A93C:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0014A988; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_0014A97C; } }
L_0014A960:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014A978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A998; } }
L_0014A978:
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_0014A97C:
    c.r[3].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0014A980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A960u | kUnwind; return; } goto L_0014A960; } }
L_0014A988:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0014A98C:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A93Cu | kUnwind; return; } goto L_0014A93C; } }
L_0014A998:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014A9A0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0014AA20; } }
L_0014A9AC:
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[9], c.r[10].w[0] << 4);
    set32(c.r[4], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0014AA1C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0])));  if (t) { goto L_0014AA00; } }
L_0014A9D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], c.r[2].w[0] + 16u);
    c.r[1].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014A9FC; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014A9FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014AA2C; } }
L_0014A9FC:
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_0014AA00:
    c.r[3].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A9D0u | kUnwind; return; } goto L_0014A9D0; } }
    set32(c.r[2], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 16u);  if (t) { goto L_0014AA2C; } }
L_0014AA1C:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_0014AA20:
    c.r[2].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A9ACu | kUnwind; return; } goto L_0014A9AC; } }
L_0014AA2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014AA40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 18448u);
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 20u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[4].w[0] + 24u), c.f[0]);
    st32((c.r[4].w[0] + 28u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = 0u;
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 32u), c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[2], 0u + 255u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[4].w[0] + 64u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 49;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AB14; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0014AB30; } }
L_0014AB14:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 7;
L_0014AB30:
    set32(c.r[2], c.r[4].w[0] + 160u);
    st32((c.r[4].w[0] + 128u), 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[3] = 0u;
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[4].w[0] + 144u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 156u), c.f[0]);  c.pc = t; return; }
L_0014AB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0014ABAC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 18448u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0014ABA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABA8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0014ABA8u) [[unlikely]] return; }
L_0014ABA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0014ABAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014ABC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ABD0:
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    st128((c.r[4].w[0] + 112u) & ~15u, c.r[5]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AC04; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 132u), c.r[5].w[0]);  if (t) { goto L_0014AC20; } }
L_0014AC04:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    c.budget -= 7;
L_0014AC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014AC30:
    st32((c.r[4].w[0]), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st32((c.r[4].w[0] + 4u), c.f[13]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 8u), c.f[14]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 112u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AC74; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 132u), c.r[5].w[0]);  if (t) { goto L_0014AC90; } }
L_0014AC74:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    c.budget -= 7;
L_0014AC90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ACA0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[4].w[0] + 32u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145760u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 77u, depth); }
L_0014ACC0:
    st32((c.r[4].w[0] + 32u), c.f[12]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 40u), c.f[14]);
    set32(c.r[6], c.r[5].w[0] + 32u);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 9;
    { set32(c.r[4], c.r[5].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00145760u | kUnwind; return; } [[clang::musttail]] return unit_0011(c, 77u, depth); }
L_0014ACF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 254u, depth + 1u); else { c.pc = 0x0014AA40u; return; } if (c.pc != 0x0014AD04u) [[unlikely]] return; }
L_0014AD04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] - 18512u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014AD4C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0014AD68; } }
L_0014AD4C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 7;
L_0014AD68:
    set32(c.r[2], 0u + 68u);
    st64((c.r[16].w[0] + 232u), c.r[2].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[16].w[0] + 240u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[2].d[0] | 13ull;
    st64((c.r[16].w[0] + 248u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014ADA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014ADE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ADD0u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 255u, depth + 1u); else { c.pc = 0x0014AB70u; return; } if (c.pc != 0x0014ADD0u) [[unlikely]] return; }
L_0014ADD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0014ADEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ADE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0014ADE8u) [[unlikely]] return; }
L_0014ADE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014ADEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014AE00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014AE2Cu) [[unlikely]] return; }
L_0014AE2C:
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 192u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEB8u); st128((c.r[17].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0012(c, 294u, depth + 1u); else { c.pc = 0x0014B660u; return; } if (c.pc != 0x0014AEB8u) [[unlikely]] return; }
L_0014AEB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AEC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 258u, depth + 1u); else { c.pc = 0x0014ABD0u; return; } if (c.pc != 0x0014AEC4u) [[unlikely]] return; }
L_0014AEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0014AEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3392u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    st32((c.r[29].w[0] + 24u), c.f[14]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014AF18u) [[unlikely]] return; }
L_0014AF18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014AF30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014AF5Cu) [[unlikely]] return; }
L_0014AF5C:
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[17].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[6] = c.r[2];
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 5u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 1u, 4u, 5u, c.vu0.vf[0].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 54;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014B044; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0014B060; } }
L_0014B044:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 7;
L_0014B060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B068u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 294u, depth + 1u); else { c.pc = 0x0014B660u; return; } if (c.pc != 0x0014B068u) [[unlikely]] return; }
L_0014B068:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B074u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 258u, depth + 1u); else { c.pc = 0x0014ABD0u; return; } if (c.pc != 0x0014B074u) [[unlikely]] return; }
L_0014B074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0014B090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3376u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    st32((c.r[29].w[0] + 24u), c.f[14]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B0C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B0C8u) [[unlikely]] return; }
L_0014B0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B10Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B10Cu) [[unlikely]] return; }
L_0014B10C:
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 13;
L_0014B140:
    c.f[4] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[4], c.f[2]);
    st32((c.r[16].w[0] + 192u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 196u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0] + 208u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 216u), c.f[1]);
    st32((c.r[16].w[0] + 200u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014B1B4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_0014B1D0; } }
L_0014B1B4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 7;
L_0014B1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B1D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 294u, depth + 1u); else { c.pc = 0x0014B660u; return; } if (c.pc != 0x0014B1D8u) [[unlikely]] return; }
L_0014B1D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B1E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 258u, depth + 1u); else { c.pc = 0x0014ABD0u; return; } if (c.pc != 0x0014B1E4u) [[unlikely]] return; }
L_0014B1E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014B200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3360u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    st32((c.r[29].w[0] + 24u), c.f[14]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B238u) [[unlikely]] return; }
L_0014B238:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[5].w[0] + 160u);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[5].w[0] + 16u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 14u, 4u, 5u, 6u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 12u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[5].w[0] + 160u);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[5].w[0] + 16u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 14u, 4u, 5u, 6u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 12752u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 14u, 4u, 5u, 6u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 12u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014B320:
    c.f[1] = ld32((c.r[5].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EA00000u);
    c.f[0] = ld32((c.r[5].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[2] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[29].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 196u));
    c.f[0] = ld32((c.r[5].w[0] + 212u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 200u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014B380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B3ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B3ACu) [[unlikely]] return; }
L_0014B3AC:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.f[4] = ld32((c.r[29].w[0] + 68u));  if (t) { goto L_0014B3D4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0014B3F0; } }
L_0014B3D4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_0014B3F0:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.f[4] ^ fp::kSign;
    c.f[2] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_0014B428; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0014B440; } }
L_0014B428:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0014B440:
    st32((c.r[16].w[0] + 16u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 20u), c.f[4]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_0014B46C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0014B484; } }
L_0014B46C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0014B484:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[2]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_0014B4B4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0014B4CC; } }
L_0014B4B4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0014B4CC:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[4]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014B500:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014B5C4; } }
    set32(c.r[5], c.r[3].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);  if (t) { goto L_0014B5EC; } }
L_0014B5C4:
    set32(c.r[3], c.r[4].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 10;
L_0014B5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0014B634; } }
L_0014B5F4:
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B608u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 20u, depth + 1u); else { c.pc = 0x001444C0u; return; } if (c.pc != 0x0014B608u) [[unlikely]] return; }
L_0014B608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 11;
L_0014B634:
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B5F4u | kUnwind; return; } goto L_0014B5F4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014B660:
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 212u), c.f[0]);  c.pc = t; return; }
L_0014B6A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014B6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B6FC; } }
L_0014B6B0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014B6C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B6FC; } }
L_0014B6C8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 128u);  if (t) { goto L_0014B6D8; } }
    set32(c.r[2], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_0014B6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0014B6EC; } }
L_0014B6E0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0014B6EC:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B6E0u | kUnwind; return; } goto L_0014B6E0; } }
L_0014B6FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B73Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 300u, depth + 1u); else { c.pc = 0x0014B770u; return; } if (c.pc != 0x0014B73Cu) [[unlikely]] return; }
L_0014B73C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B750u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 312u, depth + 1u); else { c.pc = 0x0014BAB0u; return; } if (c.pc != 0x0014B750u) [[unlikely]] return; }
L_0014B750:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014B770:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 17u));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014BA80; } }
    c.r[2].d[0] = ld16((c.r[22].w[0] + 26u));
    c.r[18].d[0] = ld16((c.r[22].w[0] + 20u));
    c.r[17].d[0] = ld16((c.r[22].w[0] + 22u));
    c.r[2].d[0] = c.r[2].d[0] << 54;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] >> 58;  if (t) { goto L_0014B7C8; } }
    c.r[2].d[0] = ld16((c.r[22].w[0] + 12u));
    set32(c.r[6], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0014B7C8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0014B810; } }
    c.r[2].d[0] = ld64((c.r[22].w[0] + 24u));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[22].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = c.r[2].d[0] >> 58;
    c.r[21].d[0] = c.r[3].d[0] & 16383ull;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B808u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x0014B808u) [[unlikely]] return; }
L_0014B808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[22].w[0] + 17u));  if (t) { goto L_0014B890; } }
L_0014B810:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B81Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x0014B81Cu) [[unlikely]] return; }
L_0014B81C:
    c.r[8].d[0] = ld16((c.r[22].w[0] + 24u));
    set32(c.r[7], 0u - 16384u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[10].d[0] = c.r[21].d[0] & 16383ull;
    c.budget -= 8;
L_0014B83C:
    c.r[2].d[0] = c.r[2].d[0] | 16383ull;
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[8].d[0] | c.r[10].d[0];
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[22].w[0] + 24u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = ld64((c.r[22].w[0] + 24u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B878u); st64((c.r[22].w[0] + 24u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x0014B878u) [[unlikely]] return; }
L_0014B878:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0014B880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B888u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 9u, depth + 1u); else { c.pc = 0x0014C160u; return; } if (c.pc != 0x0014B888u) [[unlikely]] return; }
L_0014B888:
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[22].w[0] + 17u));
    c.budget -= 2;
L_0014B890:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0014BA84; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[22].w[0] + 48u);  if (t) { goto L_0014B8B0; } }
    st64((c.r[16].w[0]), 0ull);
    st64((c.r[16].w[0] + 8u), 0ull);
    c.budget -= 2;
L_0014B8B0:
    c.r[2].d[0] = ld16((c.r[22].w[0] + 12u));
    set32(c.r[20], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_0014BA70; } }
L_0014B8C0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));  if (t) { goto L_0014B8D0; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0014B8D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_0014B8E4; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0014B8E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[23], c.r[23].w[0] + c.r[3].w[0]);  if (t) { goto L_0014B99C; } }
    c.r[1].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014B948; } }
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[3], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + 14u);
    c.r[3].d[0] = c.r[4].d[0] >> (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[4].d[0] >> (c.r[2].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] & 16383ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (t) { goto L_0014B980; } }
L_0014B948:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[3], c.r[20].w[0] - 4u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + 14u);
    c.r[3].d[0] = c.r[4].d[0] >> (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[4].d[0] >> (c.r[2].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] & 16383ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 14;
L_0014B980:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B994u); c.r[9].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x0014B994u) [[unlikely]] return; }
L_0014B994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0014BA70; } }
L_0014B99C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B9A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x0014B9A8u) [[unlikely]] return; }
L_0014B9A8:
    c.r[1].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[20].w[0] - 4u);  if (t) { goto L_0014B9FC; } }
    set32(c.r[6], c.r[20].w[0] - 1u);
    c.r[3].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], c.r[6].w[0] << 2);
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] << (c.r[7].w[0] & 63u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[7].w[0] + 14u);
    c.r[4].d[0] = c.r[4].d[0] << (c.r[3].w[0] & 63u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0]), c.r[3].d[0]);  if (t) { goto L_0014BA3C; } }
L_0014B9FC:
    c.r[3].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], c.r[6].w[0] << 2);
    c.r[5].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] << (c.r[7].w[0] & 63u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[7].w[0] + 14u);
    c.r[4].d[0] = c.r[4].d[0] << (c.r[3].w[0] & 63u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 16;
L_0014BA3C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA58u); c.r[9].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x0014BA58u) [[unlikely]] return; }
L_0014BA58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA68u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 9u, depth + 1u); else { c.pc = 0x0014C160u; return; } if (c.pc != 0x0014BA68u) [[unlikely]] return; }
L_0014BA68:
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_0014BA70:
    c.r[2].d[0] = ld8((c.r[22].w[0] + 17u));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B8C0u | kUnwind; return; } goto L_0014B8C0; } }
L_0014BA80:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0014BA84:
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
L_0014BAB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014BAE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014BD94; } }
L_0014BAE4:
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0014BAFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0014BB14; } }
L_0014BAFC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014BB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = ld8((c.r[20].w[0] + 30u));  if (t) { goto L_0014BB18; } }
L_0014BB10:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014BB14:
    c.r[12].d[0] = ld8((c.r[20].w[0] + 30u));
    c.budget -= 1;
L_0014BB18:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    set32(c.r[10], 0u - 121u);
    set32(c.r[11], c.r[2].w[0] << 3);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[8], 0u - 129u);
    set32(c.r[9], c.r[2].w[0] << 7);
    set32(c.r[5], 0u - 32u);
    c.r[7].d[0] = 0ull & 31ull;
    set32(c.r[3], 0u - 225u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], 0u - 1u);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[20].w[0] + 30u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[20].w[0] + 30u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[20].w[0] + 30u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[20].w[0] + 31u));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[20].w[0] + 31u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 27;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st8((c.r[20].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0014BB9C; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] << 13;
    c.r[2].d[0] = c.r[2].d[0] >> 50;
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { goto L_0014BBD8; } }
L_0014BB9C:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] & 16383ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    c.r[4].d[0] = c.r[3].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] | 31ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 15;
L_0014BBD8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0014BBF0; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 12u));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0014BBF0:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 18u));
    c.r[2].d[0] = 0ull | 33541ull;
    c.r[3].d[0] = ld8((c.r[20].w[0] + 19u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0014BCCC; } }
    c.r[2].d[0] = 0ull | 33285ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0014BCD0; } }
    c.r[2].d[0] = 0ull | 33029ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33540ull;  if (t) { goto L_0014BCCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BCCC; } }
    c.r[2].d[0] = 0ull | 33284ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33028ull;  if (t) { goto L_0014BCCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BCCC; } }
    set32(c.r[2], 0u + 772u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 516u);  if (t) { goto L_0014BCCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BCCC; } }
    set32(c.r[2], 0u + 260u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 773u);  if (t) { goto L_0014BCCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BCA4; } }
    set32(c.r[2], 0u + 517u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 261u);  if (t) { goto L_0014BCA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BCA4; } }
    set32(c.r[2], 0u + 17156u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16900u);  if (t) { goto L_0014BCA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BCA4; } }
    set32(c.r[2], 0u + 16644u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BCA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014BD88; } }
L_0014BCA4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 14u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCC4u); set32(c.r[8], c.r[2].w[0] >> 4);  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x0014BCC4u) [[unlikely]] return; }
L_0014BCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014BD94; } }
L_0014BCCC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014BCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[20].w[0] + 14u));  if (t) { goto L_0014BD70; } }
L_0014BCD8:
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[19].d[0] << 48;
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.r[8].d[0] = c.r[3].d[0] << 48;
    c.r[9].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[10], 0u + 8u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD18u); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0014BD18u) [[unlikely]] return; }
L_0014BD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0014BD20u) [[unlikely]] return; }
L_0014BD20:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0014BD2Cu) [[unlikely]] return; }
L_0014BD2C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0014BD38u) [[unlikely]] return; }
L_0014BD38:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 18u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0014BD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { goto L_0014BD68; } }
L_0014BD54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014BD64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { goto L_0014BD68; } }
L_0014BD64:
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_0014BD68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 14u));
    c.budget -= 2;
L_0014BD70:
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[18].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BCD8u | kUnwind; return; } goto L_0014BCD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014BD90; } }
L_0014BD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0014BD98; } }
L_0014BD90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0014BD94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0014BD98:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0014BDC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].d[0] = c.r[4].d[0] << 48;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BDFCu); set32(c.r[11], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0014BDFCu) [[unlikely]] return; }
L_0014BDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE04u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0014BE04u) [[unlikely]] return; }
L_0014BE04:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE10u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 192u, depth + 1u); else { c.pc = 0x00101DB0u; return; } if (c.pc != 0x0014BE10u) [[unlikely]] return; }
L_0014BE10:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0014BE1Cu) [[unlikely]] return; }
L_0014BE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0014BE30:
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[3], 0u + 20u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 19;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0014BF40; } }
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 1));  if (t) { goto L_0014BF44; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014BF40; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0014BF38; } }
    set32(c.r[3], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014BF34; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[20].w[0] << 1);  if (t) { goto L_0014BF2C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014BF28; } }
    set32(c.r[3], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014BF28; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014BF28; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { goto L_0014BF20; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014BF1C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[16], c.r[20].w[0] << 2);  if (t) { goto L_0014BF14; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014BF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014BF5C; } }
L_0014BF10:
    set32(c.r[16], c.r[20].w[0] << 2);
    c.budget -= 1;
L_0014BF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014BF64; } }
L_0014BF1C:
    set32(c.r[3], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0014BF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[20].w[0]);  if (t) { goto L_0014BF64; } }
L_0014BF28:
    set32(c.r[16], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0014BF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014BF64; } }
L_0014BF34:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0014BF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014BF64; } }
L_0014BF40:
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 1));
    c.budget -= 1;
L_0014BF44:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_0014BF64; } }
    set32(c.r[3], c.r[20].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014BF64; } }
L_0014BF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0013(c, 6u, depth); } }
L_0014BF64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0013(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);  if (t) { goto L_0014BF80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0013(c, 5u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.budget -= 1;
L_0014BF80:
    c.r[3].d[0] = c.r[3].d[0] | 65472ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);  if (t) { goto L_0014BF90; } }
    breakpoint(c, 0x0014BF8Cu);
    c.budget -= 1;
L_0014BF90:
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0013(c, 4u, depth); } }
L_0014BF9C:
    mmi::mult(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0014BFB8; } }
    set32(c.r[17], c.r[19].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_0014BFB8:
    c.r[5].d[0] = c.r[22].d[0] << 48;
    c.r[6].d[0] = c.r[23].d[0] << 48;
    c.r[7].d[0] = c.r[21].d[0] << 48;
    c.r[9].d[0] = c.r[18].d[0] << 48;
    c.r[10].d[0] = c.r[20].d[0] << 48;
    c.r[11].d[0] = c.r[17].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0014BFF4u) [[unlikely]] return; }
L_0014BFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BFFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0014BFFCu) [[unlikely]] return; }
L_0014BFFC:
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0013(c, 1u, depth);
}

}
