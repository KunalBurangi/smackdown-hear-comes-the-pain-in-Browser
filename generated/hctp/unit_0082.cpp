#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0082[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0,
    0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0,
    0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 360, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366,
    0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0,
    0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
};

void unit_0082(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00308000;
    case 2u: goto L_0030802C;
    case 3u: goto L_0030803C;
    case 4u: goto L_00308054;
    case 5u: goto L_00308070;
    case 6u: goto L_00308088;
    case 7u: goto L_003080C0;
    case 8u: goto L_003080D0;
    case 9u: goto L_00308108;
    case 10u: goto L_00308148;
    case 11u: goto L_00308180;
    case 12u: goto L_003081B0;
    case 13u: goto L_003081C0;
    case 14u: goto L_003081D0;
    case 15u: goto L_003081E0;
    case 16u: goto L_00308208;
    case 17u: goto L_00308230;
    case 18u: goto L_00308270;
    case 19u: goto L_00308288;
    case 20u: goto L_003082A0;
    case 21u: goto L_003082D8;
    case 22u: goto L_00308300;
    case 23u: goto L_00308314;
    case 24u: goto L_00308324;
    case 25u: goto L_0030834C;
    case 26u: goto L_00308360;
    case 27u: goto L_00308370;
    case 28u: goto L_00308398;
    case 29u: goto L_003083AC;
    case 30u: goto L_003083BC;
    case 31u: goto L_003083E4;
    case 32u: goto L_003083F8;
    case 33u: goto L_00308414;
    case 34u: goto L_0030843C;
    case 35u: goto L_00308450;
    case 36u: goto L_00308470;
    case 37u: goto L_0030848C;
    case 38u: goto L_003084F8;
    case 39u: goto L_00308520;
    case 40u: goto L_00308544;
    case 41u: goto L_00308550;
    case 42u: goto L_003085BC;
    case 43u: goto L_003085D4;
    case 44u: goto L_00308600;
    case 45u: goto L_00308618;
    case 46u: goto L_00308644;
    case 47u: goto L_0030865C;
    case 48u: goto L_003086B0;
    case 49u: goto L_003086F0;
    case 50u: goto L_00308718;
    case 51u: goto L_00308740;
    case 52u: goto L_00308760;
    case 53u: goto L_00308780;
    case 54u: goto L_003087A0;
    case 55u: goto L_003087B8;
    case 56u: goto L_003087D0;
    case 57u: goto L_003087E8;
    case 58u: goto L_00308800;
    case 59u: goto L_00308858;
    case 60u: goto L_0030888C;
    case 61u: goto L_003088C0;
    case 62u: goto L_003088E0;
    case 63u: goto L_00308914;
    case 64u: goto L_0030892C;
    case 65u: goto L_00308938;
    case 66u: goto L_00308950;
    case 67u: goto L_0030895C;
    case 68u: goto L_00308974;
    case 69u: goto L_00308984;
    case 70u: goto L_00308990;
    case 71u: goto L_0030899C;
    case 72u: goto L_003089C0;
    case 73u: goto L_00308A40;
    case 74u: goto L_00308A84;
    case 75u: goto L_00308A90;
    case 76u: goto L_00308B1C;
    case 77u: goto L_00308B70;
    case 78u: goto L_00308B94;
    case 79u: goto L_00308BAC;
    case 80u: goto L_00308BE0;
    case 81u: goto L_00308C38;
    case 82u: goto L_00308C44;
    case 83u: goto L_00308C74;
    case 84u: goto L_00308C9C;
    case 85u: goto L_00308CB0;
    case 86u: goto L_00308CD0;
    case 87u: goto L_00308CEC;
    case 88u: goto L_00308D20;
    case 89u: goto L_00308D60;
    case 90u: goto L_00308D7C;
    case 91u: goto L_00308DE0;
    case 92u: goto L_00308E00;
    case 93u: goto L_00308E60;
    case 94u: goto L_00308E80;
    case 95u: goto L_00308EB0;
    case 96u: goto L_00308ED0;
    case 97u: goto L_00308EF0;
    case 98u: goto L_00308F00;
    case 99u: goto L_00308F30;
    case 100u: goto L_00308F50;
    case 101u: goto L_00308F70;
    case 102u: goto L_00308F80;
    case 103u: goto L_00308FA8;
    case 104u: goto L_00308FC4;
    case 105u: goto L_00308FE4;
    case 106u: goto L_00309010;
    case 107u: goto L_00309054;
    case 108u: goto L_0030908C;
    case 109u: goto L_003090B4;
    case 110u: goto L_003090C8;
    case 111u: goto L_0030910C;
    case 112u: goto L_0030911C;
    case 113u: goto L_0030916C;
    case 114u: goto L_00309184;
    case 115u: goto L_003091C0;
    case 116u: goto L_00309200;
    case 117u: goto L_00309228;
    case 118u: goto L_00309240;
    case 119u: goto L_00309260;
    case 120u: goto L_00309288;
    case 121u: goto L_0030931C;
    case 122u: goto L_003093A0;
    case 123u: goto L_003093D0;
    case 124u: goto L_003093F0;
    case 125u: goto L_00309400;
    case 126u: goto L_00309430;
    case 127u: goto L_00309450;
    case 128u: goto L_00309460;
    case 129u: goto L_00309484;
    case 130u: goto L_003094A0;
    case 131u: goto L_003094C0;
    case 132u: goto L_003094E0;
    case 133u: goto L_00309534;
    case 134u: goto L_00309570;
    case 135u: goto L_0030957C;
    case 136u: goto L_00309598;
    case 137u: goto L_003095AC;
    case 138u: goto L_003095EC;
    case 139u: goto L_003095FC;
    case 140u: goto L_0030963C;
    case 141u: goto L_00309654;
    case 142u: goto L_00309674;
    case 143u: goto L_003096B0;
    case 144u: goto L_003096F0;
    case 145u: goto L_00309718;
    case 146u: goto L_00309730;
    case 147u: goto L_00309750;
    case 148u: goto L_0030979C;
    case 149u: goto L_003097A8;
    case 150u: goto L_003097E8;
    case 151u: goto L_00309804;
    case 152u: goto L_00309840;
    case 153u: goto L_00309888;
    case 154u: goto L_003098B4;
    case 155u: goto L_003098C0;
    case 156u: goto L_00309900;
    case 157u: goto L_0030991C;
    case 158u: goto L_00309958;
    case 159u: goto L_003099A0;
    case 160u: goto L_003099D0;
    case 161u: goto L_003099DC;
    case 162u: goto L_00309A1C;
    case 163u: goto L_00309A38;
    case 164u: goto L_00309A74;
    case 165u: goto L_00309ABC;
    case 166u: goto L_00309AE0;
    case 167u: goto L_00309AEC;
    case 168u: goto L_00309AF8;
    case 169u: goto L_00309B04;
    case 170u: goto L_00309B10;
    case 171u: goto L_00309B18;
    case 172u: goto L_00309B40;
    case 173u: goto L_00309B48;
    case 174u: goto L_00309B90;
    case 175u: goto L_00309BC0;
    case 176u: goto L_00309C20;
    case 177u: goto L_00309C48;
    case 178u: goto L_00309C60;
    case 179u: goto L_00309C90;
    case 180u: goto L_00309CB0;
    case 181u: goto L_00309CC0;
    case 182u: goto L_00309CF0;
    case 183u: goto L_00309D10;
    case 184u: goto L_00309D20;
    case 185u: goto L_00309D44;
    case 186u: goto L_00309D60;
    case 187u: goto L_00309D80;
    case 188u: goto L_00309D9C;
    case 189u: goto L_00309DC0;
    case 190u: goto L_00309E30;
    case 191u: goto L_00309E50;
    case 192u: goto L_00309EBC;
    case 193u: goto L_00309ED0;
    case 194u: goto L_00309F04;
    case 195u: goto L_00309F28;
    case 196u: goto L_00309F38;
    case 197u: goto L_00309F40;
    case 198u: goto L_00309F7C;
    case 199u: goto L_00309FB4;
    case 200u: goto L_0030A00C;
    case 201u: goto L_0030A060;
    case 202u: goto L_0030A0AC;
    case 203u: goto L_0030A0D0;
    case 204u: goto L_0030A0EC;
    case 205u: goto L_0030A108;
    case 206u: goto L_0030A12C;
    case 207u: goto L_0030A148;
    case 208u: goto L_0030A170;
    case 209u: goto L_0030A178;
    case 210u: goto L_0030A19C;
    case 211u: goto L_0030A1B8;
    case 212u: goto L_0030A220;
    case 213u: goto L_0030A23C;
    case 214u: goto L_0030A258;
    case 215u: goto L_0030A274;
    case 216u: goto L_0030A2C0;
    case 217u: goto L_0030A304;
    case 218u: goto L_0030A31C;
    case 219u: goto L_0030A3D0;
    case 220u: goto L_0030A3FC;
    case 221u: goto L_0030A450;
    case 222u: goto L_0030A478;
    case 223u: goto L_0030A480;
    case 224u: goto L_0030A4D8;
    case 225u: goto L_0030A4E0;
    case 226u: goto L_0030A4F4;
    case 227u: goto L_0030A50C;
    case 228u: goto L_0030A5CC;
    case 229u: goto L_0030A668;
    case 230u: goto L_0030A67C;
    case 231u: goto L_0030A6DC;
    case 232u: goto L_0030A788;
    case 233u: goto L_0030A79C;
    case 234u: goto L_0030A7B0;
    case 235u: goto L_0030A7C4;
    case 236u: goto L_0030A7D8;
    case 237u: goto L_0030A7EC;
    case 238u: goto L_0030A7F8;
    case 239u: goto L_0030A818;
    case 240u: goto L_0030A830;
    case 241u: goto L_0030A848;
    case 242u: goto L_0030A860;
    case 243u: goto L_0030A878;
    case 244u: goto L_0030A890;
    case 245u: goto L_0030A8B0;
    case 246u: goto L_0030A8EC;
    case 247u: goto L_0030A92C;
    case 248u: goto L_0030A95C;
    case 249u: goto L_0030A97C;
    case 250u: goto L_0030A9B8;
    case 251u: goto L_0030A9F4;
    case 252u: goto L_0030AA30;
    case 253u: goto L_0030AA54;
    case 254u: goto L_0030AA80;
    case 255u: goto L_0030AAB4;
    case 256u: goto L_0030AAC0;
    case 257u: goto L_0030AB00;
    case 258u: goto L_0030AB10;
    case 259u: goto L_0030AB1C;
    case 260u: goto L_0030AB60;
    case 261u: goto L_0030AB84;
    case 262u: goto L_0030AB9C;
    case 263u: goto L_0030ABC0;
    case 264u: goto L_0030ABD0;
    case 265u: goto L_0030ABF8;
    case 266u: goto L_0030AC14;
    case 267u: goto L_0030AC28;
    case 268u: goto L_0030AC44;
    case 269u: goto L_0030AC50;
    case 270u: goto L_0030AC64;
    case 271u: goto L_0030AC90;
    case 272u: goto L_0030ACDC;
    case 273u: goto L_0030ACE8;
    case 274u: goto L_0030ACFC;
    case 275u: goto L_0030AD14;
    case 276u: goto L_0030AD28;
    case 277u: goto L_0030AD44;
    case 278u: goto L_0030AD68;
    case 279u: goto L_0030AD70;
    case 280u: goto L_0030AD9C;
    case 281u: goto L_0030ADB8;
    case 282u: goto L_0030ADC0;
    case 283u: goto L_0030ADD0;
    case 284u: goto L_0030ADF8;
    case 285u: goto L_0030AE0C;
    case 286u: goto L_0030AE34;
    case 287u: goto L_0030AE5C;
    case 288u: goto L_0030AEE0;
    case 289u: goto L_0030AF04;
    case 290u: goto L_0030AF20;
    case 291u: goto L_0030AF40;
    case 292u: goto L_0030AF48;
    case 293u: goto L_0030AF70;
    case 294u: goto L_0030AF7C;
    case 295u: goto L_0030AFB0;
    case 296u: goto L_0030AFF0;
    case 297u: goto L_0030B00C;
    case 298u: goto L_0030B050;
    case 299u: goto L_0030B080;
    case 300u: goto L_0030B09C;
    case 301u: goto L_0030B0B4;
    case 302u: goto L_0030B0D0;
    case 303u: goto L_0030B0F0;
    case 304u: goto L_0030B140;
    case 305u: goto L_0030B16C;
    case 306u: goto L_0030B184;
    case 307u: goto L_0030B240;
    case 308u: goto L_0030B250;
    case 309u: goto L_0030B290;
    case 310u: goto L_0030B2A0;
    case 311u: goto L_0030B2AC;
    case 312u: goto L_0030B2F0;
    case 313u: goto L_0030B340;
    case 314u: goto L_0030B350;
    case 315u: goto L_0030B364;
    case 316u: goto L_0030B378;
    case 317u: goto L_0030B38C;
    case 318u: goto L_0030B3A0;
    case 319u: goto L_0030B3BC;
    case 320u: goto L_0030B40C;
    case 321u: goto L_0030B418;
    case 322u: goto L_0030B450;
    case 323u: goto L_0030B460;
    case 324u: goto L_0030B480;
    case 325u: goto L_0030B48C;
    case 326u: goto L_0030B49C;
    case 327u: goto L_0030B4AC;
    case 328u: goto L_0030B4BC;
    case 329u: goto L_0030B4C0;
    case 330u: goto L_0030B518;
    case 331u: goto L_0030B54C;
    case 332u: goto L_0030B574;
    case 333u: goto L_0030B584;
    case 334u: goto L_0030B590;
    case 335u: goto L_0030B5C4;
    case 336u: goto L_0030B5F0;
    case 337u: goto L_0030B628;
    case 338u: goto L_0030B644;
    case 339u: goto L_0030B668;
    case 340u: goto L_0030B67C;
    case 341u: goto L_0030B690;
    case 342u: goto L_0030B6A4;
    case 343u: goto L_0030B6F0;
    case 344u: goto L_0030B700;
    case 345u: goto L_0030B734;
    case 346u: goto L_0030B744;
    case 347u: goto L_0030B784;
    case 348u: goto L_0030B794;
    case 349u: goto L_0030B7AC;
    case 350u: goto L_0030B7C4;
    case 351u: goto L_0030B7CC;
    case 352u: goto L_0030B7DC;
    case 353u: goto L_0030B7F4;
    case 354u: goto L_0030B80C;
    case 355u: goto L_0030B814;
    case 356u: goto L_0030B824;
    case 357u: goto L_0030B83C;
    case 358u: goto L_0030B854;
    case 359u: goto L_0030B86C;
    case 360u: goto L_0030B884;
    case 361u: goto L_0030B88C;
    case 362u: goto L_0030B89C;
    case 363u: goto L_0030B8B4;
    case 364u: goto L_0030B8CC;
    case 365u: goto L_0030B8E4;
    case 366u: goto L_0030B8FC;
    case 367u: goto L_0030B904;
    case 368u: goto L_0030B914;
    case 369u: goto L_0030B92C;
    case 370u: goto L_0030B944;
    case 371u: goto L_0030B94C;
    case 372u: goto L_0030B95C;
    case 373u: goto L_0030B974;
    case 374u: goto L_0030B98C;
    case 375u: goto L_0030B994;
    case 376u: goto L_0030B9A4;
    case 377u: goto L_0030B9BC;
    case 378u: goto L_0030B9D4;
    case 379u: goto L_0030B9DC;
    case 380u: goto L_0030B9EC;
    case 381u: goto L_0030BA04;
    case 382u: goto L_0030BA1C;
    case 383u: goto L_0030BA24;
    case 384u: goto L_0030BA34;
    case 385u: goto L_0030BA4C;
    case 386u: goto L_0030BA64;
    case 387u: goto L_0030BA78;
    case 388u: goto L_0030BA90;
    case 389u: goto L_0030BAA8;
    case 390u: goto L_0030BACC;
    case 391u: goto L_0030BAE0;
    case 392u: goto L_0030BAF4;
    case 393u: goto L_0030BB04;
    case 394u: goto L_0030BB30;
    case 395u: goto L_0030BB8C;
    case 396u: goto L_0030BB94;
    case 397u: goto L_0030BBA4;
    case 398u: goto L_0030BBAC;
    case 399u: goto L_0030BBCC;
    case 400u: goto L_0030BBD8;
    case 401u: goto L_0030BBF8;
    case 402u: goto L_0030BC2C;
    case 403u: goto L_0030BC48;
    case 404u: goto L_0030BC54;
    case 405u: goto L_0030BC80;
    case 406u: goto L_0030BC98;
    case 407u: goto L_0030BCC8;
    case 408u: goto L_0030BCE4;
    case 409u: goto L_0030BD08;
    case 410u: goto L_0030BD78;
    case 411u: goto L_0030BDA4;
    case 412u: goto L_0030BDB4;
    case 413u: goto L_0030BDC8;
    case 414u: goto L_0030BDD4;
    case 415u: goto L_0030BDF4;
    case 416u: goto L_0030BE1C;
    case 417u: goto L_0030BE28;
    case 418u: goto L_0030BE58;
    case 419u: goto L_0030BE74;
    case 420u: goto L_0030BF44;
    case 421u: goto L_0030BF50;
    case 422u: goto L_0030BF60;
    case 423u: goto L_0030BF88;
    case 424u: goto L_0030BFC8;
    case 425u: goto L_0030BFF0;
    default: bad_entry(c, 0x00308000u); return;
    }
L_00308000:
    set32(c.r[2], c.r[2].w[0] + 18064u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030802C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030802C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030802Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030802Cu) [[unlikely]] return; }
L_0030802C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030803Cu); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x0030803Cu) [[unlikely]] return; }
L_0030803C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00308058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00308054u) [[unlikely]] return; }
L_00308054:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00308058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308088u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00308088u) [[unlikely]] return; }
L_00308088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003080C0; } }
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003080C0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 15u, depth + 1u); else { c.pc = 0x003081E0u; return; } if (c.pc != 0x003080C0u) [[unlikely]] return; }
L_003080C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003080D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0030810C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308108u);  if (depth < kMaxDepth) unit_0082(c, 5u, depth + 1u); else { c.pc = 0x00308070u; return; } if (c.pc != 0x00308108u) [[unlikely]] return; }
L_00308108:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0030810C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 40u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 44u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308148u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308148u) [[unlikely]] return; }
L_00308148:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[3].w[0] + 60u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00308180:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030819C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[4].w[0]);  if (t) { goto L_003081A4; } }
L_0030819C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_003081A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003081B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_003081C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_003081D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_003081E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 72u));
    c.r[16].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[11].d[0] = ld8((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308208u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 419u, depth + 1u); else { c.pc = 0x0012F590u; return; } if (c.pc != 0x00308208u) [[unlikely]] return; }
L_00308208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18032u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00308230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00308288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18032u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00308270; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308270u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x00308270u) [[unlikely]] return; }
L_00308270:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030828C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00308288u) [[unlikely]] return; }
L_00308288:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030828C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003082A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003082D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003082D8u) [[unlikely]] return; }
L_003082D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030831C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308450; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308300u); set32(c.r[5], 0u + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308300u) [[unlikely]] return; }
L_00308300:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308314u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308314u) [[unlikely]] return; }
L_00308314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00308454; } }
L_0030831C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308324u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00308324u) [[unlikely]] return; }
L_00308324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00308368; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308450; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030834Cu); set32(c.r[5], 0u + 401u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030834Cu) [[unlikely]] return; }
L_0030834C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308360u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308360u) [[unlikely]] return; }
L_00308360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308450; } }
L_00308368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308370u);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x00308370u) [[unlikely]] return; }
L_00308370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003083B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308450; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308398u); set32(c.r[5], 0u + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308398u) [[unlikely]] return; }
L_00308398:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003083ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003083ACu) [[unlikely]] return; }
L_003083AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308450; } }
L_003083B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003083BCu);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x003083BCu) [[unlikely]] return; }
L_003083BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308400; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308450; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003083E4u); set32(c.r[5], 0u + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003083E4u) [[unlikely]] return; }
L_003083E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003083F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003083F8u) [[unlikely]] return; }
L_003083F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308450; } }
L_00308400:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308414u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308414u) [[unlikely]] return; }
L_00308414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308450; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00308450; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030843Cu); set32(c.r[5], 0u + 402u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030843Cu) [[unlikely]] return; }
L_0030843C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308450u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308450u) [[unlikely]] return; }
L_00308450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00308454:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030848Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 423u, depth + 1u); else { c.pc = 0x0012F670u; return; } if (c.pc != 0x0030848Cu) [[unlikely]] return; }
L_0030848C:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], 0u + 13u);
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003084F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003084F8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_003084CC; } }
    breakpoint(c, 0x003084C8u);
    c.budget -= 1;
L_003084CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_003084E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003084F0; } }
L_003084E8:
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_003084F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003084F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 421u, depth + 1u); else { c.pc = 0x0012F610u; return; } if (c.pc != 0x003084F8u) [[unlikely]] return; }
L_003084F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 402u);  if (t) { goto L_00308544; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00308544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308544u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00308544u) [[unlikely]] return; }
L_00308544:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00308550:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085BCu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003085BCu) [[unlikely]] return; }
L_003085BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003085D4; } }
    set32(c.r[6], c.r[18].w[0] + 2u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003085D4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x003085D4u) [[unlikely]] return; }
L_003085D4:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 47u);
    set32(c.r[6], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u + 640u);
    set32(c.r[2], 0u + 92u);
    set32(c.r[4], 0u + 192u);
    st32((c.r[6].w[0] + 84u), 0u);
    st32((c.r[6].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308600u); st32((c.r[6].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00308600u) [[unlikely]] return; }
L_00308600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00308618; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308618u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 102u, depth + 1u); else { c.pc = 0x002BD340u; return; } if (c.pc != 0x00308618u) [[unlikely]] return; }
L_00308618:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], 0u + 47u);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u + 640u);
    set32(c.r[2], 0u + 92u);
    set32(c.r[4], 0u + 192u);
    st32((c.r[6].w[0] + 84u), 0u);
    st32((c.r[6].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308644u); st32((c.r[6].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00308644u) [[unlikely]] return; }
L_00308644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[18].w[0] + 1u);  if (t) { goto L_0030865C; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030865Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 102u, depth + 1u); else { c.pc = 0x002BD340u; return; } if (c.pc != 0x0030865Cu) [[unlikely]] return; }
L_0030865C:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 47u);
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], 0u + 640u);
    set32(c.r[3], 0u + 92u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[6].w[0] + 84u), 0u);
    st32((c.r[6].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003086B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003087E8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003086F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003086F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003086F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003086F0u) [[unlikely]] return; }
L_003086F0:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308718; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308718; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308718u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308718u) [[unlikely]] return; }
L_00308718:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308740; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00308740; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308740u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308740u) [[unlikely]] return; }
L_00308740:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308760; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00308760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308760u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00308760u) [[unlikely]] return; }
L_00308760:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00308780; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00308780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308780u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00308780u) [[unlikely]] return; }
L_00308780:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003087A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_003087A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087A0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003087A0u) [[unlikely]] return; }
L_003087A0:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003087B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087B8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003087B8u) [[unlikely]] return; }
L_003087B8:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_003087D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087D0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003087D0u) [[unlikely]] return; }
L_003087D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003087D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 44u), 0u);  if (t) { goto L_003087E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003087E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003087E8u) [[unlikely]] return; }
L_003087E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[6].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[1] = c.r[5].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[16].w[0]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308858u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308858u) [[unlikely]] return; }
L_00308858:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.f[1] = c.r[16].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030888Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030888Cu) [[unlikely]] return; }
L_0030888C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.f[1] = c.r[17].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 19ull;
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003088C0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003088C0u) [[unlikely]] return; }
L_003088C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003088E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00308914u) [[unlikely]] return; }
L_00308914:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030892Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0030892Cu) [[unlikely]] return; }
L_0030892C:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00308938u) [[unlikely]] return; }
L_00308938:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308950u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00308950u) [[unlikely]] return; }
L_00308950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030895Cu); st32((c.r[18].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0030895Cu) [[unlikely]] return; }
L_0030895C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308974u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x00308974u) [[unlikely]] return; }
L_00308974:
    set32(c.r[16], c.r[17].w[0] << 3);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00308984u) [[unlikely]] return; }
L_00308984:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308990u); st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00308990u) [[unlikely]] return; }
L_00308990:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003089EC; } }
L_0030899C:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003089C0u); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003089C0u) [[unlikely]] return; }
L_003089C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[16].w[0] << 4);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    ld128((c.r[1].w[0] - 15856u) & ~15u, c.r[4]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.budget -= 11;
L_003089EC:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030899Cu | kUnwind; return; } goto L_0030899C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 140u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[1].w[0] - 15868u));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 15872u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    st32((c.r[3].w[0] + 56u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00308A40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 24u), c.r[20].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[21].w[0]);  if (t) { goto L_00308B48; } }
L_00308A84:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);  if (t) { goto L_00308B28; } }
L_00308A90:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_00308B3C; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[6], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[5], c.r[5].w[0] - 16000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] << 4);
    c.f[0] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[3], ld32((c.r[22].w[0] + 40u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[6], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00308B1C; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 80u, depth + 1u); else { c.pc = 0x00308BE0u; return; } if (c.pc != 0x00308B1Cu) [[unlikely]] return; }
L_00308B1C:
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 3;
L_00308B28:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308A90u | kUnwind; return; } goto L_00308A90; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00308B3C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00308B58; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00308B48:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00308A84u | kUnwind; return; } goto L_00308A84; } }
L_00308B58:
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B70u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308B70u) [[unlikely]] return; }
L_00308B70:
    set32(c.r[3], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308B94u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308B94u) [[unlikely]] return; }
L_00308B94:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[5], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308BACu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308BACu) [[unlikely]] return; }
L_00308BAC:
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
L_00308BE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], 0u + 7u);
    set32(c.r[16], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    ld128((c.r[1].w[0] - 15888u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C38u); st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00308C38u) [[unlikely]] return; }
L_00308C38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C44u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x00308C44u) [[unlikely]] return; }
L_00308C44:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.r[4].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C74u); st32((c.r[2].w[0] + 140u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00308C74u) [[unlikely]] return; }
L_00308C74:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[4]);  if (t) { goto L_00308CB0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308C9Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 114u, depth + 1u); else { c.pc = 0x002BD5F0u; return; } if (c.pc != 0x00308C9Cu) [[unlikely]] return; }
L_00308C9C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308CB0u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_006F(c, 114u, depth + 1u); else { c.pc = 0x002BD5F0u; return; } if (c.pc != 0x00308CB0u) [[unlikely]] return; }
L_00308CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00308CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308CECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 91u, depth + 1u); else { c.pc = 0x00308DE0u; return; } if (c.pc != 0x00308CECu) [[unlikely]] return; }
L_00308CEC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308D40; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 16000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D20u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x00308D20u) [[unlikely]] return; }
L_00308D20:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] << 4);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 140u), c.r[4].w[0]);
    c.budget -= 8;
L_00308D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00308D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00308D7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 91u, depth + 1u); else { c.pc = 0x00308DE0u; return; } if (c.pc != 0x00308D7Cu) [[unlikely]] return; }
L_00308D7C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00308DC8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 16000u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 140u), c.r[4].w[0]);
    c.budget -= 16;
L_00308DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00308DE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 7ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00308E00:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00308E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00308E58; } }
L_00308E18:
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 16;
L_00308E58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00308E60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 16000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0]) & ~15u, c.r[3]);  c.pc = t; return; }
L_00308E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 5u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308EB0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308EB0u) [[unlikely]] return; }
L_00308EB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308ED0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308ED0u) [[unlikely]] return; }
L_00308ED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308EF0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308EF0u) [[unlikely]] return; }
L_00308EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F30u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308F30u) [[unlikely]] return; }
L_00308F30:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F50u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308F50u) [[unlikely]] return; }
L_00308F50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308F70u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308F70u) [[unlikely]] return; }
L_00308F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00308F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308FA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308FA8u) [[unlikely]] return; }
L_00308FA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308FC4u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308FC4u) [[unlikely]] return; }
L_00308FC4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00308FE4u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00308FE4u) [[unlikely]] return; }
L_00308FE4:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309010:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    st32((c.r[4].w[0] + 448u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 452u), c.r[17].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309054u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00309054u) [[unlikely]] return; }
L_00309054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030908C; } }
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[14] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[17].w[0];
    c.f[15] = c.r[3].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030908Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006F(c, 27u, depth + 1u); else { c.pc = 0x002BC5A0u; return; } if (c.pc != 0x0030908Cu) [[unlikely]] return; }
L_0030908C:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15840u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    st128((c.r[2].w[0] + 128u) & ~15u, c.r[3]);
    c.budget -= 10;
L_003090B4:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003090C8u); st32((c.r[2].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003090C8u) [[unlikely]] return; }
L_003090C8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 112u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003090B4u | kUnwind; return; } goto L_003090B4; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[21].w[0] + 176u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[21].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030910Cu); st32((c.r[21].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0030910Cu) [[unlikely]] return; }
L_0030910C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030911Cu); st128((c.r[21].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0030911Cu) [[unlikely]] return; }
L_0030911C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], 0u + 208u);
    st128((c.r[21].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 21u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 80u), c.f[1]);
    st32((c.r[21].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 15608u));
    st32((c.r[21].w[0] + 88u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 15608u));
    st32((c.r[21].w[0] + 92u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030916Cu); st32((c.r[21].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0030916Cu) [[unlikely]] return; }
L_0030916C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00309184; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309184u); set32(c.r[7], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x00309184u) [[unlikely]] return; }
L_00309184:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 112u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[3].w[0] + 196u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003091C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00309240; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00309200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00309200; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309200u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309200u) [[unlikely]] return; }
L_00309200:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0030922C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00309228; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309228u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309228u) [[unlikely]] return; }
L_00309228:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0030922C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00309240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00309240u) [[unlikely]] return; }
L_00309240:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[14].d[0] = 0ull + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 10u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], 0u + 2u);
    set32(c.r[12], 0u + 3u);
    c.r[3].d[0] = c.r[14].d[0] & 255ull;
    c.budget -= 10;
L_00309288:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003092C4; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == c.r[12].d[0];  if (t) { goto L_003092C0; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == c.r[11].d[0];  if (t) { goto L_003092B8; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == c.r[10].d[0];  if (t) { goto L_003092B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[15].d[0] == 0) c.r[25].d[0] = c.r[5].d[0];  if (t) { goto L_003092C4; } }
L_003092B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[25].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003092C4; } }
L_003092B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[25].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003092C4; } }
L_003092C0:
    c.r[25].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_003092C4:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == c.r[12].d[0];  if (t) { goto L_00309304; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == c.r[11].d[0];  if (t) { goto L_003092FC; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == c.r[10].d[0];  if (t) { goto L_003092F4; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_003092EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[24].d[0] + 0ull;  if (t) { goto L_0030930C; } }
L_003092EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[24], c.r[4].w[0] + 192u);  if (t) { goto L_00309308; } }
L_003092F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[24], c.r[4].w[0] + 256u);  if (t) { goto L_00309308; } }
L_003092FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[24], c.r[4].w[0] + 320u);  if (t) { goto L_00309308; } }
L_00309304:
    set32(c.r[24], c.r[4].w[0] + 384u);
    c.budget -= 1;
L_00309308:
    c.r[16].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 1;
L_0030930C:
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == 0ull;  if (t) { goto L_0030936C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[25].w[0])));  if (t) { goto L_0030932C; } }
L_0030931C:
    st8((c.r[24].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[25], c.r[25].w[0] + 1u);
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[25].w[0])));
    c.budget -= 4;
L_0030932C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030933C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030931Cu | kUnwind; return; } goto L_0030931C; } }
L_0030933C:
    st8((c.r[24].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[25].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[9].d[0];  if (t) { goto L_00309358; } }
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[25], c.r[25].w[0] + 1u);  if (t) { goto L_00309378; } }
L_00309358:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00309378; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[15].w[0] + 1u);  if (t) { goto L_00309378; } }
L_0030936C:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 3;
L_00309378:
    set32(c.r[3], c.r[13].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[3].w[0] + 176u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[13].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[14].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309288u | kUnwind; return; } goto L_00309288; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003093A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 5u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003093D0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003093D0u) [[unlikely]] return; }
L_003093D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003093F0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003093F0u) [[unlikely]] return; }
L_003093F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309430u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309430u) [[unlikely]] return; }
L_00309430:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309450u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309450u) [[unlikely]] return; }
L_00309450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309484u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309484u) [[unlikely]] return; }
L_00309484:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003094A0u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003094A0u) [[unlikely]] return; }
L_003094A0:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003094C0:
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 112u) & ~15u, c.r[5]);  c.pc = t; return; }
L_003094E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    st32((c.r[4].w[0] + 624u), 0u);
    st32((c.r[4].w[0] + 628u), 0u);
    st32((c.r[4].w[0] + 632u), 0u);
    st8((c.r[4].w[0] + 636u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 640u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 644u), c.r[17].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309534u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00309534u) [[unlikely]] return; }
L_00309534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] - 35u);  if (t) { goto L_00309570; } }
    set32(c.r[3], c.r[17].w[0] + 64u);
    c.f[1] = c.r[4].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43690000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = c.r[7].w[0];
    c.f[15] = c.r[3].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309570u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006F(c, 27u, depth + 1u); else { c.pc = 0x002BC5A0u; return; } if (c.pc != 0x00309570u) [[unlikely]] return; }
L_00309570:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030957Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0030957Cu) [[unlikely]] return; }
L_0030957C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    st128((c.r[2].w[0] + 128u) & ~15u, c.r[3]);
    c.budget -= 7;
L_00309598:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003095ACu); st32((c.r[2].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003095ACu) [[unlikely]] return; }
L_003095AC:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309598u | kUnwind; return; } goto L_00309598; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[21].w[0] + 112u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 20u), 0u);
    set32(c.r[2], 0u + 25u);
    st32((c.r[21].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003095ECu); st32((c.r[21].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003095ECu) [[unlikely]] return; }
L_003095EC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003095FCu); st128((c.r[21].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003095FCu) [[unlikely]] return; }
L_003095FC:
    c.f[1] = c.r[18].w[0];
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.f[0] = c.r[17].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], 0u + 208u);
    st128((c.r[21].w[0] + 48u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[21].w[0] + 80u), c.f[1]);
    st32((c.r[21].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 15608u));
    st32((c.r[21].w[0] + 88u), c.f[0]);
    st32((c.r[21].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030963Cu); st32((c.r[21].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0030963Cu) [[unlikely]] return; }
L_0030963C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00309654; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309654u); set32(c.r[7], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x00309654u) [[unlikely]] return; }
L_00309654:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 15824u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309674u); set32(c.r[6], 0u + 25u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309674u) [[unlikely]] return; }
L_00309674:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] + 224u);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[3].w[0] + 196u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003096B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00309730; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003096F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003096F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003096F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003096F0u) [[unlikely]] return; }
L_003096F0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0030971C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00309718; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309718u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309718u) [[unlikely]] return; }
L_00309718:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0030971C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00309730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309730u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00309730u) [[unlikely]] return; }
L_00309730:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00309750:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 624u), c.r[19].w[0]);
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[4].w[0] + 628u), c.r[18].w[0]);  if (t) { goto L_0030978C; } }
    st32((c.r[20].w[0] + 632u), c.r[19].w[0]);
    c.budget -= 1;
L_0030978C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030979Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 187u, depth + 1u); else { c.pc = 0x00309D80u; return; } if (c.pc != 0x0030979Cu) [[unlikely]] return; }
L_0030979C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003097A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0030985C; } }
    set32(c.r[2], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], 0u - c.r[2].w[0]);  if (t) { goto L_00309814; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 16016u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003097E8u); set32(c.r[4], c.r[2].w[0] + 648u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003097E8u) [[unlikely]] return; }
L_003097E8:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15624u);
    set32(c.r[21], c.r[2].w[0] + 648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309804u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00309804u) [[unlikely]] return; }
L_00309804:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[21].w[0]);  if (t) { goto L_00309894; } }
L_00309814:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_00309850; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00309850; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15616u);
    set32(c.r[21], c.r[2].w[0] + 648u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309840u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00309840u) [[unlikely]] return; }
L_00309840:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[21].w[0]);  if (t) { goto L_00309894; } }
L_00309850:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), 0u);  if (t) { goto L_00309894; } }
L_0030985C:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[21], c.r[3].w[0] + 648u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309888u); set32(c.r[5], c.r[5].w[0] - 16016u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00309888u) [[unlikely]] return; }
L_00309888:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[21].w[0]);
    c.budget -= 3;
L_00309894:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003097A8u | kUnwind; return; } goto L_003097A8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003098B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 187u, depth + 1u); else { c.pc = 0x00309D80u; return; } if (c.pc != 0x003098B4u) [[unlikely]] return; }
L_003098B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003098C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00309974; } }
    set32(c.r[2], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], 0u - c.r[2].w[0]);  if (t) { goto L_0030992C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 16016u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309900u); set32(c.r[4], c.r[2].w[0] + 760u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00309900u) [[unlikely]] return; }
L_00309900:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15624u);
    set32(c.r[21], c.r[2].w[0] + 760u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030991Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0030991Cu) [[unlikely]] return; }
L_0030991C:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 148u), c.r[21].w[0]);  if (t) { goto L_003099AC; } }
L_0030992C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_00309968; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00309968; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15616u);
    set32(c.r[21], c.r[2].w[0] + 760u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309958u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00309958u) [[unlikely]] return; }
L_00309958:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 148u), c.r[21].w[0]);  if (t) { goto L_003099AC; } }
L_00309968:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 148u), 0u);  if (t) { goto L_003099AC; } }
L_00309974:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[21], c.r[3].w[0] + 760u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099A0u); set32(c.r[5], c.r[5].w[0] - 16016u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003099A0u) [[unlikely]] return; }
L_003099A0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[21].w[0]);
    c.budget -= 3;
L_003099AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003098C0u | kUnwind; return; } goto L_003098C0; } }
    set32(c.r[16], c.r[19].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003099D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 187u, depth + 1u); else { c.pc = 0x00309D80u; return; } if (c.pc != 0x003099D0u) [[unlikely]] return; }
L_003099D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003099DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00309A90; } }
    set32(c.r[2], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], 0u - c.r[2].w[0]);  if (t) { goto L_00309A48; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 16016u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A1Cu); set32(c.r[4], c.r[2].w[0] + 872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00309A1Cu) [[unlikely]] return; }
L_00309A1C:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15624u);
    set32(c.r[19], c.r[2].w[0] + 872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00309A38u) [[unlikely]] return; }
L_00309A38:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 184u), c.r[19].w[0]);  if (t) { goto L_00309AC8; } }
L_00309A48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_00309A84; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00309A84; } }
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 15616u);
    set32(c.r[19], c.r[2].w[0] + 872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309A74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00309A74u) [[unlikely]] return; }
L_00309A74:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 184u), c.r[19].w[0]);  if (t) { goto L_00309AC8; } }
L_00309A84:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 184u), 0u);  if (t) { goto L_00309AC8; } }
L_00309A90:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + 872u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309ABCu); set32(c.r[5], c.r[5].w[0] - 16016u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00309ABCu) [[unlikely]] return; }
L_00309ABC:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 184u), c.r[19].w[0]);
    c.budget -= 3;
L_00309AC8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003099DCu | kUnwind; return; } goto L_003099DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309AE0u); set32(c.r[4], 0u + 395u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00309AE0u) [[unlikely]] return; }
L_00309AE0:
    st32((c.r[20].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309AECu); set32(c.r[4], 0u + 805u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00309AECu) [[unlikely]] return; }
L_00309AEC:
    st32((c.r[20].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309AF8u); set32(c.r[4], 0u + 806u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00309AF8u) [[unlikely]] return; }
L_00309AF8:
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B04u); set32(c.r[4], 0u + 438u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00309B04u) [[unlikely]] return; }
L_00309B04:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; st32((c.r[20].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_00309B3C; } }
    set32(c.r[16], 0u + 18u);
    c.budget -= 1;
L_00309B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B18u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00309B18u) [[unlikely]] return; }
L_00309B18:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309B10u | kUnwind; return; } goto L_00309B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00309B68; } }
L_00309B3C:
    set32(c.r[16], 0u + 18u);
    c.budget -= 1;
L_00309B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309B48u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00309B48u) [[unlikely]] return; }
L_00309B48:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309B40u | kUnwind; return; } goto L_00309B40; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00309B68:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00309B90:
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 628u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00309BAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00309BB4; } }
L_00309BAC:
    st32((c.r[4].w[0] + 632u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00309BB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 632u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00309C48; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 636u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 636u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 624u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00309C08; } }
    set32(c.r[2], c.r[2].w[0] - 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 624u), c.r[2].w[0]);  if (t) { goto L_00309C0C; } }
L_00309C08:
    st32((c.r[16].w[0] + 624u), c.r[3].w[0]);
    c.budget -= 1;
L_00309C0C:
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 628u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 147u, depth + 1u); else { c.pc = 0x00309750u; return; } if (c.pc != 0x00309C20u) [[unlikely]] return; }
L_00309C20:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 636u));
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 434u);  if (t) { goto L_00309C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C48u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00309C48u) [[unlikely]] return; }
L_00309C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 5u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309C90u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309C90u) [[unlikely]] return; }
L_00309C90:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309CB0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309CB0u) [[unlikely]] return; }
L_00309CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309CF0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309CF0u) [[unlikely]] return; }
L_00309CF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D10u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309D10u) [[unlikely]] return; }
L_00309D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309D44u) [[unlikely]] return; }
L_00309D44:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00309D60u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00309D60u) [[unlikely]] return; }
L_00309D60:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00309D80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00309D94; } }
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u - c.r[6].w[0]);
    c.budget -= 2;
L_00309D94:
    set32(c.r[8], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00309D9C:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[8], c.r[4].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309D9Cu | kUnwind; return; } goto L_00309D9C; } }
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 10u);
    c.budget -= 2;
L_00309DC0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; mmi::div(c, 0, c.r[6].w[0], c.r[8].w[0]);  if (t) { goto L_00309DCC; } }
    breakpoint(c, 0x00309DC8u);
    c.budget -= 1;
L_00309DCC:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00309DE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00309DE4; } }
L_00309DE0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00309DE4:
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);  if (t) { goto L_00309DF8; } }
    breakpoint(c, 0x00309DF4u);
    c.budget -= 1;
L_00309DF8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[7].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309DC0u | kUnwind; return; } goto L_00309DC0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00309E24; } }
    set32(c.r[4], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00309E24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00309E30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 7932u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { set32(c.r[4], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FD60u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 461u, depth); }
L_00309E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], 0u + 25500u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00309E6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00309EBC; } }
L_00309E6C:
    set32(c.r[4], c.r[3].w[0] - 10000u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00309E8C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_00309E88; } }
    breakpoint(c, 0x00309E84u);
    c.budget -= 1;
L_00309E88:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00309E8C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_00309E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00309EB4; } }
L_00309E9C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00309EAC; } }
    breakpoint(c, 0x00309EA8u);
    c.budget -= 1;
L_00309EAC:
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00309EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309EBCu);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00309EBCu) [[unlikely]] return; }
L_00309EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00309ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 255u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 8896u);  if (t) { goto L_00309F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F04u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00309F04u) [[unlikely]] return; }
L_00309F04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] - 25584u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F28u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00309F28u) [[unlikely]] return; }
L_00309F28:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00309F2C:
    c.r[17].d[0] = c.r[17].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0030A038; } }
L_00309F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00309F40u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00309F40u) [[unlikely]] return; }
L_00309F40:
    set32(c.r[4], c.r[17].w[0] << 1);
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030A000; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00309F98; } }
L_00309F7C:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00309F94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0030A048; } }
L_00309F94:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00309F98:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309F7Cu | kUnwind; return; } goto L_00309F7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0030A034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 100u);  if (t) { goto L_00309FEC; } }
L_00309FB4:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00309FD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_00309FD4; } }
    breakpoint(c, 0x00309FD0u);
    c.budget -= 1;
L_00309FD4:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00309FD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00309FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030A044; } }
L_00309FE8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00309FEC:
    c.r[2].d[0] = c.r[4].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309FB4u | kUnwind; return; } goto L_00309FB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0030A038; } }
L_0030A000:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0030A028; } }
L_0030A00C:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030A024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030A044; } }
L_0030A024:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0030A028:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A00Cu | kUnwind; return; } goto L_0030A00C; } }
L_0030A034:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030A038:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00309F38u | kUnwind; return; } goto L_00309F38; } }
L_0030A044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0030A048:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030A060:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[1].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[6].w[0]);
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0030A0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A0ACu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A0ACu) [[unlikely]] return; }
L_0030A0AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[1].w[0] - 25584u));  if (t) { goto L_0030A0C0; } }
L_0030A0BC:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_0030A0C0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A0D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 191u, depth + 1u); else { c.pc = 0x00309E50u; return; } if (c.pc != 0x0030A0D0u) [[unlikely]] return; }
L_0030A0D0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0030A0E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030A394; } }
L_0030A0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A0ECu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A0ECu) [[unlikely]] return; }
L_0030A0EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030A11C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A108u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A108u) [[unlikely]] return; }
L_0030A108:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0030A124; } }
L_0030A11C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0030A124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A12Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A12Cu) [[unlikely]] return; }
L_0030A12C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030A15C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A148u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A148u) [[unlikely]] return; }
L_0030A148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0030A168; } }
L_0030A15C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0030A168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].sd[0] < 27ll ? 1ull : 0ull;  if (t) { goto L_0030A38C; } }
L_0030A170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A178u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 264u, depth + 1u); else { c.pc = 0x00173050u; return; } if (c.pc != 0x0030A178u) [[unlikely]] return; }
L_0030A178:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0030A194; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030A384; } }
L_0030A194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0030A2DC; } }
L_0030A19C:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[2].w[0] + 26u);  if (t) { goto L_0030A1B0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0030A1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A1B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 191u, depth + 1u); else { c.pc = 0x00309E50u; return; } if (c.pc != 0x0030A1B8u) [[unlikely]] return; }
L_0030A1B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030A1DC; } }
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030A1DC; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0030A1DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 355u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030A1F0; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0030A1F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 353u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 353u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030A204; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0030A204:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 354u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 354u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030A218; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0030A218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A220u); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 276u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A220u) [[unlikely]] return; }
L_0030A220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24832u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0030A288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A23Cu); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 276u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A23Cu) [[unlikely]] return; }
L_0030A23C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24830u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0030A288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A258u); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 276u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A258u) [[unlikely]] return; }
L_0030A258:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24828u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0030A288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A274u); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 276u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A274u) [[unlikely]] return; }
L_0030A274:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24826u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0030A2B8; } }
L_0030A288:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030A2B4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_0030A2B4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0030A394; } }
L_0030A2B4:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0030A2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A2C0u); c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 276u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030A2C0u) [[unlikely]] return; }
L_0030A2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24836u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0030A2D8; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0030A2D8:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0030A2DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 22u)));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[23].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A19Cu | kUnwind; return; } goto L_0030A19C; } }
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0030A384; } }
    set32(c.r[4], 0u + 255u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0030A374; } }
L_0030A304:
    set32(c.r[9], c.r[21].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = ld16((c.r[9].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[17].d[0]; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0030A370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_0030A358; } }
L_0030A31C:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[6], c.r[10].w[0] << 2);
    c.r[5].d[0] = ld16((c.r[9].w[0] + 26u));
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0030A360; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0030A350; } }
    c.r[2].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0030A360; } }
L_0030A350:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 2;
L_0030A358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A31Cu | kUnwind; return; } goto L_0030A31C; } }
L_0030A360:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030A370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0030A398; } }
L_0030A370:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0030A374:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 22u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A304u | kUnwind; return; } goto L_0030A304; } }
L_0030A384:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 2;
L_0030A38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A170u | kUnwind; return; } goto L_0030A170; } }
L_0030A394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0030A398:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0030A3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 27576u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A3FCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030A3FCu) [[unlikely]] return; }
L_0030A3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030A438; } }
L_0030A40C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[2].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030A424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0030A434; } }
L_0030A424:
    c.r[2].d[0] = c.r[3].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030A438; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0030A434:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030A438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030A450:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A478u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0084(c, 33u, depth + 1u); else { c.pc = 0x003101F0u; return; } if (c.pc != 0x0030A478u) [[unlikely]] return; }
L_0030A478:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 255u);
    c.budget -= 2;
L_0030A480:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 224u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 288u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 96u), 0u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 160u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A480u | kUnwind; return; } goto L_0030A480; } }
    c.r[1].d[0] = c.r[20].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + 6u);  if (t) { goto L_0030A4B8; } }
    set32(c.r[20], 0u + 8u);
    set32(c.r[3], c.r[20].w[0] + 6u);
    c.budget -= 2;
L_0030A4B8:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_0030A4D4; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0030A4D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0030A4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030A4E0u) [[unlikely]] return; }
L_0030A4E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0030A5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A4F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030A4F4u) [[unlikely]] return; }
L_0030A4F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030A5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0030A5A4; } }
L_0030A50C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 359u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0030A558; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030A558; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 288u), c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0030A5B0; } }
L_0030A558:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0030A5A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0030A5A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 224u), c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 356u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0030A5B0; } }
L_0030A5A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0030A5A4:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A50Cu | kUnwind; return; } goto L_0030A50C; } }
L_0030A5B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A4D8u | kUnwind; return; } goto L_0030A4D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0030A650; } }
L_0030A5CC:
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[2].w[0] + 288u);
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0030A60C; } }
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[4].d[0];  if (t) { goto L_0030A60C; } }
    set32(c.r[2], c.r[2].w[0] + 160u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030A60C; } }
    st32((c.r[9].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[9].w[0]), c.r[8].w[0]);
    c.budget -= 2;
L_0030A60C:
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[2].w[0] + 224u);
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0030A64C; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0030A64C; } }
    set32(c.r[2], c.r[2].w[0] + 96u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030A64C; } }
    st32((c.r[8].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.budget -= 2;
L_0030A64C:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_0030A650:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A5CCu | kUnwind; return; } goto L_0030A5CC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0030A6BC; } }
L_0030A668:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[2].w[0] + 288u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[2].w[0] + 224u);  if (t) { goto L_0030A6AC; } }
L_0030A67C:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030A694; } }
    st32((c.r[9].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0030A694:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030A6A8; } }
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0030A6A8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0030A6AC:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A67Cu | kUnwind; return; } goto L_0030A67C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0030A6BC:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A668u | kUnwind; return; } goto L_0030A668; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_0030A71C; } }
L_0030A6DC:
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 288u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);  if (t) { goto L_0030A700; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[2].w[0] + 288u), c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[29].w[0]);
    c.budget -= 5;
L_0030A700:
    set32(c.r[5], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_0030A718; } }
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[2].w[0] + 224u), c.r[5].w[0]);
    c.budget -= 3;
L_0030A718:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0030A71C:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A6DCu | kUnwind; return; } goto L_0030A6DC; } }
    set32(c.r[17], c.r[29].w[0] + 296u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[29].w[0] + 232u);  if (t) { goto L_0030A750; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0030A750:
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030A778; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0030A778:
    set32(c.r[6], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A788u); set32(c.r[5], 0u + 886u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A788u) [[unlikely]] return; }
L_0030A788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A79Cu); set32(c.r[5], 0u + 887u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A79Cu) [[unlikely]] return; }
L_0030A79C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7B0u); set32(c.r[5], 0u + 888u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A7B0u) [[unlikely]] return; }
L_0030A7B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7C4u); set32(c.r[5], 0u + 889u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A7C4u) [[unlikely]] return; }
L_0030A7C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7D8u); set32(c.r[5], 0u + 890u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A7D8u) [[unlikely]] return; }
L_0030A7D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A7ECu); set32(c.r[5], 0u + 891u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A7ECu) [[unlikely]] return; }
L_0030A7EC:
    set32(c.r[3], c.r[29].w[0] + 364u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0030A814; } }
L_0030A7F8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A7F8u | kUnwind; return; } goto L_0030A7F8; } }
L_0030A814:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030A818:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[16].w[0] + 922u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A830u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A830u) [[unlikely]] return; }
L_0030A830:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[16].w[0] + 925u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[6], c.r[16].w[0] + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A848u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A848u) [[unlikely]] return; }
L_0030A848:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[16].w[0] + 928u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[6], c.r[16].w[0] + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A860u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A860u) [[unlikely]] return; }
L_0030A860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[16].w[0] + 931u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[6], c.r[16].w[0] + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A878u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A878u) [[unlikely]] return; }
L_0030A878:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A818u | kUnwind; return; } goto L_0030A818; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 2;
L_0030A890:
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[4].w[0] + 288u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030A938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8B0u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030A8B0u) [[unlikely]] return; }
L_0030A8B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030A938; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030A8F8; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 364u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030A8F8; } }
    set32(c.r[2], c.r[3].w[0] + 922u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A8ECu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A8ECu) [[unlikely]] return; }
L_0030A8EC:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[29].w[0] + 364u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030A8F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030A938; } }
    set32(c.r[16], c.r[29].w[0] + 366u);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030A938; } }
    set32(c.r[2], c.r[3].w[0] + 925u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A92Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A92Cu) [[unlikely]] return; }
L_0030A92C:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030A938:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A890u | kUnwind; return; } goto L_0030A890; } }
    set32(c.r[18], c.r[29].w[0] + 366u);
    c.r[17].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 364u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 5;
L_0030A95C:
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[4].w[0] + 224u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0030AA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A97Cu);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030A97Cu) [[unlikely]] return; }
L_0030A97C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0030AA00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0030A9C4; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 364u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030A9C4; } }
    set32(c.r[2], c.r[3].w[0] + 928u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9B8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A9B8u) [[unlikely]] return; }
L_0030A9B8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[29].w[0] + 364u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030A9C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 354u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030AA00; } }
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030AA00; } }
    set32(c.r[2], c.r[3].w[0] + 931u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030A9F4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030A9F4u) [[unlikely]] return; }
L_0030A9F4:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0030AA00:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030A95Cu | kUnwind; return; } goto L_0030A95C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0030AA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AA54u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030AA54u) [[unlikely]] return; }
L_0030AA54:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030AA80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 684u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 172u), 0u);
    st16((c.r[4].w[0] + 180u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 176u), 0u);
    st16((c.r[4].w[0] + 182u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 484u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AAB4u); st32((c.r[4].w[0] + 488u), 0u);  if (depth < kMaxDepth) unit_0082(c, 291u, depth + 1u); else { c.pc = 0x0030AF40u; return; } if (c.pc != 0x0030AAB4u) [[unlikely]] return; }
L_0030AAB4:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AAC0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 296u, depth + 1u); else { c.pc = 0x0011ECC8u; return; } if (c.pc != 0x0030AAC0u) [[unlikely]] return; }
L_0030AAC0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] << 32;  if (t) { goto L_0030AAF8; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 61u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 59u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 58u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 57u));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[17].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.budget -= 11;
L_0030AAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB00u); c.r[4].d[0] = c.r[4].d[0] >> 32;  if (depth < kMaxDepth) unit_0010(c, 12u, depth + 1u); else { c.pc = 0x00140170u; return; } if (c.pc != 0x0030AB00u) [[unlikely]] return; }
L_0030AB00:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 118u);
    set32(c.r[4], 0u + 255u);
    set32(c.r[2], c.r[7].w[0] << 5);
    c.budget -= 4;
L_0030AB10:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] + 492u), c.r[4].w[0]);
    c.budget -= 3;
L_0030AB1C:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 500u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AB1Cu | kUnwind; return; } goto L_0030AB1C; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AB10u | kUnwind; return; } goto L_0030AB10; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0030AB60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030AB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB84u);  if (depth < kMaxDepth) unit_0082(c, 288u, depth + 1u); else { c.pc = 0x0030AEE0u; return; } if (c.pc != 0x0030AB84u) [[unlikely]] return; }
L_0030AB84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030ABA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AB9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0030AB9Cu) [[unlikely]] return; }
L_0030AB9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030ABA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030ABC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 484u)));
    st32((c.r[4].w[0] + 484u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 488u), c.r[6].w[0]);  c.pc = t; return; }
L_0030ABD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ABF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x0030ABF8u) [[unlikely]] return; }
L_0030ABF8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0030AC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AC68; } }
L_0030AC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC14u);  if (depth < kMaxDepth) unit_0011(c, 290u, depth + 1u); else { c.pc = 0x00147BB0u; return; } if (c.pc != 0x0030AC14u) [[unlikely]] return; }
L_0030AC14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC28u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 302u, depth + 1u); else { c.pc = 0x00147D10u; return; } if (c.pc != 0x0030AC28u) [[unlikely]] return; }
L_0030AC28:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[18], ld32((c.r[19].w[0] + 488u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21968u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC44u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0082(c, 263u, depth + 1u); else { c.pc = 0x0030ABC0u; return; } if (c.pc != 0x0030AC44u) [[unlikely]] return; }
L_0030AC44:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC50u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 271u, depth + 1u); else { c.pc = 0x0030AC90u; return; } if (c.pc != 0x0030AC50u) [[unlikely]] return; }
L_0030AC50:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AC64u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 263u, depth + 1u); else { c.pc = 0x0030ABC0u; return; } if (c.pc != 0x0030AC64u) [[unlikely]] return; }
L_0030AC64:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0030AC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0030AC90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0030ACCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030AEAC; } }
L_0030ACCC:
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACDCu); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030ACDCu) [[unlikely]] return; }
L_0030ACDC:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 180u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACE8u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0030ACE8u) [[unlikely]] return; }
L_0030ACE8:
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 180u));
    set32(c.r[4], ld32((c.r[21].w[0] + 172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ACFCu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0030ACFCu) [[unlikely]] return; }
L_0030ACFC:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 180u));
    set32(c.r[4], ld32((c.r[21].w[0] + 172u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD14u); set32(c.r[5], c.r[3].w[0] << 3);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AD14u) [[unlikely]] return; }
L_0030AD14:
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[4], c.r[21].w[0] + 182u);
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD28u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AD28u) [[unlikely]] return; }
L_0030AD28:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 182u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD44u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0030AD44u) [[unlikely]] return; }
L_0030AD44:
    st32((c.r[21].w[0] + 176u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 182u));
    set32(c.r[4], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD68u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0030AD68u) [[unlikely]] return; }
L_0030AD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0030AE94; } }
L_0030AD70:
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[4].w[0] << 2);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AD9Cu); set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AD9Cu) [[unlikely]] return; }
L_0030AD9C:
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADB8u); set32(c.r[4], c.r[3].w[0] + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030ADB8u) [[unlikely]] return; }
L_0030ADB8:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    c.budget -= 2;
L_0030ADC0:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[23], c.r[2].w[0] << 4);
    set32(c.r[22], c.r[17].w[0] + c.r[23].w[0]);
    c.budget -= 4;
L_0030ADD0:
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[16], c.r[18].w[0] << 4);
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030ADF8u); set32(c.r[4], c.r[3].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030ADF8u) [[unlikely]] return; }
L_0030ADF8:
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[4], c.r[29].w[0] + 159u);
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE0Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AE0Cu) [[unlikely]] return; }
L_0030AE0C:
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 159u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 159u));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE34u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AE34u) [[unlikely]] return; }
L_0030AE34:
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 159u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 159u));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 484u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AE5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030AE5Cu) [[unlikely]] return; }
L_0030AE5C:
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 159u));
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ADD0u | kUnwind; return; } goto L_0030ADD0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030ADC0u | kUnwind; return; } goto L_0030ADC0; } }
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0030AE94:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 182u));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AD70u | kUnwind; return; } goto L_0030AD70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030AEAC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0030AEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030AF04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF04u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0030AF04u) [[unlikely]] return; }
L_0030AF04:
    st32((c.r[16].w[0] + 172u), 0u);
    st16((c.r[16].w[0] + 180u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030AF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030AF20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0030AF20u) [[unlikely]] return; }
L_0030AF20:
    st32((c.r[16].w[0] + 176u), 0u);
    st16((c.r[16].w[0] + 182u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0030AF40:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 118u);
    c.budget -= 2;
L_0030AF48:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 42ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AF48u | kUnwind; return; } goto L_0030AF48; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), 0u);  c.pc = t; return; }
L_0030AF70:
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030AF98; } }
L_0030AF7C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030AF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030AFA8; } }
L_0030AF94:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0030AF98:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030AF7Cu | kUnwind; return; } goto L_0030AF7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030AFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030AFB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[3].sd[0] < 42ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0030AFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030AFE4; } }
L_0030AFC8:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
L_0030AFE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030AFF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0030B004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030B074; } }
L_0030B004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030B024; } }
L_0030B00C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0030B030; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0030B024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B00Cu | kUnwind; return; } goto L_0030B00C; } }
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0030B030:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030B040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B074; } }
L_0030B040:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_0030B060; } }
L_0030B050:
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0030B060:
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B050u | kUnwind; return; } goto L_0030B050; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030B074:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B09Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 293u, depth + 1u); else { c.pc = 0x0030AF70u; return; } if (c.pc != 0x0030B09Cu) [[unlikely]] return; }
L_0030B09C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030B0AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030B0B4; } }
L_0030B0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B0B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 295u, depth + 1u); else { c.pc = 0x0030AFB0u; return; } if (c.pc != 0x0030B0B4u) [[unlikely]] return; }
L_0030B0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0030B0D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 684u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00310000u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[7], c.r[7].w[0] - 20240u);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] + 492u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126150u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 126u, depth); }
L_0030B0F0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0030B110; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0030B118; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0030B110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030B138; } }
L_0030B118:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0030B12C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0030B134; } }
L_0030B12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030B138; } }
L_0030B134:
    set32(c.r[2], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0030B138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B140:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0030B158; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0030B15C; } }
L_0030B158:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030B15C:
    set32(c.r[12], ld32((c.r[4].w[0] + 684u)));
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 118u);  if (t) { goto L_0030B1E8; } }
L_0030B16C:
    set32(c.r[11], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[11].w[0] + 492u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0030B1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[13].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_0030B1DC; } }
L_0030B184:
    set32(c.r[3], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 500u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[3], c.r[10].w[0] + c.r[4].w[0]);  if (t) { goto L_0030B1D4; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 500u), c.r[4].w[0]);  if (t) { goto L_0030B1CC; } }
    c.r[1].d[0] = c.r[13].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0030B1BC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 508u), c.r[2].w[0]);  if (t) { goto L_0030B1C4; } }
L_0030B1BC:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[3].w[0] + 504u), c.r[2].w[0]);
    c.budget -= 2;
L_0030B1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0030B230; } }
L_0030B1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0030B230; } }
L_0030B1D4:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[3].d[0] = c.r[13].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 2;
L_0030B1DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[13].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B184u | kUnwind; return; } goto L_0030B184; } }
L_0030B1E4:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 1;
L_0030B1E8:
    c.r[3].d[0] = c.r[14].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[14].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B16Cu | kUnwind; return; } goto L_0030B16C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 684u)));
    set32(c.r[8], c.r[14].w[0] << 5);
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 684u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 492u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 496u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[8].w[0] + 500u), c.r[3].w[0]);  if (t) { goto L_0030B22C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 508u), c.r[3].w[0]);  if (t) { goto L_0030B230; } }
L_0030B22C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0030B230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B240:
    set32(c.r[8], ld32((c.r[4].w[0] + 684u)));
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0030B274; } }
L_0030B250:
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 492u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0030B270; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 500u)));  if (t) { goto L_0030B280; } }
L_0030B270:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0030B274:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B250u | kUnwind; return; } goto L_0030B250; } }
L_0030B280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B290:
    set32(c.r[7], ld32((c.r[4].w[0] + 684u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0030B2D8; } }
L_0030B2A0:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0030B2C8; } }
L_0030B2AC:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 500u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0030B2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0030B2D4; } }
L_0030B2C4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0030B2C8:
    c.r[3].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B2ACu | kUnwind; return; } goto L_0030B2AC; } }
L_0030B2D4:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0030B2D8:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B2A0u | kUnwind; return; } goto L_0030B2A0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0030B2F0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = ld16((c.r[4].w[0] + 182u));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 180u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 172u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 176u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B340u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_008D(c, 213u, depth + 1u); else { c.pc = 0x00336740u; return; } if (c.pc != 0x0030B340u) [[unlikely]] return; }
L_0030B340:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B350u); set32(c.r[6], 0u + 628u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0030B350u) [[unlikely]] return; }
L_0030B350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 500u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B364u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030B364u) [[unlikely]] return; }
L_0030B364:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 501u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B378u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030B378u) [[unlikely]] return; }
L_0030B378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 502u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B38Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030B38Cu) [[unlikely]] return; }
L_0030B38C:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 118u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[2], c.r[9].w[0] << 1);
    c.budget -= 5;
L_0030B3A0:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 7;
L_0030B3BC:
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 32u), c.r[4].w[0]);
    st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[6].w[0] + 29u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[6].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[6].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[6].w[0] + 42u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B3BCu | kUnwind; return; } goto L_0030B3BC; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B3A0u | kUnwind; return; } goto L_0030B3A0; } }
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 118u);
    set32(c.r[4], 0u + 255u);
    set32(c.r[2], c.r[6].w[0] << 5);
    c.budget -= 5;
L_0030B40C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] + 492u), c.r[4].w[0]);
    c.budget -= 3;
L_0030B418:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 500u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B418u | kUnwind; return; } goto L_0030B418; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B40Cu | kUnwind; return; } goto L_0030B40C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B450u); st32((c.r[20].w[0] + 684u), 0u);  if (depth < kMaxDepth) unit_0082(c, 291u, depth + 1u); else { c.pc = 0x0030AF40u; return; } if (c.pc != 0x0030B450u) [[unlikely]] return; }
L_0030B450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B460u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030B460u) [[unlikely]] return; }
L_0030B460:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030B490; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B480u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030B480u) [[unlikely]] return; }
L_0030B480:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B48Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 295u, depth + 1u); else { c.pc = 0x0030AFB0u; return; } if (c.pc != 0x0030B48Cu) [[unlikely]] return; }
L_0030B48C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0030B490:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B49Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_008D(c, 217u, depth + 1u); else { c.pc = 0x003367C0u; return; } if (c.pc != 0x0030B49Cu) [[unlikely]] return; }
L_0030B49C:
    set32(c.r[4], c.r[20].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4ACu); set32(c.r[6], 0u + 300u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0030B4ACu) [[unlikely]] return; }
L_0030B4AC:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B4BCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_008D(c, 311u, depth + 1u); else { c.pc = 0x00337860u; return; } if (c.pc != 0x0030B4BCu) [[unlikely]] return; }
L_0030B4BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030B4C0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[29].w[0] + 476u);
    set32(c.r[17], c.r[2].w[0] + 464u);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[3].w[0] + 4u);
    set32(c.r[7], c.r[2].w[0] + 128u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B518u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 18u, depth + 1u); else { c.pc = 0x00338280u; return; } if (c.pc != 0x0030B518u) [[unlikely]] return; }
L_0030B518:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 130u));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B54Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_006E(c, 95u, depth + 1u); else { c.pc = 0x002B86C0u; return; } if (c.pc != 0x0030B54Cu) [[unlikely]] return; }
L_0030B54C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B4C0u | kUnwind; return; } goto L_0030B4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B574u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 291u, depth + 1u); else { c.pc = 0x0030AF40u; return; } if (c.pc != 0x0030B574u) [[unlikely]] return; }
L_0030B574:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 118u);
    set32(c.r[4], 0u + 255u);
    set32(c.r[2], c.r[6].w[0] << 5);
    c.budget -= 4;
L_0030B584:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] + 492u), c.r[4].w[0]);
    c.budget -= 3;
L_0030B590:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 500u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B590u | kUnwind; return; } goto L_0030B590; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B584u | kUnwind; return; } goto L_0030B584; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 2;
L_0030B5C4:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], 0u + 50u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = ld16((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + 4u);  if (t) { goto L_0030B60C; } }
L_0030B5F0:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030B608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0030B618; } }
L_0030B608:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0030B60C:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B5F0u | kUnwind; return; } goto L_0030B5F0; } }
L_0030B618:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0030B654; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 5);
    c.budget -= 2;
L_0030B628:
    set32(c.r[2], 0u + 50u);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030B644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B644u);  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030AFF0u; return; } if (c.pc != 0x0030B644u) [[unlikely]] return; }
L_0030B644:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B628u | kUnwind; return; } goto L_0030B628; } }
L_0030B654:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 500u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B668u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030B668u) [[unlikely]] return; }
L_0030B668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 501u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B67Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030B67Cu) [[unlikely]] return; }
L_0030B67C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 502u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B690u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030B690u) [[unlikely]] return; }
L_0030B690:
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030BAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6A4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030B6A4u) [[unlikely]] return; }
L_0030B6A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030B6D0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0030B6D0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0030B6D4; } }
L_0030B6D0:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030B6D4:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0030B758; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B6F0u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030B6F0u) [[unlikely]] return; }
L_0030B6F0:
    set32(c.r[21], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030B700u) [[unlikely]] return; }
L_0030B700:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_0030B710; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030B710:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030B728; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0030B754; } }
L_0030B728:
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B734u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030B734u) [[unlikely]] return; }
L_0030B734:
    set32(c.r[21], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B744u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0030B744u) [[unlikely]] return; }
L_0030B744:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_0030B754; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030B754:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_0030B758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030BA6C; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0030BAA8; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 14400u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00308000u < 16384u) { entry = entries_0082[(t - 0x00308000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0030B784:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B794u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B794u) [[unlikely]] return; }
L_0030B794:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7ACu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B7ACu) [[unlikely]] return; }
L_0030B7AC:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 700u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7C4u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B7C4u) [[unlikely]] return; }
L_0030B7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0030BAAC; } }
L_0030B7CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B7DCu) [[unlikely]] return; }
L_0030B7DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 801u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B7F4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B7F4u) [[unlikely]] return; }
L_0030B7F4:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 701u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B80Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B80Cu) [[unlikely]] return; }
L_0030B80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030B814:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B824u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B824u) [[unlikely]] return; }
L_0030B824:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 807u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B83Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B83Cu) [[unlikely]] return; }
L_0030B83C:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 707u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B854u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B854u) [[unlikely]] return; }
L_0030B854:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 808u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B86Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B86Cu) [[unlikely]] return; }
L_0030B86C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 708u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B884u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B884u) [[unlikely]] return; }
L_0030B884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030B88C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B89Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B89Cu) [[unlikely]] return; }
L_0030B89C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 809u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8B4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B8B4u) [[unlikely]] return; }
L_0030B8B4:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 709u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8CCu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B8CCu) [[unlikely]] return; }
L_0030B8CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 810u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8E4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B8E4u) [[unlikely]] return; }
L_0030B8E4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 710u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B8FCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B8FCu) [[unlikely]] return; }
L_0030B8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030B904:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B914u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B914u) [[unlikely]] return; }
L_0030B914:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 802u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B92Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B92Cu) [[unlikely]] return; }
L_0030B92C:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 702u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B944u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B944u) [[unlikely]] return; }
L_0030B944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030B94C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B95Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B95Cu) [[unlikely]] return; }
L_0030B95C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 803u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B974u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B974u) [[unlikely]] return; }
L_0030B974:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 703u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B98Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B98Cu) [[unlikely]] return; }
L_0030B98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030B994:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B9A4u) [[unlikely]] return; }
L_0030B9A4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 805u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9BCu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B9BCu) [[unlikely]] return; }
L_0030B9BC:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 705u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9D4u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030B9D4u) [[unlikely]] return; }
L_0030B9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030B9DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030B9ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030B9ECu) [[unlikely]] return; }
L_0030B9EC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 804u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA04u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030BA04u) [[unlikely]] return; }
L_0030BA04:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA1Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030BA1Cu) [[unlikely]] return; }
L_0030BA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030BA24:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030BA34u) [[unlikely]] return; }
L_0030BA34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 806u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA4Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030BA4Cu) [[unlikely]] return; }
L_0030BA4C:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 706u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA64u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030BA64u) [[unlikely]] return; }
L_0030BA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0030BAA8; } }
L_0030BA6C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0083(c, 35u, depth + 1u); else { c.pc = 0x0030C440u; return; } if (c.pc != 0x0030BA78u) [[unlikely]] return; }
L_0030BA78:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 500u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BA90u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030BA90u) [[unlikely]] return; }
L_0030BA90:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 510u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 394u, depth + 1u); else { c.pc = 0x0030BB30u; return; } if (c.pc != 0x0030BAA8u) [[unlikely]] return; }
L_0030BAA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030BAAC:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030B5C4u | kUnwind; return; } goto L_0030B5C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 500u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BACCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030BACCu) [[unlikely]] return; }
L_0030BACC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 501u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030BAE0u) [[unlikely]] return; }
L_0030BAE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 502u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BAF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x0030BAF4u) [[unlikely]] return; }
L_0030BAF4:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB04u); st32((c.r[20].w[0] + 684u), 0u);  if (depth < kMaxDepth) unit_008D(c, 214u, depth + 1u); else { c.pc = 0x00336760u; return; } if (c.pc != 0x0030BB04u) [[unlikely]] return; }
L_0030BB04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_0030BB30:
    set32(c.r[29], c.r[29].w[0] - 912u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 332u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[4].w[0] + 180u));
    c.r[9].d[0] = ld16((c.r[4].w[0] + 182u));
    set32(c.r[6], ld32((c.r[21].w[0] + 172u)));
    set32(c.r[8], ld32((c.r[21].w[0] + 176u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB8Cu); set32(c.r[4], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_008D(c, 213u, depth + 1u); else { c.pc = 0x00336740u; return; } if (c.pc != 0x0030BB8Cu) [[unlikely]] return; }
L_0030BB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BB94u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030BB94u) [[unlikely]] return; }
L_0030BB94:
    c.r[1].d[0] = 0ull | 40072ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBA4u); set32(c.r[23], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0082(c, 291u, depth + 1u); else { c.pc = 0x0030AF40u; return; } if (c.pc != 0x0030BBA4u) [[unlikely]] return; }
L_0030BBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[23].w[0]));  if (t) { goto L_0030BC10; } }
L_0030BBAC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBCCu); set32(c.r[19], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030BBCCu) [[unlikely]] return; }
L_0030BBCC:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030BC00; } }
L_0030BBD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0030BBEC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_0030BBFC; } }
L_0030BBEC:
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BBF8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030BBF8u) [[unlikely]] return; }
L_0030BBF8:
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_0030BBFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0030BC00:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BBD8u | kUnwind; return; } goto L_0030BBD8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0030BC10:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BBACu | kUnwind; return; } goto L_0030BBAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC2Cu); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030BC2Cu) [[unlikely]] return; }
L_0030BC2C:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0030BC54; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC48u); set32(c.r[5], 0u + 355u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x0030BC48u) [[unlikely]] return; }
L_0030BC48:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC54u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 295u, depth + 1u); else { c.pc = 0x0030AFB0u; return; } if (c.pc != 0x0030BC54u) [[unlikely]] return; }
L_0030BC54:
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC80u); set32(c.r[18], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030BC80u) [[unlikely]] return; }
L_0030BC80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 880u);  if (t) { goto L_0030BCA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BC98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 214u, depth + 1u); else { c.pc = 0x00336760u; return; } if (c.pc != 0x0030BC98u) [[unlikely]] return; }
L_0030BC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0083(c, 34u, depth); } }
L_0030BCA0:
    set32(c.r[2], c.r[20].w[0] << 5);
    set32(c.r[16], 0u - 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 118u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCC8u); st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030BCC8u) [[unlikely]] return; }
L_0030BCC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 328u));
    c.r[6].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BCE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 319u, depth + 1u); else { c.pc = 0x00337A20u; return; } if (c.pc != 0x0030BCE4u) [[unlikely]] return; }
L_0030BCE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0030BDE0; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD08u); set32(c.r[7], c.r[29].w[0] + 908u);  if (depth < kMaxDepth) unit_008E(c, 241u, depth + 1u); else { c.pc = 0x0033A120u; return; } if (c.pc != 0x0030BD08u) [[unlikely]] return; }
L_0030BD08:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 118u);  if (t) { goto L_0030BD1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 908u)));  if (t) { goto L_0030BD2C; } }
L_0030BD1C:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 908u)));
    c.budget -= 4;
L_0030BD2C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 5);  if (t) { goto L_0030BD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030BD48; } }
L_0030BD40:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 2;
L_0030BD48:
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 880u);
    st32((c.r[29].w[0] + 352u), c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[20].w[0]);
    set32(c.r[8], ld32((c.r[21].w[0] + 168u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BD78u); set32(c.r[9], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_008E(c, 38u, depth + 1u); else { c.pc = 0x003385C0u; return; } if (c.pc != 0x0030BD78u) [[unlikely]] return; }
L_0030BD78:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], 0u + 118u);  if (t) { goto L_0030BDDC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0030BDA4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030BDA4; } }
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDA4u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_008E(c, 63u, depth + 1u); else { c.pc = 0x00338A60u; return; } if (c.pc != 0x0030BDA4u) [[unlikely]] return; }
L_0030BDA4:
    set32(c.r[17], ld32((c.r[29].w[0] + 400u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 108u, depth + 1u); else { c.pc = 0x0012D050u; return; } if (c.pc != 0x0030BDB4u) [[unlikely]] return; }
L_0030BDB4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030BDE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0030BDC8u) [[unlikely]] return; }
L_0030BDC8:
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BDD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008D(c, 214u, depth + 1u); else { c.pc = 0x00336760u; return; } if (c.pc != 0x0030BDD4u) [[unlikely]] return; }
L_0030BDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 33u, depth); } }
L_0030BDDC:
    set32(c.r[17], 0u + 50u);
    c.budget -= 1;
L_0030BDE0:
    c.r[2].d[0] = c.r[22].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0030BF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld16((c.r[23].w[0]));  if (t) { goto L_0030BF14; } }
L_0030BDF4:
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE1Cu); set32(c.r[19], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x0030BE1Cu) [[unlikely]] return; }
L_0030BE1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_0030BEF0; } }
L_0030BE28:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0030BEE0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0030BE50; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_0030BEE0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0030BE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE58u); st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030BE58u) [[unlikely]] return; }
L_0030BE58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24824u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0030BE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BE74u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030BE74u) [[unlikely]] return; }
L_0030BE74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 24822u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0030BEC0; } }
L_0030BE88:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 8u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0030BEA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0030BEC0; } }
L_0030BEA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_0030BEC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0030BEC0; } }
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0030BEC0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 256u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030BF00; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_0030BF00; } }
L_0030BEE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], c.r[19].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 4;
L_0030BEF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BE28u | kUnwind; return; } goto L_0030BE28; } }
L_0030BF00:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[3], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030BF20; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0030BF14:
    c.r[2].d[0] = c.r[22].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BDF4u | kUnwind; return; } goto L_0030BDF4; } }
L_0030BF20:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[3], 0u + 118u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0030BFAC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF44u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x0030BF44u) [[unlikely]] return; }
L_0030BF44:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF50u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 299u, depth + 1u); else { c.pc = 0x0030B080u; return; } if (c.pc != 0x0030BF50u) [[unlikely]] return; }
L_0030BF50:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BF60u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 296u, depth + 1u); else { c.pc = 0x0030AFF0u; return; } if (c.pc != 0x0030BF60u) [[unlikely]] return; }
L_0030BF60:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[3], 0u + 999u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0083(c, 30u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], 0u + 255u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 30u, depth); } }
L_0030BF88:
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030BF88u | kUnwind; return; } goto L_0030BF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 384u)));  if (t) { [[clang::musttail]] return unit_0083(c, 31u, depth); } }
L_0030BFAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    set32(c.r[20], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030BFC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 282u, depth + 1u); else { c.pc = 0x0033A870u; return; } if (c.pc != 0x0030BFC8u) [[unlikely]] return; }
L_0030BFC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[3], 0u + 999u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], 0u + 255u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 2u, depth); } }
L_0030BFF0:
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    [[clang::musttail]] return unit_0083(c, 1u, depth);
}

}
