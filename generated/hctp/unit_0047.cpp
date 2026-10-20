#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0047[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30,
    0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0,
    117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 229,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0,
    380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433,
    0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447,
    0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0,
    0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0,
};

void unit_0047(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0021C000;
    case 2u: goto L_0021C030;
    case 3u: goto L_0021C034;
    case 4u: goto L_0021C060;
    case 5u: goto L_0021C084;
    case 6u: goto L_0021C094;
    case 7u: goto L_0021C09C;
    case 8u: goto L_0021C1CC;
    case 9u: goto L_0021C308;
    case 10u: goto L_0021C32C;
    case 11u: goto L_0021C340;
    case 12u: goto L_0021C400;
    case 13u: goto L_0021C42C;
    case 14u: goto L_0021C478;
    case 15u: goto L_0021C4A4;
    case 16u: goto L_0021C4D0;
    case 17u: goto L_0021C5D0;
    case 18u: goto L_0021C5F0;
    case 19u: goto L_0021C5FC;
    case 20u: goto L_0021C630;
    case 21u: goto L_0021C640;
    case 22u: goto L_0021C654;
    case 23u: goto L_0021C660;
    case 24u: goto L_0021C66C;
    case 25u: goto L_0021C678;
    case 26u: goto L_0021C6B0;
    case 27u: goto L_0021C6E8;
    case 28u: goto L_0021C720;
    case 29u: goto L_0021C770;
    case 30u: goto L_0021C77C;
    case 31u: goto L_0021C788;
    case 32u: goto L_0021C794;
    case 33u: goto L_0021C7A0;
    case 34u: goto L_0021C7B8;
    case 35u: goto L_0021C7D0;
    case 36u: goto L_0021C7F0;
    case 37u: goto L_0021C800;
    case 38u: goto L_0021C828;
    case 39u: goto L_0021C83C;
    case 40u: goto L_0021C854;
    case 41u: goto L_0021C864;
    case 42u: goto L_0021C9DC;
    case 43u: goto L_0021C9F0;
    case 44u: goto L_0021CA04;
    case 45u: goto L_0021CA18;
    case 46u: goto L_0021CA3C;
    case 47u: goto L_0021CA50;
    case 48u: goto L_0021CA74;
    case 49u: goto L_0021CA88;
    case 50u: goto L_0021CA9C;
    case 51u: goto L_0021CAB0;
    case 52u: goto L_0021CAC4;
    case 53u: goto L_0021CB04;
    case 54u: goto L_0021CB64;
    case 55u: goto L_0021CB78;
    case 56u: goto L_0021CB8C;
    case 57u: goto L_0021CBD4;
    case 58u: goto L_0021CCC8;
    case 59u: goto L_0021CCDC;
    case 60u: goto L_0021CD00;
    case 61u: goto L_0021CE8C;
    case 62u: goto L_0021CF14;
    case 63u: goto L_0021CF28;
    case 64u: goto L_0021D014;
    case 65u: goto L_0021D110;
    case 66u: goto L_0021D244;
    case 67u: goto L_0021D258;
    case 68u: goto L_0021D26C;
    case 69u: goto L_0021D354;
    case 70u: goto L_0021D368;
    case 71u: goto L_0021D450;
    case 72u: goto L_0021D470;
    case 73u: goto L_0021D47C;
    case 74u: goto L_0021D4BC;
    case 75u: goto L_0021D4DC;
    case 76u: goto L_0021D51C;
    case 77u: goto L_0021D550;
    case 78u: goto L_0021D590;
    case 79u: goto L_0021D59C;
    case 80u: goto L_0021D5B4;
    case 81u: goto L_0021D5D0;
    case 82u: goto L_0021D600;
    case 83u: goto L_0021D618;
    case 84u: goto L_0021D630;
    case 85u: goto L_0021D688;
    case 86u: goto L_0021D694;
    case 87u: goto L_0021D6A0;
    case 88u: goto L_0021D6AC;
    case 89u: goto L_0021D6C4;
    case 90u: goto L_0021D6E0;
    case 91u: goto L_0021D710;
    case 92u: goto L_0021D728;
    case 93u: goto L_0021D740;
    case 94u: goto L_0021D780;
    case 95u: goto L_0021D78C;
    case 96u: goto L_0021D7A4;
    case 97u: goto L_0021D7C0;
    case 98u: goto L_0021D7D0;
    case 99u: goto L_0021D7E0;
    case 100u: goto L_0021D7F0;
    case 101u: goto L_0021D800;
    case 102u: goto L_0021D810;
    case 103u: goto L_0021D820;
    case 104u: goto L_0021D830;
    case 105u: goto L_0021D840;
    case 106u: goto L_0021D850;
    case 107u: goto L_0021D860;
    case 108u: goto L_0021D870;
    case 109u: goto L_0021D880;
    case 110u: goto L_0021D890;
    case 111u: goto L_0021D8A0;
    case 112u: goto L_0021D8B0;
    case 113u: goto L_0021D8C0;
    case 114u: goto L_0021D8D0;
    case 115u: goto L_0021D8E0;
    case 116u: goto L_0021D8F0;
    case 117u: goto L_0021D900;
    case 118u: goto L_0021D910;
    case 119u: goto L_0021D920;
    case 120u: goto L_0021D930;
    case 121u: goto L_0021D940;
    case 122u: goto L_0021D950;
    case 123u: goto L_0021D960;
    case 124u: goto L_0021D970;
    case 125u: goto L_0021D980;
    case 126u: goto L_0021D990;
    case 127u: goto L_0021D9A0;
    case 128u: goto L_0021D9B0;
    case 129u: goto L_0021D9C0;
    case 130u: goto L_0021D9D0;
    case 131u: goto L_0021D9F0;
    case 132u: goto L_0021DA40;
    case 133u: goto L_0021DA68;
    case 134u: goto L_0021DAA0;
    case 135u: goto L_0021DAC8;
    case 136u: goto L_0021DB00;
    case 137u: goto L_0021DB28;
    case 138u: goto L_0021DB4C;
    case 139u: goto L_0021DB60;
    case 140u: goto L_0021DC30;
    case 141u: goto L_0021DC48;
    case 142u: goto L_0021DC54;
    case 143u: goto L_0021DC80;
    case 144u: goto L_0021DC98;
    case 145u: goto L_0021DCA4;
    case 146u: goto L_0021DCD0;
    case 147u: goto L_0021DCE8;
    case 148u: goto L_0021DCF4;
    case 149u: goto L_0021DD20;
    case 150u: goto L_0021DD3C;
    case 151u: goto L_0021DD48;
    case 152u: goto L_0021DD54;
    case 153u: goto L_0021DD9C;
    case 154u: goto L_0021DE00;
    case 155u: goto L_0021DE34;
    case 156u: goto L_0021DE3C;
    case 157u: goto L_0021DF04;
    case 158u: goto L_0021DFEC;
    case 159u: goto L_0021E114;
    case 160u: goto L_0021E130;
    case 161u: goto L_0021E150;
    case 162u: goto L_0021E164;
    case 163u: goto L_0021E174;
    case 164u: goto L_0021E190;
    case 165u: goto L_0021E1C0;
    case 166u: goto L_0021E1DC;
    case 167u: goto L_0021E1E8;
    case 168u: goto L_0021E200;
    case 169u: goto L_0021E220;
    case 170u: goto L_0021E230;
    case 171u: goto L_0021E250;
    case 172u: goto L_0021E28C;
    case 173u: goto L_0021E29C;
    case 174u: goto L_0021E2B0;
    case 175u: goto L_0021E2E0;
    case 176u: goto L_0021E2F4;
    case 177u: goto L_0021E310;
    case 178u: goto L_0021E32C;
    case 179u: goto L_0021E340;
    case 180u: goto L_0021E34C;
    case 181u: goto L_0021E36C;
    case 182u: goto L_0021E380;
    case 183u: goto L_0021E398;
    case 184u: goto L_0021E3C0;
    case 185u: goto L_0021E3F0;
    case 186u: goto L_0021E434;
    case 187u: goto L_0021E440;
    case 188u: goto L_0021E44C;
    case 189u: goto L_0021E460;
    case 190u: goto L_0021E494;
    case 191u: goto L_0021E4EC;
    case 192u: goto L_0021E518;
    case 193u: goto L_0021E528;
    case 194u: goto L_0021E538;
    case 195u: goto L_0021E544;
    case 196u: goto L_0021E598;
    case 197u: goto L_0021E5A8;
    case 198u: goto L_0021E5C0;
    case 199u: goto L_0021E5D8;
    case 200u: goto L_0021E5F0;
    case 201u: goto L_0021E608;
    case 202u: goto L_0021E620;
    case 203u: goto L_0021E644;
    case 204u: goto L_0021E65C;
    case 205u: goto L_0021E66C;
    case 206u: goto L_0021E6C0;
    case 207u: goto L_0021E6C8;
    case 208u: goto L_0021E6D0;
    case 209u: goto L_0021E6E4;
    case 210u: goto L_0021E6F4;
    case 211u: goto L_0021E708;
    case 212u: goto L_0021E728;
    case 213u: goto L_0021E738;
    case 214u: goto L_0021E750;
    case 215u: goto L_0021E758;
    case 216u: goto L_0021E76C;
    case 217u: goto L_0021E778;
    case 218u: goto L_0021E7A4;
    case 219u: goto L_0021E7B8;
    case 220u: goto L_0021E7D0;
    case 221u: goto L_0021E7F0;
    case 222u: goto L_0021E800;
    case 223u: goto L_0021E83C;
    case 224u: goto L_0021E850;
    case 225u: goto L_0021E858;
    case 226u: goto L_0021E860;
    case 227u: goto L_0021E86C;
    case 228u: goto L_0021E874;
    case 229u: goto L_0021E87C;
    case 230u: goto L_0021E88C;
    case 231u: goto L_0021E8AC;
    case 232u: goto L_0021E8B4;
    case 233u: goto L_0021E8BC;
    case 234u: goto L_0021E8D0;
    case 235u: goto L_0021E924;
    case 236u: goto L_0021E93C;
    case 237u: goto L_0021E950;
    case 238u: goto L_0021E95C;
    case 239u: goto L_0021E978;
    case 240u: goto L_0021E994;
    case 241u: goto L_0021E9BC;
    case 242u: goto L_0021E9CC;
    case 243u: goto L_0021E9F0;
    case 244u: goto L_0021EA24;
    case 245u: goto L_0021EA3C;
    case 246u: goto L_0021EA4C;
    case 247u: goto L_0021EA7C;
    case 248u: goto L_0021EA94;
    case 249u: goto L_0021EAAC;
    case 250u: goto L_0021EAC4;
    case 251u: goto L_0021EADC;
    case 252u: goto L_0021EAEC;
    case 253u: goto L_0021EB00;
    case 254u: goto L_0021EB20;
    case 255u: goto L_0021EB38;
    case 256u: goto L_0021EB4C;
    case 257u: goto L_0021EB58;
    case 258u: goto L_0021EB70;
    case 259u: goto L_0021EB8C;
    case 260u: goto L_0021EBA0;
    case 261u: goto L_0021EBC0;
    case 262u: goto L_0021EBD8;
    case 263u: goto L_0021EBEC;
    case 264u: goto L_0021EBF8;
    case 265u: goto L_0021EC10;
    case 266u: goto L_0021EC24;
    case 267u: goto L_0021EC74;
    case 268u: goto L_0021EC88;
    case 269u: goto L_0021ECA4;
    case 270u: goto L_0021ECC4;
    case 271u: goto L_0021ECDC;
    case 272u: goto L_0021ECF0;
    case 273u: goto L_0021ECFC;
    case 274u: goto L_0021ED14;
    case 275u: goto L_0021ED38;
    case 276u: goto L_0021ED40;
    case 277u: goto L_0021ED48;
    case 278u: goto L_0021ED5C;
    case 279u: goto L_0021ED70;
    case 280u: goto L_0021ED90;
    case 281u: goto L_0021EDA8;
    case 282u: goto L_0021EDBC;
    case 283u: goto L_0021EDD0;
    case 284u: goto L_0021EDEC;
    case 285u: goto L_0021EE04;
    case 286u: goto L_0021EE18;
    case 287u: goto L_0021EE24;
    case 288u: goto L_0021EE3C;
    case 289u: goto L_0021EE60;
    case 290u: goto L_0021EE68;
    case 291u: goto L_0021EE70;
    case 292u: goto L_0021EE84;
    case 293u: goto L_0021EEB8;
    case 294u: goto L_0021EEE0;
    case 295u: goto L_0021EEF4;
    case 296u: goto L_0021EF10;
    case 297u: goto L_0021EF28;
    case 298u: goto L_0021EF3C;
    case 299u: goto L_0021EF48;
    case 300u: goto L_0021EF60;
    case 301u: goto L_0021EF74;
    case 302u: goto L_0021EF94;
    case 303u: goto L_0021EF9C;
    case 304u: goto L_0021EFA4;
    case 305u: goto L_0021EFB8;
    case 306u: goto L_0021EFCC;
    case 307u: goto L_0021EFEC;
    case 308u: goto L_0021F004;
    case 309u: goto L_0021F00C;
    case 310u: goto L_0021F018;
    case 311u: goto L_0021F02C;
    case 312u: goto L_0021F048;
    case 313u: goto L_0021F060;
    case 314u: goto L_0021F074;
    case 315u: goto L_0021F080;
    case 316u: goto L_0021F09C;
    case 317u: goto L_0021F0C8;
    case 318u: goto L_0021F0EC;
    case 319u: goto L_0021F104;
    case 320u: goto L_0021F11C;
    case 321u: goto L_0021F140;
    case 322u: goto L_0021F148;
    case 323u: goto L_0021F154;
    case 324u: goto L_0021F168;
    case 325u: goto L_0021F18C;
    case 326u: goto L_0021F1A4;
    case 327u: goto L_0021F1B8;
    case 328u: goto L_0021F1C4;
    case 329u: goto L_0021F1E0;
    case 330u: goto L_0021F20C;
    case 331u: goto L_0021F224;
    case 332u: goto L_0021F22C;
    case 333u: goto L_0021F250;
    case 334u: goto L_0021F258;
    case 335u: goto L_0021F264;
    case 336u: goto L_0021F278;
    case 337u: goto L_0021F29C;
    case 338u: goto L_0021F2B4;
    case 339u: goto L_0021F2C8;
    case 340u: goto L_0021F2D4;
    case 341u: goto L_0021F2F0;
    case 342u: goto L_0021F31C;
    case 343u: goto L_0021F334;
    case 344u: goto L_0021F34C;
    case 345u: goto L_0021F358;
    case 346u: goto L_0021F36C;
    case 347u: goto L_0021F390;
    case 348u: goto L_0021F3A8;
    case 349u: goto L_0021F3BC;
    case 350u: goto L_0021F3C8;
    case 351u: goto L_0021F3E4;
    case 352u: goto L_0021F410;
    case 353u: goto L_0021F42C;
    case 354u: goto L_0021F438;
    case 355u: goto L_0021F44C;
    case 356u: goto L_0021F470;
    case 357u: goto L_0021F488;
    case 358u: goto L_0021F490;
    case 359u: goto L_0021F4A4;
    case 360u: goto L_0021F4D4;
    case 361u: goto L_0021F4E8;
    case 362u: goto L_0021F504;
    case 363u: goto L_0021F51C;
    case 364u: goto L_0021F524;
    case 365u: goto L_0021F538;
    case 366u: goto L_0021F550;
    case 367u: goto L_0021F568;
    case 368u: goto L_0021F570;
    case 369u: goto L_0021F584;
    case 370u: goto L_0021F598;
    case 371u: goto L_0021F5C0;
    case 372u: goto L_0021F5D4;
    case 373u: goto L_0021F5F0;
    case 374u: goto L_0021F608;
    case 375u: goto L_0021F61C;
    case 376u: goto L_0021F628;
    case 377u: goto L_0021F644;
    case 378u: goto L_0021F668;
    case 379u: goto L_0021F674;
    case 380u: goto L_0021F680;
    case 381u: goto L_0021F694;
    case 382u: goto L_0021F6B0;
    case 383u: goto L_0021F6C8;
    case 384u: goto L_0021F6DC;
    case 385u: goto L_0021F6E8;
    case 386u: goto L_0021F700;
    case 387u: goto L_0021F714;
    case 388u: goto L_0021F724;
    case 389u: goto L_0021F74C;
    case 390u: goto L_0021F760;
    case 391u: goto L_0021F77C;
    case 392u: goto L_0021F794;
    case 393u: goto L_0021F79C;
    case 394u: goto L_0021F7B4;
    case 395u: goto L_0021F7F0;
    case 396u: goto L_0021F804;
    case 397u: goto L_0021F824;
    case 398u: goto L_0021F83C;
    case 399u: goto L_0021F844;
    case 400u: goto L_0021F858;
    case 401u: goto L_0021F878;
    case 402u: goto L_0021F88C;
    case 403u: goto L_0021F8AC;
    case 404u: goto L_0021F8C4;
    case 405u: goto L_0021F8D8;
    case 406u: goto L_0021F8E4;
    case 407u: goto L_0021F900;
    case 408u: goto L_0021F938;
    case 409u: goto L_0021F954;
    case 410u: goto L_0021F960;
    case 411u: goto L_0021F974;
    case 412u: goto L_0021F994;
    case 413u: goto L_0021F9AC;
    case 414u: goto L_0021F9C0;
    case 415u: goto L_0021F9CC;
    case 416u: goto L_0021F9E8;
    case 417u: goto L_0021FA0C;
    case 418u: goto L_0021FA28;
    case 419u: goto L_0021FA40;
    case 420u: goto L_0021FA54;
    case 421u: goto L_0021FA74;
    case 422u: goto L_0021FA8C;
    case 423u: goto L_0021FA94;
    case 424u: goto L_0021FAA8;
    case 425u: goto L_0021FAC8;
    case 426u: goto L_0021FAEC;
    case 427u: goto L_0021FB00;
    case 428u: goto L_0021FB1C;
    case 429u: goto L_0021FB30;
    case 430u: goto L_0021FB98;
    case 431u: goto L_0021FBC0;
    case 432u: goto L_0021FBE8;
    case 433u: goto L_0021FBFC;
    case 434u: goto L_0021FC1C;
    case 435u: goto L_0021FC24;
    case 436u: goto L_0021FC38;
    case 437u: goto L_0021FC48;
    case 438u: goto L_0021FC60;
    case 439u: goto L_0021FC68;
    case 440u: goto L_0021FC7C;
    case 441u: goto L_0021FC98;
    case 442u: goto L_0021FCA4;
    case 443u: goto L_0021FCB0;
    case 444u: goto L_0021FCCC;
    case 445u: goto L_0021FCDC;
    case 446u: goto L_0021FCE8;
    case 447u: goto L_0021FCFC;
    case 448u: goto L_0021FD1C;
    case 449u: goto L_0021FD34;
    case 450u: goto L_0021FD48;
    case 451u: goto L_0021FD54;
    case 452u: goto L_0021FD70;
    case 453u: goto L_0021FD90;
    case 454u: goto L_0021FDAC;
    case 455u: goto L_0021FDC0;
    case 456u: goto L_0021FDDC;
    case 457u: goto L_0021FDE8;
    case 458u: goto L_0021FDF4;
    case 459u: goto L_0021FE0C;
    case 460u: goto L_0021FE14;
    case 461u: goto L_0021FE28;
    case 462u: goto L_0021FE80;
    case 463u: goto L_0021FEAC;
    case 464u: goto L_0021FEB4;
    case 465u: goto L_0021FEC8;
    case 466u: goto L_0021FEE0;
    case 467u: goto L_0021FF20;
    case 468u: goto L_0021FF30;
    case 469u: goto L_0021FF48;
    case 470u: goto L_0021FF50;
    case 471u: goto L_0021FF78;
    case 472u: goto L_0021FF84;
    case 473u: goto L_0021FFD0;
    case 474u: goto L_0021FFE4;
    default: bad_entry(c, 0x0021C000u); return;
    }
L_0021C000:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 161u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 12;
L_0021C030:
    c.r[3].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_0021C034:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BBE4u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 210u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0021C060:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C084u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x0021C084u) [[unlikely]] return; }
L_0021C084:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[29].w[0] + 128u);  if (t) { goto L_0021C1B0; } }
L_0021C094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021C198; } }
L_0021C09C:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 160u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 224u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021C194; } }
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[0]);
    st128((c.r[15].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[20], c.r[18].w[0] << 6);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[25], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[24], c.r[18].w[0] << 6);
    ld128((c.r[4].w[0] + 112u) & ~15u, c.r[6]);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[13], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[20], c.r[18].w[0] << 6);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[12], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[10], c.r[3].w[0] + c.r[17].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[6]);
    set32(c.r[4], c.r[18].w[0] << 6);
    ld128((c.r[5].w[0] + 128u) & ~15u, c.r[14]);
    set32(c.r[11], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] << 6);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[9], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] << 6);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[7], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] << 6);
    set32(c.r[3], c.r[18].w[0] << 6);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[14]);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[14], c.r[24].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    ld128((c.r[13].w[0] + 176u) & ~15u, c.r[24]);
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st128((c.r[12].w[0] + 112u) & ~15u, c.r[24]);
    set32(c.r[13], c.r[20].w[0] + c.r[17].w[0]);
    ld128((c.r[11].w[0] + 192u) & ~15u, c.r[11]);
    st128((c.r[10].w[0] + 128u) & ~15u, c.r[11]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[10]);
    st128((c.r[9].w[0] + 176u) & ~15u, c.r[10]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[9]);
    st128((c.r[8].w[0] + 192u) & ~15u, c.r[9]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 160u));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 224u));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    st8((c.r[5].w[0] + 160u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 224u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 161u));
    c.r[3].d[0] = ld8((c.r[25].w[0] + 225u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[14].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[13].w[0] + 225u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 56;
L_0021C194:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0021C198:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C09Cu | kUnwind; return; } goto L_0021C09C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0021C1B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C094u | kUnwind; return; } goto L_0021C094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021C598; } }
L_0021C1CC:
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 160u));
    c.r[20].d[0] = ld8((c.r[3].w[0] + 161u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = c.r[4].d[0] | 100ull;  if (t) { goto L_0021C29C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
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
    set32(c.r[3], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[11].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 38;
L_0021C29C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[4], c.r[20].w[0] << 2);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 13ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4268u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[4].w[0] + 192u), c.r[3].d[0]);  if (t) { goto L_0021C32C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4304u)));
    st64((c.r[2].w[0] + 192u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4304u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C308u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C308u) [[unlikely]] return; }
L_0021C308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4304u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C32Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C32Cu) [[unlikely]] return; }
L_0021C32C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0021C43C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021C430; } }
L_0021C340:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_0021C34C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0021C34C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], 0u + 6u);  if (t) { goto L_0021C42C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0021C36C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0021C36C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021C384; } }
    set32(c.r[18], 0u + 8u);
    c.budget -= 1;
L_0021C384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 31072u)));
    c.r[4].d[0] = c.r[2].d[0] | 13ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 24128u);
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4268u)));
    st64((c.r[3].w[0] + 192u), c.r[4].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4268u)));
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C400u) [[unlikely]] return; }
L_0021C400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C42Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C42Cu) [[unlikely]] return; }
L_0021C42C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0021C430:
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C340u | kUnwind; return; } goto L_0021C340; } }
L_0021C43C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4268u)));
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C478u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0021C478u) [[unlikely]] return; }
L_0021C478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C4A4u) [[unlikely]] return; }
L_0021C4A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C4D0u) [[unlikely]] return; }
L_0021C4D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0021C594; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 1380u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[6].d[0] | 2ull;
    c.r[10].d[0] = c.r[4].d[0] | 3ull;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = 0ull | 32769ull;
    set32(c.r[6], 0u + 14u);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], 0u + 128u);
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[4].d[0] << 32;
    st64((c.r[11].w[0]), c.r[10].d[0]);
    set32(c.r[4], 0u + 68u);
    st64((c.r[11].w[0] + 8u), 0ull);
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st64((c.r[11].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[11].w[0] + 24u), c.r[9].w[0]);
    set32(c.r[4], 0u + 66u);
    st32((c.r[11].w[0] + 28u), c.r[8].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[11].w[0] + 32u), c.r[7].d[0]);
    st64((c.r[11].w[0] + 40u), c.r[6].d[0]);
    st64((c.r[11].w[0] + 48u), c.r[5].d[0]);
    st64((c.r[11].w[0] + 56u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[4].w[0]);
    c.budget -= 41;
L_0021C594:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021C598:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C1CCu | kUnwind; return; } goto L_0021C1CC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0021C5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5F0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0021C5F0u) [[unlikely]] return; }
L_0021C5F0:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0021C5FCu) [[unlikely]] return; }
L_0021C5FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 6208u);
    set32(c.r[3], c.r[3].w[0] - 6192u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C630:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 40u)));  goto L_0021CD00; }
L_0021C640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C654u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0021C654u) [[unlikely]] return; }
L_0021C654:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C660u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0021C660u) [[unlikely]] return; }
L_0021C660:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C66Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0021C66Cu) [[unlikely]] return; }
L_0021C66C:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C678u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0021C678u) [[unlikely]] return; }
L_0021C678:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 6288u);
    set32(c.r[2], c.r[2].w[0] - 6272u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 6256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 6240u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 720u);
    c.budget -= 14;
L_0021C6B0:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C6B0u | kUnwind; return; } goto L_0021C6B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021C6E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6E8u);  if (depth < kMaxDepth) unit_007E(c, 113u, depth + 1u); else { c.pc = 0x002F96C0u; return; } if (c.pc != 0x0021C6E8u) [[unlikely]] return; }
L_0021C6E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[1].w[0] - 28144u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28140u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28136u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 28132u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021C7B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 6288u);
    set32(c.r[2], c.r[2].w[0] - 6272u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 6256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 6240u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C770u); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 116u, depth + 1u); else { c.pc = 0x002F9700u; return; } if (c.pc != 0x0021C770u) [[unlikely]] return; }
L_0021C770:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C77Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0021C77Cu) [[unlikely]] return; }
L_0021C77C:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0021C788u) [[unlikely]] return; }
L_0021C788:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0021C794u) [[unlikely]] return; }
L_0021C794:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0021C7A0u) [[unlikely]] return; }
L_0021C7A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021C7BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021C7B8u) [[unlikely]] return; }
L_0021C7B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021C7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C7D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28144u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0021C7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C800:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021C85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C828u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021C828u) [[unlikely]] return; }
L_0021C828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C83C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C83Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 17u, depth + 1u); else { c.pc = 0x0021C5D0u; return; } if (c.pc != 0x0021C83Cu) [[unlikely]] return; }
L_0021C83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021C84C; } }
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0021C84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C854u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0021C854u) [[unlikely]] return; }
L_0021C854:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_0021C85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C864u);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x0021C864u) [[unlikely]] return; }
L_0021C864:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021C92C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 128u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[3], 0u + 68u);
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 42;
L_0021C92C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] + 31840u);
    set32(c.r[2], c.r[2].w[0] + 31904u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4308ull;
    set32(c.r[18], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 44;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C9DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C9DCu) [[unlikely]] return; }
L_0021C9DC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C9F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021C9F0u) [[unlikely]] return; }
L_0021C9F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA04u) [[unlikely]] return; }
L_0021CA04:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA18u) [[unlikely]] return; }
L_0021CA18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    ld128((c.r[1].w[0] - 24032u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA3Cu) [[unlikely]] return; }
L_0021CA3C:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA50u) [[unlikely]] return; }
L_0021CA50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    ld128((c.r[1].w[0] - 24032u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA74u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA74u) [[unlikely]] return; }
L_0021CA74:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA88u) [[unlikely]] return; }
L_0021CA88:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CA9Cu) [[unlikely]] return; }
L_0021CA9C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CAB0u) [[unlikely]] return; }
L_0021CAB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 29ull;  if (t) { goto L_0021CAD4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0021CAC4:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st64((c.r[3].w[0] + 192u), c.r[4].d[0]);
    c.budget -= 4;
L_0021CAD4:
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CAC4u | kUnwind; return; } goto L_0021CAC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[16], 0u + 3u);  if (t) { goto L_0021CB90; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0021CB94; } }
L_0021CB04:
    set32(c.r[2], c.r[17].w[0] << 30);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 112u), 0u);
    c.f[0] = ld32((c.r[1].w[0] + 23984u));
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB64u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0021CB64u) [[unlikely]] return; }
L_0021CB64:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CB78u) [[unlikely]] return; }
L_0021CB78:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CB8Cu) [[unlikely]] return; }
L_0021CB8C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021CB90:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021CB94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CB04u | kUnwind; return; } goto L_0021CB04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[2] = 0u;
    set32(c.r[8], c.r[8].w[0] - 24160u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] + 23824u);
    set32(c.r[10], c.r[29].w[0] + 80u);
    set32(c.r[9], c.r[29].w[0] + 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 12u);  if (t) { goto L_0021CC94; } }
    set32(c.r[3], c.r[11].w[0] << 2);
    c.budget -= 1;
L_0021CBD4:
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    set32(c.r[3], c.r[11].w[0] << 4);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    vu::ftoi(c.vu0, 15u, 10u, 9u, 4);
    st128((c.r[10].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 26;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0021CC44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[5].w[0]);  if (t) { goto L_0021CC4C; } }
L_0021CC44:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 2;
L_0021CC4C:
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2112ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021CC90; } }
    c.r[1].d[0] = c.r[3].sd[0] < 577ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021CC90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0021CC90; } }
    breakpoint(c, 0x0021CC8Cu);
    c.budget -= 1;
L_0021CC90:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0021CC94:
    c.r[3].d[0] = c.r[11].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[11].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CBD4u | kUnwind; return; } goto L_0021CBD4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0021CCDC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CCC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CCC8u) [[unlikely]] return; }
L_0021CCC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CCDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CCDCu) [[unlikely]] return; }
L_0021CCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0021CD00:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[1].w[0] + 31072u)));
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31904u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 208u), 0u);
    set32(c.r[4], c.r[4].w[0] + 31840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4308ull;
    set32(c.r[17], c.r[5].w[0] + c.r[1].w[0]);
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
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::div(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[3]);
    vu::mulbc(c.vu0, 14u, 9u, 9u, c.vu0.q);
    vu::ftoi(c.vu0, 15u, 10u, 9u, 4);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 69;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0021CE20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.r[3].w[0]);  if (t) { goto L_0021CE28; } }
L_0021CE20:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 2;
L_0021CE28:
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4672ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], 0u + 128u);  if (t) { goto L_0021CE74; } }
    c.r[1].d[0] = c.r[3].sd[0] < 577ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021CE74; } }
    set32(c.r[3], c.r[3].w[0] - 576u);
    set32(c.r[16], c.r[3].w[0] >> 5);
    c.budget -= 2;
L_0021CE74:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(129ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021CE84; } }
    set32(c.r[16], 0u + 128u);
    c.budget -= 1;
L_0021CE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_0021D0F4; } }
L_0021CE8C:
    set32(c.r[2], c.r[19].w[0] + 1u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.r[18].d[0] = c.r[2].d[0] & 3ull;
    st32((c.r[29].w[0] + 136u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] << 10);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[8].w[0] + 64u) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] - 28144u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 23984u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 20);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF14u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0021CF14u) [[unlikely]] return; }
L_0021CF14:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021CF28u) [[unlikely]] return; }
L_0021CF28:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021CF3C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0021D000; } }
L_0021CF3C:
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021D000; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | 100ull;
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 42;
L_0021D000:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D014u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D014u) [[unlikely]] return; }
L_0021D014:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021D028; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0021D0EC; } }
L_0021D028:
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0021D0EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 1380u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[6].d[0] | 2ull;
    c.r[10].d[0] = c.r[4].d[0] | 3ull;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = 0ull | 32769ull;
    set32(c.r[6], 0u + 14u);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[4], 0u + 128u);
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[4].d[0] << 32;
    st64((c.r[11].w[0]), c.r[10].d[0]);
    set32(c.r[4], 0u + 68u);
    st64((c.r[11].w[0] + 8u), 0ull);
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st64((c.r[11].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[11].w[0] + 24u), c.r[9].w[0]);
    set32(c.r[4], 0u + 66u);
    st32((c.r[11].w[0] + 28u), c.r[8].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[11].w[0] + 32u), c.r[7].d[0]);
    st64((c.r[11].w[0] + 40u), c.r[6].d[0]);
    st64((c.r[11].w[0] + 48u), c.r[5].d[0]);
    st64((c.r[11].w[0] + 56u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[4].w[0]);
    c.budget -= 42;
L_0021D0EC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 2;
L_0021D0F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CE8Cu | kUnwind; return; } goto L_0021CE8C; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31608u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021D368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_0021D274; } }
L_0021D110:
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    st32((c.r[29].w[0] + 120u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0021D1EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 1380u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    set32(c.r[3], 0u + 14u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    st64((c.r[8].w[0]), c.r[7].d[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    st64((c.r[8].w[0] + 16u), 0ull);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[5].w[0]);
    st64((c.r[8].w[0] + 32u), c.r[4].d[0]);
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[8].w[0] + 40u), c.r[3].d[0]);  if (t) { goto L_0021D194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0021D198; } }
L_0021D194:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021D198:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    set32(c.r[3], 0u + 66u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 100ull;
    st64((c.r[8].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[8].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 21;
L_0021D1EC:
    set32(c.r[2], c.r[18].w[0] << 30);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], c.r[18].w[0] << 4);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[1].w[0] + 23984u));
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D244u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0021D244u) [[unlikely]] return; }
L_0021D244:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D258u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D258u) [[unlikely]] return; }
L_0021D258:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D26Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D26Cu) [[unlikely]] return; }
L_0021D26C:
    set32(c.r[18], c.r[18].w[0] + 3u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 2;
L_0021D274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D110u | kUnwind; return; } goto L_0021D110; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0021D340; } }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[9], ld32((c.r[1].w[0] + 1380u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] | 100ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[2].d[0] | 2ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[5].d[0];
    c.r[2].d[0] = 0ull | 32769ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st64((c.r[9].w[0] + 8u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[4], 0u + 14u);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[2], 0u + 66u);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 41;
L_0021D340:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D354u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D354u) [[unlikely]] return; }
L_0021D354:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D368u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D368u) [[unlikely]] return; }
L_0021D368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0021D42C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 128u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[3], 0u + 68u);
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 41;
L_0021D42C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0021D450:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D470u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0021D470u) [[unlikely]] return; }
L_0021D470:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021D52C; } }
L_0021D47C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    set32(c.r[17], c.r[29].w[0] + 84u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[29].w[0] + 92u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2280000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D4BCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 143u, depth + 1u); else { c.pc = 0x0022E1D0u; return; } if (c.pc != 0x0021D4BCu) [[unlikely]] return; }
L_0021D4BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D4DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 143u, depth + 1u); else { c.pc = 0x0022E1D0u; return; } if (c.pc != 0x0021D4DCu) [[unlikely]] return; }
L_0021D4DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[2] = ld32((c.r[1].w[0] + 24048u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D51Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004B(c, 143u, depth + 1u); else { c.pc = 0x0022E1D0u; return; } if (c.pc != 0x0021D51Cu) [[unlikely]] return; }
L_0021D51C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D47Cu | kUnwind; return; } goto L_0021D47C; } }
L_0021D52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021D550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021D5B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 6208u);
    set32(c.r[2], c.r[2].w[0] - 6192u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D590u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0021D590u) [[unlikely]] return; }
L_0021D590:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D59Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0021D59Cu) [[unlikely]] return; }
L_0021D59C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021D5B4u) [[unlikely]] return; }
L_0021D5B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021D5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021D618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D600u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0021D600u) [[unlikely]] return; }
L_0021D600:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D61C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021D618u) [[unlikely]] return; }
L_0021D618:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021D61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021D6C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 6080u);
    set32(c.r[2], c.r[2].w[0] - 6064u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 6048u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 6032u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0021D688u) [[unlikely]] return; }
L_0021D688:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0021D694u) [[unlikely]] return; }
L_0021D694:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D6A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0021D6A0u) [[unlikely]] return; }
L_0021D6A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D6ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x0021D6ACu) [[unlikely]] return; }
L_0021D6AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D6C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021D6C4u) [[unlikely]] return; }
L_0021D6C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021D6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021D728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D710u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0021D710u) [[unlikely]] return; }
L_0021D710:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D72C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021D728u) [[unlikely]] return; }
L_0021D728:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021D72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021D7A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5728u);
    set32(c.r[2], c.r[2].w[0] - 5712u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0021D780u) [[unlikely]] return; }
L_0021D780:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D78Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0021D78Cu) [[unlikely]] return; }
L_0021D78C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D7A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021D7A4u) [[unlikely]] return; }
L_0021D7A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021D7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D7C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D740u | kUnwind; return; } goto L_0021D740; }
L_0021D7D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002185B0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 16u, depth); }
L_0021D7E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00217270u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 160u, depth); }
L_0021D7F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00217650u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 177u, depth); }
L_0021D800:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00217270u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 160u, depth); }
L_0021D810:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00217270u | kUnwind; return; } [[clang::musttail]] return unit_0045(c, 160u, depth); }
L_0021D820:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00218FD0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 49u, depth); }
L_0021D830:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002194F0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 64u, depth); }
L_0021D840:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002197D0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 85u, depth); }
L_0021D850:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219620u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 74u, depth); }
L_0021D860:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219B40u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 93u, depth); }
L_0021D870:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 424u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219620u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 74u, depth); }
L_0021D880:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 436u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00219620u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 74u, depth); }
L_0021D890:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021A560u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 123u, depth); }
L_0021D8A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021A6B0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 128u, depth); }
L_0021D8B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021A990u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 153u, depth); }
L_0021D8C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D630u | kUnwind; return; } goto L_0021D630; }
L_0021D8D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021A8F0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 148u, depth); }
L_0021D8E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D630u | kUnwind; return; } goto L_0021D630; }
L_0021D8F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D630u | kUnwind; return; } goto L_0021D630; }
L_0021D900:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B9C0u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 205u, depth); }
L_0021D910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B800u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 193u, depth); }
L_0021D920:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B930u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 202u, depth); }
L_0021D930:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B800u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 193u, depth); }
L_0021D940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B800u | kUnwind; return; } [[clang::musttail]] return unit_0046(c, 193u, depth); }
L_0021D950:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D550u | kUnwind; return; } goto L_0021D550; }
L_0021D960:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C800u | kUnwind; return; } goto L_0021C800; }
L_0021D970:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C720u | kUnwind; return; } goto L_0021C720; }
L_0021D980:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C7F0u | kUnwind; return; } goto L_0021C7F0; }
L_0021D990:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C720u | kUnwind; return; } goto L_0021C720; }
L_0021D9A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C720u | kUnwind; return; } goto L_0021C720; }
L_0021D9B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 260u), c.r[3].w[0]);  c.pc = t; return; }
L_0021D9C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 260u), 0u);  c.pc = t; return; }
L_0021D9D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));  c.pc = t; return; }
L_0021D9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 52u);
    c.f[1] = ld32((c.r[1].w[0] + 28832u));
    set32(c.r[16], c.r[29].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28848u));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28864u));
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA40u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x0021DA40u) [[unlikely]] return; }
L_0021DA40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28768u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28772u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28776u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DA68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0021DA68u) [[unlikely]] return; }
L_0021DA68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    c.f[1] = ld32((c.r[1].w[0] + 28836u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28852u));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28868u));
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DAA0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x0021DAA0u) [[unlikely]] return; }
L_0021DAA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28784u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28788u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28792u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DAC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0021DAC8u) [[unlikely]] return; }
L_0021DAC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 2u);
    c.f[1] = ld32((c.r[1].w[0] + 28840u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28856u));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28872u));
    st32((c.r[16].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB00u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x0021DB00u) [[unlikely]] return; }
L_0021DB00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28800u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28804u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28808u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB28u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0021DB28u) [[unlikely]] return; }
L_0021DB28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28816u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB4Cu); c.f[14] = ld32((c.r[1].w[0] + 28824u));  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0021DB4Cu) [[unlikely]] return; }
L_0021DB4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB60u); set32(c.r[5], ld32((c.r[1].w[0] + 28272u)));  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x0021DB60u) [[unlikely]] return; }
L_0021DB60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0021DC18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[4], 0u + 68u);
    set32(c.r[3], 0u + 66u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 38;
L_0021DC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021DC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0021DC48u) [[unlikely]] return; }
L_0021DC48:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0021DC54u) [[unlikely]] return; }
L_0021DC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5600u);
    set32(c.r[3], c.r[3].w[0] - 5584u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0021DC98u) [[unlikely]] return; }
L_0021DC98:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCA4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0021DCA4u) [[unlikely]] return; }
L_0021DCA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5648u);
    set32(c.r[3], c.r[3].w[0] - 5632u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0021DCE8u) [[unlikely]] return; }
L_0021DCE8:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCF4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0021DCF4u) [[unlikely]] return; }
L_0021DCF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5696u);
    set32(c.r[3], c.r[3].w[0] - 5680u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x0021DD3Cu) [[unlikely]] return; }
L_0021DD3C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD48u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0021DD48u) [[unlikely]] return; }
L_0021DD48:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0021DD54u) [[unlikely]] return; }
L_0021DD54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5456u);
    set32(c.r[2], c.r[2].w[0] - 5440u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 5424u);
    set32(c.r[2], 0u + 128u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_0021DDC8; } }
L_0021DD9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4452u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021DDD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 3;
L_0021DDC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DD9Cu | kUnwind; return; } goto L_0021DD9C; } }
L_0021DDD8:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021DE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 1524u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x0021DE34u) [[unlikely]] return; }
L_0021DE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE3Cu);  if (depth < kMaxDepth) unit_0047(c, 131u, depth + 1u); else { c.pc = 0x0021D9F0u; return; } if (c.pc != 0x0021DE3Cu) [[unlikely]] return; }
L_0021DE3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021DEFC; } }
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
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 1293ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    c.budget -= 40;
L_0021DEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_0021DFF4; } }
L_0021DF04:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[12].d[0] = c.r[5].d[0] | 100ull;  if (t) { goto L_0021DFC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[9].d[0] = c.r[4].d[0] | 3ull;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = 0ull | 32769ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[6].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 2ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], 0u + 66u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[12].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[4].w[0]);
    c.budget -= 38;
L_0021DFC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4452u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DFECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DFECu) [[unlikely]] return; }
L_0021DFEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 2;
L_0021DFF4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DF04u | kUnwind; return; } goto L_0021DF04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4480u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_0021E028; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0021E02C; } }
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 1;
L_0021E028:
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_0021E02C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] << 2);  if (t) { goto L_0021E104; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E080; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021E064; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[5].w[0]);  if (t) { goto L_0021E094; } }
L_0021E064:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0021E094; } }
L_0021E080:
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 5;
L_0021E094:
    set32(c.r[2], 0u + 124u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0021E104; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021E0C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021E104; } }
L_0021E0C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021E104; } }
    st32((c.r[18].w[0] + 64u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 6;
L_0021E104:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E114u); c.r[5].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0013(c, 218u, depth + 1u); else { c.pc = 0x0014F060u; return; } if (c.pc != 0x0021E114u) [[unlikely]] return; }
L_0021E114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021E130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C6B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 17260ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E150u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0021E150u) [[unlikely]] return; }
L_0021E150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], c.r[2].w[0] - 5472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E164u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021E164u) [[unlikely]] return; }
L_0021E164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021E174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x0021E174u) [[unlikely]] return; }
L_0021E174:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021E190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021E200; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5472u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E1C0u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_000F(c, 44u, depth + 1u); else { c.pc = 0x0013C550u; return; } if (c.pc != 0x0021E1C0u) [[unlikely]] return; }
L_0021E1C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E1DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E1DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E1DCu) [[unlikely]] return; }
L_0021E1DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E1E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0021E1E8u) [[unlikely]] return; }
L_0021E1E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021E204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E200u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021E200u) [[unlikely]] return; }
L_0021E200:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021E204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021E220:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  c.pc = t; return; }
L_0021E230:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021E248; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_0021E248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021E27C; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021E27C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0021E27C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021E294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E28Cu); set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0021E28Cu) [[unlikely]] return; }
L_0021E28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0021E2A0; } }
L_0021E294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E29Cu); set32(c.r[4], ld32((c.r[4].w[0] + 28u)));  if (depth < kMaxDepth) unit_000F(c, 42u, depth + 1u); else { c.pc = 0x0013C4E0u; return; } if (c.pc != 0x0021E29Cu) [[unlikely]] return; }
L_0021E29C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0021E2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021E2B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E2E0u); c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021E2E0u) [[unlikely]] return; }
L_0021E2E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0021E2FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E2F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021E2F4u) [[unlikely]] return; }
L_0021E2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E300; } }
L_0021E2FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_0021E3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E310u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021E310u) [[unlikely]] return; }
L_0021E310:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021E330; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E32Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021E32Cu) [[unlikely]] return; }
L_0021E32C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021E330:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E340u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021E340u) [[unlikely]] return; }
L_0021E340:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E34Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021E34Cu) [[unlikely]] return; }
L_0021E34C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021E370; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E36Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021E36Cu) [[unlikely]] return; }
L_0021E36C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021E370:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021E380u) [[unlikely]] return; }
L_0021E380:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E398u) [[unlikely]] return; }
L_0021E398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021E3A4; } }
L_0021E3A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E3A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021E3C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[6], ld32((c.r[1].w[0] + 27984u)));
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[6].w[0] + 120u);
    st32((c.r[1].w[0] - 23944u), c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 23940u), c.r[3].w[0]);  c.pc = t; return; }
L_0021E3F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 29248ull;
    set32(c.r[29], c.r[29].w[0] + c.r[1].w[0]);
    st64((c.r[29].w[0] + 480u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E434u); st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0030(c, 6u, depth + 1u); else { c.pc = 0x001C0080u; return; } if (c.pc != 0x0021E434u) [[unlikely]] return; }
L_0021E434:
    set32(c.r[4], c.r[21].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E440u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0021E440u) [[unlikely]] return; }
L_0021E440:
    set32(c.r[4], c.r[21].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E44Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0021E44Cu) [[unlikely]] return; }
L_0021E44C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x67530000u);
    set32(c.r[4], c.r[21].w[0] + 436u);
    c.r[5].d[0] = c.r[2].d[0] | 21575ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E460u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0021E460u) [[unlikely]] return; }
L_0021E460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 5552u);
    set32(c.r[2], c.r[2].w[0] - 5532u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[21].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 5516u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 5500u);
    st32((c.r[21].w[0] + 424u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E494u); st32((c.r[21].w[0] + 460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0021E494u) [[unlikely]] return; }
L_0021E494:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 392u));
    set32(c.r[4], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[21].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = ld8((c.r[21].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[21].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[21].w[0] + 464u), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[21].w[0] + 1748u);  if (t) { goto L_0021E50C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52430000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E4ECu); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0021E4ECu) [[unlikely]] return; }
L_0021E4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021E4F8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0021E4F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);  if (t) { goto L_0021E508; } }
    set32(c.r[2], c.r[2].w[0] - 12112u);
    st32((c.r[3].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 2;
L_0021E508:
    set32(c.r[4], c.r[21].w[0] + 1748u);
    c.budget -= 1;
L_0021E50C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E518u); set32(c.r[6], 0u + 640u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E518u) [[unlikely]] return; }
L_0021E518:
    set32(c.r[4], c.r[21].w[0] + 468u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E528u); set32(c.r[6], 0u + 1280u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E528u) [[unlikely]] return; }
L_0021E528:
    set32(c.r[4], c.r[21].w[0] + 2388u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E538u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E538u) [[unlikely]] return; }
L_0021E538:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_0021E554; } }
L_0021E544:
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 475u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0021E554:
    c.r[2].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E544u | kUnwind; return; } goto L_0021E544; } }
    st32((c.r[21].w[0] + 2500u), 0u);
    set32(c.r[4], c.r[21].w[0] + 2540u);
    st32((c.r[21].w[0] + 2504u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 2508u), 0u);
    set32(c.r[6], 0u + 128u);
    st32((c.r[21].w[0] + 2512u), 0u);
    st32((c.r[21].w[0] + 2516u), 0u);
    st32((c.r[21].w[0] + 2520u), 0u);
    st32((c.r[21].w[0] + 2524u), 0u);
    st32((c.r[21].w[0] + 2528u), 0u);
    st32((c.r[21].w[0] + 2532u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E598u); st32((c.r[21].w[0] + 2536u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E598u) [[unlikely]] return; }
L_0021E598:
    set32(c.r[4], c.r[21].w[0] + 2732u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5A8u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E5A8u) [[unlikely]] return; }
L_0021E5A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 4256ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5C0u); set32(c.r[4], c.r[21].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E5C0u) [[unlikely]] return; }
L_0021E5C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 4268ull;
    set32(c.r[6], 0u + 40u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5D8u); set32(c.r[4], c.r[21].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E5D8u) [[unlikely]] return; }
L_0021E5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 4368ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5F0u); set32(c.r[4], c.r[21].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E5F0u) [[unlikely]] return; }
L_0021E5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 4308ull;
    set32(c.r[6], 0u + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E608u); set32(c.r[4], c.r[21].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E608u) [[unlikely]] return; }
L_0021E608:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 4376ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E620u); set32(c.r[4], c.r[21].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E620u) [[unlikely]] return; }
L_0021E620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 64u);
    st32((c.r[1].w[0] + 4384u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4388ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E644u); set32(c.r[4], c.r[21].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E644u) [[unlikely]] return; }
L_0021E644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 4452ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E65Cu); set32(c.r[4], c.r[21].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E65Cu) [[unlikely]] return; }
L_0021E65C:
    set32(c.r[4], c.r[21].w[0] + 2860u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E66Cu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E66Cu) [[unlikely]] return; }
L_0021E66C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[1].w[0] + 4488u), 0u);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 256u);
    st32((c.r[1].w[0] + 4544u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4548u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4472u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6C0u); st32((c.r[1].w[0] + 4476u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0021E6C0u) [[unlikely]] return; }
L_0021E6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6C8u);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0021E6C8u) [[unlikely]] return; }
L_0021E6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6D0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021E6D0u) [[unlikely]] return; }
L_0021E6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021E6E8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x0021E6E4u) [[unlikely]] return; }
L_0021E6E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021E6E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6F4u); set32(c.r[5], 0u + 200u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021E6F4u) [[unlikely]] return; }
L_0021E6F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021E710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E708u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021E708u) [[unlikely]] return; }
L_0021E708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E714; } }
L_0021E710:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021E858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E728u); c.r[4].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0021E728u) [[unlikely]] return; }
L_0021E728:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E738u); set32(c.r[5], 0u + 200u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021E738u) [[unlikely]] return; }
L_0021E738:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021E750; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E750u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021E750u) [[unlikely]] return; }
L_0021E750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E758u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021E758u) [[unlikely]] return; }
L_0021E758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021E770; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E76Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x0021E76Cu) [[unlikely]] return; }
L_0021E76C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021E770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E778u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x0021E778u) [[unlikely]] return; }
L_0021E778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021E784; } }
    set32(c.r[3], 0u + 144u);
    c.budget -= 1;
L_0021E784:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 27984u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23992u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7A4u); st32((c.r[1].w[0] - 23988u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x0021E7A4u) [[unlikely]] return; }
L_0021E7A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021E800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7B8u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x0021E7B8u) [[unlikely]] return; }
L_0021E7B8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 86u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021E800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7D0u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0021E7D0u) [[unlikely]] return; }
L_0021E7D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7F0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 230u, depth + 1u); else { c.pc = 0x001962B0u; return; } if (c.pc != 0x0021E7F0u) [[unlikely]] return; }
L_0021E7F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E800u); st32((c.r[1].w[0] + 4544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0021E800u) [[unlikely]] return; }
L_0021E800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 24016u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_0021E820; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 23980u), c.r[2].w[0]);  if (t) { goto L_0021E824; } }
L_0021E820:
    st32((c.r[1].w[0] - 23980u), 0u);
    c.budget -= 1;
L_0021E824:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E83Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x0021E83Cu) [[unlikely]] return; }
L_0021E83C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E850u); st8((c.r[1].w[0] - 24016u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x0021E850u) [[unlikely]] return; }
L_0021E850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0021E858u) [[unlikely]] return; }
L_0021E858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E860u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0021E860u) [[unlikely]] return; }
L_0021E860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E86Cu); c.r[4].d[0] = c.r[2].d[0] | 24576ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0021E86Cu) [[unlikely]] return; }
L_0021E86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E874u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0021E874u) [[unlikely]] return; }
L_0021E874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E87Cu); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021E87Cu) [[unlikely]] return; }
L_0021E87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021E890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E88Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 160u, depth + 1u); else { c.pc = 0x0021E130u; return; } if (c.pc != 0x0021E88Cu) [[unlikely]] return; }
L_0021E88C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021E890:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4492u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8ACu); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0021E8ACu) [[unlikely]] return; }
L_0021E8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021EA28; } }
L_0021E8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021E8BCu) [[unlikely]] return; }
L_0021E8BC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021E8D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021E8D0u) [[unlikely]] return; }
L_0021E8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E8DC; } }
L_0021E8D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021E8DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021EA24; } }
    set32(c.r[2], 0u + 148u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 149u);  if (t) { goto L_0021E904; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021EA24; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 1;
L_0021E904:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_0021E91C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021EA24; } }
L_0021E91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E924u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021E924u) [[unlikely]] return; }
L_0021E924:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021E93C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E93Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021E93Cu) [[unlikely]] return; }
L_0021E93C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E950u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021E950u) [[unlikely]] return; }
L_0021E950:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E95Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021E95Cu) [[unlikely]] return; }
L_0021E95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0021E97C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E978u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021E978u) [[unlikely]] return; }
L_0021E978:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0021E97C:
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E994u); set32(c.r[4], ld32((c.r[3].w[0] + 1748u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021E994u) [[unlikely]] return; }
L_0021E994:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1748u)));
    st32((c.r[4].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1748u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E9BCu) [[unlikely]] return; }
L_0021E9BC:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9CCu); set32(c.r[4], ld32((c.r[2].w[0] + 1748u)));  if (depth < kMaxDepth) unit_0047(c, 128u, depth + 1u); else { c.pc = 0x0021D9B0u; return; } if (c.pc != 0x0021E9CCu) [[unlikely]] return; }
L_0021E9CC:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[21].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 474u));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9F0u); st8((c.r[5].w[0] + 474u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x0021E9F0u) [[unlikely]] return; }
L_0021E9F0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 86u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0021EA24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1748u)));
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA24u); c.f[15] = c.f[12];  if (depth < kMaxDepth) unit_0015(c, 80u, depth + 1u); else { c.pc = 0x00156D30u; return; } if (c.pc != 0x0021EA24u) [[unlikely]] return; }
L_0021EA24:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021EA28:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(160ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E8B4u | kUnwind; return; } goto L_0021E8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021EA5C; } }
L_0021EA3C:
    set32(c.r[5], 0u + 950u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA4Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 174u, depth + 1u); else { c.pc = 0x0021E2B0u; return; } if (c.pc != 0x0021EA4Cu) [[unlikely]] return; }
L_0021EA4C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 2452u), c.r[2].w[0]);
    c.budget -= 4;
L_0021EA5C:
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EA3Cu | kUnwind; return; } goto L_0021EA3C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 952u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA7Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 174u, depth + 1u); else { c.pc = 0x0021E2B0u; return; } if (c.pc != 0x0021EA7Cu) [[unlikely]] return; }
L_0021EA7C:
    st32((c.r[21].w[0] + 2504u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 956u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA94u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 174u, depth + 1u); else { c.pc = 0x0021E2B0u; return; } if (c.pc != 0x0021EA94u) [[unlikely]] return; }
L_0021EA94:
    st32((c.r[21].w[0] + 2508u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 957u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAACu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 174u, depth + 1u); else { c.pc = 0x0021E2B0u; return; } if (c.pc != 0x0021EAACu) [[unlikely]] return; }
L_0021EAAC:
    st32((c.r[21].w[0] + 2512u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 951u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAC4u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 174u, depth + 1u); else { c.pc = 0x0021E2B0u; return; } if (c.pc != 0x0021EAC4u) [[unlikely]] return; }
L_0021EAC4:
    st32((c.r[21].w[0] + 2516u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 954u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EADCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 174u, depth + 1u); else { c.pc = 0x0021E2B0u; return; } if (c.pc != 0x0021EADCu) [[unlikely]] return; }
L_0021EADC:
    st32((c.r[21].w[0] + 2524u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAECu); set32(c.r[5], 0u + 955u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EAECu) [[unlikely]] return; }
L_0021EAEC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB00u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021EB00u) [[unlikely]] return; }
L_0021EB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EB0C; } }
L_0021EB08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EB84; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB20u); set32(c.r[5], 0u + 955u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EB20u) [[unlikely]] return; }
L_0021EB20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021EB38; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB38u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021EB38u) [[unlikely]] return; }
L_0021EB38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB4Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021EB4Cu) [[unlikely]] return; }
L_0021EB4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB58u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021EB58u) [[unlikely]] return; }
L_0021EB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0021EB70; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021EB70u) [[unlikely]] return; }
L_0021EB70:
    st32((c.r[21].w[0] + 2500u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 2500u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 256u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
L_0021EB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB8Cu); set32(c.r[5], 0u + 953u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EB8Cu) [[unlikely]] return; }
L_0021EB8C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EBA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021EBA0u) [[unlikely]] return; }
L_0021EBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EBAC; } }
L_0021EBA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EBAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021EC28; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBC0u); set32(c.r[5], 0u + 953u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EBC0u) [[unlikely]] return; }
L_0021EBC0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021EBD8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBD8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021EBD8u) [[unlikely]] return; }
L_0021EBD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021EBECu) [[unlikely]] return; }
L_0021EBEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBF8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021EBF8u) [[unlikely]] return; }
L_0021EBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0021EC10; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021EC10u) [[unlikely]] return; }
L_0021EC10:
    st32((c.r[21].w[0] + 2520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC24u); set32(c.r[4], ld32((c.r[21].w[0] + 2520u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021EC24u) [[unlikely]] return; }
L_0021EC24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021EC28:
    set32(c.r[2], 0u + 1u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4480u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4508u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4516u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EC6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 25658u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021EDB0; } }
L_0021EC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC74u); set32(c.r[5], 0u + 800u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EC74u) [[unlikely]] return; }
L_0021EC74:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021EC88u) [[unlikely]] return; }
L_0021EC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EC94; } }
L_0021EC90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021EE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECA4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0021ECA4u) [[unlikely]] return; }
L_0021ECA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25559u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECC4u); set32(c.r[5], 0u + 800u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021ECC4u) [[unlikely]] return; }
L_0021ECC4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021ECDC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECDCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021ECDCu) [[unlikely]] return; }
L_0021ECDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021ECF0u) [[unlikely]] return; }
L_0021ECF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECFCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021ECFCu) [[unlikely]] return; }
L_0021ECFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0021ED14; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021ED14u) [[unlikely]] return; }
L_0021ED14:
    st32((c.r[21].w[0] + 2528u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 2528u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 2528u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021ED38u) [[unlikely]] return; }
L_0021ED38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED40u); set32(c.r[4], ld32((c.r[21].w[0] + 2528u)));  if (depth < kMaxDepth) unit_0047(c, 128u, depth + 1u); else { c.pc = 0x0021D9B0u; return; } if (c.pc != 0x0021ED40u) [[unlikely]] return; }
L_0021ED40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED48u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021ED48u) [[unlikely]] return; }
L_0021ED48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021ED60; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 2528u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 63u, depth + 1u); else { c.pc = 0x00230A40u; return; } if (c.pc != 0x0021ED5Cu) [[unlikely]] return; }
L_0021ED5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021ED60:
    set32(c.r[4], 0u + 32u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED70u); st32((c.r[1].w[0] + 4508u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021ED70u) [[unlikely]] return; }
L_0021ED70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021ED94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4508u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED90u); set32(c.r[5], c.r[3].w[0] + 72u);  if (depth < kMaxDepth) unit_004C(c, 80u, depth + 1u); else { c.pc = 0x00230E40u; return; } if (c.pc != 0x0021ED90u) [[unlikely]] return; }
L_0021ED90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021ED94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4508u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDA8u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0021EDA8u) [[unlikely]] return; }
L_0021EDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EE90; } }
L_0021EDB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDBCu); set32(c.r[5], 0u + 803u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EDBCu) [[unlikely]] return; }
L_0021EDBC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDD0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021EDD0u) [[unlikely]] return; }
L_0021EDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EDDC; } }
L_0021EDD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDECu); set32(c.r[5], 0u + 803u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EDECu) [[unlikely]] return; }
L_0021EDEC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021EE04; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021EE04u) [[unlikely]] return; }
L_0021EE04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE18u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021EE18u) [[unlikely]] return; }
L_0021EE18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE24u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021EE24u) [[unlikely]] return; }
L_0021EE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0021EE3C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021EE3Cu) [[unlikely]] return; }
L_0021EE3C:
    st32((c.r[21].w[0] + 2536u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 2536u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 2536u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EE60u) [[unlikely]] return; }
L_0021EE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE68u); set32(c.r[4], ld32((c.r[21].w[0] + 2536u)));  if (depth < kMaxDepth) unit_0047(c, 128u, depth + 1u); else { c.pc = 0x0021D9B0u; return; } if (c.pc != 0x0021EE68u) [[unlikely]] return; }
L_0021EE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE70u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021EE70u) [[unlikely]] return; }
L_0021EE70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021EE88; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 2536u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 63u, depth + 1u); else { c.pc = 0x00230A40u; return; } if (c.pc != 0x0021EE84u) [[unlikely]] return; }
L_0021EE84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021EE88:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4516u), c.r[2].w[0]);
    c.budget -= 2;
L_0021EE90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021EE94:
    set32(c.r[2], 0u + 1u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4512u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 801u);  if (t) { goto L_0021EED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEB8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0021EEB8u) [[unlikely]] return; }
L_0021EEB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25559u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0021EED8; } }
L_0021EED0:
    set32(c.r[16], 0u + 802u);
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 2;
L_0021EED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEE0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EEE0u) [[unlikely]] return; }
L_0021EEE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021EEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021EEF4u) [[unlikely]] return; }
L_0021EEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EF00; } }
L_0021EEFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021EF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0021F004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021EF10u) [[unlikely]] return; }
L_0021EF10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021EF28; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF28u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021EF28u) [[unlikely]] return; }
L_0021EF28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021EF3Cu) [[unlikely]] return; }
L_0021EF3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF48u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021EF48u) [[unlikely]] return; }
L_0021EF48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0021EF60; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021EF60u) [[unlikely]] return; }
L_0021EF60:
    st32((c.r[21].w[0] + 2532u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF74u); set32(c.r[4], ld32((c.r[21].w[0] + 2532u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021EF74u) [[unlikely]] return; }
L_0021EF74:
    set32(c.r[3], ld32((c.r[21].w[0] + 2532u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 2532u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EF94u) [[unlikely]] return; }
L_0021EF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF9Cu); set32(c.r[4], ld32((c.r[21].w[0] + 2532u)));  if (depth < kMaxDepth) unit_0047(c, 128u, depth + 1u); else { c.pc = 0x0021D9B0u; return; } if (c.pc != 0x0021EF9Cu) [[unlikely]] return; }
L_0021EF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFA4u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021EFA4u) [[unlikely]] return; }
L_0021EFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021EFBC; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 2532u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004C(c, 63u, depth + 1u); else { c.pc = 0x00230A40u; return; } if (c.pc != 0x0021EFB8u) [[unlikely]] return; }
L_0021EFB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021EFBC:
    set32(c.r[4], 0u + 32u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFCCu); st32((c.r[1].w[0] + 4512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021EFCCu) [[unlikely]] return; }
L_0021EFCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021EFF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4512u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFECu); set32(c.r[5], c.r[3].w[0] + 72u);  if (depth < kMaxDepth) unit_004C(c, 86u, depth + 1u); else { c.pc = 0x00230F30u; return; } if (c.pc != 0x0021EFECu) [[unlikely]] return; }
L_0021EFEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021EFF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4512u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F004u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0021F004u) [[unlikely]] return; }
L_0021F004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021F108; } }
L_0021F00C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F018u); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F018u) [[unlikely]] return; }
L_0021F018:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F02Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F02Cu) [[unlikely]] return; }
L_0021F02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F038; } }
L_0021F034:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_0021F114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F048u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F048u) [[unlikely]] return; }
L_0021F048:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F060; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F060u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F060u) [[unlikely]] return; }
L_0021F060:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F074u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F074u) [[unlikely]] return; }
L_0021F074:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F080u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F080u) [[unlikely]] return; }
L_0021F080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0021F0A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F09Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F09Cu) [[unlikely]] return; }
L_0021F09C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0021F0A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4452u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0C8u); set32(c.r[4], ld32((c.r[1].w[0] + 4452u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021F0C8u) [[unlikely]] return; }
L_0021F0C8:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4452u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F0ECu) [[unlikely]] return; }
L_0021F0EC:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F104u); set32(c.r[4], ld32((c.r[1].w[0] + 4452u)));  if (depth < kMaxDepth) unit_0047(c, 128u, depth + 1u); else { c.pc = 0x0021D9B0u; return; } if (c.pc != 0x0021F104u) [[unlikely]] return; }
L_0021F104:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021F108:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 350u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F00Cu | kUnwind; return; } goto L_0021F00C; } }
L_0021F114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F11Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0021F11Cu) [[unlikely]] return; }
L_0021F11C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021F224; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021F224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F140u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0021F140u) [[unlikely]] return; }
L_0021F140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021F210; } }
L_0021F148:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F154u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F154u) [[unlikely]] return; }
L_0021F154:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F168u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F168u) [[unlikely]] return; }
L_0021F168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F174; } }
L_0021F170:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F20C; } }
    set32(c.r[2], c.r[17].w[0] + 921u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F18Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F18Cu) [[unlikely]] return; }
L_0021F18C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F1A4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F1A4u) [[unlikely]] return; }
L_0021F1A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F1B8u) [[unlikely]] return; }
L_0021F1B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1C4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F1C4u) [[unlikely]] return; }
L_0021F1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0021F1E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F1E0u) [[unlikely]] return; }
L_0021F1E0:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0021F1E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F20Cu); set32(c.r[4], ld32((c.r[1].w[0] + 4256u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021F20Cu) [[unlikely]] return; }
L_0021F20C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021F210:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 921u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F148u | kUnwind; return; } goto L_0021F148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F224u);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0021F224u) [[unlikely]] return; }
L_0021F224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F22Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0021F22Cu) [[unlikely]] return; }
L_0021F22C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021F334; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021F334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F250u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0021F250u) [[unlikely]] return; }
L_0021F250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021F320; } }
L_0021F258:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F264u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F264u) [[unlikely]] return; }
L_0021F264:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F278u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F278u) [[unlikely]] return; }
L_0021F278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F284; } }
L_0021F280:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F31C; } }
    set32(c.r[2], c.r[17].w[0] + 901u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F29Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F29Cu) [[unlikely]] return; }
L_0021F29C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F2B4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F2B4u) [[unlikely]] return; }
L_0021F2B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F2C8u) [[unlikely]] return; }
L_0021F2C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2D4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F2D4u) [[unlikely]] return; }
L_0021F2D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0021F2F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F2F0u) [[unlikely]] return; }
L_0021F2F0:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0021F2F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F31Cu); set32(c.r[4], ld32((c.r[1].w[0] + 4268u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021F31Cu) [[unlikely]] return; }
L_0021F31C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021F320:
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 901u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F258u | kUnwind; return; } goto L_0021F258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F334u);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0021F334u) [[unlikely]] return; }
L_0021F334:
    set32(c.r[3], ld32((c.r[21].w[0] + 464u)));
    set32(c.r[2], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021F424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021F414; } }
L_0021F34C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F358u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F358u) [[unlikely]] return; }
L_0021F358:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F36Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F36Cu) [[unlikely]] return; }
L_0021F36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F378; } }
L_0021F374:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F410; } }
    set32(c.r[2], c.r[17].w[0] + 960u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F390u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F390u) [[unlikely]] return; }
L_0021F390:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F3A8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F3A8u) [[unlikely]] return; }
L_0021F3A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F3BCu) [[unlikely]] return; }
L_0021F3BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3C8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F3C8u) [[unlikely]] return; }
L_0021F3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0021F3E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F3E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F3E4u) [[unlikely]] return; }
L_0021F3E4:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0021F3E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F410u); set32(c.r[4], ld32((c.r[1].w[0] + 4308u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021F410u) [[unlikely]] return; }
L_0021F410:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021F414:
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 960u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F34Cu | kUnwind; return; } goto L_0021F34C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0021F4C0; } }
L_0021F42C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F438u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F438u) [[unlikely]] return; }
L_0021F438:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F44Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F44Cu) [[unlikely]] return; }
L_0021F44C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F458; } }
L_0021F454:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F4B8; } }
    set32(c.r[2], c.r[16].w[0] + 911u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F470u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F470u) [[unlikely]] return; }
L_0021F470:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F488; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F488u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F488u) [[unlikely]] return; }
L_0021F488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F490u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F490u) [[unlikely]] return; }
L_0021F490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0021F4A8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 211u, depth + 1u); else { c.pc = 0x00142DA0u; return; } if (c.pc != 0x0021F4A4u) [[unlikely]] return; }
L_0021F4A4:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0021F4A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4368u), c.r[2].w[0]);
    c.budget -= 4;
L_0021F4B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_0021F4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 911u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F42Cu | kUnwind; return; } goto L_0021F42C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4D4u); set32(c.r[5], 0u + 995u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F4D4u) [[unlikely]] return; }
L_0021F4D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F4E8u) [[unlikely]] return; }
L_0021F4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F4F4; } }
L_0021F4F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F504u); set32(c.r[5], 0u + 995u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F504u) [[unlikely]] return; }
L_0021F504:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F51C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F51Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F51Cu) [[unlikely]] return; }
L_0021F51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F524u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F524u) [[unlikely]] return; }
L_0021F524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021F53C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F538u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 211u, depth + 1u); else { c.pc = 0x00142DA0u; return; } if (c.pc != 0x0021F538u) [[unlikely]] return; }
L_0021F538:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021F53C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 996u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F550u); st32((c.r[1].w[0] + 4376u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F550u) [[unlikely]] return; }
L_0021F550:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F568; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F568u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F568u) [[unlikely]] return; }
L_0021F568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F570u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F570u) [[unlikely]] return; }
L_0021F570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021F588; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F584u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 211u, depth + 1u); else { c.pc = 0x00142DA0u; return; } if (c.pc != 0x0021F584u) [[unlikely]] return; }
L_0021F584:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021F588:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4380u), c.r[2].w[0]);
    c.budget -= 2;
L_0021F590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F598u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0021F598u) [[unlikely]] return; }
L_0021F598:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0021F66C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5C0u); set32(c.r[5], 0u + 930u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F5C0u) [[unlikely]] return; }
L_0021F5C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F5D4u) [[unlikely]] return; }
L_0021F5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F5E0; } }
L_0021F5DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5F0u); set32(c.r[5], 0u + 930u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F5F0u) [[unlikely]] return; }
L_0021F5F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F608; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F608u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F608u) [[unlikely]] return; }
L_0021F608:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F61Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F61Cu) [[unlikely]] return; }
L_0021F61C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F628u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F628u) [[unlikely]] return; }
L_0021F628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021F648; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F644u) [[unlikely]] return; }
L_0021F644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021F648:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4384u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F668u); set32(c.r[4], ld32((c.r[1].w[0] + 4384u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021F668u) [[unlikely]] return; }
L_0021F668:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021F7D8; } }
L_0021F674:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F680u); c.r[5].d[0] = c.r[22].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F680u) [[unlikely]] return; }
L_0021F680:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F69C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F694u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F694u) [[unlikely]] return; }
L_0021F694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F6A0; } }
L_0021F69C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F6A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[22].d[0] & 65535ull;  if (t) { goto L_0021F7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F6B0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F6B0u) [[unlikely]] return; }
L_0021F6B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F6C8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F6C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F6C8u) [[unlikely]] return; }
L_0021F6C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F6DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F6DCu) [[unlikely]] return; }
L_0021F6DC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F6E8u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F6E8u) [[unlikely]] return; }
L_0021F6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0021F700; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F700u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F700u) [[unlikely]] return; }
L_0021F700:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F714u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021F714u) [[unlikely]] return; }
L_0021F714:
    set32(c.r[25], ld32((c.r[22].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F724u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F724u) [[unlikely]] return; }
L_0021F724:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 2540u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[22], c.r[16].w[0] + 10000u);
    st16((c.r[2].w[0] + 2668u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F74Cu); c.r[5].d[0] = c.r[22].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F74Cu) [[unlikely]] return; }
L_0021F74C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F760u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F760u) [[unlikely]] return; }
L_0021F760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F76C; } }
L_0021F768:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[22].d[0] & 65535ull;  if (t) { goto L_0021F7D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F77Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F77Cu) [[unlikely]] return; }
L_0021F77C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F794; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F794u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F794u) [[unlikely]] return; }
L_0021F794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F79Cu); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F79Cu) [[unlikely]] return; }
L_0021F79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0021F7C8; } }
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7B4u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 211u, depth + 1u); else { c.pc = 0x00142DA0u; return; } if (c.pc != 0x0021F7B4u) [[unlikely]] return; }
L_0021F7B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 6496u);
    st32((c.r[22].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 5;
L_0021F7C8:
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 2732u), c.r[2].w[0]);
    c.budget -= 2;
L_0021F7D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021F7D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0021F7D8:
    c.r[2].d[0] = c.r[16].sd[0] < 2200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[16].w[0] + 1000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F674u | kUnwind; return; } goto L_0021F674; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7F0u); set32(c.r[5], 0u + 10021u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F7F0u) [[unlikely]] return; }
L_0021F7F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F80C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F804u) [[unlikely]] return; }
L_0021F804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F810; } }
L_0021F80C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F870; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F824u); set32(c.r[5], 0u + 10021u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F824u) [[unlikely]] return; }
L_0021F824:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F83C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F83Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F83Cu) [[unlikely]] return; }
L_0021F83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F844u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F844u) [[unlikely]] return; }
L_0021F844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F868; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F858u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 211u, depth + 1u); else { c.pc = 0x00142DA0u; return; } if (c.pc != 0x0021F858u) [[unlikely]] return; }
L_0021F858:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 6496u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
L_0021F868:
    st32((c.r[21].w[0] + 2856u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0021F870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F878u); set32(c.r[5], 0u + 30000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F878u) [[unlikely]] return; }
L_0021F878:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F88Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F88Cu) [[unlikely]] return; }
L_0021F88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F898; } }
L_0021F894:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F958; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F8ACu); set32(c.r[5], 0u + 30000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F8ACu) [[unlikely]] return; }
L_0021F8AC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F8C4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F8C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F8C4u) [[unlikely]] return; }
L_0021F8C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F8D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F8D8u) [[unlikely]] return; }
L_0021F8D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F8E4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F8E4u) [[unlikely]] return; }
L_0021F8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021F904; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F900u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F900u) [[unlikely]] return; }
L_0021F900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021F904:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4472u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4472u)));
    st32((c.r[3].w[0] + 256u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F938u); set32(c.r[4], ld32((c.r[1].w[0] + 4472u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021F938u) [[unlikely]] return; }
L_0021F938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4472u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F954u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F954u) [[unlikely]] return; }
L_0021F954:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0021F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F960u); c.r[5].d[0] = 0ull | 60001ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F960u) [[unlikely]] return; }
L_0021F960:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F97C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F974u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021F974u) [[unlikely]] return; }
L_0021F974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F980; } }
L_0021F97C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021FA2C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F994u); c.r[5].d[0] = 0ull | 60001ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021F994u) [[unlikely]] return; }
L_0021F994:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F9AC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021F9ACu) [[unlikely]] return; }
L_0021F9AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021F9C0u) [[unlikely]] return; }
L_0021F9C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9CCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021F9CCu) [[unlikely]] return; }
L_0021F9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021F9EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021F9E8u) [[unlikely]] return; }
L_0021F9E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021F9EC:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4476u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA0Cu); set32(c.r[4], ld32((c.r[1].w[0] + 4476u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x0021FA0Cu) [[unlikely]] return; }
L_0021FA0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4476u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FA28u) [[unlikely]] return; }
L_0021FA28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021FA2C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 999u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA40u); st32((c.r[1].w[0] + 4484u), 0u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FA40u) [[unlikely]] return; }
L_0021FA40:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA54u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021FA54u) [[unlikely]] return; }
L_0021FA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FA60; } }
L_0021FA5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021FA60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021FACC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA74u); set32(c.r[5], 0u + 999u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FA74u) [[unlikely]] return; }
L_0021FA74:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FA8C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA8Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021FA8Cu) [[unlikely]] return; }
L_0021FA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA94u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021FA94u) [[unlikely]] return; }
L_0021FA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021FAAC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAA8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 211u, depth + 1u); else { c.pc = 0x00142DA0u; return; } if (c.pc != 0x0021FAA8u) [[unlikely]] return; }
L_0021FAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021FAAC:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4488u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 4488u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAC8u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0021FAC8u) [[unlikely]] return; }
L_0021FAC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 1;
L_0021FACC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[5], 0u + 997u);
    st32((c.r[1].w[0] + 4500u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAECu); st32((c.r[1].w[0] + 4496u), 0u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FAECu) [[unlikely]] return; }
L_0021FAEC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB00u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021FB00u) [[unlikely]] return; }
L_0021FB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FB0C; } }
L_0021FB08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021FB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FB64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB1Cu); set32(c.r[5], 0u + 997u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FB1Cu) [[unlikely]] return; }
L_0021FB1C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x0021FB30u) [[unlikely]] return; }
L_0021FB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0021FB40; } }
L_0021FB38:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 2;
L_0021FB40:
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4496u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4496u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[2], c.r[2].w[0] + 800u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 4500u), c.r[2].w[0]);
    c.budget -= 9;
L_0021FB64:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    st64((c.r[1].w[0] + 4552u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[1].w[0] + 4560u), 0ull);  if (t) { goto L_0021FBDC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB98u); set32(c.r[5], c.r[5].w[0] + 24112u);  if (depth < kMaxDepth) unit_0016(c, 407u, depth + 1u); else { c.pc = 0x0015B610u; return; } if (c.pc != 0x0021FB98u) [[unlikely]] return; }
L_0021FB98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0021FBB4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[1].w[0] + 4552u), c.r[2].d[0]);
    c.budget -= 5;
L_0021FBB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FBC0u); set32(c.r[5], c.r[5].w[0] + 24120u);  if (depth < kMaxDepth) unit_0016(c, 407u, depth + 1u); else { c.pc = 0x0015B610u; return; } if (c.pc != 0x0021FBC0u) [[unlikely]] return; }
L_0021FBC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FBE0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[1].w[0] + 4560u), c.r[2].d[0]);
    c.budget -= 5;
L_0021FBDC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0021FBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FBE8u); set32(c.r[5], 0u + 201u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FBE8u) [[unlikely]] return; }
L_0021FBE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FC04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FBFCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021FBFCu) [[unlikely]] return; }
L_0021FBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FC08; } }
L_0021FC04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021FC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 6140u);  if (t) { goto L_0021FCA8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x0021FC1Cu) [[unlikely]] return; }
L_0021FC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC24u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021FC24u) [[unlikely]] return; }
L_0021FC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FC3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x0021FC38u) [[unlikely]] return; }
L_0021FC38:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021FC3C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC48u); set32(c.r[5], 0u + 201u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FC48u) [[unlikely]] return; }
L_0021FC48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FC60; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC60u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021FC60u) [[unlikely]] return; }
L_0021FC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC68u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021FC68u) [[unlikely]] return; }
L_0021FC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FC80; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x0021FC7Cu) [[unlikely]] return; }
L_0021FC7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021FC80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC98u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x0021FC98u) [[unlikely]] return; }
L_0021FC98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x0021FCA4u) [[unlikely]] return; }
L_0021FCA4:
    set32(c.r[4], 0u + 6140u);
    c.budget -= 1;
L_0021FCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCB0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021FCB0u) [[unlikely]] return; }
L_0021FCB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021FCCC; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCCCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 53u, depth + 1u); else { c.pc = 0x00190700u; return; } if (c.pc != 0x0021FCCCu) [[unlikely]] return; }
L_0021FCCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 26176u), c.r[2].w[0]);  if (t) { goto L_0021FD94; } }
L_0021FCDC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCE8u); c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FCE8u) [[unlikely]] return; }
L_0021FCE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FD04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCFCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021FCFCu) [[unlikely]] return; }
L_0021FCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FD08; } }
L_0021FD04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021FD08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FDA4; } }
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FD1Cu) [[unlikely]] return; }
L_0021FD1C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FD34; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021FD34u) [[unlikely]] return; }
L_0021FD34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0021FD48u) [[unlikely]] return; }
L_0021FD48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD54u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021FD54u) [[unlikely]] return; }
L_0021FD54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0021FD74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0021FD70u) [[unlikely]] return; }
L_0021FD70:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0021FD74:
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 2860u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 2860u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FD90u) [[unlikely]] return; }
L_0021FD90:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021FD94:
    c.r[2].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 20000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FCDCu | kUnwind; return; } goto L_0021FCDC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0021FDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDACu); set32(c.r[5], 0u + 21000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FDACu) [[unlikely]] return; }
L_0021FDAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021FDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0021FDC0u) [[unlikely]] return; }
L_0021FDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FDCC; } }
L_0021FDC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021FDCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0048(c, 5u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDDCu); set32(c.r[4], 0u + 32000u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0021FDDCu) [[unlikely]] return; }
L_0021FDDC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0048(c, 3u, depth); } }
L_0021FDE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDF4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0021FDF4u) [[unlikely]] return; }
L_0021FDF4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FE0C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE0Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0021FE0Cu) [[unlikely]] return; }
L_0021FE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE14u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0021FE14u) [[unlikely]] return; }
L_0021FE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FE2C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE28u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x0021FE28u) [[unlikely]] return; }
L_0021FE28:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021FE2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 27976u)));
    set32(c.r[10], 0u + 64u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.r[1].d[0] = 0ull | 36176ull;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23884u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23876u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23896u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE80u); st32((c.r[1].w[0] - 23892u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0021FE80u) [[unlikely]] return; }
L_0021FE80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], 0u + 64u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.r[1].d[0] = 0ull | 36080ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FEACu); set32(c.r[4], c.r[29].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0021FEACu) [[unlikely]] return; }
L_0021FEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FEB4u);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x0021FEB4u) [[unlikely]] return; }
L_0021FEB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021FF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FEC8u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x0021FEC8u) [[unlikely]] return; }
L_0021FEC8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 86u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021FF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FEE0u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x0021FEE0u) [[unlikely]] return; }
L_0021FEE0:
    set32(c.r[2], c.r[17].w[0] << 7);
    c.r[1].d[0] = 0ull | 36080ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[29].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = 0ull | 36176ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 23904u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + c.r[1].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF20u); set32(c.r[9], c.r[2].w[0] + 3024u);  if (depth < kMaxDepth) unit_0025(c, 230u, depth + 1u); else { c.pc = 0x001962B0u; return; } if (c.pc != 0x0021FF20u) [[unlikely]] return; }
L_0021FF20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[21].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF30u); st32((c.r[1].w[0] + 4548u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x0021FF30u) [[unlikely]] return; }
L_0021FF30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23904u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x0021FF48u) [[unlikely]] return; }
L_0021FF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF50u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0021FF50u) [[unlikely]] return; }
L_0021FF50:
    set32(c.r[2], c.r[17].w[0] << 7);
    c.r[1].d[0] = 0ull | 36176ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF78u); set32(c.r[5], c.r[2].w[0] + 3024u);  if (depth < kMaxDepth) unit_0000(c, 197u, depth + 1u); else { c.pc = 0x00101F30u; return; } if (c.pc != 0x0021FF78u) [[unlikely]] return; }
L_0021FF78:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x0021FF84u) [[unlikely]] return; }
L_0021FF84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[17].w[0] << 7);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[10], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[2].w[0] + 2912u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ull | 35984ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + c.r[1].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFD0u); set32(c.r[16], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x0021FFD0u) [[unlikely]] return; }
L_0021FFD0:
    c.r[1].d[0] = 0ull | 35984ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFE4u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0021FFE4u) [[unlikely]] return; }
L_0021FFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x18000000u);
    c.r[5].d[0] = 0ull | 33792ull;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[16], c.r[16].w[0] + 80u);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 7;
    [[clang::musttail]] return unit_0048(c, 1u, depth);
}

}
