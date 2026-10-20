#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 84,
    0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A8000;
    case 2u: goto L_001A8040;
    case 3u: goto L_001A8060;
    case 4u: goto L_001A8070;
    case 5u: goto L_001A80A0;
    case 6u: goto L_001A80B0;
    case 7u: goto L_001A80E0;
    case 8u: goto L_001A8104;
    case 9u: goto L_001A810C;
    case 10u: goto L_001A8138;
    case 11u: goto L_001A8150;
    case 12u: goto L_001A8190;
    case 13u: goto L_001A819C;
    case 14u: goto L_001A81B4;
    case 15u: goto L_001A81D0;
    case 16u: goto L_001A81EC;
    case 17u: goto L_001A81F8;
    case 18u: goto L_001A8204;
    case 19u: goto L_001A8220;
    case 20u: goto L_001A8230;
    case 21u: goto L_001A8240;
    case 22u: goto L_001A8260;
    case 23u: goto L_001A8280;
    case 24u: goto L_001A82B0;
    case 25u: goto L_001A82E8;
    case 26u: goto L_001A8300;
    case 27u: goto L_001A8314;
    case 28u: goto L_001A8340;
    case 29u: goto L_001A8370;
    case 30u: goto L_001A8388;
    case 31u: goto L_001A83A0;
    case 32u: goto L_001A83E4;
    case 33u: goto L_001A84A0;
    case 34u: goto L_001A84F8;
    case 35u: goto L_001A8550;
    case 36u: goto L_001A8934;
    case 37u: goto L_001A8970;
    case 38u: goto L_001A89A0;
    case 39u: goto L_001A89D0;
    case 40u: goto L_001A89F0;
    case 41u: goto L_001A8A90;
    case 42u: goto L_001A8AC0;
    case 43u: goto L_001A8AF0;
    case 44u: goto L_001A8B10;
    case 45u: goto L_001A8B34;
    case 46u: goto L_001A8BAC;
    case 47u: goto L_001A8E00;
    case 48u: goto L_001A8E10;
    case 49u: goto L_001A8E30;
    case 50u: goto L_001A8E40;
    case 51u: goto L_001A8E58;
    case 52u: goto L_001A8E60;
    case 53u: goto L_001A8E68;
    case 54u: goto L_001A8E74;
    case 55u: goto L_001A8E88;
    case 56u: goto L_001A8EB4;
    case 57u: goto L_001A8EC0;
    case 58u: goto L_001A8EC8;
    case 59u: goto L_001A8EDC;
    case 60u: goto L_001A8EF4;
    case 61u: goto L_001A8EFC;
    case 62u: goto L_001A8F0C;
    case 63u: goto L_001A8F1C;
    case 64u: goto L_001A8F40;
    case 65u: goto L_001A8F5C;
    case 66u: goto L_001A8F68;
    case 67u: goto L_001A8F74;
    case 68u: goto L_001A8F80;
    case 69u: goto L_001A8F90;
    case 70u: goto L_001A8F98;
    case 71u: goto L_001A8FA4;
    case 72u: goto L_001A8FB8;
    case 73u: goto L_001A8FC0;
    case 74u: goto L_001A8FD8;
    case 75u: goto L_001A8FF0;
    case 76u: goto L_001A9000;
    case 77u: goto L_001A900C;
    case 78u: goto L_001A9020;
    case 79u: goto L_001A9030;
    case 80u: goto L_001A9038;
    case 81u: goto L_001A9058;
    case 82u: goto L_001A906C;
    case 83u: goto L_001A9074;
    case 84u: goto L_001A907C;
    case 85u: goto L_001A908C;
    case 86u: goto L_001A90A0;
    case 87u: goto L_001A90A8;
    case 88u: goto L_001A90B0;
    case 89u: goto L_001A90C0;
    case 90u: goto L_001A90C8;
    case 91u: goto L_001A90E0;
    case 92u: goto L_001A9148;
    case 93u: goto L_001A9160;
    case 94u: goto L_001A9170;
    case 95u: goto L_001A919C;
    case 96u: goto L_001A91B0;
    case 97u: goto L_001A91B8;
    case 98u: goto L_001A91C0;
    case 99u: goto L_001A91D4;
    case 100u: goto L_001A91DC;
    case 101u: goto L_001A91F0;
    case 102u: goto L_001A9240;
    case 103u: goto L_001A9268;
    case 104u: goto L_001A9284;
    case 105u: goto L_001A92B4;
    case 106u: goto L_001A92E4;
    case 107u: goto L_001A92F0;
    case 108u: goto L_001A930C;
    case 109u: goto L_001A931C;
    case 110u: goto L_001A932C;
    case 111u: goto L_001A933C;
    case 112u: goto L_001A934C;
    case 113u: goto L_001A9354;
    case 114u: goto L_001A9370;
    case 115u: goto L_001A938C;
    case 116u: goto L_001A9394;
    case 117u: goto L_001A93B0;
    case 118u: goto L_001A93F0;
    case 119u: goto L_001A93FC;
    case 120u: goto L_001A9420;
    case 121u: goto L_001A9428;
    case 122u: goto L_001A9444;
    case 123u: goto L_001A944C;
    case 124u: goto L_001A9458;
    case 125u: goto L_001A9464;
    case 126u: goto L_001A9470;
    case 127u: goto L_001A9488;
    case 128u: goto L_001A94A0;
    case 129u: goto L_001A94D8;
    case 130u: goto L_001A94E0;
    case 131u: goto L_001A94F4;
    case 132u: goto L_001A9504;
    case 133u: goto L_001A9520;
    case 134u: goto L_001A9540;
    case 135u: goto L_001A9560;
    case 136u: goto L_001A9590;
    case 137u: goto L_001A95A8;
    case 138u: goto L_001A95BC;
    case 139u: goto L_001A95F0;
    case 140u: goto L_001A9618;
    case 141u: goto L_001A9628;
    case 142u: goto L_001A9638;
    case 143u: goto L_001A964C;
    case 144u: goto L_001A9670;
    case 145u: goto L_001A9688;
    case 146u: goto L_001A96AC;
    case 147u: goto L_001A96C0;
    case 148u: goto L_001A971C;
    case 149u: goto L_001A9730;
    case 150u: goto L_001A9754;
    case 151u: goto L_001A9770;
    case 152u: goto L_001A9790;
    case 153u: goto L_001A97B4;
    case 154u: goto L_001A97D0;
    case 155u: goto L_001A9810;
    case 156u: goto L_001A983C;
    case 157u: goto L_001A9848;
    case 158u: goto L_001A9910;
    case 159u: goto L_001A992C;
    case 160u: goto L_001A9944;
    case 161u: goto L_001A9960;
    case 162u: goto L_001A9990;
    case 163u: goto L_001A99A8;
    case 164u: goto L_001A99C0;
    case 165u: goto L_001A99D8;
    case 166u: goto L_001A99EC;
    case 167u: goto L_001A9A00;
    case 168u: goto L_001A9A30;
    case 169u: goto L_001A9A54;
    case 170u: goto L_001A9A6C;
    case 171u: goto L_001A9A98;
    case 172u: goto L_001A9AB4;
    case 173u: goto L_001A9AC4;
    case 174u: goto L_001A9B40;
    case 175u: goto L_001A9B70;
    case 176u: goto L_001A9B88;
    case 177u: goto L_001A9BA0;
    case 178u: goto L_001A9BB8;
    case 179u: goto L_001A9BCC;
    case 180u: goto L_001A9BE0;
    case 181u: goto L_001A9C08;
    case 182u: goto L_001A9C24;
    case 183u: goto L_001A9C3C;
    case 184u: goto L_001A9C54;
    case 185u: goto L_001A9C6C;
    case 186u: goto L_001A9C74;
    case 187u: goto L_001A9C80;
    case 188u: goto L_001A9C90;
    case 189u: goto L_001A9CB0;
    case 190u: goto L_001A9CE0;
    case 191u: goto L_001A9CFC;
    case 192u: goto L_001A9D30;
    case 193u: goto L_001A9D50;
    case 194u: goto L_001A9D80;
    case 195u: goto L_001A9D98;
    case 196u: goto L_001A9DB0;
    case 197u: goto L_001A9E74;
    case 198u: goto L_001A9E80;
    case 199u: goto L_001A9EA0;
    case 200u: goto L_001A9EBC;
    case 201u: goto L_001A9ED0;
    case 202u: goto L_001A9EE4;
    case 203u: goto L_001A9F10;
    case 204u: goto L_001A9F2C;
    case 205u: goto L_001A9F60;
    case 206u: goto L_001A9F80;
    case 207u: goto L_001A9FB0;
    case 208u: goto L_001A9FC8;
    case 209u: goto L_001A9FE0;
    case 210u: goto L_001AA0A4;
    case 211u: goto L_001AA0B0;
    case 212u: goto L_001AA0D0;
    case 213u: goto L_001AA0EC;
    case 214u: goto L_001AA100;
    case 215u: goto L_001AA114;
    case 216u: goto L_001AA140;
    case 217u: goto L_001AA15C;
    case 218u: goto L_001AA1E4;
    case 219u: goto L_001AA230;
    case 220u: goto L_001AA288;
    case 221u: goto L_001AA2E0;
    case 222u: goto L_001AA32C;
    case 223u: goto L_001AA378;
    case 224u: goto L_001AA3B0;
    case 225u: goto L_001AA3E0;
    case 226u: goto L_001AA3F8;
    case 227u: goto L_001AA410;
    case 228u: goto L_001AA448;
    case 229u: goto L_001AA4B4;
    case 230u: goto L_001AA4C4;
    case 231u: goto L_001AA568;
    case 232u: goto L_001AA578;
    case 233u: goto L_001AA614;
    case 234u: goto L_001AA624;
    case 235u: goto L_001AA6C8;
    case 236u: goto L_001AA6D8;
    case 237u: goto L_001AA774;
    case 238u: goto L_001AA814;
    case 239u: goto L_001AA824;
    case 240u: goto L_001AA968;
    case 241u: goto L_001AA980;
    case 242u: goto L_001AA9A0;
    case 243u: goto L_001AA9BC;
    case 244u: goto L_001AA9D0;
    case 245u: goto L_001AA9E4;
    case 246u: goto L_001AAA10;
    case 247u: goto L_001AAA24;
    case 248u: goto L_001AAA70;
    case 249u: goto L_001AAA84;
    case 250u: goto L_001AAAD0;
    case 251u: goto L_001AAAE8;
    case 252u: goto L_001AAB40;
    case 253u: goto L_001AAB58;
    case 254u: goto L_001AABB0;
    case 255u: goto L_001AABC4;
    case 256u: goto L_001AAC10;
    case 257u: goto L_001AAC24;
    case 258u: goto L_001AAC70;
    case 259u: goto L_001AAC8C;
    case 260u: goto L_001AACF0;
    case 261u: goto L_001AAD20;
    case 262u: goto L_001AAD38;
    case 263u: goto L_001AAD50;
    case 264u: goto L_001AAD88;
    case 265u: goto L_001AAD98;
    case 266u: goto L_001AAE00;
    case 267u: goto L_001AAE18;
    case 268u: goto L_001AAE44;
    case 269u: goto L_001AAE60;
    case 270u: goto L_001AAE7C;
    case 271u: goto L_001AAEE0;
    case 272u: goto L_001AAF10;
    case 273u: goto L_001AAF28;
    case 274u: goto L_001AAF40;
    case 275u: goto L_001AAF78;
    case 276u: goto L_001AAF88;
    case 277u: goto L_001AAFF0;
    case 278u: goto L_001AB008;
    case 279u: goto L_001AB034;
    case 280u: goto L_001AB050;
    case 281u: goto L_001AB150;
    case 282u: goto L_001AB168;
    case 283u: goto L_001AB1A4;
    case 284u: goto L_001AB1B4;
    case 285u: goto L_001AB1C4;
    case 286u: goto L_001AB1D8;
    case 287u: goto L_001AB200;
    case 288u: goto L_001AB214;
    case 289u: goto L_001AB250;
    case 290u: goto L_001AB26C;
    case 291u: goto L_001AB280;
    case 292u: goto L_001AB28C;
    case 293u: goto L_001AB2AC;
    case 294u: goto L_001AB2BC;
    case 295u: goto L_001AB2D4;
    case 296u: goto L_001AB318;
    case 297u: goto L_001AB358;
    case 298u: goto L_001AB39C;
    case 299u: goto L_001AB3DC;
    case 300u: goto L_001AB3F0;
    case 301u: goto L_001AB404;
    case 302u: goto L_001AB440;
    case 303u: goto L_001AB458;
    case 304u: goto L_001AB474;
    case 305u: goto L_001AB490;
    case 306u: goto L_001AB4A0;
    case 307u: goto L_001AB4B8;
    case 308u: goto L_001AB4FC;
    case 309u: goto L_001AB53C;
    case 310u: goto L_001AB580;
    case 311u: goto L_001AB5C0;
    case 312u: goto L_001AB5D0;
    case 313u: goto L_001AB5E4;
    case 314u: goto L_001AB620;
    case 315u: goto L_001AB634;
    case 316u: goto L_001AB644;
    case 317u: goto L_001AB65C;
    case 318u: goto L_001AB6A0;
    case 319u: goto L_001AB6E0;
    case 320u: goto L_001AB724;
    case 321u: goto L_001AB764;
    case 322u: goto L_001AB770;
    case 323u: goto L_001AB784;
    case 324u: goto L_001AB7C0;
    case 325u: goto L_001AB810;
    case 326u: goto L_001AB824;
    case 327u: goto L_001AB838;
    case 328u: goto L_001AB844;
    case 329u: goto L_001AB858;
    case 330u: goto L_001AB870;
    case 331u: goto L_001AB88C;
    case 332u: goto L_001AB8A4;
    case 333u: goto L_001AB93C;
    case 334u: goto L_001AB960;
    case 335u: goto L_001AB970;
    case 336u: goto L_001AB98C;
    case 337u: goto L_001AB9BC;
    case 338u: goto L_001AB9E0;
    case 339u: goto L_001ABA20;
    case 340u: goto L_001ABA40;
    case 341u: goto L_001ABA58;
    case 342u: goto L_001ABA70;
    case 343u: goto L_001ABA88;
    case 344u: goto L_001ABA98;
    case 345u: goto L_001ABAC0;
    case 346u: goto L_001ABAD0;
    case 347u: goto L_001ABAFC;
    case 348u: goto L_001ABB0C;
    case 349u: goto L_001ABB2C;
    case 350u: goto L_001ABB3C;
    case 351u: goto L_001ABB50;
    case 352u: goto L_001ABB60;
    case 353u: goto L_001ABB90;
    case 354u: goto L_001ABBB8;
    case 355u: goto L_001ABBC4;
    case 356u: goto L_001ABBDC;
    case 357u: goto L_001ABC00;
    case 358u: goto L_001ABC10;
    case 359u: goto L_001ABC20;
    case 360u: goto L_001ABC40;
    case 361u: goto L_001ABCF0;
    case 362u: goto L_001ABD00;
    case 363u: goto L_001ABD30;
    case 364u: goto L_001ABD60;
    case 365u: goto L_001ABD9C;
    case 366u: goto L_001ABDB0;
    case 367u: goto L_001ABDD0;
    case 368u: goto L_001ABE0C;
    case 369u: goto L_001ABE20;
    case 370u: goto L_001ABE40;
    case 371u: goto L_001ABE88;
    case 372u: goto L_001ABEA0;
    case 373u: goto L_001ABEC0;
    case 374u: goto L_001ABF08;
    case 375u: goto L_001ABF20;
    case 376u: goto L_001ABF40;
    case 377u: goto L_001ABF88;
    case 378u: goto L_001ABFA0;
    case 379u: goto L_001ABFC0;
    default: bad_entry(c, 0x001A8000u); return;
    }
L_001A8000:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A802C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001A8028; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_001A8028:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001A802C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8040:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001A8060:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_001A8088; } }
L_001A8070:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001A8084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8094; } }
L_001A8084:
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.budget -= 1;
L_001A8088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8070u | kUnwind; return; } goto L_001A8070; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A8094:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A80A0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_001A80C8; } }
L_001A80B0:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001A80C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0])));  if (t) { goto L_001A80D0; } }
L_001A80C4:
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 1;
L_001A80C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A80B0u | kUnwind; return; } goto L_001A80B0; } }
L_001A80D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A80E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8104u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 297u, depth + 1u); else { c.pc = 0x001A78D0u; return; } if (c.pc != 0x001A8104u) [[unlikely]] return; }
L_001A8104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A810Cu); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x001A810Cu) [[unlikely]] return; }
L_001A810C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 11584u);
    set32(c.r[2], c.r[2].w[0] - 11572u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_001A8138; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8138u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x001A8138u) [[unlikely]] return; }
L_001A8138:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A81B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 11584u);
    set32(c.r[2], c.r[2].w[0] - 11572u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 48u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8190u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001A8190u) [[unlikely]] return; }
L_001A8190:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A819Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 301u, depth + 1u); else { c.pc = 0x001A79B0u; return; } if (c.pc != 0x001A819Cu) [[unlikely]] return; }
L_001A819C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A81B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A81B4u) [[unlikely]] return; }
L_001A81B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A81B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A81D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81ECu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x001A81ECu) [[unlikely]] return; }
L_001A81EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81F8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0029(c, 313u, depth + 1u); else { c.pc = 0x001A7B60u; return; } if (c.pc != 0x001A81F8u) [[unlikely]] return; }
L_001A81F8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8204u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x001A8204u) [[unlikely]] return; }
L_001A8204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A81D0u | kUnwind; return; } goto L_001A81D0; }
L_001A8230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8150u | kUnwind; return; } goto L_001A8150; }
L_001A8240:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_001A8260:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[8].w[0]);  c.pc = t; return; }
L_001A8280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_001A82B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A82EC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001A82E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82E8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A82E8u) [[unlikely]] return; }
L_001A82E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A82EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 23u, depth + 1u); else { c.pc = 0x001A8280u; return; } if (c.pc != 0x001A8314u) [[unlikely]] return; }
L_001A8314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - 11536u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A8388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8370u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 24u, depth + 1u); else { c.pc = 0x001A82B0u; return; } if (c.pc != 0x001A8370u) [[unlikely]] return; }
L_001A8370:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A838C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A8388u) [[unlikely]] return; }
L_001A8388:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A838C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A83A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A894C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[3].w[0])));  if (t) { goto L_001A8944; } }
L_001A83E4:
    set32(c.r[3], ld32((c.r[21].w[0])));
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(105ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001A8414; } }
    set32(c.r[2], 0u + 104u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_001A8408; } }
    breakpoint(c, 0x001A8404u);
    c.budget -= 1;
L_001A8408:
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] - c.r[19].w[0]);  if (t) { goto L_001A8418; } }
L_001A8414:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A8418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_001A8440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_001A8440:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] << 16);
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st128((c.r[7].w[0]) & ~15u, c.r[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st64((c.r[2].w[0]), 0ull);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84A0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x001A84A0u) [[unlikely]] return; }
L_001A84A0:
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[3], c.r[19].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 80ull;
    set32(c.r[8], c.r[19].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st64((c.r[2].w[0]), 0ull);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A84F8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x001A84F8u) [[unlikely]] return; }
L_001A84F8:
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[3], c.r[19].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 160ull;
    set32(c.r[8], c.r[19].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st64((c.r[2].w[0]), 0ull);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8550u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 201u, depth + 1u); else { c.pc = 0x0014E860u; return; } if (c.pc != 0x001A8550u) [[unlikely]] return; }
L_001A8550:
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C100000u);
    set32(c.r[8], c.r[19].w[0] << 4);
    c.r[5].d[0] = c.r[2].d[0] | 480ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st64((c.r[2].w[0]), 0ull);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x502F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[2].d[0] | 9249ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.f[9] = c.r[2].w[0];
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    c.f[6] = c.r[3].w[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.f[11] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    c.f[10] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[7] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[1] = c.r[2].w[0];
    c.f[5] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st64((c.r[5].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st64((c.r[2].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), c.f[11]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), c.f[10]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.f[9]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), c.f[8]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), c.f[7]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.f[6]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), c.f[5]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), c.f[4]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.f[3]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 4u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.f[0]);
    c.vu0.vf[6] = c.r[2];
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 5u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 1u, 4u, 5u, c.vu0.vf[0].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.f[0] = ld32((c.r[21].w[0] + 28u));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[6] = c.r[2];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 5u, c.vu0.vf[6].w[0]);
    vu::addbc(c.vu0, 1u, 4u, 5u, c.vu0.vf[0].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[2].d[0] | 1344ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], ld32((c.r[29].w[0] + 188u)));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] + 16u);
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] >> 4);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st64((c.r[2].w[0]), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 249;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8934u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x001A8934u) [[unlikely]] return; }
L_001A8934:
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_001A8944:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A83E4u | kUnwind; return; } goto L_001A83E4; } }
L_001A894C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001A8970:
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[3]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001A89A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A89D4; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A89D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A89D0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A89D0u) [[unlikely]] return; }
L_001A89D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A89D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A89F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 912ull;
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 848ull;
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
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
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);  c.pc = t; return; }
L_001A8A90:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001A8AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001A8AF4; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A8AF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AF0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A8AF0u) [[unlikely]] return; }
L_001A8AF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A8AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8B10:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 368u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x001A8B34u) [[unlikely]] return; }
L_001A8B34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 356u), c.r[5].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 368u));
    c.f[4] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[29].w[0] + 360u), 0u);
    c.f[3] = ld32((c.r[29].w[0] + 372u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[29].w[0] + 364u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[29].w[0] + 172u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    st32((c.r[29].w[0] + 168u), c.f[6]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BACu); st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x001A8BACu) [[unlikely]] return; }
L_001A8BAC:
    c.f[5] = ld32((c.r[29].w[0] + 320u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[29].w[0] + 156u), c.r[9].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[7], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[8], c.r[29].w[0] + 288u);
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[6], c.r[29].w[0] + 272u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.facc = fp::mul(c.f[5], c.f[4]);
    set32(c.r[11], c.r[29].w[0] + 96u);
    set32(c.r[10], c.r[29].w[0] + 352u);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    st32((c.r[29].w[0] + 152u), c.f[6]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    ld128((c.r[7].w[0]) & ~15u, c.r[7]);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[7]);
    c.f[4] = ld32((c.r[29].w[0] + 372u));
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    st32((c.r[29].w[0] + 140u), c.r[9].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[7]);
    c.f[5] = ld32((c.r[29].w[0] + 352u));
    c.f[3] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    st32((c.r[29].w[0] + 136u), c.f[6]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[5]);
    st32((c.r[29].w[0] + 124u), c.r[9].w[0]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[29].w[0] + 344u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    ld128((c.r[11].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 336u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.f[1] = 0u;
    set32(c.r[7], c.r[29].w[0] + 352u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[5]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[5]);
    st32((c.r[16].w[0] + 28u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 344u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 352u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = 0u;
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 146;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001A8E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A8E10u) [[unlikely]] return; }
L_001A8E10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17268u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_001A8F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E30u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A8E30u) [[unlikely]] return; }
L_001A8E30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E40u); st32((c.r[1].w[0] + 17268u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146E30u; return; } if (c.pc != 0x001A8E40u) [[unlikely]] return; }
L_001A8E40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 6416u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E58u); st32((c.r[1].w[0] - 3400u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00140C90u; return; } if (c.pc != 0x001A8E58u) [[unlikely]] return; }
L_001A8E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E60u);  if (depth < kMaxDepth) unit_0011(c, 189u, depth + 1u); else { c.pc = 0x00146D80u; return; } if (c.pc != 0x001A8E60u) [[unlikely]] return; }
L_001A8E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E68u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001A8E68u) [[unlikely]] return; }
L_001A8E68:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001A8E74u) [[unlikely]] return; }
L_001A8E74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E88u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A8E88u) [[unlikely]] return; }
L_001A8E88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[5], 0u + 640u);
    set32(c.r[6], 0u + 224u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 49u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 63u, depth + 1u); else { c.pc = 0x0014CB60u; return; } if (c.pc != 0x001A8EB4u) [[unlikely]] return; }
L_001A8EB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 67u, depth + 1u); else { c.pc = 0x0014CEA0u; return; } if (c.pc != 0x001A8EC0u) [[unlikely]] return; }
L_001A8EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EC8u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A8EC8u) [[unlikely]] return; }
L_001A8EC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EDCu); st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A8EDCu) [[unlikely]] return; }
L_001A8EDC:
    set32(c.r[6], 0u + 64u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[8], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EF4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013CEC0u; return; } if (c.pc != 0x001A8EF4u) [[unlikely]] return; }
L_001A8EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EFCu); set32(c.r[4], ld32((c.r[29].w[0] + 40u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A8EFCu) [[unlikely]] return; }
L_001A8EFC:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F0Cu); st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A8F0Cu) [[unlikely]] return; }
L_001A8F0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F1Cu); st8((c.r[1].w[0] + 17281u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A8F1Cu) [[unlikely]] return; }
L_001A8F1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 17282u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31520u), 0u);
    c.budget -= 5;
L_001A8F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8704u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st16((c.r[29].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10751u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F5Cu); st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001A8F5Cu) [[unlikely]] return; }
L_001A8F5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F68u); set32(c.r[4], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_002A(c, 128u, depth + 1u); else { c.pc = 0x001A94A0u; return; } if (c.pc != 0x001A8F68u) [[unlikely]] return; }
L_001A8F68:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F74u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002D9860u; return; } if (c.pc != 0x001A8F74u) [[unlikely]] return; }
L_001A8F74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F90u);  if (depth < kMaxDepth) unit_002A(c, 133u, depth + 1u); else { c.pc = 0x001A9520u; return; } if (c.pc != 0x001A8F90u) [[unlikely]] return; }
L_001A8F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F98u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x001A8F98u) [[unlikely]] return; }
L_001A8F98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FA4u); st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0020(c, 153u, depth + 1u); else { c.pc = 0x00181E70u; return; } if (c.pc != 0x001A8FA4u) [[unlikely]] return; }
L_001A8FA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FB8u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A8FB8u) [[unlikely]] return; }
L_001A8FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FC0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A8FC0u) [[unlikely]] return; }
L_001A8FC0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 38u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_001A8FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FD8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A8FD8u) [[unlikely]] return; }
L_001A8FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A9000; } }
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FF0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 366u, depth + 1u); else { c.pc = 0x002A7A20u; return; } if (c.pc != 0x001A8FF0u) [[unlikely]] return; }
L_001A8FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (t) { goto L_001A9004; } }
L_001A8FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9000u);  if (depth < kMaxDepth) unit_003F(c, 97u, depth + 1u); else { c.pc = 0x001FCFD0u; return; } if (c.pc != 0x001A9000u) [[unlikely]] return; }
L_001A9000:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 1;
L_001A9004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A900Cu);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A900Cu) [[unlikely]] return; }
L_001A900C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A9020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9030u);  if (depth < kMaxDepth) unit_002A(c, 47u, depth + 1u); else { c.pc = 0x001A8E00u; return; } if (c.pc != 0x001A9030u) [[unlikely]] return; }
L_001A9030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9038u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001A9038u) [[unlikely]] return; }
L_001A9038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25569u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A9084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9058u);  if (depth < kMaxDepth) unit_002A(c, 64u, depth + 1u); else { c.pc = 0x001A8F40u; return; } if (c.pc != 0x001A9058u) [[unlikely]] return; }
L_001A9058:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A906Cu); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A906Cu) [[unlikely]] return; }
L_001A906C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9074u);  if (depth < kMaxDepth) unit_0057(c, 53u, depth + 1u); else { c.pc = 0x0025C620u; return; } if (c.pc != 0x001A9074u) [[unlikely]] return; }
L_001A9074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A907Cu); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A907Cu) [[unlikely]] return; }
L_001A907C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001A90CC; } }
L_001A9084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A908Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001A908Cu) [[unlikely]] return; }
L_001A908C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90A0u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A90A0u) [[unlikely]] return; }
L_001A90A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90A8u);  if (depth < kMaxDepth) unit_0020(c, 151u, depth + 1u); else { c.pc = 0x00181E30u; return; } if (c.pc != 0x001A90A8u) [[unlikely]] return; }
L_001A90A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90B0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A90B0u) [[unlikely]] return; }
L_001A90B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A90C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 306u, depth + 1u); else { c.pc = 0x001364B0u; return; } if (c.pc != 0x001A90C0u) [[unlikely]] return; }
L_001A90C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90C8u); set32(c.r[4], ld32((c.r[29].w[0] + 24u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A90C8u) [[unlikely]] return; }
L_001A90C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001A90CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A90E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], 0u + 82u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001A910C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001A9224; } }
L_001A910C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] + 6432u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], c.r[2].w[0] + 6464u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 15;
L_001A9148:
    set32(c.r[2], 0u + 6u);
    set32(c.r[18], c.r[19].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9160u); set32(c.r[17], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x001A9160u) [[unlikely]] return; }
L_001A9160:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9170u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x001A9170u) [[unlikely]] return; }
L_001A9170:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] << 2);  if (t) { goto L_001A91F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A919Cu); set32(c.r[17], c.r[3].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A919Cu) [[unlikely]] return; }
L_001A919C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[2].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91B0u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A91B0u) [[unlikely]] return; }
L_001A91B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91B8u); set32(c.r[20], c.r[19].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A91B8u) [[unlikely]] return; }
L_001A91B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91C0u); set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A91C0u) [[unlikely]] return; }
L_001A91C0:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[17].w[0] + 256u);
    set32(c.r[5], c.r[2].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91D4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A91D4u) [[unlikely]] return; }
L_001A91D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91DCu);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A91DCu) [[unlikely]] return; }
L_001A91DC:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[2].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91F0u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001A91F0u) [[unlikely]] return; }
L_001A91F0:
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 1;
L_001A91F4:
    set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[3].w[0] + 96u);
    set32(c.r[6], c.r[4].w[0] + 96u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[7], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0]), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9148u | kUnwind; return; } goto L_001A9148; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001A9224:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001A9240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9268u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001A9268u) [[unlikely]] return; }
L_001A9268:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 927u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9284u); st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 131u, depth + 1u); else { c.pc = 0x001951C0u; return; } if (c.pc != 0x001A9284u) [[unlikely]] return; }
L_001A9284:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[18].w[0] + 624u);
    set32(c.r[5], c.r[5].w[0] + 15656u);
    set32(c.r[6], c.r[29].w[0] + 68u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 928u);
    st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 1119u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A92B4u); st16((c.r[29].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002A(c, 7u, depth + 1u); else { c.pc = 0x001A80E0u; return; } if (c.pc != 0x001A92B4u) [[unlikely]] return; }
L_001A92B4:
    st64((c.r[18].w[0] + 704u), 0ull);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 712u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 716u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 728u), 0u);
    st32((c.r[18].w[0] + 732u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A92E4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A92E4u) [[unlikely]] return; }
L_001A92E4:
    st32((c.r[18].w[0] + 720u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A92F0u); st32((c.r[18].w[0] + 724u), 0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A92F0u) [[unlikely]] return; }
L_001A92F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 17273u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_001A9310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A930Cu); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x001A930Cu) [[unlikely]] return; }
L_001A930C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_001A9310:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A931Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 138u, depth + 1u); else { c.pc = 0x00195290u; return; } if (c.pc != 0x001A931Cu) [[unlikely]] return; }
L_001A931C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A932Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 138u, depth + 1u); else { c.pc = 0x00195290u; return; } if (c.pc != 0x001A932Cu) [[unlikely]] return; }
L_001A932C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A933Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 138u, depth + 1u); else { c.pc = 0x00195290u; return; } if (c.pc != 0x001A933Cu) [[unlikely]] return; }
L_001A933C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A934Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 138u, depth + 1u); else { c.pc = 0x00195290u; return; } if (c.pc != 0x001A934Cu) [[unlikely]] return; }
L_001A934C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9354u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A9354u) [[unlikely]] return; }
L_001A9354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 17273u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A938C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9370u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001A9370u) [[unlikely]] return; }
L_001A9370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A938C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A938Cu);  if (depth < kMaxDepth) unit_0051(c, 160u, depth + 1u); else { c.pc = 0x002454D0u; return; } if (c.pc != 0x001A938Cu) [[unlikely]] return; }
L_001A938C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9394u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A9394u) [[unlikely]] return; }
L_001A9394:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A93B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A9488; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 728u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A93F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A93F0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A93F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A93F0u) [[unlikely]] return; }
L_001A93F0:
    st32((c.r[17].w[0] + 728u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A93FCu); c.r[4].d[0] = ld64((c.r[17].w[0] + 704u));  if (depth < kMaxDepth) unit_000F(c, 160u, depth + 1u); else { c.pc = 0x0013D620u; return; } if (c.pc != 0x001A93FCu) [[unlikely]] return; }
L_001A93FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9420; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9420; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9420u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A9420u) [[unlikely]] return; }
L_001A9420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9428u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001A9428u) [[unlikely]] return; }
L_001A9428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 17273u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_001A9444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9444u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x001A9444u) [[unlikely]] return; }
L_001A9444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A944Cu);  if (depth < kMaxDepth) unit_0051(c, 164u, depth + 1u); else { c.pc = 0x00245530u; return; } if (c.pc != 0x001A944Cu) [[unlikely]] return; }
L_001A944C:
    set32(c.r[4], c.r[17].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9458u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8150u; return; } if (c.pc != 0x001A9458u) [[unlikely]] return; }
L_001A9458:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9464u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 134u, depth + 1u); else { c.pc = 0x00195210u; return; } if (c.pc != 0x001A9464u) [[unlikely]] return; }
L_001A9464:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9470u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001A9470u) [[unlikely]] return; }
L_001A9470:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A948C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9488u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A9488u) [[unlikely]] return; }
L_001A9488:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A948C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A94A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A9504; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94D8u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A94D8u) [[unlikely]] return; }
L_001A94D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94E0u); set32(c.r[4], 0u + 736u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A94E0u) [[unlikely]] return; }
L_001A94E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A94F4; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 102u, depth + 1u); else { c.pc = 0x001A9240u; return; } if (c.pc != 0x001A94F4u) [[unlikely]] return; }
L_001A94F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9504u); st32((c.r[1].w[0] + 26392u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001A9504u) [[unlikely]] return; }
L_001A9504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A9520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001A9548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9540u);  if (depth < kMaxDepth) unit_002A(c, 117u, depth + 1u); else { c.pc = 0x001A93B0u; return; } if (c.pc != 0x001A9540u) [[unlikely]] return; }
L_001A9540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26392u), 0u);
    c.budget -= 2;
L_001A9548:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A9560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + 624u);  if (t) { goto L_001A9588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001A95D4; } }
L_001A9588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9590u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x001A9590u) [[unlikely]] return; }
L_001A9590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001A95D0; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95A8u); set32(c.r[4], c.r[17].w[0] + 560u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x001A95A8u) [[unlikely]] return; }
L_001A95A8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 560u);  if (t) { goto L_001A95C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95BCu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x001A95BCu) [[unlikely]] return; }
L_001A95BC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001A95C0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A95D0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001A95D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001A95D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A95F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9618u); set32(c.r[4], c.r[18].w[0] + 624u);  if (depth < kMaxDepth) unit_0029(c, 351u, depth + 1u); else { c.pc = 0x001A7FE0u; return; } if (c.pc != 0x001A9618u) [[unlikely]] return; }
L_001A9618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9628u); c.r[4].d[0] = ld64((c.r[18].w[0] + 704u));  if (depth < kMaxDepth) unit_000F(c, 160u, depth + 1u); else { c.pc = 0x0013D620u; return; } if (c.pc != 0x001A9628u) [[unlikely]] return; }
L_001A9628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 160u);  if (t) { goto L_001A9658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9638u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A9638u) [[unlikely]] return; }
L_001A9638:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A9650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A964Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 281u, depth + 1u); else { c.pc = 0x001AB150u; return; } if (c.pc != 0x001A964Cu) [[unlikely]] return; }
L_001A964C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A9650:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 32u));
    st64((c.r[18].w[0] + 704u), c.r[3].d[0]);
    c.budget -= 2;
L_001A9658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A9670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9688u); c.r[4].d[0] = ld64((c.r[4].w[0] + 704u));  if (depth < kMaxDepth) unit_000F(c, 160u, depth + 1u); else { c.pc = 0x0013D620u; return; } if (c.pc != 0x001A9688u) [[unlikely]] return; }
L_001A9688:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A96AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A96AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A96ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A96ACu) [[unlikely]] return; }
L_001A96AC:
    st64((c.r[16].w[0] + 704u), 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A96C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 732u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A9774; } }
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_001A9708; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A9708; } }
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_001A9708; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A9774; } }
L_001A9708:
    set32(c.r[2], ld32((c.r[17].w[0] + 728u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_001A9738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A971Cu); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A971Cu) [[unlikely]] return; }
L_001A971C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001A9730; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9730u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 140u, depth + 1u); else { c.pc = 0x001AD380u; return; } if (c.pc != 0x001A9730u) [[unlikely]] return; }
L_001A9730:
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 2;
L_001A9738:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_001A975C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A975C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 728u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 152u, depth + 1u); else { c.pc = 0x001AD590u; return; } if (c.pc != 0x001A9754u) [[unlikely]] return; }
L_001A9754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 732u), c.r[16].w[0]);  if (t) { goto L_001A9774; } }
L_001A975C:
    set32(c.r[4], ld32((c.r[17].w[0] + 728u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9770u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001AD530u; return; } if (c.pc != 0x001A9770u) [[unlikely]] return; }
L_001A9770:
    st32((c.r[17].w[0] + 732u), c.r[16].w[0]);
    c.budget -= 1;
L_001A9774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 728u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001A97B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 161u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001A97B4u) [[unlikely]] return; }
L_001A97B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001A97B8:
    st32((c.r[16].w[0] + 732u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A97D0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    c.r[3].d[0] = c.r[3].d[0] << 49;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 28u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001A9810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 6084u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A98FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A983Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 315u, depth + 1u); else { c.pc = 0x00167360u; return; } if (c.pc != 0x001A983Cu) [[unlikely]] return; }
L_001A983C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9848u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0019(c, 316u, depth + 1u); else { c.pc = 0x00167380u; return; } if (c.pc != 0x001A9848u) [[unlikely]] return; }
L_001A9848:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001A98A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_001A9890; } }
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_001A988C; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A988C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A98FC; } }
L_001A988C:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001A9890:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A98FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A98FC; } }
L_001A98A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_001A98E0; } }
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_001A98DC; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A98DC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A98FC; } }
L_001A98DC:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001A98E0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A98FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001A98FC; } }
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A98FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A992Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 413u, depth + 1u); else { c.pc = 0x00193B00u; return; } if (c.pc != 0x001A992Cu) [[unlikely]] return; }
L_001A992C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11120u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9944u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 154u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A9944u) [[unlikely]] return; }
L_001A9944:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A99A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9990u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 419u, depth + 1u); else { c.pc = 0x00193B80u; return; } if (c.pc != 0x001A9990u) [[unlikely]] return; }
L_001A9990:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A99AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A99A8u) [[unlikely]] return; }
L_001A99A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A99AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A99C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99D8u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_002A(c, 155u, depth + 1u); else { c.pc = 0x001A9810u; return; } if (c.pc != 0x001A99D8u) [[unlikely]] return; }
L_001A99D8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 160u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99ECu); st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0024(c, 427u, depth + 1u); else { c.pc = 0x00193C70u; return; } if (c.pc != 0x001A99ECu) [[unlikely]] return; }
L_001A99EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A9A00:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 6108u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 8u));  c.pc = t; return; }
L_001A9A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A54u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 434u, depth + 1u); else { c.pc = 0x00193DF0u; return; } if (c.pc != 0x001A9A54u) [[unlikely]] return; }
L_001A9A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11184u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A6Cu); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 154u, depth + 1u); else { c.pc = 0x001A97D0u; return; } if (c.pc != 0x001A9A6Cu) [[unlikely]] return; }
L_001A9A6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 6108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_001A9AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A98u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A9A98u) [[unlikely]] return; }
L_001A9A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9AB4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x001A9AB4u) [[unlikely]] return; }
L_001A9AB4:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 39u, depth + 1u); else { c.pc = 0x001506D0u; return; } if (c.pc != 0x001A9AC4u) [[unlikely]] return; }
L_001A9AC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[3].d[0] | 12801ull;
    st64((c.r[2].w[0] + 192u), c.r[3].d[0]);
    c.budget -= 4;
L_001A9AD4:
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A9B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A9B88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B70u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0024(c, 439u, depth + 1u); else { c.pc = 0x00193EB0u; return; } if (c.pc != 0x001A9B70u) [[unlikely]] return; }
L_001A9B70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A9B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A9B88u) [[unlikely]] return; }
L_001A9B88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A9B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9BB8u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_002A(c, 155u, depth + 1u); else { c.pc = 0x001A9810u; return; } if (c.pc != 0x001A9BB8u) [[unlikely]] return; }
L_001A9BB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9BCCu); st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0024(c, 446u, depth + 1u); else { c.pc = 0x00193FA0u; return; } if (c.pc != 0x001A9BCCu) [[unlikely]] return; }
L_001A9BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A9BE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 116u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001A9C88; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C08u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 202u, depth + 1u); else { c.pc = 0x00226870u; return; } if (c.pc != 0x001A9C08u) [[unlikely]] return; }
L_001A9C08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x001A9C24u) [[unlikely]] return; }
L_001A9C24:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x001A9C3Cu) [[unlikely]] return; }
L_001A9C3C:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x001A9C54u) [[unlikely]] return; }
L_001A9C54:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C6Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x001A9C6Cu) [[unlikely]] return; }
L_001A9C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 447u, depth + 1u); else { c.pc = 0x00193FB0u; return; } if (c.pc != 0x001A9C74u) [[unlikely]] return; }
L_001A9C74:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226900u; return; } if (c.pc != 0x001A9C80u) [[unlikely]] return; }
L_001A9C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001A9C94; } }
L_001A9C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C90u);  if (depth < kMaxDepth) unit_0024(c, 447u, depth + 1u); else { c.pc = 0x00193FB0u; return; } if (c.pc != 0x001A9C90u) [[unlikely]] return; }
L_001A9C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001A9C94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001A9CB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 6108u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 8u));  c.pc = t; return; }
L_001A9CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9CFCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 158u, depth + 1u); else { c.pc = 0x001A9910u; return; } if (c.pc != 0x001A9CFCu) [[unlikely]] return; }
L_001A9CFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11248u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D30u); set32(c.r[4], ld32((c.r[17].w[0] + 180u)));  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C04E0u; return; } if (c.pc != 0x001A9D30u) [[unlikely]] return; }
L_001A9D30:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 176u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A9D98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D80u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 161u, depth + 1u); else { c.pc = 0x001A9960u; return; } if (c.pc != 0x001A9D80u) [[unlikely]] return; }
L_001A9D80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A9D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A9D98u) [[unlikely]] return; }
L_001A9D98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A9D9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9DB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9E6C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 180u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[2], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[10], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 42;
L_001A9E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E74u);  if (depth < kMaxDepth) unit_002A(c, 164u, depth + 1u); else { c.pc = 0x001A99C0u; return; } if (c.pc != 0x001A9E74u) [[unlikely]] return; }
L_001A9E74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A9E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9EA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001A9EA0u) [[unlikely]] return; }
L_001A9EA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A9EE8; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9EBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A9EBCu) [[unlikely]] return; }
L_001A9EBC:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9ED0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A9ED0u) [[unlikely]] return; }
L_001A9ED0:
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9EE4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 326u, depth + 1u); else { c.pc = 0x00192EC0u; return; } if (c.pc != 0x001A9EE4u) [[unlikely]] return; }
L_001A9EE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A9EE8:
    st32((c.r[18].w[0] + 176u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A9F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F2Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 168u, depth + 1u); else { c.pc = 0x001A9A30u; return; } if (c.pc != 0x001A9F2Cu) [[unlikely]] return; }
L_001A9F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11312u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F60u); set32(c.r[4], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C04E0u; return; } if (c.pc != 0x001A9F60u) [[unlikely]] return; }
L_001A9F60:
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 144u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001A9FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FB0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 174u, depth + 1u); else { c.pc = 0x001A9B40u; return; } if (c.pc != 0x001A9FB0u) [[unlikely]] return; }
L_001A9FB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001A9FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001A9FC8u) [[unlikely]] return; }
L_001A9FC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001A9FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A9FE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA09C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[2], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[10], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[2], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 42;
L_001AA09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0A4u);  if (depth < kMaxDepth) unit_002A(c, 177u, depth + 1u); else { c.pc = 0x001A9BA0u; return; } if (c.pc != 0x001AA0A4u) [[unlikely]] return; }
L_001AA0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AA0B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AA0D0u) [[unlikely]] return; }
L_001AA0D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AA118; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA0ECu) [[unlikely]] return; }
L_001AA0EC:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA100u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA100u) [[unlikely]] return; }
L_001AA100:
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA114u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 326u, depth + 1u); else { c.pc = 0x00192EC0u; return; } if (c.pc != 0x001AA114u) [[unlikely]] return; }
L_001AA114:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA118:
    st32((c.r[18].w[0] + 144u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AA140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA15Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 158u, depth + 1u); else { c.pc = 0x001A9910u; return; } if (c.pc != 0x001AA15Cu) [[unlikely]] return; }
L_001AA15C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], c.r[2].w[0] - 11376u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 176u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  if (t) { goto L_001AA1FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AA1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1E4u);  if (depth < kMaxDepth) unit_002A(c, 246u, depth + 1u); else { c.pc = 0x001AAA10u; return; } if (c.pc != 0x001AA1E4u) [[unlikely]] return; }
L_001AA1E4:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 100u);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001AA390; } }
L_001AA1F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 1;
L_001AA1FC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);  if (t) { goto L_001AA248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AA244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA230u);  if (depth < kMaxDepth) unit_002A(c, 248u, depth + 1u); else { c.pc = 0x001AAA70u; return; } if (c.pc != 0x001AA230u) [[unlikely]] return; }
L_001AA230:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 200u);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001AA390; } }
L_001AA244:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.budget -= 1;
L_001AA248:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);  if (t) { goto L_001AA2A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA29C; } }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 250u, depth + 1u); else { c.pc = 0x001AAAD0u; return; } if (c.pc != 0x001AA288u) [[unlikely]] return; }
L_001AA288:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 300u);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001AA390; } }
L_001AA29C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.budget -= 1;
L_001AA2A0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  if (t) { goto L_001AA2F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AA2F4; } }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA2E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 252u, depth + 1u); else { c.pc = 0x001AAB40u; return; } if (c.pc != 0x001AA2E0u) [[unlikely]] return; }
L_001AA2E0:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 400u);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001AA390; } }
L_001AA2F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.budget -= 1;
L_001AA2F8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);  if (t) { goto L_001AA348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AA344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA32Cu);  if (depth < kMaxDepth) unit_002A(c, 254u, depth + 1u); else { c.pc = 0x001AABB0u; return; } if (c.pc != 0x001AA32Cu) [[unlikely]] return; }
L_001AA32C:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], 0u + 501u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001AA390; } }
L_001AA344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.budget -= 1;
L_001AA348:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);  if (t) { goto L_001AA38C; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AA38C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA378u);  if (depth < kMaxDepth) unit_002A(c, 256u, depth + 1u); else { c.pc = 0x001AAC10u; return; } if (c.pc != 0x001AA378u) [[unlikely]] return; }
L_001AA378:
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 600u);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_001AA390; } }
L_001AA38C:
    st32((c.r[17].w[0] + 184u), 0u);
    c.budget -= 1;
L_001AA390:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AA3F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3E0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 161u, depth + 1u); else { c.pc = 0x001A9960u; return; } if (c.pc != 0x001AA3E0u) [[unlikely]] return; }
L_001AA3E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AA3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AA3F8u) [[unlikely]] return; }
L_001AA3F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AA3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA410:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AA960; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA448u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001AA448u) [[unlikely]] return; }
L_001AA448:
    set32(c.r[2], c.r[29].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], 0u + 100u);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AA544; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[1].w[0] + 6496u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4B4u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x001AA4B4u) [[unlikely]] return; }
L_001AA4B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 15688u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4C4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001AA4C4u) [[unlikely]] return; }
L_001AA4C4:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 176u);
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
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);  if (t) { goto L_001AA8A0; } }
L_001AA544:
    set32(c.r[2], 0u + 200u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_001AA5F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[1].w[0] + 6512u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA568u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x001AA568u) [[unlikely]] return; }
L_001AA568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 15680u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA578u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001AA578u) [[unlikely]] return; }
L_001AA578:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 176u);
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
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);  if (t) { goto L_001AA8A0; } }
L_001AA5F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AA6A4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[1].w[0] + 6528u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA614u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x001AA614u) [[unlikely]] return; }
L_001AA614:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 15688u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA624u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001AA624u) [[unlikely]] return; }
L_001AA624:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 176u);
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
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);  if (t) { goto L_001AA8A0; } }
L_001AA6A4:
    set32(c.r[2], 0u + 400u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 501u);  if (t) { goto L_001AA758; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[1].w[0] + 6544u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA6C8u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x001AA6C8u) [[unlikely]] return; }
L_001AA6C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 15688u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA6D8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001AA6D8u) [[unlikely]] return; }
L_001AA6D8:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 176u);
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
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);  if (t) { goto L_001AA8A0; } }
L_001AA758:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AA7F4; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[1].w[0] + 6496u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA774u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x001AA774u) [[unlikely]] return; }
L_001AA774:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 176u);
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
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);  if (t) { goto L_001AA8A0; } }
L_001AA7F4:
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AA8A0; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[1].w[0] + 6560u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA814u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x001AA814u) [[unlikely]] return; }
L_001AA814:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = ld32((c.r[1].w[0] + 15672u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA824u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001AA824u) [[unlikely]] return; }
L_001AA824:
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 176u);
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
    c.budget -= 31;
L_001AA8A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[3].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 48;
L_001AA960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 164u, depth + 1u); else { c.pc = 0x001A99C0u; return; } if (c.pc != 0x001AA968u) [[unlikely]] return; }
L_001AA968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001AA980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AA9A0u) [[unlikely]] return; }
L_001AA9A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AA9E8; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA9BCu) [[unlikely]] return; }
L_001AA9BC:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA9D0u) [[unlikely]] return; }
L_001AA9D0:
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA9E4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 326u, depth + 1u); else { c.pc = 0x00192EC0u; return; } if (c.pc != 0x001AA9E4u) [[unlikely]] return; }
L_001AA9E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA9E8:
    st32((c.r[18].w[0] + 176u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AAA10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2044u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28352u);  if (t) { goto L_001AAA4C; } }
L_001AAA24:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAA48; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AAA48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAA5C; } }
L_001AAA48:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001AAA4C:
    c.r[2].d[0] = c.r[6].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAA24u | kUnwind; return; } goto L_001AAA24; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AAA5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAA70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2067u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28352u);  if (t) { goto L_001AAAAC; } }
L_001AAA84:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAAA8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AAAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAABC; } }
L_001AAAA8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001AAAAC:
    c.r[2].d[0] = c.r[6].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAA84u | kUnwind; return; } goto L_001AAA84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AAABC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAAD0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2061u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28352u);  if (t) { goto L_001AAB1C; } }
L_001AAAE8:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAB18; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AAB18; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_001AAB14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAB2C; } }
L_001AAB14:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001AAB18:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001AAB1C:
    c.r[2].d[0] = c.r[7].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAAE8u | kUnwind; return; } goto L_001AAAE8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AAB2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAB40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2031u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28352u);  if (t) { goto L_001AAB8C; } }
L_001AAB58:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAB88; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AAB88; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_001AAB84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAB9C; } }
L_001AAB84:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001AAB88:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001AAB8C:
    c.r[2].d[0] = c.r[7].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAB58u | kUnwind; return; } goto L_001AAB58; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AAB9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AABB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2055u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28352u);  if (t) { goto L_001AABEC; } }
L_001AABC4:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AABE8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AABE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AABFC; } }
L_001AABE8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001AABEC:
    c.r[2].d[0] = c.r[6].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AABC4u | kUnwind; return; } goto L_001AABC4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AABFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAC10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2032u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28352u);  if (t) { goto L_001AAC4C; } }
L_001AAC24:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAC48; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AAC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAC5C; } }
L_001AAC48:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001AAC4C:
    c.r[2].d[0] = c.r[6].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AAC24u | kUnwind; return; } goto L_001AAC24; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AAC5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC8Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 158u, depth + 1u); else { c.pc = 0x001A9910u; return; } if (c.pc != 0x001AAC8Cu) [[unlikely]] return; }
L_001AAC8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[17].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] - 11440u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 176u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AACF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AAD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD20u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 161u, depth + 1u); else { c.pc = 0x001A9960u; return; } if (c.pc != 0x001AAD20u) [[unlikely]] return; }
L_001AAD20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AAD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AAD38u) [[unlikely]] return; }
L_001AAD38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AAD3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AAD50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AAE30; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AADA0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x001AAD88u) [[unlikely]] return; }
L_001AAD88:
    set32(c.r[25], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AAD98u) [[unlikely]] return; }
L_001AAD98:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 2;
L_001AADA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AADC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_001AADF4; } }
L_001AADC4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001AADD8; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AADF0; } }
L_001AADD8:
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 6;
L_001AADF0:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001AADF4:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AAE00u) [[unlikely]] return; }
L_001AAE00:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE18u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001AAE18u) [[unlikely]] return; }
L_001AAE18:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 6;
L_001AAE30:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 160u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE44u); st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002A(c, 164u, depth + 1u); else { c.pc = 0x001A99C0u; return; } if (c.pc != 0x001AAE44u) [[unlikely]] return; }
L_001AAE44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AAE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE7Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 168u, depth + 1u); else { c.pc = 0x001A9A30u; return; } if (c.pc != 0x001AAE7Cu) [[unlikely]] return; }
L_001AAE7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[17].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 11504u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 144u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AAEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AAF28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF10u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 174u, depth + 1u); else { c.pc = 0x001A9B40u; return; } if (c.pc != 0x001AAF10u) [[unlikely]] return; }
L_001AAF10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AAF2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AAF28u) [[unlikely]] return; }
L_001AAF28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AAF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AAF40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AB020; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AAF90; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x001AAF78u) [[unlikely]] return; }
L_001AAF78:
    set32(c.r[25], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AAF88u) [[unlikely]] return; }
L_001AAF88:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 2;
L_001AAF90:
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AAFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_001AAFE4; } }
L_001AAFB4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001AAFC8; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAFE0; } }
L_001AAFC8:
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 6;
L_001AAFE0:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001AAFE4:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAFF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AAFF0u) [[unlikely]] return; }
L_001AAFF0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[16].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB008u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0011(c, 18u, depth + 1u); else { c.pc = 0x00144460u; return; } if (c.pc != 0x001AB008u) [[unlikely]] return; }
L_001AB008:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 6;
L_001AB020:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB034u); st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002A(c, 177u, depth + 1u); else { c.pc = 0x001A9BA0u; return; } if (c.pc != 0x001AB034u) [[unlikely]] return; }
L_001AB034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AB050:
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AB064; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AB064:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AB078; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001AB078:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[9], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[9], c.r[9].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    fpu_div(c, 5u, c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[10].w[0]);
    c.f[0] = c.r[7].w[0];
    c.f[1] = c.r[9].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[5]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    set32(c.r[5], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 54;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  c.pc = t; return; }
L_001AB150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB168u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001AB168u) [[unlikely]] return; }
L_001AB168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10656u);
    set32(c.r[3], c.r[3].w[0] - 10640u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10624u);
    set32(c.r[5], 0u + 10001u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001AB1A4u) [[unlikely]] return; }
L_001AB1A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1B4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001AB1B4u) [[unlikely]] return; }
L_001AB1B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x001AB1C4u) [[unlikely]] return; }
L_001AB1C4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1D8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB1D8u) [[unlikely]] return; }
L_001AB1D8:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001AB214u) [[unlikely]] return; }
L_001AB214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10720u);
    set32(c.r[2], c.r[2].w[0] - 10704u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10688u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB250:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001AB298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB26Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AB26Cu) [[unlikely]] return; }
L_001AB26C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001AB290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB280u);  if (depth < kMaxDepth) unit_004F(c, 130u, depth + 1u); else { c.pc = 0x0023DDF0u; return; } if (c.pc != 0x001AB280u) [[unlikely]] return; }
L_001AB280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB28Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x001AB28Cu) [[unlikely]] return; }
L_001AB28C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AB290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AB3DC; } }
L_001AB298:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001AB3D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2ACu); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AB2ACu) [[unlikely]] return; }
L_001AB2AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_001AB2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x001AB2BCu) [[unlikely]] return; }
L_001AB2BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 1;
L_001AB2C0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[3], 0u + 16u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[2].w[0] + 164u), c.r[5].w[0]);  if (t) { goto L_001AB2F0; } }
L_001AB2D4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB2D4u | kUnwind; return; } goto L_001AB2D4; } }
L_001AB2F0:
    set32(c.r[3], 0u + 160u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 88u), 0u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[5]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 256u) & ~15u, c.r[5]);  if (t) { goto L_001AB334; } }
L_001AB318:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB318u | kUnwind; return; } goto L_001AB318; } }
L_001AB334:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[5]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 272u) & ~15u, c.r[5]);  if (t) { goto L_001AB374; } }
L_001AB358:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB358u | kUnwind; return; } goto L_001AB358; } }
L_001AB374:
    set32(c.r[3], 0u + 160u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 56u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 288u) & ~15u, c.r[5]);  if (t) { goto L_001AB3B8; } }
L_001AB39C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB39Cu | kUnwind; return; } goto L_001AB39C; } }
L_001AB3B8:
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 304u) & ~15u, c.r[3]);  if (t) { goto L_001AB3DC; } }
L_001AB3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3DCu);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x00196FD0u; return; } if (c.pc != 0x001AB3DCu) [[unlikely]] return; }
L_001AB3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AB3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001AB404u) [[unlikely]] return; }
L_001AB404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10784u);
    set32(c.r[2], c.r[2].w[0] - 10768u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10752u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001AB47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB458u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AB458u) [[unlikely]] return; }
L_001AB458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB5C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 752u)));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB474u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x001AB474u) [[unlikely]] return; }
L_001AB474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001AB5C4; } }
L_001AB47C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001AB5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB490u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AB490u) [[unlikely]] return; }
L_001AB490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_001AB4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB4A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x001AB4A0u) [[unlikely]] return; }
L_001AB4A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 1;
L_001AB4A4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[3], 0u + 16u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[2].w[0] + 164u), c.r[5].w[0]);  if (t) { goto L_001AB4D4; } }
L_001AB4B8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB4B8u | kUnwind; return; } goto L_001AB4B8; } }
L_001AB4D4:
    set32(c.r[3], 0u + 160u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 72u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[5]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 256u) & ~15u, c.r[5]);  if (t) { goto L_001AB518; } }
L_001AB4FC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB4FCu | kUnwind; return; } goto L_001AB4FC; } }
L_001AB518:
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 272u) & ~15u, c.r[5]);  if (t) { goto L_001AB558; } }
L_001AB53C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB53Cu | kUnwind; return; } goto L_001AB53C; } }
L_001AB558:
    set32(c.r[3], 0u + 160u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 40u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[5]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 288u) & ~15u, c.r[5]);  if (t) { goto L_001AB59C; } }
L_001AB580:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB580u | kUnwind; return; } goto L_001AB580; } }
L_001AB59C:
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 304u) & ~15u, c.r[3]);  if (t) { goto L_001AB5C0; } }
L_001AB5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5C0u);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x00196FD0u; return; } if (c.pc != 0x001AB5C0u) [[unlikely]] return; }
L_001AB5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001AB5C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AB5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001AB5E4u) [[unlikely]] return; }
L_001AB5E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10848u);
    set32(c.r[2], c.r[2].w[0] - 10832u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10816u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001AB75C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB634u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AB634u) [[unlikely]] return; }
L_001AB634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_001AB648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 183u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x001AB644u) [[unlikely]] return; }
L_001AB644:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 1;
L_001AB648:
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[2].w[0] + 160u), c.r[5].w[0]);
    set32(c.r[3], 0u + 16u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[2].w[0] + 164u), c.r[5].w[0]);  if (t) { goto L_001AB678; } }
L_001AB65C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB65Cu | kUnwind; return; } goto L_001AB65C; } }
L_001AB678:
    set32(c.r[3], 0u + 160u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 72u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[5]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 256u) & ~15u, c.r[5]);  if (t) { goto L_001AB6BC; } }
L_001AB6A0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB6A0u | kUnwind; return; } goto L_001AB6A0; } }
L_001AB6BC:
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[5]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 272u) & ~15u, c.r[5]);  if (t) { goto L_001AB6FC; } }
L_001AB6E0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB6E0u | kUnwind; return; } goto L_001AB6E0; } }
L_001AB6FC:
    set32(c.r[3], 0u + 160u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[3], 0u + 16u);
    st32((c.r[29].w[0] + 40u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[5]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st128((c.r[2].w[0] + 288u) & ~15u, c.r[5]);  if (t) { goto L_001AB740; } }
L_001AB724:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB724u | kUnwind; return; } goto L_001AB724; } }
L_001AB740:
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 304u) & ~15u, c.r[3]);  if (t) { goto L_001AB764; } }
L_001AB75C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB764u);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x00196FD0u; return; } if (c.pc != 0x001AB764u) [[unlikely]] return; }
L_001AB764:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AB770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001AB784u) [[unlikely]] return; }
L_001AB784:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10912u);
    set32(c.r[2], c.r[2].w[0] - 10896u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10880u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 9u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_001AB850; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AB850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45560000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[5].d[0] = c.r[2].d[0] | 21332ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4516u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB810u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001AB810u) [[unlikely]] return; }
L_001AB810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001AB81C; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001AB81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB824u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AB824u) [[unlikely]] return; }
L_001AB824:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AB848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB838u);  if (depth < kMaxDepth) unit_0077(c, 300u, depth + 1u); else { c.pc = 0x002DF250u; return; } if (c.pc != 0x001AB838u) [[unlikely]] return; }
L_001AB838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB844u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x001AB844u) [[unlikely]] return; }
L_001AB844:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AB848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AB858; } }
L_001AB850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB858u);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x00196FD0u; return; } if (c.pc != 0x001AB858u) [[unlikely]] return; }
L_001AB858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB88Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 262u, depth + 1u); else { c.pc = 0x0014ACF0u; return; } if (c.pc != 0x001AB88Cu) [[unlikely]] return; }
L_001AB88C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17888u);
    set32(c.r[4], c.r[16].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8A4u); st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001AB8A4u) [[unlikely]] return; }
L_001AB8A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10992u);
    set32(c.r[2], c.r[2].w[0] - 10932u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.f[14] = 0u;
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1424u)));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1416u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[16].w[0] + 160u), c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 38;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB93Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB93Cu) [[unlikely]] return; }
L_001AB93C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB960:
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AB970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB98Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001AB98Cu) [[unlikely]] return; }
L_001AB98C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11056u);
    set32(c.r[4], c.r[17].w[0] + 160u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11040u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9BCu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 330u, depth + 1u); else { c.pc = 0x001AB870u; return; } if (c.pc != 0x001AB9BCu) [[unlikely]] return; }
L_001AB9BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ABA58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10992u);
    set32(c.r[2], c.r[2].w[0] - 10932u);
    st32((c.r[17].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 256u);
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001ABA20u) [[unlikely]] return; }
L_001ABA20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001ABA44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17888u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA40u); st32((c.r[17].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x001ABA40u) [[unlikely]] return; }
L_001ABA40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001ABA44:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ABA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ABA58u) [[unlikely]] return; }
L_001ABA58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ABA5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ABA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001ABAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA88u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001ABA88u) [[unlikely]] return; }
L_001ABA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001ABAA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 262u, depth + 1u); else { c.pc = 0x0014ACF0u; return; } if (c.pc != 0x001ABA98u) [[unlikely]] return; }
L_001ABA98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 17888u);
    st32((c.r[16].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABAA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_001ABAC0; } }
L_001ABAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAC0u);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x00196FD0u; return; } if (c.pc != 0x001ABAC0u) [[unlikely]] return; }
L_001ABAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABAD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001ABAFCu) [[unlikely]] return; }
L_001ABAFC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB0Cu); set32(c.r[4], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001ABB0Cu) [[unlikely]] return; }
L_001ABB0C:
    st32((c.r[16].w[0] + 336u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 340u), 0u);
    set32(c.r[5], 0u + 10011u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001ABB2Cu) [[unlikely]] return; }
L_001ABB2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB3Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001ABB3Cu) [[unlikely]] return; }
L_001ABB3C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB50u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x001ABB50u) [[unlikely]] return; }
L_001ABB50:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB60u); set32(c.r[4], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x001ABB60u) [[unlikely]] return; }
L_001ABB60:
    set32(c.r[2], c.r[16].w[0] + 320u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001ABB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ABBDC; } }
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x001ABBB8u) [[unlikely]] return; }
L_001ABBB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x001ABBC4u) [[unlikely]] return; }
L_001ABBC4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ABBE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ABBDCu) [[unlikely]] return; }
L_001ABBDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ABBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ABC00:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { st128((c.r[4].w[0] + 320u) & ~15u, c.r[2]);  goto L_001ABC40; }
L_001ABC10:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 340u), c.f[12]);  goto L_001ABC40; }
L_001ABC20:
    st32((c.r[4].w[0] + 336u), c.r[5].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 320u) & ~15u, c.r[2]);
    c.budget -= 5;
    { st32((c.r[4].w[0] + 340u), c.f[12]);  goto L_001ABC40; }
L_001ABC40:
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[29], c.r[29].w[0] - 32u);  if (t) { goto L_001ABC98; } }
    ld128((c.r[4].w[0] + 320u) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 256u) & ~15u, c.r[3]);  if (t) { goto L_001ABCE4; } }
L_001ABC98:
    ld128((c.r[4].w[0] + 320u) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.f[2] = c.r[3].w[0];
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 256u) & ~15u, c.r[3]);
    c.budget -= 19;
L_001ABCE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ABCF0:
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001ABD00:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ABD30:
    set32(c.r[5], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 160u);
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ABD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(6ll);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(7ll);  if (t) { goto L_001ABD8C; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(5ll);
    c.budget -= 2;
L_001ABD8C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABD9Cu) [[unlikely]] return; }
L_001ABD9C:
    set32(c.r[25], ld32((c.r[17].w[0] + 160u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDB0u); set32(c.r[4], c.r[17].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABDB0u) [[unlikely]] return; }
L_001ABDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ABDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(10ll);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(11ll);  if (t) { goto L_001ABDFC; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(9ll);
    c.budget -= 2;
L_001ABDFC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABE0Cu) [[unlikely]] return; }
L_001ABE0C:
    set32(c.r[25], ld32((c.r[17].w[0] + 160u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE20u); set32(c.r[4], c.r[17].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABE20u) [[unlikely]] return; }
L_001ABE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ABE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ABEA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10912u);
    set32(c.r[3], c.r[3].w[0] - 10896u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10880u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE88u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x001ABE88u) [[unlikely]] return; }
L_001ABE88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ABEA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ABEA0u) [[unlikely]] return; }
L_001ABEA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ABEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ABEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ABF20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10848u);
    set32(c.r[3], c.r[3].w[0] - 10832u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10816u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF08u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x001ABF08u) [[unlikely]] return; }
L_001ABF08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ABF24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ABF20u) [[unlikely]] return; }
L_001ABF20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ABF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ABF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ABFA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10784u);
    set32(c.r[3], c.r[3].w[0] - 10768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10752u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF88u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x001ABF88u) [[unlikely]] return; }
L_001ABF88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ABFA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABFA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ABFA0u) [[unlikely]] return; }
L_001ABFA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ABFA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ABFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10656u);
    set32(c.r[3], c.r[3].w[0] - 10640u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10624u);
    c.budget -= 9;
    [[clang::musttail]] return unit_002B(c, 1u, depth);
}

}
