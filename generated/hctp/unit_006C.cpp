#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006C[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0,
    17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0,
    26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158,
    0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B0000;
    case 2u: goto L_002B0014;
    case 3u: goto L_002B0020;
    case 4u: goto L_002B0040;
    case 5u: goto L_002B0078;
    case 6u: goto L_002B00B8;
    case 7u: goto L_002B00D0;
    case 8u: goto L_002B0160;
    case 9u: goto L_002B0170;
    case 10u: goto L_002B0180;
    case 11u: goto L_002B01A8;
    case 12u: goto L_002B01BC;
    case 13u: goto L_002B01C4;
    case 14u: goto L_002B01CC;
    case 15u: goto L_002B01E8;
    case 16u: goto L_002B01F8;
    case 17u: goto L_002B0200;
    case 18u: goto L_002B0208;
    case 19u: goto L_002B0218;
    case 20u: goto L_002B0220;
    case 21u: goto L_002B0228;
    case 22u: goto L_002B0238;
    case 23u: goto L_002B024C;
    case 24u: goto L_002B0264;
    case 25u: goto L_002B0278;
    case 26u: goto L_002B0280;
    case 27u: goto L_002B0298;
    case 28u: goto L_002B02B8;
    case 29u: goto L_002B02D0;
    case 30u: goto L_002B02FC;
    case 31u: goto L_002B0330;
    case 32u: goto L_002B037C;
    case 33u: goto L_002B0390;
    case 34u: goto L_002B03A0;
    case 35u: goto L_002B03B0;
    case 36u: goto L_002B03C0;
    case 37u: goto L_002B03D4;
    case 38u: goto L_002B0418;
    case 39u: goto L_002B042C;
    case 40u: goto L_002B043C;
    case 41u: goto L_002B044C;
    case 42u: goto L_002B045C;
    case 43u: goto L_002B0470;
    case 44u: goto L_002B04AC;
    case 45u: goto L_002B04C4;
    case 46u: goto L_002B04E0;
    case 47u: goto L_002B0538;
    case 48u: goto L_002B05B4;
    case 49u: goto L_002B0600;
    case 50u: goto L_002B063C;
    case 51u: goto L_002B06A8;
    case 52u: goto L_002B06B0;
    case 53u: goto L_002B06EC;
    case 54u: goto L_002B0714;
    case 55u: goto L_002B0724;
    case 56u: goto L_002B0774;
    case 57u: goto L_002B07A4;
    case 58u: goto L_002B0830;
    case 59u: goto L_002B08C0;
    case 60u: goto L_002B08F8;
    case 61u: goto L_002B093C;
    case 62u: goto L_002B0978;
    case 63u: goto L_002B09B0;
    case 64u: goto L_002B09C0;
    case 65u: goto L_002B0A1C;
    case 66u: goto L_002B0A80;
    case 67u: goto L_002B0A9C;
    case 68u: goto L_002B0AC0;
    case 69u: goto L_002B0AD4;
    case 70u: goto L_002B0AEC;
    case 71u: goto L_002B0B00;
    case 72u: goto L_002B0B14;
    case 73u: goto L_002B0B2C;
    case 74u: goto L_002B0B40;
    case 75u: goto L_002B0B50;
    case 76u: goto L_002B0B68;
    case 77u: goto L_002B0BA0;
    case 78u: goto L_002B0BB0;
    case 79u: goto L_002B0BD0;
    case 80u: goto L_002B0BD8;
    case 81u: goto L_002B0C10;
    case 82u: goto L_002B0C40;
    case 83u: goto L_002B0C50;
    case 84u: goto L_002B0C90;
    case 85u: goto L_002B0CB0;
    case 86u: goto L_002B0CD0;
    case 87u: goto L_002B0D00;
    case 88u: goto L_002B0D18;
    case 89u: goto L_002B0D30;
    case 90u: goto L_002B0D40;
    case 91u: goto L_002B0D50;
    case 92u: goto L_002B0D60;
    case 93u: goto L_002B0E80;
    case 94u: goto L_002B0EB8;
    case 95u: goto L_002B0EF8;
    case 96u: goto L_002B0F0C;
    case 97u: goto L_002B0F1C;
    case 98u: goto L_002B0F2C;
    case 99u: goto L_002B0F48;
    case 100u: goto L_002B0F5C;
    case 101u: goto L_002B0F6C;
    case 102u: goto L_002B0F88;
    case 103u: goto L_002B0F9C;
    case 104u: goto L_002B0FAC;
    case 105u: goto L_002B0FC8;
    case 106u: goto L_002B0FDC;
    case 107u: goto L_002B0FF8;
    case 108u: goto L_002B1014;
    case 109u: goto L_002B1028;
    case 110u: goto L_002B1040;
    case 111u: goto L_002B1078;
    case 112u: goto L_002B1084;
    case 113u: goto L_002B10A8;
    case 114u: goto L_002B10B4;
    case 115u: goto L_002B10C0;
    case 116u: goto L_002B1114;
    case 117u: goto L_002B1124;
    case 118u: goto L_002B1134;
    case 119u: goto L_002B1160;
    case 120u: goto L_002B11A8;
    case 121u: goto L_002B11B8;
    case 122u: goto L_002B11C4;
    case 123u: goto L_002B11D0;
    case 124u: goto L_002B11E8;
    case 125u: goto L_002B1200;
    case 126u: goto L_002B1284;
    case 127u: goto L_002B12E0;
    case 128u: goto L_002B12E8;
    case 129u: goto L_002B1308;
    case 130u: goto L_002B131C;
    case 131u: goto L_002B1350;
    case 132u: goto L_002B1454;
    case 133u: goto L_002B1460;
    case 134u: goto L_002B1470;
    case 135u: goto L_002B14B0;
    case 136u: goto L_002B15DC;
    case 137u: goto L_002B15F4;
    case 138u: goto L_002B162C;
    case 139u: goto L_002B1674;
    case 140u: goto L_002B1698;
    case 141u: goto L_002B16D0;
    case 142u: goto L_002B16EC;
    case 143u: goto L_002B1700;
    case 144u: goto L_002B1714;
    case 145u: goto L_002B1838;
    case 146u: goto L_002B1848;
    case 147u: goto L_002B1850;
    case 148u: goto L_002B185C;
    case 149u: goto L_002B186C;
    case 150u: goto L_002B18AC;
    case 151u: goto L_002B1904;
    case 152u: goto L_002B1918;
    case 153u: goto L_002B1A68;
    case 154u: goto L_002B1AB0;
    case 155u: goto L_002B1B58;
    case 156u: goto L_002B1B68;
    case 157u: goto L_002B1BEC;
    case 158u: goto L_002B1BFC;
    case 159u: goto L_002B1C0C;
    case 160u: goto L_002B1C20;
    case 161u: goto L_002B1CCC;
    case 162u: goto L_002B1CDC;
    case 163u: goto L_002B1D5C;
    case 164u: goto L_002B1D6C;
    case 165u: goto L_002B1D7C;
    case 166u: goto L_002B1D90;
    case 167u: goto L_002B1E08;
    case 168u: goto L_002B1E10;
    case 169u: goto L_002B1E28;
    case 170u: goto L_002B1E5C;
    case 171u: goto L_002B1E94;
    case 172u: goto L_002B1EC8;
    case 173u: goto L_002B1EE0;
    case 174u: goto L_002B1F18;
    case 175u: goto L_002B1F30;
    case 176u: goto L_002B1F54;
    case 177u: goto L_002B1F7C;
    case 178u: goto L_002B1FC0;
    case 179u: goto L_002B1FD4;
    case 180u: goto L_002B2080;
    case 181u: goto L_002B20AC;
    case 182u: goto L_002B20C0;
    case 183u: goto L_002B20EC;
    case 184u: goto L_002B2100;
    case 185u: goto L_002B2180;
    case 186u: goto L_002B2188;
    case 187u: goto L_002B21A0;
    case 188u: goto L_002B2330;
    case 189u: goto L_002B2350;
    case 190u: goto L_002B2370;
    case 191u: goto L_002B2380;
    case 192u: goto L_002B23B0;
    case 193u: goto L_002B23F0;
    case 194u: goto L_002B2408;
    case 195u: goto L_002B2420;
    case 196u: goto L_002B2440;
    case 197u: goto L_002B2458;
    case 198u: goto L_002B2480;
    case 199u: goto L_002B2570;
    case 200u: goto L_002B25A8;
    case 201u: goto L_002B2620;
    case 202u: goto L_002B2634;
    case 203u: goto L_002B2644;
    case 204u: goto L_002B2654;
    case 205u: goto L_002B2670;
    case 206u: goto L_002B2684;
    case 207u: goto L_002B2694;
    case 208u: goto L_002B26B0;
    case 209u: goto L_002B26C4;
    case 210u: goto L_002B26D4;
    case 211u: goto L_002B26F0;
    case 212u: goto L_002B2704;
    case 213u: goto L_002B2720;
    case 214u: goto L_002B273C;
    case 215u: goto L_002B2750;
    case 216u: goto L_002B2770;
    case 217u: goto L_002B27B0;
    case 218u: goto L_002B27C8;
    case 219u: goto L_002B27E0;
    case 220u: goto L_002B27F0;
    case 221u: goto L_002B2800;
    case 222u: goto L_002B2810;
    case 223u: goto L_002B2820;
    case 224u: goto L_002B2830;
    case 225u: goto L_002B2840;
    case 226u: goto L_002B28AC;
    case 227u: goto L_002B28F4;
    case 228u: goto L_002B2918;
    case 229u: goto L_002B2930;
    case 230u: goto L_002B294C;
    case 231u: goto L_002B2998;
    case 232u: goto L_002B29B0;
    case 233u: goto L_002B29FC;
    case 234u: goto L_002B2A0C;
    case 235u: goto L_002B2A24;
    case 236u: goto L_002B2A40;
    case 237u: goto L_002B2AB0;
    case 238u: goto L_002B2AE4;
    case 239u: goto L_002B2AF8;
    case 240u: goto L_002B2B18;
    case 241u: goto L_002B2B38;
    case 242u: goto L_002B2B58;
    case 243u: goto L_002B2B84;
    case 244u: goto L_002B2BA8;
    case 245u: goto L_002B2BD0;
    case 246u: goto L_002B2BE4;
    case 247u: goto L_002B2C14;
    case 248u: goto L_002B2C24;
    case 249u: goto L_002B2C34;
    case 250u: goto L_002B2C50;
    case 251u: goto L_002B2C80;
    case 252u: goto L_002B2C98;
    case 253u: goto L_002B2CB0;
    case 254u: goto L_002B2CC8;
    case 255u: goto L_002B2CE8;
    case 256u: goto L_002B2CFC;
    case 257u: goto L_002B2D0C;
    case 258u: goto L_002B2D40;
    case 259u: goto L_002B2DBC;
    case 260u: goto L_002B2DE8;
    case 261u: goto L_002B2E10;
    case 262u: goto L_002B2E34;
    case 263u: goto L_002B2E60;
    case 264u: goto L_002B2EA0;
    case 265u: goto L_002B2EE0;
    case 266u: goto L_002B2EFC;
    case 267u: goto L_002B2F30;
    case 268u: goto L_002B2F70;
    case 269u: goto L_002B2F8C;
    case 270u: goto L_002B2FD0;
    case 271u: goto L_002B3000;
    case 272u: goto L_002B3018;
    case 273u: goto L_002B3030;
    case 274u: goto L_002B3070;
    case 275u: goto L_002B30C8;
    case 276u: goto L_002B30F0;
    case 277u: goto L_002B3108;
    case 278u: goto L_002B3120;
    case 279u: goto L_002B313C;
    case 280u: goto L_002B3158;
    case 281u: goto L_002B3180;
    case 282u: goto L_002B31AC;
    case 283u: goto L_002B31BC;
    case 284u: goto L_002B31C4;
    case 285u: goto L_002B31DC;
    case 286u: goto L_002B320C;
    case 287u: goto L_002B3260;
    case 288u: goto L_002B3290;
    case 289u: goto L_002B32A8;
    case 290u: goto L_002B32C0;
    case 291u: goto L_002B32D0;
    case 292u: goto L_002B32E0;
    case 293u: goto L_002B32F0;
    case 294u: goto L_002B3350;
    case 295u: goto L_002B336C;
    case 296u: goto L_002B33AC;
    case 297u: goto L_002B33C0;
    case 298u: goto L_002B340C;
    case 299u: goto L_002B341C;
    case 300u: goto L_002B3434;
    case 301u: goto L_002B3450;
    case 302u: goto L_002B3488;
    case 303u: goto L_002B34A0;
    case 304u: goto L_002B34C0;
    case 305u: goto L_002B34C8;
    case 306u: goto L_002B34D0;
    case 307u: goto L_002B34E0;
    case 308u: goto L_002B34F8;
    case 309u: goto L_002B3510;
    case 310u: goto L_002B3540;
    case 311u: goto L_002B3568;
    case 312u: goto L_002B3584;
    case 313u: goto L_002B3598;
    case 314u: goto L_002B35E0;
    case 315u: goto L_002B360C;
    case 316u: goto L_002B3638;
    case 317u: goto L_002B3674;
    case 318u: goto L_002B368C;
    case 319u: goto L_002B36A8;
    case 320u: goto L_002B36C8;
    case 321u: goto L_002B36E4;
    case 322u: goto L_002B36FC;
    case 323u: goto L_002B3710;
    case 324u: goto L_002B3748;
    case 325u: goto L_002B3764;
    case 326u: goto L_002B3784;
    case 327u: goto L_002B37A0;
    case 328u: goto L_002B37B8;
    case 329u: goto L_002B37CC;
    case 330u: goto L_002B3800;
    case 331u: goto L_002B3848;
    case 332u: goto L_002B38F0;
    case 333u: goto L_002B3914;
    case 334u: goto L_002B3944;
    case 335u: goto L_002B3954;
    case 336u: goto L_002B3964;
    case 337u: goto L_002B3980;
    case 338u: goto L_002B39B8;
    case 339u: goto L_002B39C8;
    case 340u: goto L_002B39EC;
    case 341u: goto L_002B3A90;
    case 342u: goto L_002B3AC8;
    case 343u: goto L_002B3AD0;
    case 344u: goto L_002B3B20;
    case 345u: goto L_002B3B38;
    case 346u: goto L_002B3B50;
    case 347u: goto L_002B3B7C;
    case 348u: goto L_002B3BDC;
    case 349u: goto L_002B3C08;
    case 350u: goto L_002B3C24;
    case 351u: goto L_002B3C40;
    case 352u: goto L_002B3D20;
    case 353u: goto L_002B3D30;
    case 354u: goto L_002B3D40;
    case 355u: goto L_002B3D50;
    case 356u: goto L_002B3D64;
    case 357u: goto L_002B3DE0;
    case 358u: goto L_002B3E2C;
    case 359u: goto L_002B3E54;
    case 360u: goto L_002B3E7C;
    case 361u: goto L_002B3EA0;
    case 362u: goto L_002B3EB8;
    case 363u: goto L_002B3ED0;
    case 364u: goto L_002B3F04;
    case 365u: goto L_002B3F44;
    case 366u: goto L_002B3F84;
    case 367u: goto L_002B3FC0;
    default: bad_entry(c, 0x002B0000u); return;
    }
L_002B0000:
    st32((c.r[3].w[0] + 132u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[4].w[0]);  if (t) { goto L_002B0020; } }
L_002B0014:
    st32((c.r[17].w[0] + 912u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 904u)));
    st32((c.r[3].w[0] + 132u), c.r[5].w[0]);
    c.budget -= 3;
L_002B0020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B0040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 440u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 352u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0078u); st32((c.r[4].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002B0078u) [[unlikely]] return; }
L_002B0078:
    set32(c.r[3], ld32((c.r[16].w[0] + 904u)));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43820000u);
    c.f[1] = ld32((c.r[3].w[0] + 144u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B00B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B00C0; } }
L_002B00B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B00B8u);  if (depth < kMaxDepth) unit_006C(c, 77u, depth + 1u); else { c.pc = 0x002B0BA0u; return; } if (c.pc != 0x002B00B8u) [[unlikely]] return; }
L_002B00B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_002B00C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B00D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 904u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B02B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 17504u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 980u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_002B0188; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 908u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_002B0140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 28656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B0154; } }
L_002B0140:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B0154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0160u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006C(c, 4u, depth + 1u); else { c.pc = 0x002B0040u; return; } if (c.pc != 0x002B0160u) [[unlikely]] return; }
L_002B0160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 28u);  if (t) { goto L_002B02B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0170u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002B0170u) [[unlikely]] return; }
L_002B0170:
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[5], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0180u); set32(c.r[4], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B0180u) [[unlikely]] return; }
L_002B0180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B02BC; } }
L_002B0188:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B02B8; } }
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28256u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_006C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B01A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 28272u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01BCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_006C(c, 46u, depth + 1u); else { c.pc = 0x002B04E0u; return; } if (c.pc != 0x002B01BCu) [[unlikely]] return; }
L_002B01BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B02B8; } }
L_002B01C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 4u, depth + 1u); else { c.pc = 0x002B0040u; return; } if (c.pc != 0x002B01CCu) [[unlikely]] return; }
L_002B01CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B02B8; } }
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], c.r[16].w[0] + 28u);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01E8u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002B01E8u) [[unlikely]] return; }
L_002B01E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[5], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B01F8u); set32(c.r[4], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B01F8u) [[unlikely]] return; }
L_002B01F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B02B8; } }
L_002B0200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0208u);  if (depth < kMaxDepth) unit_006C(c, 75u, depth + 1u); else { c.pc = 0x002B0B50u; return; } if (c.pc != 0x002B0208u) [[unlikely]] return; }
L_002B0208:
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[5], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0218u); set32(c.r[4], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B0218u) [[unlikely]] return; }
L_002B0218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B02B8; } }
L_002B0220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0228u);  if (depth < kMaxDepth) unit_006C(c, 79u, depth + 1u); else { c.pc = 0x002B0BD0u; return; } if (c.pc != 0x002B0228u) [[unlikely]] return; }
L_002B0228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B02B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0238u);  if (depth < kMaxDepth) unit_006C(c, 81u, depth + 1u); else { c.pc = 0x002B0C10u; return; } if (c.pc != 0x002B0238u) [[unlikely]] return; }
L_002B0238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B02B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B024Cu); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B024Cu) [[unlikely]] return; }
L_002B024C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 992u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0264u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0264u) [[unlikely]] return; }
L_002B0264:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_002B02B8; } }
L_002B0278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0280u);  if (depth < kMaxDepth) unit_006C(c, 79u, depth + 1u); else { c.pc = 0x002B0BD0u; return; } if (c.pc != 0x002B0280u) [[unlikely]] return; }
L_002B0280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B02B8; } }
    st32((c.r[16].w[0] + 992u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0298u); set32(c.r[5], c.r[16].w[0] + 50u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B0298u) [[unlikely]] return; }
L_002B0298:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B02B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B02B8u) [[unlikely]] return; }
L_002B02B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B02BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B02D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 904u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B0314; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B02FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B02FCu) [[unlikely]] return; }
L_002B02FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 980u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B0314; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_002B0314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B04A0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B04A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_002B03C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B037Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B037Cu) [[unlikely]] return; }
L_002B037C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B0390; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0390u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002B0390u) [[unlikely]] return; }
L_002B0390:
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03A0u); set32(c.r[5], 0u + 10016u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002B03A0u) [[unlikely]] return; }
L_002B03A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03B0u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002B03B0u) [[unlikely]] return; }
L_002B03B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002B03C0u) [[unlikely]] return; }
L_002B03C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B03D4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B03D4u) [[unlikely]] return; }
L_002B03D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 168u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_002B045C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0418u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B0418u) [[unlikely]] return; }
L_002B0418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B042C; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B042Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002B042Cu) [[unlikely]] return; }
L_002B042C:
    st32((c.r[17].w[0] + 172u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B043Cu); set32(c.r[5], 0u + 10016u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002B043Cu) [[unlikely]] return; }
L_002B043C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 14u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B044Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002B044Cu) [[unlikely]] return; }
L_002B044C:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B045Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002B045Cu) [[unlikely]] return; }
L_002B045C:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0470u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0470u) [[unlikely]] return; }
L_002B0470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 172u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 12;
L_002B04A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B04A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B04ACu);  if (depth < kMaxDepth) unit_006C(c, 74u, depth + 1u); else { c.pc = 0x002B0B40u; return; } if (c.pc != 0x002B04ACu) [[unlikely]] return; }
L_002B04AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B04C4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B04C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B04C4u) [[unlikely]] return; }
L_002B04C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B04E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 908u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B056C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 984u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    st32((c.r[2].w[0] + 176u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0538u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0538u) [[unlikely]] return; }
L_002B0538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_002B05E4; } }
L_002B056C:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B05E4; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 984u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    st32((c.r[2].w[0] + 176u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B05B4u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B05B4u) [[unlikely]] return; }
L_002B05B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 172u)));
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    st32((c.r[7].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 12;
L_002B05E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0600:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 904u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 172u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B0694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B063Cu);  if (depth < kMaxDepth) unit_006C(c, 64u, depth + 1u); else { c.pc = 0x002B09C0u; return; } if (c.pc != 0x002B063Cu) [[unlikely]] return; }
L_002B063C:
    set32(c.r[2], ld32((c.r[20].w[0] + 904u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    st32((c.r[20].w[0] + 908u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 908u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 904u)));
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 984u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 904u)));
    st32((c.r[2].w[0] + 172u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 904u)));
    st32((c.r[2].w[0] + 180u), 0u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 980u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0684; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 180u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_002B06A0; } }
L_002B0684:
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_002B06A0; } }
L_002B0694:
    set32(c.r[3], ld32((c.r[20].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B080C; } }
L_002B06A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B06A8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 58u, depth + 1u); else { c.pc = 0x002B0830u; return; } if (c.pc != 0x002B06A8u) [[unlikely]] return; }
L_002B06A8:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 2;
L_002B06B0:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 72u);  if (t) { goto L_002B07FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B06F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B06EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B06EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B06ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B06ECu) [[unlikely]] return; }
L_002B06EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_002B07FC; } }
L_002B06F4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 73u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B07FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 74u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 20u);  if (t) { goto L_002B07FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0714u); set32(c.r[4], c.r[20].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x002B0714u) [[unlikely]] return; }
L_002B0714:
    set32(c.r[2], ld32((c.r[20].w[0] + 904u)));
    set32(c.r[5], c.r[20].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0724u); set32(c.r[4], c.r[2].w[0] + 148u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B0724u) [[unlikely]] return; }
L_002B0724:
    set32(c.r[5], ld32((c.r[20].w[0] + 904u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[20] = 0u;
    c.f[1] = ld32((c.r[5].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 440u)));
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 20;
L_002B0774:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B07E0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 74u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B07B8; } }
    set32(c.r[2], c.r[5].w[0] + 20u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B07A4u); st32((c.r[18].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002B07A4u) [[unlikely]] return; }
L_002B07A4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002B07E0; } }
L_002B07B8:
    set32(c.r[4], ld32((c.r[20].w[0] + 904u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.budget -= 10;
L_002B07E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0774u | kUnwind; return; } goto L_002B0774; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_002B07FC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B06B0u | kUnwind; return; } goto L_002B06B0; } }
L_002B080C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B0830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 908u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8ull;  if (t) { goto L_002B0900; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[16].w[0] + 984u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[2].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002B0878; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002B0878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 28272u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 980u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B08AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    st32((c.r[2].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 912u), c.r[5].w[0]);
    c.budget -= 3;
L_002B08AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08C0u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B08C0u) [[unlikely]] return; }
L_002B08C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 168u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 437u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B08F8u); st32((c.r[7].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B08F8u) [[unlikely]] return; }
L_002B08F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B09B4; } }
L_002B0900:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B09B0; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 984u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[2].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002B0930; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B0930; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_002B0930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 28272u);
    c.budget -= 3;
L_002B093C:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 980u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0964; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    st32((c.r[2].w[0] + 132u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 912u), c.r[4].w[0]);
    c.budget -= 3;
L_002B0964:
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0978u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0978u) [[unlikely]] return; }
L_002B0978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 172u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 437u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B09B0u); st32((c.r[7].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B09B0u) [[unlikely]] return; }
L_002B09B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B09B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B09C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 904u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B09F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], c.r[16].w[0] + 184u);
    set32(c.r[2], 0u + 90u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_002B0A60; } }
L_002B09F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 908u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B0A4C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], c.r[16].w[0] + 184u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_002B0A34; } }
L_002B0A1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], c.r[2].w[0] - 15u);
    st32((c.r[16].w[0] + 912u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 904u)));
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 6;
L_002B0A34:
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0A1Cu | kUnwind; return; } goto L_002B0A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 980u));  if (t) { goto L_002B0A64; } }
L_002B0A4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], c.r[16].w[0] + 184u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
L_002B0A60:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 980u));
    c.budget -= 1;
L_002B0A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0A88; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A80u); set32(c.r[5], ld32((c.r[16].w[0] + 912u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0A80u) [[unlikely]] return; }
L_002B0A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 176u)));  if (t) { goto L_002B0AA0; } }
L_002B0A88:
    set32(c.r[4], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0A9Cu); set32(c.r[5], ld32((c.r[16].w[0] + 912u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0A9Cu) [[unlikely]] return; }
L_002B0A9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_002B0AA0:
    st32((c.r[3].w[0] + 36u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 74u, depth + 1u); else { c.pc = 0x002B0B40u; return; } if (c.pc != 0x002B0AD4u) [[unlikely]] return; }
L_002B0AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0AEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0AECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0AECu) [[unlikely]] return; }
L_002B0AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 74u, depth + 1u); else { c.pc = 0x002B0B40u; return; } if (c.pc != 0x002B0B14u) [[unlikely]] return; }
L_002B0B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0B2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0B2Cu) [[unlikely]] return; }
L_002B0B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0B40:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));  c.pc = t; return; }
L_002B0B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0B68u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x002B0B68u) [[unlikely]] return; }
L_002B0B68:
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B0B8C; } }
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 28u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B0B8C; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B0B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0BB0u); set32(c.r[4], c.r[4].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x002B0BB0u) [[unlikely]] return; }
L_002B0BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] + 0u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B0BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002B0BF4; } }
L_002B0BD8:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B0BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0C04; } }
L_002B0BF0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002B0BF4:
    c.r[2].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0BD8u | kUnwind; return; } goto L_002B0BD8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B0C04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0C10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 988u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B0C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B0C74; } }
L_002B0C34:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0C40u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x002B0C40u) [[unlikely]] return; }
L_002B0C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 28u);  if (t) { goto L_002B0C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_002B0C64; } }
L_002B0C50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B0C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002B0C70; } }
L_002B0C60:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002B0C64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B0C50u | kUnwind; return; } goto L_002B0C50; } }
L_002B0C70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B0C74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0CB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012E800u; return; } if (c.pc != 0x002B0CB0u) [[unlikely]] return; }
L_002B0CB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 7824u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B0CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B0D18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x002B0D00u) [[unlikely]] return; }
L_002B0D00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0D18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B0D18u) [[unlikely]] return; }
L_002B0D18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B0D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B0D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0D40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_002B0D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_002B0D60:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_002B0DA0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 15u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B0D98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_002B0D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0E78; } }
L_002B0DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0DDC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 15u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B0DD4; } }
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002B0DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0E78; } }
L_002B0DDC:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_002B0E20; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 15u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002B0E14; } }
    c.r[2].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002B0E18; } }
L_002B0E14:
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_002B0E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B0E78; } }
L_002B0E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0E74; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 15u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B0E6C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
L_002B0E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B0E78; } }
L_002B0E74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B0E78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B0E80:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x002B0EB8u) [[unlikely]] return; }
L_002B0EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0F24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B1028; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B0F14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 435u);  if (t) { goto L_002B1028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0EF8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B0EF8u) [[unlikely]] return; }
L_002B0EF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F0Cu) [[unlikely]] return; }
L_002B0F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B102C; } }
L_002B0F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F1Cu); set32(c.r[4], 0u + 403u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B0F1Cu) [[unlikely]] return; }
L_002B0F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1028; } }
L_002B0F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F2Cu);  if (depth < kMaxDepth) unit_000F(c, 316u, depth + 1u); else { c.pc = 0x0013F0E0u; return; } if (c.pc != 0x002B0F2Cu) [[unlikely]] return; }
L_002B0F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0F64; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 436u);  if (t) { goto L_002B1028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F48u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B0F48u) [[unlikely]] return; }
L_002B0F48:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F5Cu) [[unlikely]] return; }
L_002B0F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1028; } }
L_002B0F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F6Cu);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x002B0F6Cu) [[unlikely]] return; }
L_002B0F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B0FA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_002B1028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F88u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B0F88u) [[unlikely]] return; }
L_002B0F88:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0F9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0F9Cu) [[unlikely]] return; }
L_002B0F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1028; } }
L_002B0FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FACu);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x002B0FACu) [[unlikely]] return; }
L_002B0FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B0FE4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_002B1028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FC8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B0FC8u) [[unlikely]] return; }
L_002B0FC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0FDCu) [[unlikely]] return; }
L_002B0FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1028; } }
L_002B0FE4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B0FF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B0FF8u) [[unlikely]] return; }
L_002B0FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1028; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_002B1028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1014u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B1014u) [[unlikely]] return; }
L_002B1014:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1028u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1028u) [[unlikely]] return; }
L_002B1028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B102C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1040:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1078u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x002B1078u) [[unlikely]] return; }
L_002B1078:
    set32(c.r[4], c.r[21].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1084u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002B1084u) [[unlikely]] return; }
L_002B1084:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7776u);
    set32(c.r[2], c.r[2].w[0] + 7792u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[21].w[0] + 20u);
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x002B10A8u) [[unlikely]] return; }
L_002B10A8:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10B4u); st32((c.r[21].w[0] + 56u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002B10B4u) [[unlikely]] return; }
L_002B10B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B10C0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002B10C0u) [[unlikely]] return; }
L_002B10C0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 8u);
    st128((c.r[21].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[21].w[0] + 80u) & ~15u, c.r[3]);
    st32((c.r[21].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 112u), 0u);
    st32((c.r[21].w[0] + 124u), 0u);
    st8((c.r[21].w[0] + 120u), static_cast<std::uint8_t>(0u));
    ld128((c.r[21].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[21].w[0] + 96u) & ~15u, c.r[2]);
    st32((c.r[21].w[0] + 128u), 0u);
    st32((c.r[21].w[0] + 132u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 136u), 0u);
    st8((c.r[21].w[0] + 140u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[21].w[0] + 144u), 0u);
    st32((c.r[21].w[0] + 172u), 0u);
    st32((c.r[21].w[0] + 176u), c.r[20].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1114u); st32((c.r[21].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B1114u) [[unlikely]] return; }
L_002B1114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B1124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1124u);  if (depth < kMaxDepth) unit_006C(c, 189u, depth + 1u); else { c.pc = 0x002B2350u; return; } if (c.pc != 0x002B1124u) [[unlikely]] return; }
L_002B1124:
    st32((c.r[21].w[0] + 136u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1134u); set32(c.r[4], c.r[21].w[0] + 148u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002B1134u) [[unlikely]] return; }
L_002B1134:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B1160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B11E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7776u);
    set32(c.r[2], c.r[2].w[0] + 7792u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002B11A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11A8u);  if (depth < kMaxDepth) unit_006C(c, 192u, depth + 1u); else { c.pc = 0x002B23B0u; return; } if (c.pc != 0x002B11A8u) [[unlikely]] return; }
L_002B11A8:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11B8u); st32((c.r[17].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x002B11B8u) [[unlikely]] return; }
L_002B11B8:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002B11C4u) [[unlikely]] return; }
L_002B11C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002B11D0u) [[unlikely]] return; }
L_002B11D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B11EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B11E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B11E8u) [[unlikely]] return; }
L_002B11E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B11EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1200:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 17488u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[20], ld32((c.r[4].w[0] + 440u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 444u)));
    set32(c.r[2], c.r[21].w[0] + 148u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1284u); st32((c.r[20].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x002B1284u) [[unlikely]] return; }
L_002B1284:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x429A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[21].w[0] + 144u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] - 28224u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[20].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 28224u));
    c.f[12] = c.r[5].w[0];
    c.f[13] = c.r[3].w[0];
    st32((c.r[20].w[0] + 20u), c.f[0]);
    st32((c.r[20].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B12E0u) [[unlikely]] return; }
L_002B12E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B12E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002B12E8u) [[unlikely]] return; }
L_002B12E8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1308u); st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1308u) [[unlikely]] return; }
L_002B1308:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B131Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B131Cu) [[unlikely]] return; }
L_002B131C:
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[21] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432F0000u);
    c.f[22] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002B1348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[22] = c.r[2].w[0];
    c.budget -= 2;
L_002B1348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1350u);  if (depth < kMaxDepth) unit_006C(c, 178u, depth + 1u); else { c.pc = 0x002B1FC0u; return; } if (c.pc != 0x002B1350u) [[unlikely]] return; }
L_002B1350:
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[20] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A20000u);
    c.r[2].d[0] = c.r[2].d[0] | 74ull;
    c.r[4].d[0] = c.r[2].d[0] << 32;
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_002B1450; } }
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
    set32(c.r[3], 0u + 64u);
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
L_002B1450:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1454:
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 3;
L_002B1460:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[30], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002B1470:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[1] = ld32((c.r[21].w[0] + 180u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[16], c.r[22].w[0] + c.r[30].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::add(c.f[22], c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B14B0u); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B14B0u) [[unlikely]] return; }
L_002B14B0:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_002B14DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 28656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B14F0; } }
L_002B14DC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B14F0:
    set32(c.r[2], c.r[29].w[0] + 204u);
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 140u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B16E4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B16E0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002B16E0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B1554; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B1578; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B1554:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B1634; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 28656u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], 0u + 32u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B1634; } }
L_002B1578:
    set32(c.r[4], ld32((c.r[21].w[0] + 136u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 16u), c.f[20]);
    st32((c.r[2].w[0] + 20u), c.f[20]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 100u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B15DCu); c.f[13] = c.f[22];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B15DCu) [[unlikely]] return; }
L_002B15DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1618; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B15F4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B15F4u) [[unlikely]] return; }
L_002B15F4:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002B160C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B160C:
    set32(c.r[2], ld32((c.r[21].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002B1624; } }
L_002B1618:
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 136u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_002B1624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B162Cu); set32(c.r[4], ld32((c.r[21].w[0] + 136u)));  if (depth < kMaxDepth) unit_006C(c, 195u, depth + 1u); else { c.pc = 0x002B2420u; return; } if (c.pc != 0x002B162Cu) [[unlikely]] return; }
L_002B162C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 16u), c.f[20]);  if (t) { goto L_002B16D4; } }
L_002B1634:
    set32(c.r[3], ld32((c.r[21].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 100u)));
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1674u); c.f[13] = c.f[22];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1674u) [[unlikely]] return; }
L_002B1674:
    set32(c.r[2], c.r[29].w[0] + 204u);
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B16B8; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1698u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1698u) [[unlikely]] return; }
L_002B1698:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B16B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B16B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002B16C0; } }
L_002B16B8:
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_002B16C0:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B16D0u) [[unlikely]] return; }
L_002B16D0:
    st32((c.r[20].w[0] + 16u), c.f[20]);
    c.budget -= 1;
L_002B16D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 20u), c.f[20]);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_002B16E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B16E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B16ECu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002B16ECu) [[unlikely]] return; }
L_002B16EC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1700u); st128((c.r[20].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_006C(c, 154u, depth + 1u); else { c.pc = 0x002B1AB0u; return; } if (c.pc != 0x002B1700u) [[unlikely]] return; }
L_002B1700:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1714u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1714u) [[unlikely]] return; }
L_002B1714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::add(c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1470u | kUnwind; return; } goto L_002B1470; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::add(c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1460u | kUnwind; return; } goto L_002B1460; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[21] = c.r[3].w[0];
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[22] = fp::add(c.f[22], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1454u | kUnwind; return; } goto L_002B1454; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B1968; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432F0000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B1790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_002B1790:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002B17D4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);  if (t) { goto L_002B17B0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002B182C; } }
L_002B17B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { goto L_002B17C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002B182C; } }
L_002B17C8:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002B182C; } }
L_002B17D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002B1818; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC35C0000u);  if (t) { goto L_002B17F4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002B182C; } }
L_002B17F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC34D0000u);  if (t) { goto L_002B180C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002B182C; } }
L_002B180C:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002B182C; } }
L_002B1818:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B1830; } }
    c.f[0] = ld32((c.r[21].w[0] + 180u));
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 2;
L_002B182C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1838u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002B1838u) [[unlikely]] return; }
L_002B1838:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1848u); st128((c.r[20].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1848u) [[unlikely]] return; }
L_002B1848:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B1850:
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[23], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 3;
L_002B185C:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[30], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002B186C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[1] = ld32((c.r[21].w[0] + 180u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[22], c.r[16].w[0] + c.r[30].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::add(c.f[20], c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B18ACu); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B18ACu) [[unlikely]] return; }
L_002B18AC:
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_002B18D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[22].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 28656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002B18EC; } }
L_002B18D8:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B18EC:
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1904u); st32((c.r[20].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_006C(c, 160u, depth + 1u); else { c.pc = 0x002B1C20u; return; } if (c.pc != 0x002B1904u) [[unlikely]] return; }
L_002B1904:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1918u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1918u) [[unlikely]] return; }
L_002B1918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::add(c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B186Cu | kUnwind; return; } goto L_002B186C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = fp::add(c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B185Cu | kUnwind; return; } goto L_002B185C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[21] = c.r[3].w[0];
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1850u | kUnwind; return; } goto L_002B1850; } }
L_002B1968:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], ld32((c.r[1].w[0] + 1424u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] != 0ull; c.r[11].d[0] = c.r[5].d[0] | c.r[4].d[0];  if (t) { goto L_002B1A58; } }
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
    set32(c.r[3], 0u + 64u);
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
L_002B1A58:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1A68u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 166u, depth + 1u); else { c.pc = 0x002B1D90u; return; } if (c.pc != 0x002B1A68u) [[unlikely]] return; }
L_002B1A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002B1AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17472u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[1] = fp::add(c.f[12], c.f[0]);  if (t) { goto L_002B1B70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432D0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B1B60; } }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002B1B50; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B1B44; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B1B48; } }
L_002B1B44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002B1C10; } }
L_002B1B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B58u);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1B58u) [[unlikely]] return; }
L_002B1B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1C0C; } }
L_002B1B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1B68u);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1B68u) [[unlikely]] return; }
L_002B1B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1C0C; } }
L_002B1B70:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 299u);  if (t) { goto L_002B1C04; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B1BF4; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002B1BE4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B1BD8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B1BDC; } }
L_002B1BD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1C0C; } }
L_002B1BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1BECu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1BECu) [[unlikely]] return; }
L_002B1BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1C0C; } }
L_002B1BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1BFCu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1BFCu) [[unlikely]] return; }
L_002B1BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1C0C; } }
L_002B1C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1C0Cu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1C0Cu) [[unlikely]] return; }
L_002B1C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B1C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17440u);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[3].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[1] = fp::add(c.f[12], c.f[0]);  if (t) { goto L_002B1CE4; } }
    set32(c.r[2], 0u + 299u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B1CD4; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002B1CC4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B1CB8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B1CBC; } }
L_002B1CB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002B1D80; } }
L_002B1CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CCCu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1CCCu) [[unlikely]] return; }
L_002B1CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1D7C; } }
L_002B1CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1CDCu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1CDCu) [[unlikely]] return; }
L_002B1CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1D7C; } }
L_002B1CE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x432D0000u);  if (t) { goto L_002B1D74; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B1D64; } }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_002B1D54; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B1D48; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B1D4C; } }
L_002B1D48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1D7C; } }
L_002B1D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D5Cu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1D5Cu) [[unlikely]] return; }
L_002B1D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1D7C; } }
L_002B1D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D6Cu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1D6Cu) [[unlikely]] return; }
L_002B1D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B1D7C; } }
L_002B1D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1D7Cu);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1D7Cu) [[unlikely]] return; }
L_002B1D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002B1D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B1D90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 17408u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[9], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43080000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[3].w[0]) & ~15u, c.r[8]);
    c.f[20] = c.r[2].w[0];
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[9].w[0]) & ~15u, c.r[8]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E08u); st32((c.r[6].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1E08u) [[unlikely]] return; }
L_002B1E08:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B1E10:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[2].w[0] + 128u);
    set32(c.r[20], ld32((c.r[21].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E28u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B1E28u) [[unlikely]] return; }
L_002B1E28:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E90000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E5Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1E5Cu) [[unlikely]] return; }
L_002B1E5C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 140u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1F18; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002B1F18; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1E94u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002B1E94u) [[unlikely]] return; }
L_002B1E94:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E90000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EC8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1EC8u) [[unlikely]] return; }
L_002B1EC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B1F00; } }
    set32(c.r[20], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1EE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B2330u; return; } if (c.pc != 0x002B1EE0u) [[unlikely]] return; }
L_002B1EE0:
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B1EF8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B1EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002B1F08; } }
L_002B1F00:
    set32(c.r[2], ld32((c.r[19].w[0] + 108u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_002B1F08:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1F18u) [[unlikely]] return; }
L_002B1F18:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B1F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F30u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002B1F30u) [[unlikely]] return; }
L_002B1F30:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_002B1F6C; } }
L_002B1F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F54u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002B1F54u) [[unlikely]] return; }
L_002B1F54:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_002B1F6C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B1F7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B1F7Cu) [[unlikely]] return; }
L_002B1F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1E10u | kUnwind; return; } goto L_002B1E10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002B1FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 17376u);
    set32(c.r[4], c.r[29].w[0]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
L_002B1FD4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1FD4u | kUnwind; return; } goto L_002B1FD4; } }
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[4].w[0]), c.r[2].d[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 17288u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002B2044; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 17296u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 17296u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 17296u)));
    c.r[2].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_002B2070; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 17288u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B206C; } }
L_002B2044:
    set32(c.r[2], ld32((c.r[1].w[0] - 17296u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 17296u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 17296u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B206C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[1].w[0] - 17288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B206C:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 1;
L_002B2070:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B2080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17280u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20ACu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002B20ACu) [[unlikely]] return; }
L_002B20AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B20C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17248u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B20ECu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002B20ECu) [[unlikely]] return; }
L_002B20EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2144; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_002B2178; } }
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002B2174; } }
L_002B2144:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B2174; } }
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B2174:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_002B2178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2180u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x002B2180u) [[unlikely]] return; }
L_002B2180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 187u, depth + 1u); else { c.pc = 0x002B21A0u; return; } if (c.pc != 0x002B2188u) [[unlikely]] return; }
L_002B2188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B21A0:
    set32(c.r[6], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002B2264; } }
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B2200; } }
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC35C0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B231C; } }
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002B231C; } }
L_002B2200:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B2238; } }
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B231C; } }
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002B231C; } }
L_002B2238:
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B231C; } }
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002B231C; } }
L_002B2264:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002B231C; } }
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B22BC; } }
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B231C; } }
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002B231C; } }
L_002B22BC:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002B22F4; } }
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B231C; } }
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_002B231C; } }
L_002B22F4:
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B231C; } }
    st32((c.r[4].w[0] + 180u), c.f[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 3;
L_002B231C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2330:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2370u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B2370u) [[unlikely]] return; }
L_002B2370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B2380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2380u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x002B2380u) [[unlikely]] return; }
L_002B2380:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B23B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B2408; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002B23F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B23F0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B23F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B23F0u) [[unlikely]] return; }
L_002B23F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002B23F4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0]), 0u);  if (t) { goto L_002B2408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B2408u) [[unlikely]] return; }
L_002B2408:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2420:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002B0000u < 16384u) { entry = entries_006C[(t - 0x002B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B2440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[10], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2458u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x002B2458u) [[unlikely]] return; }
L_002B2458:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 7744u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B2480:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_002B24B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002B24AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_002B24AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B2568; } }
L_002B24B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B24E4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B24DC; } }
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 1;
L_002B24DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2568; } }
L_002B24E4:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_002B2528; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002B2504; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002B2504:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 14u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B2568; } }
L_002B2528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2564; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_002B2544; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002B2544:
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002B2568; } }
L_002B2564:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B2568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2570:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B25A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x002B25A8u) [[unlikely]] return; }
L_002B25A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B264C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B2750; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B263C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_002B2750; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002B25F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 437u);  if (t) { goto L_002B2618; } }
L_002B25F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B2600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 435u);  if (t) { goto L_002B2618; } }
L_002B2600:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B2614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 436u);  if (t) { goto L_002B2618; } }
L_002B2614:
    set32(c.r[4], 0u + 400u);
    c.budget -= 1;
L_002B2618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2620u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B2620u) [[unlikely]] return; }
L_002B2620:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2634u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2634u) [[unlikely]] return; }
L_002B2634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002B2754; } }
L_002B263C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2644u); set32(c.r[4], 0u + 403u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B2644u) [[unlikely]] return; }
L_002B2644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2750; } }
L_002B264C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2654u);  if (depth < kMaxDepth) unit_000F(c, 316u, depth + 1u); else { c.pc = 0x0013F0E0u; return; } if (c.pc != 0x002B2654u) [[unlikely]] return; }
L_002B2654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B268C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 436u);  if (t) { goto L_002B2750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2670u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B2670u) [[unlikely]] return; }
L_002B2670:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2684u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2684u) [[unlikely]] return; }
L_002B2684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2750; } }
L_002B268C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2694u);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x002B2694u) [[unlikely]] return; }
L_002B2694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B26CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_002B2750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26B0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B26B0u) [[unlikely]] return; }
L_002B26B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B26C4u) [[unlikely]] return; }
L_002B26C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2750; } }
L_002B26CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26D4u);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x002B26D4u) [[unlikely]] return; }
L_002B26D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B270C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_002B2750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B26F0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B26F0u) [[unlikely]] return; }
L_002B26F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2704u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2704u) [[unlikely]] return; }
L_002B2704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B2750; } }
L_002B270C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2720u) [[unlikely]] return; }
L_002B2720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2750; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_002B2750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B273Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002B273Cu) [[unlikely]] return; }
L_002B273C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2750u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B2750u) [[unlikely]] return; }
L_002B2750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002B2754:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B27C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7744u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002B27B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B27B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x002B27B0u) [[unlikely]] return; }
L_002B27B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B27CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B27C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B27C8u) [[unlikely]] return; }
L_002B27C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B27CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B27E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B02D0u | kUnwind; return; } goto L_002B02D0; }
L_002B27F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B00D0u | kUnwind; return; } goto L_002B00D0; }
L_002B2800:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AFED0u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 285u, depth); }
L_002B2810:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AF750u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 221u, depth); }
L_002B2820:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2100u | kUnwind; return; } goto L_002B2100; }
L_002B2830:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B1160u | kUnwind; return; } goto L_002B1160; }
L_002B2840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2878; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B2878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B2920; } }
L_002B2878:
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[2], 0u - 1u);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B28D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28352u);  if (t) { goto L_002B28C8; } }
L_002B28AC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B28C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B28D4; } }
L_002B28C4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002B28C8:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B28ACu | kUnwind; return; } goto L_002B28AC; } }
L_002B28D4:
    c.f[12] = ld32((c.r[7].w[0] + 16u));
    c.f[13] = ld32((c.r[7].w[0] + 20u));
    c.f[14] = ld32((c.r[7].w[0] + 24u));
    c.f[15] = ld32((c.r[7].w[0] + 32u));
    c.f[16] = ld32((c.r[7].w[0] + 36u));
    c.f[17] = ld32((c.r[7].w[0] + 40u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B28F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x002B28F4u) [[unlikely]] return; }
L_002B28F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B291C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002B2918u) [[unlikely]] return; }
L_002B2918:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B291C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B2920:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B2930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B294Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002B294Cu) [[unlikely]] return; }
L_002B294C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 8208u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2998u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B2998u) [[unlikely]] return; }
L_002B2998:
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B29B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B2A24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 8208u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B29FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B29FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B29FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B29FCu) [[unlikely]] return; }
L_002B29FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2A0Cu); st32((c.r[17].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002B2A0Cu) [[unlikely]] return; }
L_002B2A0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B2A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2A24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B2A24u) [[unlikely]] return; }
L_002B2A24:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B2A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2A40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B2B10; } }
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B2BB8; } }
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    set32(c.r[4], ld32((c.r[5].w[0] + 176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B2BB8; } }
L_002B2AB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_w_s(c.f[1]);  if (t) { goto L_002B2AF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 416u, depth + 1u); else { c.pc = 0x00197E60u; return; } if (c.pc != 0x002B2AE4u) [[unlikely]] return; }
L_002B2AE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B2AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2AF8u);  if (depth < kMaxDepth) unit_006C(c, 225u, depth + 1u); else { c.pc = 0x002B2840u; return; } if (c.pc != 0x002B2AF8u) [[unlikely]] return; }
L_002B2AF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2AB0u | kUnwind; return; } goto L_002B2AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B2BBC; } }
L_002B2B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B2BAC; } }
L_002B2B18:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 224u);  if (t) { goto L_002B2BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2B38u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 15u, depth + 1u); else { c.pc = 0x001443D0u; return; } if (c.pc != 0x002B2B38u) [[unlikely]] return; }
L_002B2B38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B2BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2B58u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x002B2B58u) [[unlikely]] return; }
L_002B2B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B2BA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2B84u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002B2B84u) [[unlikely]] return; }
L_002B2B84:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2BA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002B2BA8u) [[unlikely]] return; }
L_002B2BA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B2BAC:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2B18u | kUnwind; return; } goto L_002B2B18; } }
L_002B2BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B2BBC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2BE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 229u, depth + 1u); else { c.pc = 0x002B2930u; return; } if (c.pc != 0x002B2BE4u) [[unlikely]] return; }
L_002B2BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 8144u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[6], 0u + 32u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C14u); st32((c.r[16].w[0] + 264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002B2C14u) [[unlikely]] return; }
L_002B2C14:
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C24u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002B2C24u) [[unlikely]] return; }
L_002B2C24:
    set32(c.r[4], c.r[16].w[0] + 168u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C34u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002B2C34u) [[unlikely]] return; }
L_002B2C34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B2C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B2C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C80u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 232u, depth + 1u); else { c.pc = 0x002B29B0u; return; } if (c.pc != 0x002B2C80u) [[unlikely]] return; }
L_002B2C80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B2C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2C98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B2C98u) [[unlikely]] return; }
L_002B2C98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B2C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), 0u);  if (t) { goto L_002B2D18; } }
L_002B2CC8:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B2D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2CE8u); set32(c.r[4], ld32((c.r[3].w[0] + 164u)));  if (depth < kMaxDepth) unit_006C(c, 267u, depth + 1u); else { c.pc = 0x002B2F30u; return; } if (c.pc != 0x002B2CE8u) [[unlikely]] return; }
L_002B2CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B2D04; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2CFCu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_006C(c, 258u, depth + 1u); else { c.pc = 0x002B2D40u; return; } if (c.pc != 0x002B2CFCu) [[unlikely]] return; }
L_002B2CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_002B2D10; } }
L_002B2D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2D0Cu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_006C(c, 264u, depth + 1u); else { c.pc = 0x002B2EA0u; return; } if (c.pc != 0x002B2D0Cu) [[unlikely]] return; }
L_002B2D0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_002B2D10:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 2;
L_002B2D18:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2CC8u | kUnwind; return; } goto L_002B2CC8; } }
L_002B2D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B2D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B2DD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 12203u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2DBCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002B2DBCu) [[unlikely]] return; }
L_002B2DBC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), 0u);  if (t) { goto L_002B2E84; } }
L_002B2DD0:
    set32(c.r[3], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 160u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B2E2C; } }
L_002B2DE8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[16].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 168u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002B2E10u) [[unlikely]] return; }
L_002B2E10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2DE8u | kUnwind; return; } goto L_002B2DE8; } }
    ld128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);  if (t) { goto L_002B2E84; } }
L_002B2E2C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B2E34:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[17].w[0] + 224u);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2E60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002B2E60u) [[unlikely]] return; }
L_002B2E60:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2E34u | kUnwind; return; } goto L_002B2E34; } }
L_002B2E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B2EA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + 160u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B2F0C; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002B2EE0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2EFCu); set32(c.r[4], ld32((c.r[2].w[0] + 168u)));  if (depth < kMaxDepth) unit_0066(c, 213u, depth + 1u); else { c.pc = 0x0029A350u; return; } if (c.pc != 0x002B2EFCu) [[unlikely]] return; }
L_002B2EFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2EE0u | kUnwind; return; } goto L_002B2EE0; } }
L_002B2F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B2F30:
    set32(c.r[2], 0u + 12200u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12201u);  if (t) { goto L_002B2F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B2F68; } }
L_002B2F44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B2F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B2F68; } }
L_002B2F54:
    set32(c.r[2], 0u + 12202u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_002B2F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B2F68; } }
L_002B2F68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B2F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B2F8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002B2F8Cu) [[unlikely]] return; }
L_002B2F8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 8080u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B2FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B3018; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3000u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002B3000u) [[unlikely]] return; }
L_002B3000:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B301C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3018u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B3018u) [[unlikely]] return; }
L_002B3018:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B301C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3030:
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002B3068; } }
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B3068; } }
    ld128((c.r[5].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 212u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.budget -= 4;
L_002B3068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3070:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B30A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B315C; } }
L_002B30A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B30C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B315C; } }
L_002B30C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B30F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B30F0u) [[unlikely]] return; }
L_002B30F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3108u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002B3108u) [[unlikely]] return; }
L_002B3108:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B30C8u | kUnwind; return; } goto L_002B30C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B3120u) [[unlikely]] return; }
L_002B3120:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B3158; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B313Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B313Cu) [[unlikely]] return; }
L_002B313C:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3158u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 167u, depth + 1u); else { c.pc = 0x00199700u; return; } if (c.pc != 0x002B3158u) [[unlikely]] return; }
L_002B3158:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B315C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B3180:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B31ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006C(c, 229u, depth + 1u); else { c.pc = 0x002B2930u; return; } if (c.pc != 0x002B31ACu) [[unlikely]] return; }
L_002B31AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8016u);
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_002B31BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B31C4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B31C4u) [[unlikely]] return; }
L_002B31C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_002B31E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B31DCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 268u, depth + 1u); else { c.pc = 0x002B2F70u; return; } if (c.pc != 0x002B31DCu) [[unlikely]] return; }
L_002B31DC:
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002B31E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[20].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B320Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 416u, depth + 1u); else { c.pc = 0x00197E60u; return; } if (c.pc != 0x002B320Cu) [[unlikely]] return; }
L_002B320C:
    set32(c.r[4], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 96u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B31BCu | kUnwind; return; } goto L_002B31BC; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B3260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B32A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3290u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 232u, depth + 1u); else { c.pc = 0x002B29B0u; return; } if (c.pc != 0x002B3290u) [[unlikely]] return; }
L_002B3290:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B32AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B32A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B32A8u) [[unlikely]] return; }
L_002B32A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B32AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B32C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2A40u | kUnwind; return; } goto L_002B2A40; }
L_002B32D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3030u | kUnwind; return; } goto L_002B3030; }
L_002B32E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B2CB0u | kUnwind; return; } goto L_002B2CB0; }
L_002B32F0:
    set32(c.r[3], 0u + 12073u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 12054u);  if (t) { goto L_002B3304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B333C; } }
L_002B3304:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B3314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B333C; } }
L_002B3314:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 12074u);  if (t) { goto L_002B3324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B333C; } }
L_002B3324:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B3334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B333C; } }
L_002B3334:
    c.r[2].d[0] = c.r[4].d[0] ^ 12075ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_002B333C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B3350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B336Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002B336Cu) [[unlikely]] return; }
L_002B336C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 8272u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 144u), 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    set32(c.r[4], c.r[16].w[0] + 152u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 40u);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B33ACu); st32((c.r[16].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002B33ACu) [[unlikely]] return; }
L_002B33AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B33C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B3434; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 8272u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B340C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B340C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B340Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B340Cu) [[unlikely]] return; }
L_002B340C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B341Cu); st32((c.r[17].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002B341Cu) [[unlikely]] return; }
L_002B341C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B3438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B3434u) [[unlikely]] return; }
L_002B3434:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B3438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[4].w[0] + 112u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[4].w[0] + 128u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3488u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B3488u) [[unlikely]] return; }
L_002B3488:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B34A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B34D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34C0u);  if (depth < kMaxDepth) unit_006C(c, 309u, depth + 1u); else { c.pc = 0x002B3510u; return; } if (c.pc != 0x002B34C0u) [[unlikely]] return; }
L_002B34C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34C8u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002B34C8u) [[unlikely]] return; }
L_002B34C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34D0u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002B34D0u) [[unlikely]] return; }
L_002B34D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_002B34E4; } }
L_002B34D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34E0u);  if (depth < kMaxDepth) unit_006C(c, 332u, depth + 1u); else { c.pc = 0x002B38F0u; return; } if (c.pc != 0x002B34E0u) [[unlikely]] return; }
L_002B34E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_002B34E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B34F8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B34F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002B34F8u) [[unlikely]] return; }
L_002B34F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3540u); set32(c.r[4], ld32((c.r[2].w[0] + 164u)));  if (depth < kMaxDepth) unit_006C(c, 293u, depth + 1u); else { c.pc = 0x002B32F0u; return; } if (c.pc != 0x002B3540u) [[unlikely]] return; }
L_002B3540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B35A0; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B355C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002B355C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3568u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B3568u) [[unlikely]] return; }
L_002B3568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B357C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B357C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B357C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3584u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x002B3584u) [[unlikely]] return; }
L_002B3584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B37E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3598u); set32(c.r[5], 0u + 12059u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002B3598u) [[unlikely]] return; }
L_002B3598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002B37E4; } }
L_002B35A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[3], 0u + 12073u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B35CC; } }
    set32(c.r[3], 0u + 12074u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B35CC; } }
    set32(c.r[3], 0u + 12075u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B37E0; } }
L_002B35CC:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3640; } }
    set32(c.r[4], 0u + 9u);
    c.budget -= 1;
L_002B35E0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    st32((c.r[3].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B35E0u | kUnwind; return; } goto L_002B35E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B360Cu); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006C(c, 344u, depth + 1u); else { c.pc = 0x002B3B20u; return; } if (c.pc != 0x002B360Cu) [[unlikely]] return; }
L_002B360C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3638; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3638u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_0039(c, 102u, depth + 1u); else { c.pc = 0x001E5470u; return; } if (c.pc != 0x002B3638u) [[unlikely]] return; }
L_002B3638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 144u), 0u);  if (t) { goto L_002B372C; } }
L_002B3640:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[1].d[0] = c.r[3].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B372C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B3680; } }
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 330u, depth + 1u); else { c.pc = 0x002B3800u; return; } if (c.pc != 0x002B3674u) [[unlikely]] return; }
L_002B3674:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_002B3724; } }
L_002B3680:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B368Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x002B368Cu) [[unlikely]] return; }
L_002B368C:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_002B36A0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_002B36A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B36A8u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B36A8u) [[unlikely]] return; }
L_002B36A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B36BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B36BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B36BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B36C8u); c.f[12] = ld32((c.r[1].w[0] - 28208u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x002B36C8u) [[unlikely]] return; }
L_002B36C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_002B36DC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 2;
L_002B36DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B36E4u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B36E4u) [[unlikely]] return; }
L_002B36E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B36F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B36F8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B36F8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B36FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 460u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3710u); set32(c.r[4], c.r[2].w[0] + 436u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B3710u) [[unlikely]] return; }
L_002B3710:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B36FCu | kUnwind; return; } goto L_002B36FC; } }
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 1;
L_002B3724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B37E0; } }
L_002B372C:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B37E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3748u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x002B3748u) [[unlikely]] return; }
L_002B3748:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_002B375C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_002B375C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3764u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B3764u) [[unlikely]] return; }
L_002B3764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B3778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B3778; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3778:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3784u); c.f[12] = ld32((c.r[1].w[0] - 28208u));  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x002B3784u) [[unlikely]] return; }
L_002B3784:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_002B3798; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 2;
L_002B3798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B37A0u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B37A0u) [[unlikely]] return; }
L_002B37A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B37B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B37B4; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B37B4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B37B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[2].w[0] + 460u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B37CCu); set32(c.r[4], c.r[2].w[0] + 436u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B37CCu) [[unlikely]] return; }
L_002B37CC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B37B8u | kUnwind; return; } goto L_002B37B8; } }
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 1;
L_002B37E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002B37E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B3800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B38D0; } }
    st32((c.r[17].w[0] + 148u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3848u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002B3848u) [[unlikely]] return; }
L_002B3848:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002B38D0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002B3888; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12074u);  if (t) { goto L_002B3880; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 12073u);  if (t) { goto L_002B3878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_002B3894; } }
L_002B3878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_002B3890; } }
L_002B3880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_002B3890; } }
L_002B3888:
    set32(c.r[3], 0u + 12075u);
    st32((c.r[4].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 2;
L_002B3890:
    set32(c.r[7], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_002B3894:
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[7].w[0] + 176u), 0u);
    set32(c.r[8], ld32((c.r[17].w[0] + 100u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 395u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 100u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 397u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_002B38D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B38F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B3AF8; } }
L_002B3914:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B3B04; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B3AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3944u); set32(c.r[4], ld32((c.r[17].w[0] + 912u)));  if (depth < kMaxDepth) unit_0049(c, 324u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x002B3944u) [[unlikely]] return; }
L_002B3944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B3AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3954u);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x002B3954u) [[unlikely]] return; }
L_002B3954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B396C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3964u);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x002B3964u) [[unlikely]] return; }
L_002B3964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3AF4; } }
L_002B396C:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], c.r[17].w[0] + 224u);
    c.f[20] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3980u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 15u, depth + 1u); else { c.pc = 0x001443D0u; return; } if (c.pc != 0x002B3980u) [[unlikely]] return; }
L_002B3980:
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B3AF4; } }
    st32((c.r[18].w[0] + 100u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[5], 0u + 12073u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B39B8u); st128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0030(c, 20u, depth + 1u); else { c.pc = 0x001C02D0u; return; } if (c.pc != 0x002B39B8u) [[unlikely]] return; }
L_002B39B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B39C8u); c.r[5].d[0] = c.r[2].d[0] | 17524ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B39C8u) [[unlikely]] return; }
L_002B39C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B39D4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002B39D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B39EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B39ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B39ECu) [[unlikely]] return; }
L_002B39EC:
    st32((c.r[18].w[0] + 148u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[18].w[0] + 144u), 0u);
    set32(c.r[10], 0u - 9u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 394u));
    set32(c.r[11], c.r[2].w[0] << 3);
    set32(c.r[7], 0u - 129u);
    set32(c.r[8], c.r[2].w[0] << 7);
    set32(c.r[6], c.r[2].w[0] << 5);
    set32(c.r[5], 0u - 33u);
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 397u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[1].w[0] - 28216u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 38;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);  if (t) { goto L_002B3A88; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002B3A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3A90u); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B3A90u) [[unlikely]] return; }
L_002B3A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B3AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B3AA4; } }
L_002B3AA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B3AA4:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    ld128((c.r[3].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3AC8u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002B3AC8u) [[unlikely]] return; }
L_002B3AC8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 100u);
    c.budget -= 2;
L_002B3AD0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 152u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3AD0u | kUnwind; return; } goto L_002B3AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002B3B08; } }
L_002B3AF4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B3AF8:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3914u | kUnwind; return; } goto L_002B3914; } }
L_002B3B04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002B3B08:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B3B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002B3B60; } }
L_002B3B38:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B3B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 330u, depth + 1u); else { c.pc = 0x002B3800u; return; } if (c.pc != 0x002B3B50u) [[unlikely]] return; }
L_002B3B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B3C28; } }
L_002B3B58:
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_002B3B60:
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3B38u | kUnwind; return; } goto L_002B3B38; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 4;
L_002B3B7C:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B3B90; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002B3B90:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3B7Cu | kUnwind; return; } goto L_002B3B7C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[7].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_002B3BBC; } }
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_002B3C28; } }
L_002B3BBC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B3BE4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 1u);  if (t) { goto L_002B3C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3BDCu);  if (depth < kMaxDepth) unit_006C(c, 330u, depth + 1u); else { c.pc = 0x002B3800u; return; } if (c.pc != 0x002B3BDCu) [[unlikely]] return; }
L_002B3BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B3C28; } }
L_002B3BE4:
    c.r[1].d[0] = c.r[7].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B3C10; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002B3C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C08u);  if (depth < kMaxDepth) unit_006C(c, 330u, depth + 1u); else { c.pc = 0x002B3800u; return; } if (c.pc != 0x002B3C08u) [[unlikely]] return; }
L_002B3C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B3C24; } }
L_002B3C10:
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[5], c.r[2].w[0] - 1u);  if (t) { goto L_002B3C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3C24u);  if (depth < kMaxDepth) unit_006C(c, 330u, depth + 1u); else { c.pc = 0x002B3800u; return; } if (c.pc != 0x002B3C24u) [[unlikely]] return; }
L_002B3C24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002B3C28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002B3D20; } }
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B3D08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 8u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 48u), 0ull);
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
L_002B3D08:
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3D20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B3D20u) [[unlikely]] return; }
L_002B3D20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B3D30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B34A0u | kUnwind; return; } goto L_002B34A0; }
L_002B3D40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3C40u | kUnwind; return; } goto L_002B3C40; }
L_002B3D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3D64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002B3D64u) [[unlikely]] return; }
L_002B3D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 8496u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24344u)));
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24344u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24344u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B3EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 8496u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3E2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3E2C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B3E2Cu) [[unlikely]] return; }
L_002B3E2C:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3E54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3E54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B3E54u) [[unlikely]] return; }
L_002B3E54:
    st32((c.r[17].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3E7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B3E7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3E7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B3E7Cu) [[unlikely]] return; }
L_002B3E7C:
    st32((c.r[17].w[0] + 136u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24344u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EA0u); st32((c.r[1].w[0] - 24344u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002B3EA0u) [[unlikely]] return; }
L_002B3EA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B3EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3EB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B3EB8u) [[unlikely]] return; }
L_002B3EB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B3EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B3ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F04u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002B3F04u) [[unlikely]] return; }
L_002B3F04:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F44u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B3F44u) [[unlikely]] return; }
L_002B3F44:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B3F84u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B3F84u) [[unlikely]] return; }
L_002B3F84:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B3FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_002B3FB0; } }
L_002B3FAC:
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 1;
L_002B3FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B3FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B3FF0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 2;
L_002B3FF0:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_006D(c, 1u, depth);
}

}
