#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0056[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 0,
    26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0,
    50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0,
    92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0,
    0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0,
    252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0,
    266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396,
    0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0,
    0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0,
};

void unit_0056(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00258000;
    case 2u: goto L_00258020;
    case 3u: goto L_0025808C;
    case 4u: goto L_002580C4;
    case 5u: goto L_002580F0;
    case 6u: goto L_00258148;
    case 7u: goto L_00258178;
    case 8u: goto L_002581B4;
    case 9u: goto L_002581D8;
    case 10u: goto L_00258208;
    case 11u: goto L_002582C4;
    case 12u: goto L_002582E4;
    case 13u: goto L_00258338;
    case 14u: goto L_002583A4;
    case 15u: goto L_002583D8;
    case 16u: goto L_002583E0;
    case 17u: goto L_002583F8;
    case 18u: goto L_00258488;
    case 19u: goto L_00258490;
    case 20u: goto L_00258498;
    case 21u: goto L_002584CC;
    case 22u: goto L_002584D8;
    case 23u: goto L_002584E0;
    case 24u: goto L_002584E8;
    case 25u: goto L_002584F0;
    case 26u: goto L_00258500;
    case 27u: goto L_00258508;
    case 28u: goto L_00258510;
    case 29u: goto L_00258518;
    case 30u: goto L_00258584;
    case 31u: goto L_00258598;
    case 32u: goto L_002585A4;
    case 33u: goto L_00258610;
    case 34u: goto L_0025862C;
    case 35u: goto L_00258670;
    case 36u: goto L_0025868C;
    case 37u: goto L_00258694;
    case 38u: goto L_002586AC;
    case 39u: goto L_002586B4;
    case 40u: goto L_002586C4;
    case 41u: goto L_00258700;
    case 42u: goto L_00258714;
    case 43u: goto L_00258724;
    case 44u: goto L_0025873C;
    case 45u: goto L_00258744;
    case 46u: goto L_00258750;
    case 47u: goto L_00258758;
    case 48u: goto L_00258760;
    case 49u: goto L_00258768;
    case 50u: goto L_00258780;
    case 51u: goto L_00258788;
    case 52u: goto L_00258790;
    case 53u: goto L_002587A4;
    case 54u: goto L_002587C0;
    case 55u: goto L_00258800;
    case 56u: goto L_00258814;
    case 57u: goto L_00258848;
    case 58u: goto L_00258864;
    case 59u: goto L_00258870;
    case 60u: goto L_0025887C;
    case 61u: goto L_002588A0;
    case 62u: goto L_002588B4;
    case 63u: goto L_002588D0;
    case 64u: goto L_00258914;
    case 65u: goto L_00258924;
    case 66u: goto L_0025895C;
    case 67u: goto L_0025896C;
    case 68u: goto L_00258978;
    case 69u: goto L_002589B0;
    case 70u: goto L_002589EC;
    case 71u: goto L_00258A30;
    case 72u: goto L_00258A70;
    case 73u: goto L_00258A88;
    case 74u: goto L_00258A98;
    case 75u: goto L_00258AE8;
    case 76u: goto L_00258B98;
    case 77u: goto L_00258C20;
    case 78u: goto L_00258C5C;
    case 79u: goto L_00258CC0;
    case 80u: goto L_00258CF0;
    case 81u: goto L_00258D04;
    case 82u: goto L_00258D30;
    case 83u: goto L_00258D70;
    case 84u: goto L_00258DC4;
    case 85u: goto L_00258E44;
    case 86u: goto L_00258E90;
    case 87u: goto L_0025902C;
    case 88u: goto L_0025905C;
    case 89u: goto L_002590B0;
    case 90u: goto L_002590E8;
    case 91u: goto L_002590F8;
    case 92u: goto L_00259100;
    case 93u: goto L_00259108;
    case 94u: goto L_00259118;
    case 95u: goto L_00259130;
    case 96u: goto L_00259150;
    case 97u: goto L_00259170;
    case 98u: goto L_00259178;
    case 99u: goto L_00259180;
    case 100u: goto L_002591B0;
    case 101u: goto L_002591E0;
    case 102u: goto L_002591F0;
    case 103u: goto L_00259220;
    case 104u: goto L_00259258;
    case 105u: goto L_00259264;
    case 106u: goto L_00259278;
    case 107u: goto L_00259298;
    case 108u: goto L_002592A8;
    case 109u: goto L_002592C0;
    case 110u: goto L_00259320;
    case 111u: goto L_00259340;
    case 112u: goto L_00259390;
    case 113u: goto L_002593B0;
    case 114u: goto L_002593EC;
    case 115u: goto L_00259410;
    case 116u: goto L_00259460;
    case 117u: goto L_00259490;
    case 118u: goto L_002594E4;
    case 119u: goto L_00259510;
    case 120u: goto L_00259520;
    case 121u: goto L_0025954C;
    case 122u: goto L_002595B0;
    case 123u: goto L_002595B8;
    case 124u: goto L_002595E8;
    case 125u: goto L_00259600;
    case 126u: goto L_00259620;
    case 127u: goto L_00259690;
    case 128u: goto L_002596C0;
    case 129u: goto L_002596D4;
    case 130u: goto L_002596E0;
    case 131u: goto L_00259714;
    case 132u: goto L_0025971C;
    case 133u: goto L_00259724;
    case 134u: goto L_0025972C;
    case 135u: goto L_00259734;
    case 136u: goto L_00259748;
    case 137u: goto L_00259760;
    case 138u: goto L_00259774;
    case 139u: goto L_00259784;
    case 140u: goto L_00259790;
    case 141u: goto L_0025979C;
    case 142u: goto L_002597D0;
    case 143u: goto L_002597D8;
    case 144u: goto L_002597E0;
    case 145u: goto L_00259810;
    case 146u: goto L_00259818;
    case 147u: goto L_0025982C;
    case 148u: goto L_00259840;
    case 149u: goto L_00259860;
    case 150u: goto L_0025987C;
    case 151u: goto L_0025989C;
    case 152u: goto L_002598AC;
    case 153u: goto L_002598C4;
    case 154u: goto L_002598FC;
    case 155u: goto L_0025990C;
    case 156u: goto L_00259930;
    case 157u: goto L_0025994C;
    case 158u: goto L_002599B4;
    case 159u: goto L_002599BC;
    case 160u: goto L_002599C4;
    case 161u: goto L_002599F8;
    case 162u: goto L_00259A04;
    case 163u: goto L_00259A0C;
    case 164u: goto L_00259A14;
    case 165u: goto L_00259A1C;
    case 166u: goto L_00259A2C;
    case 167u: goto L_00259A40;
    case 168u: goto L_00259A48;
    case 169u: goto L_00259A60;
    case 170u: goto L_00259A68;
    case 171u: goto L_00259A80;
    case 172u: goto L_00259AB4;
    case 173u: goto L_00259ACC;
    case 174u: goto L_00259AEC;
    case 175u: goto L_00259B00;
    case 176u: goto L_00259B14;
    case 177u: goto L_00259B28;
    case 178u: goto L_00259B38;
    case 179u: goto L_00259B44;
    case 180u: goto L_00259B64;
    case 181u: goto L_00259B8C;
    case 182u: goto L_00259BA8;
    case 183u: goto L_00259BD4;
    case 184u: goto L_00259C2C;
    case 185u: goto L_00259CB8;
    case 186u: goto L_00259CCC;
    case 187u: goto L_00259CE0;
    case 188u: goto L_00259D54;
    case 189u: goto L_00259D74;
    case 190u: goto L_00259E08;
    case 191u: goto L_00259E4C;
    case 192u: goto L_00259E88;
    case 193u: goto L_00259EC0;
    case 194u: goto L_00259EE4;
    case 195u: goto L_00259F0C;
    case 196u: goto L_00259F20;
    case 197u: goto L_00259F50;
    case 198u: goto L_00259F84;
    case 199u: goto L_00259F90;
    case 200u: goto L_00259FD8;
    case 201u: goto L_0025A00C;
    case 202u: goto L_0025A040;
    case 203u: goto L_0025A048;
    case 204u: goto L_0025A06C;
    case 205u: goto L_0025A074;
    case 206u: goto L_0025A098;
    case 207u: goto L_0025A0A8;
    case 208u: goto L_0025A0C0;
    case 209u: goto L_0025A11C;
    case 210u: goto L_0025A150;
    case 211u: goto L_0025A19C;
    case 212u: goto L_0025A1C0;
    case 213u: goto L_0025A1CC;
    case 214u: goto L_0025A1E8;
    case 215u: goto L_0025A1FC;
    case 216u: goto L_0025A210;
    case 217u: goto L_0025A224;
    case 218u: goto L_0025A244;
    case 219u: goto L_0025A258;
    case 220u: goto L_0025A26C;
    case 221u: goto L_0025A2BC;
    case 222u: goto L_0025A2F0;
    case 223u: goto L_0025A33C;
    case 224u: goto L_0025A360;
    case 225u: goto L_0025A36C;
    case 226u: goto L_0025A388;
    case 227u: goto L_0025A39C;
    case 228u: goto L_0025A3B0;
    case 229u: goto L_0025A3C4;
    case 230u: goto L_0025A3E4;
    case 231u: goto L_0025A3F8;
    case 232u: goto L_0025A40C;
    case 233u: goto L_0025A45C;
    case 234u: goto L_0025A490;
    case 235u: goto L_0025A4A0;
    case 236u: goto L_0025A500;
    case 237u: goto L_0025A54C;
    case 238u: goto L_0025A558;
    case 239u: goto L_0025A580;
    case 240u: goto L_0025A5A8;
    case 241u: goto L_0025A5C4;
    case 242u: goto L_0025A5D8;
    case 243u: goto L_0025A5E4;
    case 244u: goto L_0025A608;
    case 245u: goto L_0025A638;
    case 246u: goto L_0025A65C;
    case 247u: goto L_0025A694;
    case 248u: goto L_0025A6A8;
    case 249u: goto L_0025A70C;
    case 250u: goto L_0025A770;
    case 251u: goto L_0025A778;
    case 252u: goto L_0025A780;
    case 253u: goto L_0025A79C;
    case 254u: goto L_0025A7D4;
    case 255u: goto L_0025A828;
    case 256u: goto L_0025A8AC;
    case 257u: goto L_0025A988;
    case 258u: goto L_0025A9B0;
    case 259u: goto L_0025AA40;
    case 260u: goto L_0025AA5C;
    case 261u: goto L_0025AA90;
    case 262u: goto L_0025AAA0;
    case 263u: goto L_0025AB1C;
    case 264u: goto L_0025AB70;
    case 265u: goto L_0025AB78;
    case 266u: goto L_0025AB80;
    case 267u: goto L_0025AB9C;
    case 268u: goto L_0025ABD4;
    case 269u: goto L_0025AC28;
    case 270u: goto L_0025ACB8;
    case 271u: goto L_0025ACF0;
    case 272u: goto L_0025AD04;
    case 273u: goto L_0025AD1C;
    case 274u: goto L_0025AD2C;
    case 275u: goto L_0025AD50;
    case 276u: goto L_0025AD78;
    case 277u: goto L_0025AD98;
    case 278u: goto L_0025AE84;
    case 279u: goto L_0025AE9C;
    case 280u: goto L_0025AED0;
    case 281u: goto L_0025AF10;
    case 282u: goto L_0025AF38;
    case 283u: goto L_0025AF58;
    case 284u: goto L_0025AF6C;
    case 285u: goto L_0025AF98;
    case 286u: goto L_0025AFBC;
    case 287u: goto L_0025AFC8;
    case 288u: goto L_0025AFEC;
    case 289u: goto L_0025B01C;
    case 290u: goto L_0025B040;
    case 291u: goto L_0025B080;
    case 292u: goto L_0025B090;
    case 293u: goto L_0025B0B0;
    case 294u: goto L_0025B0C0;
    case 295u: goto L_0025B0F4;
    case 296u: goto L_0025B0FC;
    case 297u: goto L_0025B110;
    case 298u: goto L_0025B128;
    case 299u: goto L_0025B148;
    case 300u: goto L_0025B180;
    case 301u: goto L_0025B1E0;
    case 302u: goto L_0025B250;
    case 303u: goto L_0025B270;
    case 304u: goto L_0025B280;
    case 305u: goto L_0025B290;
    case 306u: goto L_0025B2A8;
    case 307u: goto L_0025B2B8;
    case 308u: goto L_0025B2D0;
    case 309u: goto L_0025B300;
    case 310u: goto L_0025B318;
    case 311u: goto L_0025B328;
    case 312u: goto L_0025B340;
    case 313u: goto L_0025B370;
    case 314u: goto L_0025B384;
    case 315u: goto L_0025B394;
    case 316u: goto L_0025B3B0;
    case 317u: goto L_0025B3C8;
    case 318u: goto L_0025B3D8;
    case 319u: goto L_0025B3F0;
    case 320u: goto L_0025B428;
    case 321u: goto L_0025B440;
    case 322u: goto L_0025B450;
    case 323u: goto L_0025B4A0;
    case 324u: goto L_0025B4A8;
    case 325u: goto L_0025B4CC;
    case 326u: goto L_0025B4D4;
    case 327u: goto L_0025B4DC;
    case 328u: goto L_0025B4E4;
    case 329u: goto L_0025B4EC;
    case 330u: goto L_0025B4F4;
    case 331u: goto L_0025B510;
    case 332u: goto L_0025B538;
    case 333u: goto L_0025B560;
    case 334u: goto L_0025B598;
    case 335u: goto L_0025B5B0;
    case 336u: goto L_0025B5C0;
    case 337u: goto L_0025B60C;
    case 338u: goto L_0025B614;
    case 339u: goto L_0025B638;
    case 340u: goto L_0025B640;
    case 341u: goto L_0025B648;
    case 342u: goto L_0025B650;
    case 343u: goto L_0025B658;
    case 344u: goto L_0025B660;
    case 345u: goto L_0025B67C;
    case 346u: goto L_0025B6A4;
    case 347u: goto L_0025B6D0;
    case 348u: goto L_0025B708;
    case 349u: goto L_0025B720;
    case 350u: goto L_0025B730;
    case 351u: goto L_0025B784;
    case 352u: goto L_0025B78C;
    case 353u: goto L_0025B7B0;
    case 354u: goto L_0025B7B8;
    case 355u: goto L_0025B7C0;
    case 356u: goto L_0025B7C8;
    case 357u: goto L_0025B7D0;
    case 358u: goto L_0025B7D8;
    case 359u: goto L_0025B7F4;
    case 360u: goto L_0025B81C;
    case 361u: goto L_0025B840;
    case 362u: goto L_0025B878;
    case 363u: goto L_0025B890;
    case 364u: goto L_0025B8A0;
    case 365u: goto L_0025B8EC;
    case 366u: goto L_0025B8F4;
    case 367u: goto L_0025B918;
    case 368u: goto L_0025B920;
    case 369u: goto L_0025B928;
    case 370u: goto L_0025B930;
    case 371u: goto L_0025B938;
    case 372u: goto L_0025B940;
    case 373u: goto L_0025B95C;
    case 374u: goto L_0025B984;
    case 375u: goto L_0025B9B0;
    case 376u: goto L_0025B9E8;
    case 377u: goto L_0025BA00;
    case 378u: goto L_0025BA10;
    case 379u: goto L_0025BA58;
    case 380u: goto L_0025BA60;
    case 381u: goto L_0025BA84;
    case 382u: goto L_0025BA8C;
    case 383u: goto L_0025BA94;
    case 384u: goto L_0025BA9C;
    case 385u: goto L_0025BAA4;
    case 386u: goto L_0025BAAC;
    case 387u: goto L_0025BAC8;
    case 388u: goto L_0025BAF0;
    case 389u: goto L_0025BB20;
    case 390u: goto L_0025BB58;
    case 391u: goto L_0025BB70;
    case 392u: goto L_0025BB80;
    case 393u: goto L_0025BBC8;
    case 394u: goto L_0025BBD0;
    case 395u: goto L_0025BBF4;
    case 396u: goto L_0025BBFC;
    case 397u: goto L_0025BC04;
    case 398u: goto L_0025BC0C;
    case 399u: goto L_0025BC14;
    case 400u: goto L_0025BC1C;
    case 401u: goto L_0025BC38;
    case 402u: goto L_0025BC60;
    case 403u: goto L_0025BC90;
    case 404u: goto L_0025BCBC;
    case 405u: goto L_0025BCCC;
    case 406u: goto L_0025BCE4;
    case 407u: goto L_0025BCFC;
    case 408u: goto L_0025BD20;
    case 409u: goto L_0025BD30;
    case 410u: goto L_0025BD50;
    case 411u: goto L_0025BD8C;
    case 412u: goto L_0025BD9C;
    case 413u: goto L_0025BDA8;
    case 414u: goto L_0025BDB8;
    case 415u: goto L_0025BDE8;
    case 416u: goto L_0025BE04;
    case 417u: goto L_0025BE18;
    case 418u: goto L_0025BE38;
    case 419u: goto L_0025BE4C;
    case 420u: goto L_0025BE64;
    case 421u: goto L_0025BE90;
    case 422u: goto L_0025BEC0;
    case 423u: goto L_0025BED0;
    case 424u: goto L_0025BEE8;
    case 425u: goto L_0025BF00;
    case 426u: goto L_0025BF28;
    case 427u: goto L_0025BF34;
    case 428u: goto L_0025BF4C;
    case 429u: goto L_0025BF74;
    case 430u: goto L_0025BF84;
    case 431u: goto L_0025BFB0;
    case 432u: goto L_0025BFDC;
    case 433u: goto L_0025BFF4;
    default: bad_entry(c, 0x00258000u); return;
    }
L_00258000:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258014; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00258014:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 3;
L_00258020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[20].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 27600u);
    set32(c.r[19], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[18].w[0] + 260u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[18].w[0] + 264u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 24u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[2], 0u + 118u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    st8((c.r[18].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[19].w[0] + 16u);  if (t) { goto L_00258130; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 25500u);  if (t) { goto L_00258124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025808Cu);  if (depth < kMaxDepth) unit_008E(c, 376u, depth + 1u); else { c.pc = 0x0033B750u; return; } if (c.pc != 0x0025808Cu) [[unlikely]] return; }
L_0025808C:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 51u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_002580CC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002580C4u); set32(c.r[17], c.r[18].w[0] + 266u);  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x002580C4u) [[unlikely]] return; }
L_002580C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00258114; } }
L_002580CC:
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_002580F8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002580F0u); set32(c.r[17], c.r[18].w[0] + 266u);  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x002580F0u) [[unlikely]] return; }
L_002580F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00258114; } }
L_002580F8:
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[3].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[3].w[0] + 266u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
L_00258114:
    st8((c.r[19].w[0] + 21u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002581DC; } }
L_00258124:
    set32(c.r[17], c.r[18].w[0] + 266u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002581DC; } }
L_00258130:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_00258188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258148u);  if (depth < kMaxDepth) unit_008F(c, 9u, depth + 1u); else { c.pc = 0x0033C110u; return; } if (c.pc != 0x00258148u) [[unlikely]] return; }
L_00258148:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 256u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[18].w[0] + 266u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258178u); c.r[8].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00258178u) [[unlikely]] return; }
L_00258178:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002581DC; } }
L_00258188:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27598u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002581BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 256u));
    c.r[5].d[0] = ld16((c.r[1].w[0] - 27596u));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002581B4u); set32(c.r[17], c.r[18].w[0] + 266u);  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x002581B4u) [[unlikely]] return; }
L_002581B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002581DC; } }
L_002581BC:
    c.r[7].d[0] = ld8((c.r[29].w[0] + 256u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002581D8u); set32(c.r[17], c.r[18].w[0] + 266u);  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x002581D8u) [[unlikely]] return; }
L_002581D8:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002581DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 53u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0025820C; } }
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258208u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00258208u) [[unlikely]] return; }
L_00258208:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0025820C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 27600u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    st8((c.r[3].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    st8((c.r[3].w[0] + 265u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 28u)));
    st8((c.r[3].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 29u)));
    st8((c.r[3].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 34u));
    st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258270; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00258270; } }
    st32((c.r[29].w[0] + 224u), c.r[20].w[0]);
    c.budget -= 1;
L_00258270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 27600u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 30u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 270u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 31u)));
    st8((c.r[4].w[0] + 271u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 32u)));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 33u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258020u | kUnwind; return; } goto L_00258020; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002582C4u); st8((c.r[1].w[0] + 8902u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 74u, depth + 1u); else { c.pc = 0x0030CAD0u; return; } if (c.pc != 0x002582C4u) [[unlikely]] return; }
L_002582C4:
    set32(c.r[4], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    c.budget -= 8;
L_002582E4:
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 710u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 713u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002582E4u | kUnwind; return; } goto L_002582E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 255u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 8901u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025833C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025833C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[1].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025833C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258338u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00258338u) [[unlikely]] return; }
L_00258338:
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_0025833C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 82u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27332u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_0025835C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00258368; } }
L_0025835C:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00258368:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 132u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002583C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27600u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00258394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0] + 4114u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002583C4; } }
L_00258394:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[5], 0u + 721u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583A4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002583A4u) [[unlikely]] return; }
L_002583A4:
    c.r[3].d[0] = ld16((c.r[22].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[23].w[0] + 4114u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002583C4; } }
L_002583C0:
    st8((c.r[23].w[0] + 4114u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002583C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27600u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583D8u); set32(c.r[5], 0u + 410u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002583D8u) [[unlikely]] return; }
L_002583D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002583E0u);  if (depth < kMaxDepth) unit_000B(c, 152u, depth + 1u); else { c.pc = 0x0012D6E0u; return; } if (c.pc != 0x002583E0u) [[unlikely]] return; }
L_002583E0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], 0u + 25500u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    set32(c.r[2], c.r[6].w[0] << 5);
    c.budget -= 6;
L_002583F8:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[8], c.r[2].w[0] + 266u);
    c.r[2].d[0] = c.r[7].sd[0] < 25500ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] - 10000u);  if (t) { goto L_00258418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0025846C; } }
L_00258418:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00258438; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_0025842C; } }
    breakpoint(c, 0x00258428u);
    c.budget -= 1;
L_0025842C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025843C; } }
L_00258438:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0025843C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0025844C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 86u);  if (t) { goto L_0025845C; } }
L_0025844C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[7].w[0], c.r[3].w[0]);  if (t) { goto L_00258458; } }
    breakpoint(c, 0x00258454u);
    c.budget -= 1;
L_00258458:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0025845C:
    c.r[2].d[0] = c.r[2].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025846C; } }
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0025846C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002583F8u | kUnwind; return; } goto L_002583F8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x00258488u) [[unlikely]] return; }
L_00258488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258490u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x00258490u) [[unlikely]] return; }
L_00258490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258498u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0054(c, 607u, depth + 1u); else { c.pc = 0x00253E50u; return; } if (c.pc != 0x00258498u) [[unlikely]] return; }
L_00258498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002584CCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x002584CCu) [[unlikely]] return; }
L_002584CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002584D8u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 514u, depth + 1u); else { c.pc = 0x002533B0u; return; } if (c.pc != 0x002584D8u) [[unlikely]] return; }
L_002584D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002584E0u);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002D98E0u; return; } if (c.pc != 0x002584E0u) [[unlikely]] return; }
L_002584E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002584E8u);  if (depth < kMaxDepth) unit_002A(c, 133u, depth + 1u); else { c.pc = 0x001A9520u; return; } if (c.pc != 0x002584E8u) [[unlikely]] return; }
L_002584E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002584F0u);  if (depth < kMaxDepth) unit_004F(c, 122u, depth + 1u); else { c.pc = 0x0023DD20u; return; } if (c.pc != 0x002584F0u) [[unlikely]] return; }
L_002584F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258500u); st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x00258500u) [[unlikely]] return; }
L_00258500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258508u);  if (depth < kMaxDepth) unit_0054(c, 300u, depth + 1u); else { c.pc = 0x00251F50u; return; } if (c.pc != 0x00258508u) [[unlikely]] return; }
L_00258508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00258618; } }
L_00258510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258518u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00258518u) [[unlikely]] return; }
L_00258518:
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 266u));
    set32(c.r[3], c.r[6].w[0] - 10000u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[17], c.r[2].w[0] + 256u);  if (t) { goto L_0025854C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00258540; } }
    breakpoint(c, 0x0025853Cu);
    c.budget -= 1;
L_00258540:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00258554; } }
L_0025854C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00258554:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00258614; } }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 3000ll ? 1ull : 0ull;  if (t) { goto L_00258624; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0025858C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258584u); set32(c.r[5], c.r[5].w[0] + 31376u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00258584u) [[unlikely]] return; }
L_00258584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_0025859C; } }
L_0025858C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258598u); set32(c.r[5], c.r[5].w[0] + 31392u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00258598u) [[unlikely]] return; }
L_00258598:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 1;
L_0025859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002585A4u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x002585A4u) [[unlikely]] return; }
L_002585A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00258614; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 10u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_002585D4; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002585D0; } }
    breakpoint(c, 0x002585CCu);
    c.budget -= 1;
L_002585D0:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002585D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002585E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_002585F8; } }
L_002585E4:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002585F4; } }
    breakpoint(c, 0x002585F0u);
    c.budget -= 1;
L_002585F4:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002585F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258610u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00258610u) [[unlikely]] return; }
L_00258610:
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00258614:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00258618:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258510u | kUnwind; return; } goto L_00258510; } }
L_00258624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025862Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025862Cu) [[unlikely]] return; }
L_0025862C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21770u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002586BC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002586BC; } }
    c.r[3].d[0] = ld16((c.r[22].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002586BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258670u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00258670u) [[unlikely]] return; }
L_00258670:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 38u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_002586BC; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025868Cu); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0025868Cu) [[unlikely]] return; }
L_0025868C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258694u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00258694u) [[unlikely]] return; }
L_00258694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002586AC; } }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 366u, depth + 1u); else { c.pc = 0x002A7A20u; return; } if (c.pc != 0x002586ACu) [[unlikely]] return; }
L_002586AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586B4u); set32(c.r[4], ld32((c.r[29].w[0] + 332u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002586B4u) [[unlikely]] return; }
L_002586B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002586C8; } }
L_002586BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002586C4u);  if (depth < kMaxDepth) unit_003F(c, 97u, depth + 1u); else { c.pc = 0x001FCFD0u; return; } if (c.pc != 0x002586C4u) [[unlikely]] return; }
L_002586C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002586C8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00258700:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258714u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00258714u) [[unlikely]] return; }
L_00258714:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258724u); st8((c.r[1].w[0] - 25560u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00258724u) [[unlikely]] return; }
L_00258724:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[5], c.r[16].w[0] + 100u);
    c.r[1].d[0] = c.r[1].d[0] | 21770ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025873Cu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0025873Cu) [[unlikely]] return; }
L_0025873C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258744u); set32(c.r[4], 0u + 999u);  if (depth < kMaxDepth) unit_0054(c, 301u, depth + 1u); else { c.pc = 0x00251F60u; return; } if (c.pc != 0x00258744u) [[unlikely]] return; }
L_00258744:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258750u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 454u, depth + 1u); else { c.pc = 0x00252D80u; return; } if (c.pc != 0x00258750u) [[unlikely]] return; }
L_00258750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258758u);  if (depth < kMaxDepth) unit_0054(c, 351u, depth + 1u); else { c.pc = 0x002522C0u; return; } if (c.pc != 0x00258758u) [[unlikely]] return; }
L_00258758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 464u, depth + 1u); else { c.pc = 0x00252E70u; return; } if (c.pc != 0x00258760u) [[unlikely]] return; }
L_00258760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258768u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00258768u) [[unlikely]] return; }
L_00258768:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_00258788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258780u);  if (depth < kMaxDepth) unit_008E(c, 327u, depth + 1u); else { c.pc = 0x0033B0F0u; return; } if (c.pc != 0x00258780u) [[unlikely]] return; }
L_00258780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258788u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 291u, depth + 1u); else { c.pc = 0x0033A990u; return; } if (c.pc != 0x00258788u) [[unlikely]] return; }
L_00258788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258790u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x00258790u) [[unlikely]] return; }
L_00258790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002587A4u); set32(c.r[5], 0u + 415u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002587A4u) [[unlikely]] return; }
L_002587A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002587C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27600u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025880C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27600u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258800u); st8((c.r[2].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0083(c, 89u, depth + 1u); else { c.pc = 0x0030CE00u; return; } if (c.pc != 0x00258800u) [[unlikely]] return; }
L_00258800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 27600u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0025887C; } }
L_0025880C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258814u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00258814u) [[unlikely]] return; }
L_00258814:
    c.r[1].d[0] = 0ull | 40072ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[5].w[0] - 27600u);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258848u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0083(c, 89u, depth + 1u); else { c.pc = 0x0030CE00u; return; } if (c.pc != 0x00258848u) [[unlikely]] return; }
L_00258848:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258864u); set32(c.r[5], 0u + 894u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00258864u) [[unlikely]] return; }
L_00258864:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258870u); set32(c.r[5], 0u + 895u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00258870u) [[unlikely]] return; }
L_00258870:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025887Cu); set32(c.r[5], 0u + 898u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0025887Cu) [[unlikely]] return; }
L_0025887C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 132u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002588A8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002588A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002588A0u) [[unlikely]] return; }
L_002588A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002588B8; } }
L_002588A8:
    set32(c.r[5], 0u + 902u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002588B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002588B4u) [[unlikely]] return; }
L_002588B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002588B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002588D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 5270u));
    c.r[2].d[0] = c.r[3].sd[0] < 900ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0025892C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 900ll ? 1ull : 0ull;  if (t) { goto L_00258930; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00258914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258914u);  if (depth < kMaxDepth) unit_0054(c, 269u, depth + 1u); else { c.pc = 0x00251B20u; return; } if (c.pc != 0x00258914u) [[unlikely]] return; }
L_00258914:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258924u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0054(c, 454u, depth + 1u); else { c.pc = 0x00252D80u; return; } if (c.pc != 0x00258924u) [[unlikely]] return; }
L_00258924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00258970; } }
L_0025892C:
    c.r[1].d[0] = c.r[3].sd[0] < 900ll ? 1ull : 0ull;
    c.budget -= 1;
L_00258930:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025896C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0025896C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025895C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025895Cu);  if (depth < kMaxDepth) unit_0054(c, 269u, depth + 1u); else { c.pc = 0x00251B20u; return; } if (c.pc != 0x0025895Cu) [[unlikely]] return; }
L_0025895C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025896Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 454u, depth + 1u); else { c.pc = 0x00252D80u; return; } if (c.pc != 0x0025896Cu) [[unlikely]] return; }
L_0025896C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00258970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258978u);  if (depth < kMaxDepth) unit_0054(c, 465u, depth + 1u); else { c.pc = 0x00252E80u; return; } if (c.pc != 0x00258978u) [[unlikely]] return; }
L_00258978:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[2].w[0] + 86u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 88u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st8((c.r[1].w[0] - 27328u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 25500u);
    c.budget -= 14;
L_002589B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 64u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 201u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002589B0u | kUnwind; return; } goto L_002589B0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002589ECu); set32(c.r[4], c.r[2].w[0] + 180u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002589ECu) [[unlikely]] return; }
L_002589EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull & 65535ull;
    st16((c.r[3].w[0] + 84u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    st16((c.r[3].w[0] + 98u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    st16((c.r[3].w[0] + 96u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st8((c.r[3].w[0] + 200u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00258A30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00258C04; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00258A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A70u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00258A70u) [[unlikely]] return; }
L_00258A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] - 25584u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00258A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258A88u);  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00258A88u) [[unlikely]] return; }
L_00258A88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 22320u);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_00258A98:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258A98u | kUnwind; return; } goto L_00258A98; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 998u);
    st32((c.r[4].w[0]), c.f[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 999u);  if (t) { goto L_00258B0C; } }
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00258B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258AE8u); set32(c.r[5], 0u + 722u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00258AE8u) [[unlikely]] return; }
L_00258AE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00258B08; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 201u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00258B08:
    set32(c.r[2], 0u + 999u);
    c.budget -= 1;
L_00258B0C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;  if (t) { goto L_00258B28; } }
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);  if (t) { goto L_00258B24; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 80u)));
    c.budget -= 1;
L_00258B24:
    c.r[1].d[0] = c.r[5].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 1;
L_00258B28:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_00258B40; } }
    c.r[1].d[0] = c.r[5].sd[0] < -99ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00258B68; } }
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_00258B40:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00258B68; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00258B68; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 201u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00258B68:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], 0u + 100u);  if (t) { goto L_00258B74; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00258B74:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.hi.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258B98u); c.r[6].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00258B98u) [[unlikely]] return; }
L_00258B98:
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00258BF0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], 0u + 999u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);  if (t) { goto L_00258BF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[4].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00258BF0; } }
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258BF0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 4u);  if (t) { goto L_00258BF0; } }
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00258BF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 64u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
L_00258C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00258C20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00258CA0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_00258C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258C5Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00258C5Cu) [[unlikely]] return; }
L_00258C5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] - 7936u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 25576u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 8;
L_00258C7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00258C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_00258C98; } }
L_00258C94:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00258C98:
    set32(c.r[3], ld32((c.r[16].w[0])));
    st16((c.r[3].w[0] + 82u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00258CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00258CC0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258CF0u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00258CF0u) [[unlikely]] return; }
L_00258CF0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 25500u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    set32(c.r[3], 0u + 255u);
    c.budget -= 5;
L_00258D04:
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[6].w[0] + 266u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[6].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258D04u | kUnwind; return; } goto L_00258D04; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00258D30u); st16((c.r[2].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00258D30u) [[unlikely]] return; }
L_00258D30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] - 7936u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 25500u);
    set32(c.r[3], c.r[6].w[0] << 1);
    c.budget -= 16;
L_00258D70:
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 64u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_00258D84; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00258D84:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 201u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00258D94; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00258D94:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258D70u | kUnwind; return; } goto L_00258D70; } }
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00258E80; } }
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 10u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
L_00258DC4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 64u));
    set32(c.r[8], c.r[3].w[0] + 64u);
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[3].d[0] = c.r[5].d[0] ^ 1ull;  if (t) { goto L_00258DF4; } }
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00258DF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 64u));
    set32(c.r[8], c.r[3].w[0] + 64u);
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[5].w[0] - 4u);  if (t) { goto L_00258E20; } }
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00258E20:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258DC4u | kUnwind; return; } goto L_00258DC4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00258E80; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
L_00258E44:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00258E58; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 201u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00258E58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 201u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00258E70; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00258E70:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258E44u | kUnwind; return; } goto L_00258E44; } }
L_00258E80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 22224u);
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
L_00258E90:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00258E90u | kUnwind; return; } goto L_00258E90; } }
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], 0u + 100u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 64u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_00258ECC; } }
    breakpoint(c, 0x00258EC8u);
    c.budget -= 1;
L_00258ECC:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 86u));
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    c.r[3].d[0] = c.r[5].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_00258EE8; } }
    set32(c.r[5], c.r[5].w[0] - 4000u);
    c.budget -= 1;
L_00258EE8:
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 80u)));  if (t) { goto L_00258F00; } }
    c.r[1].d[0] = c.r[5].sd[0] < 201ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 30u);  if (t) { goto L_00258F18; } }
L_00258F00:
    c.r[3].d[0] = c.r[5].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 601ll ? 1ull : 0ull;  if (t) { goto L_00259024; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00259024; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 1;
L_00258F18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 31u);  if (t) { goto L_00258F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00258FE8; } }
L_00258F28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00258F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00258FE8; } }
L_00258F38:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_00258F54; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00258F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_00258FE8; } }
L_00258F54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00258F70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_00258F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_00258FE8; } }
L_00258F70:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_00258F74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 34u);  if (t) { goto L_00258F94; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00258F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_00258FE8; } }
L_00258F90:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
L_00258F94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_00258FA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 5u);  if (t) { goto L_00258FE8; } }
L_00258FA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00258FC8; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00258FC0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_00258FC8; } }
L_00258FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_00258FE8; } }
L_00258FC8:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 43u);  if (t) { goto L_00258FDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 6u);  if (t) { goto L_00258FE8; } }
L_00258FDC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00258FE8; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 1;
L_00258FE8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_00259024; } }
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    st32((c.r[2].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[2].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[2].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[2].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 80u));
    st32((c.r[2].w[0] + 196u), c.f[0]);
    c.budget -= 13;
L_00259024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025902Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x0025902Cu) [[unlikely]] return; }
L_0025902C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025905Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x0025905Cu) [[unlikely]] return; }
L_0025905C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00259084; } }
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259084; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st8((c.r[2].w[0] + 200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00259084:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st16((c.r[2].w[0] + 210u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_002590A8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], 0u - 127u);  if (t) { goto L_002590E0; } }
L_002590A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590B0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002590B0u) [[unlikely]] return; }
L_002590B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] - 7934u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 25576u));
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[2].w[0] + 210u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], 0u - 127u);
    c.budget -= 12;
L_002590E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590E8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002590E8u) [[unlikely]] return; }
L_002590E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002590F8u); st8((c.r[1].w[0] - 25559u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002D98E0u; return; } if (c.pc != 0x002590F8u) [[unlikely]] return; }
L_002590F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259100u);  if (depth < kMaxDepth) unit_002A(c, 133u, depth + 1u); else { c.pc = 0x001A9520u; return; } if (c.pc != 0x00259100u) [[unlikely]] return; }
L_00259100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259108u);  if (depth < kMaxDepth) unit_004F(c, 122u, depth + 1u); else { c.pc = 0x0023DD20u; return; } if (c.pc != 0x00259108u) [[unlikely]] return; }
L_00259108:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259118u); st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00259118u) [[unlikely]] return; }
L_00259118:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00259130; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259130u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 366u, depth + 1u); else { c.pc = 0x002A7A20u; return; } if (c.pc != 0x00259130u) [[unlikely]] return; }
L_00259130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00259150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0025920C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259170u);  if (depth < kMaxDepth) unit_0019(c, 288u, depth + 1u); else { c.pc = 0x00166EB0u; return; } if (c.pc != 0x00259170u) [[unlikely]] return; }
L_00259170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259178u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0019(c, 292u, depth + 1u); else { c.pc = 0x00166FA0u; return; } if (c.pc != 0x00259178u) [[unlikely]] return; }
L_00259178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259180u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00259180u) [[unlikely]] return; }
L_00259180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] - 25559u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591B0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x002591B0u) [[unlikely]] return; }
L_002591B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 27312u);
    set32(c.r[5], 0u + 48u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27264u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591E0u); st32((c.r[1].w[0] - 27152u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002591E0u) [[unlikely]] return; }
L_002591E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002591F0u); set32(c.r[4], c.r[4].w[0] - 27248u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002591F0u) [[unlikely]] return; }
L_002591F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[3].w[0] + 232u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    st8((c.r[3].w[0] + 200u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_0025920C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002592A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27328u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002592A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259258u); c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0019(c, 307u, depth + 1u); else { c.pc = 0x00167250u; return; } if (c.pc != 0x00259258u) [[unlikely]] return; }
L_00259258:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259264u); c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));  if (depth < kMaxDepth) unit_0019(c, 308u, depth + 1u); else { c.pc = 0x00167270u; return; } if (c.pc != 0x00259264u) [[unlikely]] return; }
L_00259264:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259278u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0019(c, 290u, depth + 1u); else { c.pc = 0x00166F30u; return; } if (c.pc != 0x00259278u) [[unlikely]] return; }
L_00259278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27264u), 0u);
    set32(c.r[4], c.r[4].w[0] - 27312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259298u); st32((c.r[1].w[0] - 27152u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00259298u) [[unlikely]] return; }
L_00259298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002592A8u); set32(c.r[4], c.r[4].w[0] - 27248u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002592A8u) [[unlikely]] return; }
L_002592A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002592C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0025932C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], 0u - 1u);
    st16((c.r[2].w[0] + 96u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 98u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[2].w[0] + 66u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259320u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00259320u) [[unlikely]] return; }
L_00259320:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 3u);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 3;
L_0025932C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0025939C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025936C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002593A0; } }
L_0025936C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259390u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00259390u) [[unlikely]] return; }
L_00259390:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 4u);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 3;
L_0025939C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002593A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002593B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002593F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002593ECu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x002593ECu) [[unlikely]] return; }
L_002593EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 5u);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 3;
L_002593F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00259478; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025943C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0025947C; } }
L_0025943C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259460u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00259460u) [[unlikely]] return; }
L_00259460:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00259478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0025947C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002594FC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], 0u - 1u);
    st32((c.r[2].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 96u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002594E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x002594E4u) [[unlikely]] return; }
L_002594E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_002594FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
L_00259520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 133u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259520u | kUnwind; return; } goto L_00259520; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 118u);
    set32(c.r[4], 0u + 255u);
    c.budget -= 3;
L_0025954C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[3].w[0] + 141u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025954Cu | kUnwind; return; } goto L_0025954C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 934u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595B0u); set32(c.r[6], 0u + 999u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x002595B0u) [[unlikely]] return; }
L_002595B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595B8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002595B8u) [[unlikely]] return; }
L_002595B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7934u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002595E8u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0054(c, 501u, depth + 1u); else { c.pc = 0x00253260u; return; } if (c.pc != 0x002595E8u) [[unlikely]] return; }
L_002595E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00259600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259620u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 299u, depth + 1u); else { c.pc = 0x00251F40u; return; } if (c.pc != 0x00259620u) [[unlikely]] return; }
L_00259620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[6], c.r[17].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[3].w[0] + 141u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[3].w[0] + 142u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 144u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00259690:
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_002596A4; } }
    set32(c.r[4], 0u + 40u);
    c.budget -= 1;
L_002596A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 133u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002596C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002596D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x002596D4u) [[unlikely]] return; }
L_002596D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002596E0u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x002596E0u) [[unlikely]] return; }
L_002596E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259714u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x00259714u) [[unlikely]] return; }
L_00259714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025971Cu);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x0025971Cu) [[unlikely]] return; }
L_0025971C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259724u);  if (depth < kMaxDepth) unit_0051(c, 160u, depth + 1u); else { c.pc = 0x002454D0u; return; } if (c.pc != 0x00259724u) [[unlikely]] return; }
L_00259724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025972Cu);  if (depth < kMaxDepth) unit_004F(c, 117u, depth + 1u); else { c.pc = 0x0023DCD0u; return; } if (c.pc != 0x0025972Cu) [[unlikely]] return; }
L_0025972C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259734u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00259734u) [[unlikely]] return; }
L_00259734:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00259748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259748u);  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x00259748u) [[unlikely]] return; }
L_00259748:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00259760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00259774u) [[unlikely]] return; }
L_00259774:
    c.r[1].d[0] = 0ull | 40072ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259784u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0083(c, 82u, depth + 1u); else { c.pc = 0x0030CC80u; return; } if (c.pc != 0x00259784u) [[unlikely]] return; }
L_00259784:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259790u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x00259790u) [[unlikely]] return; }
L_00259790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025979Cu); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x0025979Cu) [[unlikely]] return; }
L_0025979C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597D0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x002597D0u) [[unlikely]] return; }
L_002597D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597D8u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x002597D8u) [[unlikely]] return; }
L_002597D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002597E0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002597E0u) [[unlikely]] return; }
L_002597E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7934u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259810u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0054(c, 501u, depth + 1u); else { c.pc = 0x00253260u; return; } if (c.pc != 0x00259810u) [[unlikely]] return; }
L_00259810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259818u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00259818u) [[unlikely]] return; }
L_00259818:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025982C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025982Cu);  if (depth < kMaxDepth) unit_0089(c, 82u, depth + 1u); else { c.pc = 0x00324AB0u; return; } if (c.pc != 0x0025982Cu) [[unlikely]] return; }
L_0025982C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00259840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259860u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00259860u) [[unlikely]] return; }
L_00259860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21770u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00259A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025987Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025987Cu) [[unlikely]] return; }
L_0025987C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[6], 0u + 32u);
    c.r[1].d[0] = c.r[1].d[0] | 21770ull;
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025989Cu); set32(c.r[4], c.r[2].w[0] + 100u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0025989Cu) [[unlikely]] return; }
L_0025989C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002598ACu); set32(c.r[4], c.r[4].w[0] + 8384u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002598ACu) [[unlikely]] return; }
L_002598AC:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 25500u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[6].w[0] << 5);
    c.budget -= 6;
L_002598C4:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 266u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 256u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 265u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002598C4u | kUnwind; return; } goto L_002598C4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[5], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_00259918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002598FCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002598FCu) [[unlikely]] return; }
L_002598FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025990Cu); set32(c.r[18], ld32((c.r[1].w[0] - 25584u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025990Cu) [[unlikely]] return; }
L_0025990C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25572u)));
    c.budget -= 3;
L_00259918:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259930u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00259930u) [[unlikely]] return; }
L_00259930:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8650u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[1].w[0] + 8650u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025994Cu); st16((c.r[2].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025994Cu) [[unlikely]] return; }
L_0025994C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[6], 0u + 1100u);
    c.r[8].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7936u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 80u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 82u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 86u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st16((c.r[2].w[0] + 88u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002599B4u); st8((c.r[2].w[0] + 228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 257u, depth + 1u); else { c.pc = 0x003ADE20u; return; } if (c.pc != 0x002599B4u) [[unlikely]] return; }
L_002599B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002599BCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0054(c, 602u, depth + 1u); else { c.pc = 0x00253DB0u; return; } if (c.pc != 0x002599BCu) [[unlikely]] return; }
L_002599BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002599C4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0054(c, 607u, depth + 1u); else { c.pc = 0x00253E50u; return; } if (c.pc != 0x002599C4u) [[unlikely]] return; }
L_002599C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002599F8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x002599F8u) [[unlikely]] return; }
L_002599F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A04u); set32(c.r[4], ld32((c.r[1].w[0] - 27648u)));  if (depth < kMaxDepth) unit_0054(c, 514u, depth + 1u); else { c.pc = 0x002533B0u; return; } if (c.pc != 0x00259A04u) [[unlikely]] return; }
L_00259A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A0Cu);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002D98E0u; return; } if (c.pc != 0x00259A0Cu) [[unlikely]] return; }
L_00259A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A14u);  if (depth < kMaxDepth) unit_002A(c, 133u, depth + 1u); else { c.pc = 0x001A9520u; return; } if (c.pc != 0x00259A14u) [[unlikely]] return; }
L_00259A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A1Cu);  if (depth < kMaxDepth) unit_004F(c, 122u, depth + 1u); else { c.pc = 0x0023DD20u; return; } if (c.pc != 0x00259A1Cu) [[unlikely]] return; }
L_00259A1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A2Cu); st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x00259A2Cu) [[unlikely]] return; }
L_00259A2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A40u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00259A40u) [[unlikely]] return; }
L_00259A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A48u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00259A48u) [[unlikely]] return; }
L_00259A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00259A60; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A60u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 366u, depth + 1u); else { c.pc = 0x002A7A20u; return; } if (c.pc != 0x00259A60u) [[unlikely]] return; }
L_00259A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259A68u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00259A68u) [[unlikely]] return; }
L_00259A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00259A80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00259AB4u) [[unlikely]] return; }
L_00259AB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[21], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259ACCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00259ACCu) [[unlikely]] return; }
L_00259ACC:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 349u)));
    set32(c.r[4], 0u + 3u);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.r[19].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259AECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00259AECu) [[unlikely]] return; }
L_00259AEC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 3u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00259B00u) [[unlikely]] return; }
L_00259B00:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00259B14u) [[unlikely]] return; }
L_00259B14:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00259B28u) [[unlikely]] return; }
L_00259B28:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00259B38:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B44u); set32(c.r[16], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00259B44u) [[unlikely]] return; }
L_00259B44:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 27120u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259B64u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00259B64u) [[unlikely]] return; }
L_00259B64:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27072u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259B38u | kUnwind; return; } goto L_00259B38; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00259B8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27120u);
    set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00259BA8u) [[unlikely]] return; }
L_00259BA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00259BBC; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00259BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27072u);
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259BD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00259BD4u) [[unlikely]] return; }
L_00259BD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00259BE8; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00259BE8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00259BF8; } }
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00259BF8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00259C14; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
L_00259C14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00259C44; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00259C44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259C2Cu);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x00259C2Cu) [[unlikely]] return; }
L_00259C2C:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00259C44; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00259C44:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259B8Cu | kUnwind; return; } goto L_00259B8C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00259C78; } }
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27048u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27096u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
L_00259C78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27068u), c.r[2].w[0]);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] - 27116u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27072u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27120u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27040u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27088u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 16;
L_00259CB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[21].d[0]; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_00259D88; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x00259CCCu) [[unlikely]] return; }
L_00259CCC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00259D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259CE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00259CE0u) [[unlikely]] return; }
L_00259CE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00259D84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00259D84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00259D84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00259D84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00259D84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00259D84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00259D84; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 356u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D54u); set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x00259D54u) [[unlikely]] return; }
L_00259D54:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259D64; } }
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_00259D64:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 356u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259D74u); set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x00339E80u; return; } if (c.pc != 0x00259D74u) [[unlikely]] return; }
L_00259D74:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00259D84; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00259D84:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00259D88:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[18].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259CB8u | kUnwind; return; } goto L_00259CB8; } }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] > 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00259DB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27064u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27112u), c.r[2].w[0]);
    c.budget -= 4;
L_00259DB0:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00259DD0; } }
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27060u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_00259DD0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00259DF0; } }
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27060u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 27108u), c.r[2].w[0]);  if (t) { goto L_00259E00; } }
L_00259DF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27064u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27112u), c.r[2].w[0]);
    c.budget -= 4;
L_00259E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E08u);  if (depth < kMaxDepth) unit_001C(c, 282u, depth + 1u); else { c.pc = 0x00173210u; return; } if (c.pc != 0x00259E08u) [[unlikely]] return; }
L_00259E08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00259E34; } }
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27064u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27112u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27060u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27108u), c.r[2].w[0]);
    c.budget -= 9;
L_00259E34:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 27072u);
    set32(c.r[4], c.r[4].w[0] - 27120u);
    set32(c.r[5], c.r[7].w[0] << 2);
    c.budget -= 6;
L_00259E4C:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00259E6C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00259E6C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00259E6C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259E4Cu | kUnwind; return; } goto L_00259E4C; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259E88u); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00259E88u) [[unlikely]] return; }
L_00259E88:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00259EC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259EE4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0056(c, 171u, depth + 1u); else { c.pc = 0x00259A80u; return; } if (c.pc != 0x00259EE4u) [[unlikely]] return; }
L_00259EE4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A134; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00259F04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0025A138; } }
L_00259F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F0Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00259F0Cu) [[unlikely]] return; }
L_00259F0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00259F20u) [[unlikely]] return; }
L_00259F20:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 22032u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 9u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0] + 16u), c.f[0]);  if (t) { goto L_00259F6C; } }
L_00259F50:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259F50u | kUnwind; return; } goto L_00259F50; } }
L_00259F6C:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], 0u + 3221u);
    set32(c.r[2], 0u + 3272u);
    if (c.r[6].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259F84u); c.r[4].d[0] = c.r[3].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0054(c, 517u, depth + 1u); else { c.pc = 0x00253420u; return; } if (c.pc != 0x00259F84u) [[unlikely]] return; }
L_00259F84:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00259F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00259FF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00259FF0; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 128u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00259FD8u); set32(c.r[5], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0054(c, 517u, depth + 1u); else { c.pc = 0x00253420u; return; } if (c.pc != 0x00259FD8u) [[unlikely]] return; }
L_00259FD8:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 6;
L_00259FF0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00259F90u | kUnwind; return; } goto L_00259F90; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A00Cu); set32(c.r[4], 0u + 2931u);  if (depth < kMaxDepth) unit_0054(c, 517u, depth + 1u); else { c.pc = 0x00253420u; return; } if (c.pc != 0x0025A00Cu) [[unlikely]] return; }
L_0025A00C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], 0u - 2u);
    set32(c.r[5], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0025A058; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 863u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A040u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025A040u) [[unlikely]] return; }
L_0025A040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A134; } }
L_0025A048:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 80u), 0u);
    c.budget -= 4;
L_0025A058:
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A048u | kUnwind; return; } goto L_0025A048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A06Cu); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0099(c, 290u, depth + 1u); else { c.pc = 0x00366E20u; return; } if (c.pc != 0x0025A06Cu) [[unlikely]] return; }
L_0025A06C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0025A074:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 80u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025A0DC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025A0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A098u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0099(c, 264u, depth + 1u); else { c.pc = 0x00366980u; return; } if (c.pc != 0x0025A098u) [[unlikely]] return; }
L_0025A098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0025A0E0; } }
L_0025A0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A0A8u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0099(c, 277u, depth + 1u); else { c.pc = 0x00366BC0u; return; } if (c.pc != 0x0025A0A8u) [[unlikely]] return; }
L_0025A0A8:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 160u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0025A0D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A0C0u);  if (depth < kMaxDepth) unit_008E(c, 344u, depth + 1u); else { c.pc = 0x0033B460u; return; } if (c.pc != 0x0025A0C0u) [[unlikely]] return; }
L_0025A0C0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0025A0DC; } }
L_0025A0D0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_0025A0DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0025A0E0:
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A074u | kUnwind; return; } goto L_0025A074; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A11Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x0025A11Cu) [[unlikely]] return; }
L_0025A11C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0025A134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0025A138:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0025A150:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0025A2D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 80u);  if (t) { goto L_0025A194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0025A2D8; } }
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0025A194:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0025A1B8; } }
L_0025A19C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A19Cu | kUnwind; return; } goto L_0025A19C; } }
L_0025A1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A1C0u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0099(c, 290u, depth + 1u); else { c.pc = 0x00366E20u; return; } if (c.pc != 0x0025A1C0u) [[unlikely]] return; }
L_0025A1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025A280; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_0025A1CC:
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A238; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A1E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 364u, depth + 1u); else { c.pc = 0x00252480u; return; } if (c.pc != 0x0025A1E8u) [[unlikely]] return; }
L_0025A1E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A1FCu); set32(c.r[5], c.r[5].w[0] + 31408u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0025A1FCu) [[unlikely]] return; }
L_0025A1FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025A218; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A210u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 264u, depth + 1u); else { c.pc = 0x00366980u; return; } if (c.pc != 0x0025A210u) [[unlikely]] return; }
L_0025A210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0025A280; } }
L_0025A218:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A224u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 277u, depth + 1u); else { c.pc = 0x00366BC0u; return; } if (c.pc != 0x0025A224u) [[unlikely]] return; }
L_0025A224:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025A27C; } }
L_0025A238:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A244u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0054(c, 360u, depth + 1u); else { c.pc = 0x00252370u; return; } if (c.pc != 0x0025A244u) [[unlikely]] return; }
L_0025A244:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025A260; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A258u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 264u, depth + 1u); else { c.pc = 0x00366980u; return; } if (c.pc != 0x0025A258u) [[unlikely]] return; }
L_0025A258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A27C; } }
L_0025A260:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A26Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 277u, depth + 1u); else { c.pc = 0x00366BC0u; return; } if (c.pc != 0x0025A26Cu) [[unlikely]] return; }
L_0025A26C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025A27C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0025A280:
    c.r[2].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A1CCu | kUnwind; return; } goto L_0025A1CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A2BCu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x0025A2BCu) [[unlikely]] return; }
L_0025A2BC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0025A2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0025A2D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0025A2F0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0025A474; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 80u);  if (t) { goto L_0025A334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0025A478; } }
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0025A334:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0025A358; } }
L_0025A33C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A33Cu | kUnwind; return; } goto L_0025A33C; } }
L_0025A358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A360u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0099(c, 290u, depth + 1u); else { c.pc = 0x00366E20u; return; } if (c.pc != 0x0025A360u) [[unlikely]] return; }
L_0025A360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025A420; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_0025A36C:
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A3D8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A388u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 364u, depth + 1u); else { c.pc = 0x00252480u; return; } if (c.pc != 0x0025A388u) [[unlikely]] return; }
L_0025A388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A39Cu); set32(c.r[5], c.r[5].w[0] + 31408u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0025A39Cu) [[unlikely]] return; }
L_0025A39C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025A3B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3B0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 264u, depth + 1u); else { c.pc = 0x00366980u; return; } if (c.pc != 0x0025A3B0u) [[unlikely]] return; }
L_0025A3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0025A420; } }
L_0025A3B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3C4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 277u, depth + 1u); else { c.pc = 0x00366BC0u; return; } if (c.pc != 0x0025A3C4u) [[unlikely]] return; }
L_0025A3C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0025A41C; } }
L_0025A3D8:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3E4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0054(c, 360u, depth + 1u); else { c.pc = 0x00252370u; return; } if (c.pc != 0x0025A3E4u) [[unlikely]] return; }
L_0025A3E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0025A400; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A3F8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 264u, depth + 1u); else { c.pc = 0x00366980u; return; } if (c.pc != 0x0025A3F8u) [[unlikely]] return; }
L_0025A3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A41C; } }
L_0025A400:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A40Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 277u, depth + 1u); else { c.pc = 0x00366BC0u; return; } if (c.pc != 0x0025A40Cu) [[unlikely]] return; }
L_0025A40C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025A41C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0025A420:
    c.r[2].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A36Cu | kUnwind; return; } goto L_0025A36C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A45Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0057(c, 387u, depth + 1u); else { c.pc = 0x0025EEC0u; return; } if (c.pc != 0x0025A45Cu) [[unlikely]] return; }
L_0025A45C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0025A474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0025A478:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0025A490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025A4A0:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0025A4F0; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0025A4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025A4F0; } }
L_0025A4C0:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 2000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_0025A4E8; } }
    c.r[1].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025A4EC; } }
L_0025A4E8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0025A4EC:
    st32((c.r[6].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 1;
L_0025A4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025A500:
    set32(c.r[29], c.r[29].w[0] - 752u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0025A988; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0025A544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0025A98C; } }
L_0025A544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A54Cu);  if (depth < kMaxDepth) unit_0099(c, 290u, depth + 1u); else { c.pc = 0x00366E20u; return; } if (c.pc != 0x0025A54Cu) [[unlikely]] return; }
L_0025A54C:
    set32(c.r[3], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0025A574; } }
L_0025A558:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A558u | kUnwind; return; } goto L_0025A558; } }
L_0025A574:
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0025A59C; } }
L_0025A580:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A580u | kUnwind; return; } goto L_0025A580; } }
L_0025A59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025A680; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 1;
L_0025A5A8:
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025A62C; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A5C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 364u, depth + 1u); else { c.pc = 0x00252480u; return; } if (c.pc != 0x0025A5C4u) [[unlikely]] return; }
L_0025A5C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A5D8u); set32(c.r[5], c.r[5].w[0] + 31408u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0025A5D8u) [[unlikely]] return; }
L_0025A5D8:
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_0025A5E8; } }
L_0025A5E4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0025A5E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A5E4u | kUnwind; return; } goto L_0025A5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0025A618; } }
L_0025A608:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
L_0025A618:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A608u | kUnwind; return; } goto L_0025A608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025A67C; } }
L_0025A62C:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_0025A63C; } }
L_0025A638:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0025A63C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A638u | kUnwind; return; } goto L_0025A638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0025A66C; } }
L_0025A65C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
L_0025A66C:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A65Cu | kUnwind; return; } goto L_0025A65C; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0025A67C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0025A680:
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A5A8u | kUnwind; return; } goto L_0025A5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A694u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0025A694u) [[unlikely]] return; }
L_0025A694:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025A8C4; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_0025A6A8:
    set32(c.r[3], 0u + 37u);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_0025A6DC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A6D8; } }
    c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025A700; } }
L_0025A6D8:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
L_0025A6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);  if (t) { goto L_0025A8B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025A8B4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025A8B4; } }
L_0025A700:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025A728; } }
L_0025A70C:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[3].w[0] + 744u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0025A728:
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 224u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { goto L_0025A74C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A70Cu | kUnwind; return; } goto L_0025A70C; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0025A74C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025A888; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31424u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025A770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025A888; } }
L_0025A778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 744u)));  if (t) { goto L_0025A888; } }
L_0025A780:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 744u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 745u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0025A888; } }
L_0025A79C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 744u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 745u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 746u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0025A888; } }
L_0025A7D4:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 744u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 745u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 746u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 747u)));
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0025A888; } }
L_0025A828:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 744u)));
    set32(c.r[4], 0u + 10000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 745u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 746u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 747u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 748u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 24;
L_0025A888:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025A8C4; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0025A8C4; } }
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A8ACu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AB(c, 253u, depth + 1u); else { c.pc = 0x003ADD70u; return; } if (c.pc != 0x0025A8ACu) [[unlikely]] return; }
L_0025A8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_0025A8C8; } }
L_0025A8B4:
    set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_0025A8B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[3].w[0] + 480u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_0025A8C4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0025A8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025A6A8u | kUnwind; return; } goto L_0025A6A8; } }
    set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[2], 0u + 74u);
    st8((c.r[3].w[0] + 480u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 480u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 75u);  if (t) { goto L_0025A928; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 481u)));
    set32(c.r[4], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0025A924; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 482u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A924; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 483u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0025A924; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 484u)));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0025A970; } }
L_0025A924:
    set32(c.r[2], 0u + 75u);
    c.budget -= 1;
L_0025A928:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0025A97C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 481u)));
    set32(c.r[2], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A97C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 482u)));
    set32(c.r[2], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A97C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 483u)));
    set32(c.r[2], 0u + 103u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A97C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 484u)));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025A97C; } }
L_0025A970:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], 0u + 19u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 3;
L_0025A97C:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025A988u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_0099(c, 264u, depth + 1u); else { c.pc = 0x00366980u; return; } if (c.pc != 0x0025A988u) [[unlikely]] return; }
L_0025A988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0025A98C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_0025A9B0:
    set32(c.r[29], c.r[29].w[0] - 608u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 27328u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 204u), c.r[4].w[0]);  if (t) { goto L_0025AE9C; } }
    c.r[3].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025AE9C; } }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0025AA24; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0025AA24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0025AEA0; } }
L_0025AA24:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 255ull;  if (t) { goto L_0025AA44; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0025AA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA40u);  if (depth < kMaxDepth) unit_0099(c, 290u, depth + 1u); else { c.pc = 0x00366E20u; return; } if (c.pc != 0x0025AA40u) [[unlikely]] return; }
L_0025AA40:
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 1;
L_0025AA44:
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0025AA78; } }
L_0025AA5C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AA5Cu | kUnwind; return; } goto L_0025AA5C; } }
L_0025AA78:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AA90u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0025AA90u) [[unlikely]] return; }
L_0025AA90:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0025ADB0; } }
L_0025AAA0:
    set32(c.r[3], 0u + 35u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 37u);  if (t) { goto L_0025AACC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_0025AAC8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025AB10; } }
L_0025AAC8:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
L_0025AACC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 36u);  if (t) { goto L_0025AAF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_0025AAEC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025AB10; } }
L_0025AAEC:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
L_0025AAF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);  if (t) { goto L_0025ADA4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_0025ADA0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025ADA0; } }
L_0025AB10:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025AB2C; } }
L_0025AB1C:
    set32(c.r[4], c.r[4].w[0] - 48u);
    st8((c.r[3].w[0] + 600u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0025AB2C:
    set32(c.r[3], c.r[23].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { goto L_0025AB50; } }
    c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AB1Cu | kUnwind; return; } goto L_0025AB1C; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0025AB50:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0025AC88; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31456u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025AB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025AC88; } }
L_0025AB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 600u)));  if (t) { goto L_0025AC88; } }
L_0025AB80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 600u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 601u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0025AC88; } }
L_0025AB9C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 600u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 601u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 602u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0025AC88; } }
L_0025ABD4:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 600u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 601u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 602u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 603u)));
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0025AC88; } }
L_0025AC28:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 600u)));
    set32(c.r[3], 0u + 10000u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 601u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 602u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 603u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 604u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[9].w[0] << 5);
    set32(c.r[8], c.r[6].w[0] - c.r[9].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 24;
L_0025AC88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025AD7C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 35u);  if (t) { goto L_0025AD7C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0025AD7C; } }
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0025ACD4; } }
L_0025ACB8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025ACB8u | kUnwind; return; } goto L_0025ACB8; } }
L_0025ACD4:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025AD0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025ACF0u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_0054(c, 364u, depth + 1u); else { c.pc = 0x00252480u; return; } if (c.pc != 0x0025ACF0u) [[unlikely]] return; }
L_0025ACF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD04u); set32(c.r[5], c.r[5].w[0] + 31408u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0025AD04u) [[unlikely]] return; }
L_0025AD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);  if (t) { goto L_0025AD20; } }
L_0025AD0C:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD1Cu); set32(c.r[6], 0u + 120u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0025AD1Cu) [[unlikely]] return; }
L_0025AD1C:
    set32(c.r[2], c.r[19].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_0025AD20:
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 336u);  if (t) { goto L_0025AD30; } }
L_0025AD2C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0025AD30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AD2Cu | kUnwind; return; } goto L_0025AD2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0025AD60; } }
L_0025AD50:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
L_0025AD60:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AD50u | kUnwind; return; } goto L_0025AD50; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD78u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0025AD78u) [[unlikely]] return; }
L_0025AD78:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0025AD7C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 36u);  if (t) { goto L_0025ADB0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_0025ADB0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AD98u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_00AB(c, 253u, depth + 1u); else { c.pc = 0x003ADD70u; return; } if (c.pc != 0x0025AD98u) [[unlikely]] return; }
L_0025AD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_0025ADB4; } }
L_0025ADA0:
    set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_0025ADA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
L_0025ADB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_0025ADB4:
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[23].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AAA0u | kUnwind; return; } goto L_0025AAA0; } }
    set32(c.r[3], c.r[19].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025AE8C; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025AE9C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 336u)));
    set32(c.r[2], 0u + 74u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 75u);  if (t) { goto L_0025AE28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 337u)));
    set32(c.r[4], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0025AE24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 338u)));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025AE24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 339u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0025AE24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 340u)));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0025AE74; } }
L_0025AE24:
    set32(c.r[2], 0u + 75u);
    c.budget -= 1;
L_0025AE28:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0025AE78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 337u)));
    set32(c.r[2], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025AE78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 338u)));
    set32(c.r[2], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025AE78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 339u)));
    set32(c.r[2], 0u + 103u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025AE78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 340u)));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025AE78; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_0025AE74:
    st32((c.r[5].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 1;
L_0025AE78:
    set32(c.r[4], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE84u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0099(c, 264u, depth + 1u); else { c.pc = 0x00366980u; return; } if (c.pc != 0x0025AE84u) [[unlikely]] return; }
L_0025AE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025AE9C; } }
L_0025AE8C:
    c.r[5].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AE9Cu); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0058(c, 40u, depth + 1u); else { c.pc = 0x00260370u; return; } if (c.pc != 0x0025AE9Cu) [[unlikely]] return; }
L_0025AE9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0025AEA0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_0025AED0:
    set32(c.r[29], c.r[29].w[0] - 464u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025B090; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 208u);  if (t) { goto L_0025B090; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_0025AF2C; } }
L_0025AF10:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AF10u | kUnwind; return; } goto L_0025AF10; } }
L_0025AF2C:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0025AF38u) [[unlikely]] return; }
L_0025AF38:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025AF60; } }
    c.r[5].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AF58u); set32(c.r[6], c.r[6].w[0] + 30312u);  if (depth < kMaxDepth) unit_0058(c, 40u, depth + 1u); else { c.pc = 0x00260370u; return; } if (c.pc != 0x0025AF58u) [[unlikely]] return; }
L_0025AF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0025AF90; } }
L_0025AF60:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_0025AF78; } }
L_0025AF6C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_0025AF78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AF6Cu | kUnwind; return; } goto L_0025AF6C; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0025AF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_0025B068; } }
L_0025AF98:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025B010; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025AFBCu); set32(c.r[5], c.r[5].w[0] + 31480u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0025AFBCu) [[unlikely]] return; }
L_0025AFBC:
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_0025AFCC; } }
L_0025AFC8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0025AFCC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AFC8u | kUnwind; return; } goto L_0025AFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0025AFFC; } }
L_0025AFEC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
L_0025AFFC:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AFECu | kUnwind; return; } goto L_0025AFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0025B060; } }
L_0025B010:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_0025B020; } }
L_0025B01C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0025B020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B01Cu | kUnwind; return; } goto L_0025B01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0025B050; } }
L_0025B040:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
L_0025B050:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B040u | kUnwind; return; } goto L_0025B040; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0025B060:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0025B068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025AF98u | kUnwind; return; } goto L_0025AF98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B080u); set32(c.r[4], c.r[4].w[0] + 31488u);  if (depth < kMaxDepth) unit_0054(c, 519u, depth + 1u); else { c.pc = 0x00253460u; return; } if (c.pc != 0x0025B080u) [[unlikely]] return; }
L_0025B080:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B090u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0058(c, 40u, depth + 1u); else { c.pc = 0x00260370u; return; } if (c.pc != 0x0025B090u) [[unlikely]] return; }
L_0025B090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_0025B0B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0025B0C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025B104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B0F4u);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x00260460u; return; } if (c.pc != 0x0025B0F4u) [[unlikely]] return; }
L_0025B0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 48u, depth + 1u); else { c.pc = 0x00260470u; return; } if (c.pc != 0x0025B0FCu) [[unlikely]] return; }
L_0025B0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0025B22C; } }
L_0025B104:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B110u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025B110u) [[unlikely]] return; }
L_0025B110:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[17].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025B134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B128u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025B128u) [[unlikely]] return; }
L_0025B128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_0025B134:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_0025B170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B148u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025B148u) [[unlikely]] return; }
L_0025B148:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 16u);  if (t) { goto L_0025B178; } }
L_0025B170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 27588u);
    c.budget -= 2;
L_0025B178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025B21C; } }
L_0025B180:
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0025B218; } }
    c.f[0] = c.r[16].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 120u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0025B1D4; } }
    set32(c.r[4], 0u + 127u);
    c.budget -= 1;
L_0025B1D4:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[6], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_0025B1E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_0025B1F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0025B200; } }
L_0025B1F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 18u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st8((c.r[5].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0025B200:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B1E0u | kUnwind; return; } goto L_0025B1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B228; } }
L_0025B218:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0025B21C:
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B180u | kUnwind; return; } goto L_0025B180; } }
L_0025B228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0025B22C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025B250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B270u); set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  if (depth < kMaxDepth) unit_0083(c, 220u, depth + 1u); else { c.pc = 0x0030DF90u; return; } if (c.pc != 0x0025B270u) [[unlikely]] return; }
L_0025B270:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B280u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B280u) [[unlikely]] return; }
L_0025B280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B2A8u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_0083(c, 228u, depth + 1u); else { c.pc = 0x0030E140u; return; } if (c.pc != 0x0025B2A8u) [[unlikely]] return; }
L_0025B2A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B2B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B2B8u) [[unlikely]] return; }
L_0025B2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0025B2F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0025B310; } }
L_0025B2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B300u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025B300u) [[unlikely]] return; }
L_0025B300:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0025B310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B318u);  if (depth < kMaxDepth) unit_0083(c, 235u, depth + 1u); else { c.pc = 0x0030E270u; return; } if (c.pc != 0x0025B318u) [[unlikely]] return; }
L_0025B318:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B328u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B328u) [[unlikely]] return; }
L_0025B328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0025B368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025B37C; } }
L_0025B368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B370u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025B370u) [[unlikely]] return; }
L_0025B370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 3;
L_0025B37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B384u);  if (depth < kMaxDepth) unit_0083(c, 240u, depth + 1u); else { c.pc = 0x0030E360u; return; } if (c.pc != 0x0025B384u) [[unlikely]] return; }
L_0025B384:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B394u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B394u) [[unlikely]] return; }
L_0025B394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B3C8u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  if (depth < kMaxDepth) unit_0083(c, 245u, depth + 1u); else { c.pc = 0x0030E400u; return; } if (c.pc != 0x0025B3C8u) [[unlikely]] return; }
L_0025B3C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B3D8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B3D8u) [[unlikely]] return; }
L_0025B3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0025B3F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[6].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[18].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025B430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B428u); set32(c.r[4], c.r[18].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025B428u) [[unlikely]] return; }
L_0025B428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025B438; } }
L_0025B430:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025B438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0025B460; } }
L_0025B440:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025B450u) [[unlikely]] return; }
L_0025B450:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025B460:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B440u | kUnwind; return; } goto L_0025B440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 22000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B4A0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 247u, depth + 1u); else { c.pc = 0x0030E450u; return; } if (c.pc != 0x0025B4A0u) [[unlikely]] return; }
L_0025B4A0:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0025B4A8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_0025B4FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025B4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(806ll);  if (t) { goto L_0025B4F8; } }
L_0025B4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(807ll);  if (t) { goto L_0025B4F8; } }
L_0025B4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(808ll);  if (t) { goto L_0025B4F8; } }
L_0025B4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(809ll);  if (t) { goto L_0025B4F8; } }
L_0025B4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(810ll);  if (t) { goto L_0025B4F8; } }
L_0025B4F4:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(811ll);
    c.budget -= 1;
L_0025B4F8:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_0025B4FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B510u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B510u) [[unlikely]] return; }
L_0025B510:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B4A8u | kUnwind; return; } goto L_0025B4A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0025B538; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0025B538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B538u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025B538u) [[unlikely]] return; }
L_0025B538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025B560:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[6].w[0] - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[19].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025B5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B598u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025B598u) [[unlikely]] return; }
L_0025B598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025B5A8; } }
L_0025B5A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025B5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025B5D0; } }
L_0025B5B0:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B5C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025B5C0u) [[unlikely]] return; }
L_0025B5C0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025B5D0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B5B0u | kUnwind; return; } goto L_0025B5B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 21968u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], 0u + 6u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B60Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 262u, depth + 1u); else { c.pc = 0x0030E6A0u; return; } if (c.pc != 0x0025B60Cu) [[unlikely]] return; }
L_0025B60C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0025B614:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025B668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31536u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025B638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(806ll);  if (t) { goto L_0025B664; } }
L_0025B640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(807ll);  if (t) { goto L_0025B664; } }
L_0025B648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(808ll);  if (t) { goto L_0025B664; } }
L_0025B650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(809ll);  if (t) { goto L_0025B664; } }
L_0025B658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(810ll);  if (t) { goto L_0025B664; } }
L_0025B660:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(811ll);
    c.budget -= 1;
L_0025B664:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0025B668:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B67Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B67Cu) [[unlikely]] return; }
L_0025B67C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B614u | kUnwind; return; } goto L_0025B614; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025B6A4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025B6A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B6A4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025B6A4u) [[unlikely]] return; }
L_0025B6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025B6D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[6].w[0] - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[19].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025B710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B708u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025B708u) [[unlikely]] return; }
L_0025B708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025B718; } }
L_0025B710:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025B718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025B740; } }
L_0025B720:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025B730u) [[unlikely]] return; }
L_0025B730:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025B740:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B720u | kUnwind; return; } goto L_0025B720; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 21936u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B784u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0083(c, 263u, depth + 1u); else { c.pc = 0x0030E6B0u; return; } if (c.pc != 0x0025B784u) [[unlikely]] return; }
L_0025B784:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0025B78C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025B7E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025B7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(812ll);  if (t) { goto L_0025B7DC; } }
L_0025B7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(813ll);  if (t) { goto L_0025B7DC; } }
L_0025B7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(814ll);  if (t) { goto L_0025B7DC; } }
L_0025B7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(815ll);  if (t) { goto L_0025B7DC; } }
L_0025B7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(816ll);  if (t) { goto L_0025B7DC; } }
L_0025B7D8:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(817ll);
    c.budget -= 1;
L_0025B7DC:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0025B7E0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B7F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B7F4u) [[unlikely]] return; }
L_0025B7F4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B78Cu | kUnwind; return; } goto L_0025B78C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025B81C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025B81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B81Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025B81Cu) [[unlikely]] return; }
L_0025B81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025B840:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[6].w[0] - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[19].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025B880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B878u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025B878u) [[unlikely]] return; }
L_0025B878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025B888; } }
L_0025B880:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025B888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025B8B0; } }
L_0025B890:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B8A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025B8A0u) [[unlikely]] return; }
L_0025B8A0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025B8B0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B890u | kUnwind; return; } goto L_0025B890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 21904u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], 0u + 6u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B8ECu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 291u, depth + 1u); else { c.pc = 0x0030EAB0u; return; } if (c.pc != 0x0025B8ECu) [[unlikely]] return; }
L_0025B8EC:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0025B8F4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025B948; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31600u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025B918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(812ll);  if (t) { goto L_0025B944; } }
L_0025B920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(813ll);  if (t) { goto L_0025B944; } }
L_0025B928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(814ll);  if (t) { goto L_0025B944; } }
L_0025B930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(815ll);  if (t) { goto L_0025B944; } }
L_0025B938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(816ll);  if (t) { goto L_0025B944; } }
L_0025B940:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(817ll);
    c.budget -= 1;
L_0025B944:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0025B948:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B95Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025B95Cu) [[unlikely]] return; }
L_0025B95C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025B8F4u | kUnwind; return; } goto L_0025B8F4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025B984; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025B984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B984u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025B984u) [[unlikely]] return; }
L_0025B984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025B9B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[19].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025B9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025B9E8u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025B9E8u) [[unlikely]] return; }
L_0025B9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025B9F8; } }
L_0025B9F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025B9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025BA20; } }
L_0025BA00:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BA10u) [[unlikely]] return; }
L_0025BA10:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025BA20:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BA00u | kUnwind; return; } goto L_0025BA00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BA58u); st64((c.r[4].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0083(c, 292u, depth + 1u); else { c.pc = 0x0030EAC0u; return; } if (c.pc != 0x0025BA58u) [[unlikely]] return; }
L_0025BA58:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0025BA60:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025BAB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31632u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025BA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(818ll);  if (t) { goto L_0025BAB0; } }
L_0025BA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(819ll);  if (t) { goto L_0025BAB0; } }
L_0025BA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(820ll);  if (t) { goto L_0025BAB0; } }
L_0025BA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(821ll);  if (t) { goto L_0025BAB0; } }
L_0025BAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(822ll);  if (t) { goto L_0025BAB0; } }
L_0025BAAC:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(823ll);
    c.budget -= 1;
L_0025BAB0:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0025BAB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BAC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025BAC8u) [[unlikely]] return; }
L_0025BAC8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BA60u | kUnwind; return; } goto L_0025BA60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025BAF0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025BAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BAF0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025BAF0u) [[unlikely]] return; }
L_0025BAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025BB20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[19].sd[0] <= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0025BB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BB58u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025BB58u) [[unlikely]] return; }
L_0025BB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0025BB68; } }
L_0025BB60:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0025BB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025BB90; } }
L_0025BB70:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BB80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BB80u) [[unlikely]] return; }
L_0025BB80:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025BB90:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BB70u | kUnwind; return; } goto L_0025BB70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 21840u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BBC8u); st64((c.r[4].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0083(c, 303u, depth + 1u); else { c.pc = 0x0030EC60u; return; } if (c.pc != 0x0025BBC8u) [[unlikely]] return; }
L_0025BBC8:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0025BBD0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_0025BC24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00258000u < 16384u) { entry = entries_0056[(t - 0x00258000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0025BBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(824ll);  if (t) { goto L_0025BC20; } }
L_0025BBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(825ll);  if (t) { goto L_0025BC20; } }
L_0025BC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(826ll);  if (t) { goto L_0025BC20; } }
L_0025BC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(827ll);  if (t) { goto L_0025BC20; } }
L_0025BC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(828ll);  if (t) { goto L_0025BC20; } }
L_0025BC1C:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(829ll);
    c.budget -= 1;
L_0025BC20:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0025BC24:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BC38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025BC38u) [[unlikely]] return; }
L_0025BC38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BBD0u | kUnwind; return; } goto L_0025BBD0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025BC60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025BC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BC60u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025BC60u) [[unlikely]] return; }
L_0025BC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0025BC90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCBCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BCBCu) [[unlikely]] return; }
L_0025BCBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BCCCu) [[unlikely]] return; }
L_0025BCCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCE4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 314u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0025BCE4u) [[unlikely]] return; }
L_0025BCE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BCFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 314u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0025BCFCu) [[unlikely]] return; }
L_0025BCFC:
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0025BD10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0025BD18; } }
L_0025BD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0025BD28; } }
L_0025BD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 360u, depth + 1u); else { c.pc = 0x0030F4D0u; return; } if (c.pc != 0x0025BD20u) [[unlikely]] return; }
L_0025BD20:
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0025BD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD30u); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025BD30u) [[unlikely]] return; }
L_0025BD30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0025BD50:
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
    set32(c.r[17], c.r[6].w[0] - 1u);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0025BD90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD8Cu); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0025BD8Cu) [[unlikely]] return; }
L_0025BD8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0025BD90:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BD9Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BD9Cu) [[unlikely]] return; }
L_0025BD9C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0025BDC8; } }
L_0025BDA8:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BDB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BDB8u) [[unlikely]] return; }
L_0025BDB8:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0025BDC8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BDA8u | kUnwind; return; } goto L_0025BDA8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BDE8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 314u, depth + 1u); else { c.pc = 0x0030EE00u; return; } if (c.pc != 0x0025BDE8u) [[unlikely]] return; }
L_0025BDE8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0025BE0C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 360u, depth + 1u); else { c.pc = 0x0030F4D0u; return; } if (c.pc != 0x0025BE04u) [[unlikely]] return; }
L_0025BE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 118u);  if (t) { goto L_0025BE20; } }
L_0025BE0C:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE18u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 369u, depth + 1u); else { c.pc = 0x0030F640u; return; } if (c.pc != 0x0025BE18u) [[unlikely]] return; }
L_0025BE18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 118u);
    c.budget -= 2;
L_0025BE20:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0025BE40; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE38u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025BE38u) [[unlikely]] return; }
L_0025BE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BE4C; } }
L_0025BE40:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE4Cu); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025BE4Cu) [[unlikely]] return; }
L_0025BE4C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0025BE64; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025BE64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BE64u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0025BE64u) [[unlikely]] return; }
L_0025BE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0025BE90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BEC0u) [[unlikely]] return; }
L_0025BEC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BED0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BED0u) [[unlikely]] return; }
L_0025BED0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BEE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 329u, depth + 1u); else { c.pc = 0x0030F040u; return; } if (c.pc != 0x0025BEE8u) [[unlikely]] return; }
L_0025BEE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 329u, depth + 1u); else { c.pc = 0x0030F040u; return; } if (c.pc != 0x0025BF00u) [[unlikely]] return; }
L_0025BF00:
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0025BF14; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0025BF1C; } }
L_0025BF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025BF2C; } }
L_0025BF1C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 402u, depth + 1u); else { c.pc = 0x0030F9C0u; return; } if (c.pc != 0x0025BF28u) [[unlikely]] return; }
L_0025BF28:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0025BF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF34u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0025BF34u) [[unlikely]] return; }
L_0025BF34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0025BF4Cu) [[unlikely]] return; }
L_0025BF4C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0025BF78; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[17].d[0];  if (t) { goto L_0025BF64; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { goto L_0025BF74; } }
L_0025BF64:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF74u); set32(c.r[5], 0u + 885u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025BF74u) [[unlikely]] return; }
L_0025BF74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0025BF78:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BF84u); set32(c.r[5], 0u + 902u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0025BF84u) [[unlikely]] return; }
L_0025BF84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0025BFB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFDCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033B590u; return; } if (c.pc != 0x0025BFDCu) [[unlikely]] return; }
L_0025BFDC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025BFF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 329u, depth + 1u); else { c.pc = 0x0030F040u; return; } if (c.pc != 0x0025BFF4u) [[unlikely]] return; }
L_0025BFF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_0057(c, 1u, depth);
}

}
