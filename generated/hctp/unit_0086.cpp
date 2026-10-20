#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0086[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20,
    0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60,
    0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0,
    121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
};

void unit_0086(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00318000;
    case 2u: goto L_00318008;
    case 3u: goto L_0031801C;
    case 4u: goto L_00318028;
    case 5u: goto L_00318044;
    case 6u: goto L_00318078;
    case 7u: goto L_00318080;
    case 8u: goto L_00318094;
    case 9u: goto L_003180A8;
    case 10u: goto L_003180CC;
    case 11u: goto L_003180E0;
    case 12u: goto L_0031810C;
    case 13u: goto L_00318140;
    case 14u: goto L_00318144;
    case 15u: goto L_00318160;
    case 16u: goto L_0031817C;
    case 17u: goto L_003181BC;
    case 18u: goto L_003181D0;
    case 19u: goto L_003181E8;
    case 20u: goto L_003181FC;
    case 21u: goto L_0031820C;
    case 22u: goto L_0031821C;
    case 23u: goto L_0031822C;
    case 24u: goto L_0031829C;
    case 25u: goto L_003182AC;
    case 26u: goto L_003182C0;
    case 27u: goto L_003182D0;
    case 28u: goto L_003182E0;
    case 29u: goto L_003182F0;
    case 30u: goto L_00318360;
    case 31u: goto L_003183C8;
    case 32u: goto L_003183DC;
    case 33u: goto L_003183EC;
    case 34u: goto L_003183FC;
    case 35u: goto L_0031840C;
    case 36u: goto L_0031841C;
    case 37u: goto L_00318448;
    case 38u: goto L_0031846C;
    case 39u: goto L_00318484;
    case 40u: goto L_00318498;
    case 41u: goto L_003184A8;
    case 42u: goto L_003184B8;
    case 43u: goto L_003184C8;
    case 44u: goto L_003184E4;
    case 45u: goto L_003184F0;
    case 46u: goto L_00318504;
    case 47u: goto L_00318514;
    case 48u: goto L_00318524;
    case 49u: goto L_00318534;
    case 50u: goto L_00318550;
    case 51u: goto L_00318558;
    case 52u: goto L_00318568;
    case 53u: goto L_00318574;
    case 54u: goto L_00318584;
    case 55u: goto L_003185A0;
    case 56u: goto L_003185B4;
    case 57u: goto L_003185C0;
    case 58u: goto L_003185D8;
    case 59u: goto L_003185E4;
    case 60u: goto L_003185FC;
    case 61u: goto L_00318608;
    case 62u: goto L_00318614;
    case 63u: goto L_0031861C;
    case 64u: goto L_00318630;
    case 65u: goto L_00318680;
    case 66u: goto L_00318724;
    case 67u: goto L_00318744;
    case 68u: goto L_00318760;
    case 69u: goto L_00318770;
    case 70u: goto L_003187C8;
    case 71u: goto L_003187E4;
    case 72u: goto L_00318804;
    case 73u: goto L_0031882C;
    case 74u: goto L_0031886C;
    case 75u: goto L_00318888;
    case 76u: goto L_00318894;
    case 77u: goto L_003188BC;
    case 78u: goto L_003188F8;
    case 79u: goto L_00318934;
    case 80u: goto L_00318948;
    case 81u: goto L_00318984;
    case 82u: goto L_003189A0;
    case 83u: goto L_003189A8;
    case 84u: goto L_003189C8;
    case 85u: goto L_003189D0;
    case 86u: goto L_003189E8;
    case 87u: goto L_003189F0;
    case 88u: goto L_00318A04;
    case 89u: goto L_00318A3C;
    case 90u: goto L_00318A54;
    case 91u: goto L_00318A60;
    case 92u: goto L_00318A98;
    case 93u: goto L_00318AC8;
    case 94u: goto L_00318AF8;
    case 95u: goto L_00318B0C;
    case 96u: goto L_00318B3C;
    case 97u: goto L_00318B50;
    case 98u: goto L_00318B70;
    case 99u: goto L_00318B90;
    case 100u: goto L_00318BBC;
    case 101u: goto L_00318BC8;
    case 102u: goto L_00318BF0;
    case 103u: goto L_00318C04;
    case 104u: goto L_00318C0C;
    case 105u: goto L_00318C14;
    case 106u: goto L_00318C30;
    case 107u: goto L_00318C48;
    case 108u: goto L_00318C68;
    case 109u: goto L_00318C80;
    case 110u: goto L_00318C94;
    case 111u: goto L_00318C9C;
    case 112u: goto L_00318CB0;
    case 113u: goto L_00318CC8;
    case 114u: goto L_00318CE8;
    case 115u: goto L_00318D00;
    case 116u: goto L_00318D10;
    case 117u: goto L_00318D44;
    case 118u: goto L_00318D5C;
    case 119u: goto L_00318D70;
    case 120u: goto L_00318D78;
    case 121u: goto L_00318D80;
    case 122u: goto L_00318D88;
    case 123u: goto L_00318D90;
    case 124u: goto L_00318DA0;
    case 125u: goto L_00318E10;
    case 126u: goto L_00318F10;
    case 127u: goto L_00318F8C;
    case 128u: goto L_00318FB0;
    case 129u: goto L_00318FF8;
    case 130u: goto L_00319030;
    case 131u: goto L_00319040;
    case 132u: goto L_00319060;
    case 133u: goto L_003190DC;
    case 134u: goto L_00319204;
    case 135u: goto L_00319244;
    case 136u: goto L_00319284;
    case 137u: goto L_003192A0;
    case 138u: goto L_003192B4;
    case 139u: goto L_003192F4;
    case 140u: goto L_00319304;
    case 141u: goto L_0031930C;
    case 142u: goto L_00319318;
    case 143u: goto L_00319328;
    case 144u: goto L_00319330;
    case 145u: goto L_0031933C;
    case 146u: goto L_0031934C;
    case 147u: goto L_00319354;
    case 148u: goto L_00319364;
    case 149u: goto L_00319398;
    case 150u: goto L_003193CC;
    case 151u: goto L_0031942C;
    case 152u: goto L_0031944C;
    case 153u: goto L_003194B4;
    case 154u: goto L_003194C8;
    case 155u: goto L_003194E4;
    case 156u: goto L_00319570;
    case 157u: goto L_00319590;
    case 158u: goto L_003195D0;
    case 159u: goto L_00319664;
    case 160u: goto L_00319678;
    case 161u: goto L_0031971C;
    case 162u: goto L_00319730;
    case 163u: goto L_003197C8;
    case 164u: goto L_003197DC;
    case 165u: goto L_00319818;
    case 166u: goto L_00319824;
    case 167u: goto L_0031982C;
    case 168u: goto L_00319848;
    case 169u: goto L_00319854;
    case 170u: goto L_00319888;
    case 171u: goto L_00319908;
    case 172u: goto L_00319920;
    case 173u: goto L_0031995C;
    case 174u: goto L_003199B4;
    case 175u: goto L_003199C8;
    case 176u: goto L_003199E4;
    case 177u: goto L_00319A3C;
    case 178u: goto L_00319A60;
    case 179u: goto L_00319A6C;
    case 180u: goto L_00319AAC;
    case 181u: goto L_00319B00;
    case 182u: goto L_00319B18;
    case 183u: goto L_00319B24;
    case 184u: goto L_00319B3C;
    case 185u: goto L_00319B94;
    case 186u: goto L_00319C04;
    case 187u: goto L_00319C18;
    case 188u: goto L_00319C20;
    case 189u: goto L_00319C34;
    case 190u: goto L_00319C58;
    case 191u: goto L_00319CA0;
    case 192u: goto L_00319CB8;
    case 193u: goto L_00319CE8;
    case 194u: goto L_00319D00;
    case 195u: goto L_00319D18;
    case 196u: goto L_00319D24;
    case 197u: goto L_00319D30;
    case 198u: goto L_00319D78;
    case 199u: goto L_00319D8C;
    case 200u: goto L_00319DA4;
    case 201u: goto L_00319DB0;
    case 202u: goto L_00319DBC;
    case 203u: goto L_00319E40;
    case 204u: goto L_00319E54;
    case 205u: goto L_00319EE0;
    case 206u: goto L_00319FDC;
    case 207u: goto L_0031A000;
    case 208u: goto L_0031A018;
    case 209u: goto L_0031A024;
    case 210u: goto L_0031A064;
    case 211u: goto L_0031A088;
    case 212u: goto L_0031A104;
    case 213u: goto L_0031A204;
    case 214u: goto L_0031A24C;
    case 215u: goto L_0031A290;
    case 216u: goto L_0031A2A0;
    case 217u: goto L_0031A378;
    case 218u: goto L_0031A3B0;
    case 219u: goto L_0031A3D0;
    case 220u: goto L_0031A3D8;
    case 221u: goto L_0031A490;
    case 222u: goto L_0031A4C8;
    case 223u: goto L_0031A4E8;
    case 224u: goto L_0031A4F0;
    case 225u: goto L_0031A504;
    case 226u: goto L_0031A598;
    case 227u: goto L_0031A5D0;
    case 228u: goto L_0031A640;
    case 229u: goto L_0031A650;
    case 230u: goto L_0031A670;
    case 231u: goto L_0031A6B8;
    case 232u: goto L_0031A720;
    case 233u: goto L_0031A748;
    case 234u: goto L_0031A77C;
    case 235u: goto L_0031A79C;
    case 236u: goto L_0031A7B0;
    case 237u: goto L_0031A814;
    case 238u: goto L_0031A848;
    case 239u: goto L_0031A880;
    case 240u: goto L_0031A8FC;
    case 241u: goto L_0031A920;
    case 242u: goto L_0031A928;
    case 243u: goto L_0031A970;
    case 244u: goto L_0031AA20;
    case 245u: goto L_0031AA30;
    case 246u: goto L_0031AA44;
    case 247u: goto L_0031AAA8;
    case 248u: goto L_0031AAE0;
    case 249u: goto L_0031AB18;
    case 250u: goto L_0031AB38;
    case 251u: goto L_0031ABB4;
    case 252u: goto L_0031ABBC;
    case 253u: goto L_0031ABDC;
    case 254u: goto L_0031AC38;
    case 255u: goto L_0031ACE8;
    case 256u: goto L_0031ACF8;
    case 257u: goto L_0031AD0C;
    case 258u: goto L_0031AD70;
    case 259u: goto L_0031ADA8;
    case 260u: goto L_0031ADE0;
    case 261u: goto L_0031AE00;
    case 262u: goto L_0031AE50;
    case 263u: goto L_0031AE9C;
    case 264u: goto L_0031AEAC;
    case 265u: goto L_0031AEEC;
    case 266u: goto L_0031AF04;
    case 267u: goto L_0031AF28;
    case 268u: goto L_0031AF30;
    case 269u: goto L_0031AFBC;
    case 270u: goto L_0031AFF4;
    case 271u: goto L_0031B004;
    case 272u: goto L_0031B0B0;
    case 273u: goto L_0031B248;
    case 274u: goto L_0031B260;
    case 275u: goto L_0031B298;
    case 276u: goto L_0031B2A8;
    case 277u: goto L_0031B2C0;
    case 278u: goto L_0031B2E0;
    case 279u: goto L_0031B344;
    case 280u: goto L_0031B36C;
    case 281u: goto L_0031B3A8;
    case 282u: goto L_0031B3B8;
    case 283u: goto L_0031B3C0;
    case 284u: goto L_0031B3F8;
    case 285u: goto L_0031B408;
    case 286u: goto L_0031B41C;
    case 287u: goto L_0031B458;
    case 288u: goto L_0031B468;
    case 289u: goto L_0031B480;
    case 290u: goto L_0031B4AC;
    case 291u: goto L_0031B4D0;
    case 292u: goto L_0031B534;
    case 293u: goto L_0031B544;
    case 294u: goto L_0031B580;
    case 295u: goto L_0031B5DC;
    case 296u: goto L_0031B624;
    case 297u: goto L_0031B670;
    case 298u: goto L_0031B688;
    case 299u: goto L_0031B6CC;
    case 300u: goto L_0031B6E0;
    case 301u: goto L_0031B704;
    case 302u: goto L_0031B71C;
    case 303u: goto L_0031B734;
    case 304u: goto L_0031B744;
    case 305u: goto L_0031B75C;
    case 306u: goto L_0031B778;
    case 307u: goto L_0031B7B0;
    case 308u: goto L_0031B7F4;
    case 309u: goto L_0031B820;
    case 310u: goto L_0031B884;
    case 311u: goto L_0031B8A0;
    case 312u: goto L_0031B8E8;
    case 313u: goto L_0031B900;
    case 314u: goto L_0031B928;
    case 315u: goto L_0031B934;
    case 316u: goto L_0031B93C;
    case 317u: goto L_0031B950;
    case 318u: goto L_0031B9E0;
    case 319u: goto L_0031B9F4;
    case 320u: goto L_0031BA78;
    case 321u: goto L_0031BABC;
    case 322u: goto L_0031BAD0;
    case 323u: goto L_0031BAEC;
    case 324u: goto L_0031BB00;
    case 325u: goto L_0031BB40;
    case 326u: goto L_0031BB64;
    case 327u: goto L_0031BB70;
    case 328u: goto L_0031BB90;
    case 329u: goto L_0031BC00;
    case 330u: goto L_0031BC20;
    case 331u: goto L_0031BC50;
    case 332u: goto L_0031BC7C;
    case 333u: goto L_0031BC88;
    case 334u: goto L_0031BCA0;
    case 335u: goto L_0031BCEC;
    case 336u: goto L_0031BD00;
    case 337u: goto L_0031BD70;
    case 338u: goto L_0031BDEC;
    case 339u: goto L_0031BDFC;
    case 340u: goto L_0031BE20;
    case 341u: goto L_0031BE34;
    case 342u: goto L_0031BE60;
    case 343u: goto L_0031BE84;
    case 344u: goto L_0031BEA0;
    case 345u: goto L_0031BEBC;
    case 346u: goto L_0031BEE0;
    case 347u: goto L_0031BF10;
    case 348u: goto L_0031BF60;
    case 349u: goto L_0031BF88;
    case 350u: goto L_0031BFC0;
    case 351u: goto L_0031BFF0;
    default: bad_entry(c, 0x00318000u); return;
    }
L_00318000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318008u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00318008u) [[unlikely]] return; }
L_00318008:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00318020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031801Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 405u, depth + 1u); else { c.pc = 0x0026FBA0u; return; } if (c.pc != 0x0031801Cu) [[unlikely]] return; }
L_0031801C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00318020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.r[4].w[0]);  if (t) { goto L_00318080; } }
L_00318028:
    set32(c.r[5], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00318050; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318044u) [[unlikely]] return; }
L_00318044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318078; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00318050:
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 608u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00318140; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318078u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318078u) [[unlikely]] return; }
L_00318078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318140; } }
L_00318080:
    set32(c.r[17], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00318140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318094u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00318094u) [[unlikely]] return; }
L_00318094:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003180AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180A8u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003180A8u) [[unlikely]] return; }
L_003180A8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003180AC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318140; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00318140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180CCu); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003180CCu) [[unlikely]] return; }
L_003180CC:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003180E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003180E0u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003180E0u) [[unlikely]] return; }
L_003180E0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003180E4:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318140; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00318118; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031810Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031810Cu) [[unlikely]] return; }
L_0031810C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318140; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00318118:
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 608u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00318140; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318140u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318140u) [[unlikely]] return; }
L_00318140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00318144:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00318160:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031817Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x0031817Cu) [[unlikely]] return; }
L_0031817C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003181BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] - 6512u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181BCu); set32(c.r[4], ld32((c.r[2].w[0] + 64u)));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003181BCu) [[unlikely]] return; }
L_003181BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181D0u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0086(c, 350u, depth + 1u); else { c.pc = 0x0031BFC0u; return; } if (c.pc != 0x003181D0u) [[unlikely]] return; }
L_003181D0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 160u);  if (t) { goto L_003183C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181E8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003181E8u) [[unlikely]] return; }
L_003181E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003181FC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003181FCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x003181FCu) [[unlikely]] return; }
L_003181FC:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031820Cu); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0031820Cu) [[unlikely]] return; }
L_0031820C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031821Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0031821Cu) [[unlikely]] return; }
L_0031821C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031822Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0031822Cu) [[unlikely]] return; }
L_0031822C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[1].w[0] - 13384u));
    set32(c.r[7], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432E0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[7].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 13384u));
    st32((c.r[7].w[0] + 116u), c.f[1]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031829Cu); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031829Cu) [[unlikely]] return; }
L_0031829C:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182ACu); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003182ACu) [[unlikely]] return; }
L_003182AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003182C0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182C0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x003182C0u) [[unlikely]] return; }
L_003182C0:
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182D0u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003182D0u) [[unlikely]] return; }
L_003182D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182E0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003182E0u) [[unlikely]] return; }
L_003182E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003182F0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003182F0u) [[unlikely]] return; }
L_003182F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[1].w[0] - 13384u));
    set32(c.r[7], ld32((c.r[17].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432E0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[7].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 13384u));
    st32((c.r[7].w[0] + 116u), c.f[1]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318360u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318360u) [[unlikely]] return; }
L_00318360:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], 0u + 3u);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_003183BC; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439B0000u);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 104u), c.f[0]);
    st32((c.r[5].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 17;
L_003183BC:
    set32(c.r[4], 0u + 160u);
    c.budget -= 1;
L_003183C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003183C8u) [[unlikely]] return; }
L_003183C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003183DC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183DCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x003183DCu) [[unlikely]] return; }
L_003183DC:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183ECu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003183ECu) [[unlikely]] return; }
L_003183EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003183FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003183FCu) [[unlikely]] return; }
L_003183FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031840Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0031840Cu) [[unlikely]] return; }
L_0031840C:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031841Cu); st32((c.r[2].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x0031841Cu) [[unlikely]] return; }
L_0031841C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00318450; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031846C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318448u); set32(c.r[5], 0u + 97u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318448u) [[unlikely]] return; }
L_00318448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_00318470; } }
L_00318450:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031846C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031846Cu); set32(c.r[5], 0u + 91u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031846Cu) [[unlikely]] return; }
L_0031846C:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_00318470:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 160u);  if (t) { goto L_003184E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318484u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00318484u) [[unlikely]] return; }
L_00318484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00318498; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318498u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00318498u) [[unlikely]] return; }
L_00318498:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184A8u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003184A8u) [[unlikely]] return; }
L_003184A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003184B8u) [[unlikely]] return; }
L_003184B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003184C8u) [[unlikely]] return; }
L_003184C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003184E4u); set32(c.r[5], 0u + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003184E4u) [[unlikely]] return; }
L_003184E4:
    set32(c.r[4], 0u + 160u);
    c.budget -= 1;
L_003184E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003184F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003184F0u) [[unlikely]] return; }
L_003184F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00318504; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318504u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00318504u) [[unlikely]] return; }
L_00318504:
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318514u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00318514u) [[unlikely]] return; }
L_00318514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318524u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00318524u) [[unlikely]] return; }
L_00318524:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318534u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00318534u) [[unlikely]] return; }
L_00318534:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318550u); set32(c.r[5], 0u + 93u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318550u) [[unlikely]] return; }
L_00318550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318558u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00318558u) [[unlikely]] return; }
L_00318558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00318568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318568u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00318568u) [[unlikely]] return; }
L_00318568:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318574u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00318574u) [[unlikely]] return; }
L_00318574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00318584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318584u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00318584u) [[unlikely]] return; }
L_00318584:
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185A0u); st32((c.r[3].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0086(c, 297u, depth + 1u); else { c.pc = 0x0031B670u; return; } if (c.pc != 0x003185A0u) [[unlikely]] return; }
L_003185A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185B4u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003185B4u) [[unlikely]] return; }
L_003185B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185C0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003185C0u) [[unlikely]] return; }
L_003185C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003185D8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 208u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003185D8u) [[unlikely]] return; }
L_003185D8:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185E4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003185E4u) [[unlikely]] return; }
L_003185E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031860C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003185FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 30u, depth + 1u); else { c.pc = 0x0031C320u; return; } if (c.pc != 0x003185FCu) [[unlikely]] return; }
L_003185FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318608u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00318608u) [[unlikely]] return; }
L_00318608:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031860C:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00318614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031861Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031861Cu) [[unlikely]] return; }
L_0031861C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_00318638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318630u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00318630u) [[unlikely]] return; }
L_00318630:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00318638:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 108u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318614u | kUnwind; return; } goto L_00318614; } }
    set32(c.r[4], 0u + 23u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 585u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00318680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 512u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003186C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 51u);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003186C0; } }
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 2;
L_003186C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 512u)));
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003186F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] + 51u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003186F4; } }
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 2;
L_003186F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 512u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318744; } }
    set32(c.r[2], 0u + 255u);
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 124u, depth + 1u); else { c.pc = 0x00318DA0u; return; } if (c.pc != 0x00318724u) [[unlikely]] return; }
L_00318724:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00318744; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318744u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318744u) [[unlikely]] return; }
L_00318744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318760:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00318770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 552u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));  if (t) { goto L_0031889C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00318BD0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00318BD0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031885C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003187C8u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003187C8u) [[unlikely]] return; }
L_003187C8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003187EC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003187E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003187E4u) [[unlikely]] return; }
L_003187E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0031888C; } }
L_003187EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00318888; } }
    st32((c.r[17].w[0] + 556u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00318804:
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 372u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 118ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 372u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00318804u | kUnwind; return; } goto L_00318804; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 118u);  if (t) { goto L_00318840; } }
L_0031882C:
    set32(c.r[2], ld32((c.r[17].w[0] + 576u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
L_00318840:
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031882Cu | kUnwind; return; } goto L_0031882C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318888; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031885C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00318888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031886Cu);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0031886Cu) [[unlikely]] return; }
L_0031886C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00318888; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318888u) [[unlikely]] return; }
L_00318888:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0031888C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318894u); st32((c.r[17].w[0] + 552u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00318894u) [[unlikely]] return; }
L_00318894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00318BD4; } }
L_0031889C:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003188CC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 574u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003188CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x003188BCu) [[unlikely]] return; }
L_003188BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003188CC; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[17].w[0] + 574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003188CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 548u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 572u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003188F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 336u, depth + 1u); else { c.pc = 0x0031BD00u; return; } if (c.pc != 0x003188F8u) [[unlikely]] return; }
L_003188F8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00318BD0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00318940; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 556u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031893C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318934u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 3u, depth + 1u); else { c.pc = 0x0031C020u; return; } if (c.pc != 0x00318934u) [[unlikely]] return; }
L_00318934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
L_0031893C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00318940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318948u);  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x00318948u) [[unlikely]] return; }
L_00318948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003189FC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031898C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 372u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318984u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0086(c, 317u, depth + 1u); else { c.pc = 0x0031B950u; return; } if (c.pc != 0x00318984u) [[unlikely]] return; }
L_00318984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
L_0031898C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003189B4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 3u, depth + 1u); else { c.pc = 0x0031C020u; return; } if (c.pc != 0x003189A0u) [[unlikely]] return; }
L_003189A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189A8u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003189A8u) [[unlikely]] return; }
L_003189A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003189B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003189D8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 3u, depth + 1u); else { c.pc = 0x0031C020u; return; } if (c.pc != 0x003189C8u) [[unlikely]] return; }
L_003189C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189D0u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003189D0u) [[unlikely]] return; }
L_003189D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
L_003189D8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003189E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003189E8u) [[unlikely]] return; }
L_003189E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003189F0u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003189F0u) [[unlikely]] return; }
L_003189F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003189FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A04u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00318A04u) [[unlikely]] return; }
L_00318A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318A68; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00318BD0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00318A44; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318A44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 3u, depth + 1u); else { c.pc = 0x0031C020u; return; } if (c.pc != 0x00318A3Cu) [[unlikely]] return; }
L_00318A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_00318A58; } }
L_00318A44:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318A54u) [[unlikely]] return; }
L_00318A54:
    set32(c.r[4], 0u + 401u);
    c.budget -= 1;
L_00318A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A60u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00318A60u) [[unlikely]] return; }
L_00318A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
L_00318A68:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318A88; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 16384ull;  if (t) { goto L_00318AA4; } }
L_00318A88:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318A98u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 307u, depth + 1u); else { c.pc = 0x0031B7B0u; return; } if (c.pc != 0x00318A98u) [[unlikely]] return; }
L_00318A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 1;
L_00318AA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00318AB8; } }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 32768ull;  if (t) { goto L_00318AD4; } }
L_00318AB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 307u, depth + 1u); else { c.pc = 0x0031B7B0u; return; } if (c.pc != 0x00318AC8u) [[unlikely]] return; }
L_00318AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 1;
L_00318AD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 8192ull;  if (t) { goto L_00318B18; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00318B04; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318AF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 328u, depth + 1u); else { c.pc = 0x0031BB90u; return; } if (c.pc != 0x00318AF8u) [[unlikely]] return; }
L_00318AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00318B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 322u, depth + 1u); else { c.pc = 0x0031BAD0u; return; } if (c.pc != 0x00318B0Cu) [[unlikely]] return; }
L_00318B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 1;
L_00318B18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 4ull;  if (t) { goto L_00318B5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00318B48; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 328u, depth + 1u); else { c.pc = 0x0031BB90u; return; } if (c.pc != 0x00318B3Cu) [[unlikely]] return; }
L_00318B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00318B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 322u, depth + 1u); else { c.pc = 0x0031BAD0u; return; } if (c.pc != 0x00318B50u) [[unlikely]] return; }
L_00318B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 1;
L_00318B5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 8ull;  if (t) { goto L_00318B7C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 311u, depth + 1u); else { c.pc = 0x0031B8A0u; return; } if (c.pc != 0x00318B70u) [[unlikely]] return; }
L_00318B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 1;
L_00318B7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 128ull;  if (t) { goto L_00318B9C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318B90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 311u, depth + 1u); else { c.pc = 0x0031B8A0u; return; } if (c.pc != 0x00318B90u) [[unlikely]] return; }
L_00318B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00318BD0; } }
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 1;
L_00318B9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00318BD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00318BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BBCu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00318BBCu) [[unlikely]] return; }
L_00318BBC:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318BC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00318BC8u) [[unlikely]] return; }
L_00318BC8:
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(30ll);
    st16((c.r[17].w[0] + 574u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00318BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00318BD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00318BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00318C04u) [[unlikely]] return; }
L_00318C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 400u, depth + 1u); else { c.pc = 0x003178D0u; return; } if (c.pc != 0x00318C0Cu) [[unlikely]] return; }
L_00318C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 340u, depth + 1u); else { c.pc = 0x0031BE20u; return; } if (c.pc != 0x00318C14u) [[unlikely]] return; }
L_00318C14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 125u, depth + 1u); else { c.pc = 0x00318E10u; return; } if (c.pc != 0x00318C48u) [[unlikely]] return; }
L_00318C48:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00318C68; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318C68u) [[unlikely]] return; }
L_00318C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00318C94u) [[unlikely]] return; }
L_00318C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 340u, depth + 1u); else { c.pc = 0x0031BE20u; return; } if (c.pc != 0x00318C9Cu) [[unlikely]] return; }
L_00318C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 125u, depth + 1u); else { c.pc = 0x00318E10u; return; } if (c.pc != 0x00318CC8u) [[unlikely]] return; }
L_00318CC8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00318CE8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318CE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318CE8u) [[unlikely]] return; }
L_00318CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318D00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_00318D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 608u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00318D5C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00318D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D44u);  if (depth < kMaxDepth) unit_0096(c, 420u, depth + 1u); else { c.pc = 0x0035BBB0u; return; } if (c.pc != 0x00318D44u) [[unlikely]] return; }
L_00318D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 585u));  if (t) { goto L_00318D60; } }
L_00318D4C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00318D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D5Cu);  if (depth < kMaxDepth) unit_0096(c, 422u, depth + 1u); else { c.pc = 0x0035BC30u; return; } if (c.pc != 0x00318D5Cu) [[unlikely]] return; }
L_00318D5C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 585u));
    c.budget -= 1;
L_00318D60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00318D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D70u);  if (depth < kMaxDepth) unit_0086(c, 126u, depth + 1u); else { c.pc = 0x00318F10u; return; } if (c.pc != 0x00318D70u) [[unlikely]] return; }
L_00318D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 272u, depth + 1u); else { c.pc = 0x0031B0B0u; return; } if (c.pc != 0x00318D78u) [[unlikely]] return; }
L_00318D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 205u, depth + 1u); else { c.pc = 0x00319EE0u; return; } if (c.pc != 0x00318D80u) [[unlikely]] return; }
L_00318D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 132u, depth + 1u); else { c.pc = 0x00319060u; return; } if (c.pc != 0x00318D88u) [[unlikely]] return; }
L_00318D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318D90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 262u, depth + 1u); else { c.pc = 0x0031AE50u; return; } if (c.pc != 0x00318D90u) [[unlikely]] return; }
L_00318D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00318DA0:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318DC0; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318E04; } }
L_00318DC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318DE0; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318E04; } }
L_00318DE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318E00; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318E04; } }
L_00318E00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00318E04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318E10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 512u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00318E3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - 85u);
    st32((c.r[4].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 9u);  if (t) { goto L_00318E3C; } }
    st32((c.r[4].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_00318E3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 512u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00318E68; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] - 51u);
    st32((c.r[4].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00318E68; } }
    st32((c.r[4].w[0] + 132u), 0u);
    c.budget -= 1;
L_00318E68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00318E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318F00; } }
L_00318E8C:
    st8((c.r[4].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 132u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318EB8; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318F00; } }
L_00318EB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318ED8; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318F00; } }
L_00318ED8:
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00318EF8; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00318EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00318F00; } }
L_00318EF8:
    st8((c.r[4].w[0] + 584u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00318F00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00318F10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 6480u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 224u)));
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00319040; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00318F70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[1].w[0] - 13392u));  if (t) { goto L_00318F74; } }
L_00318F70:
    c.f[0] = ld32((c.r[1].w[0] - 13400u));
    c.budget -= 1;
L_00318F74:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318F8Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00318F8Cu) [[unlikely]] return; }
L_00318F8C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318FB0u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00318FB0u) [[unlikely]] return; }
L_00318FB0:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00319000; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00318FF8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00318FF8u) [[unlikely]] return; }
L_00318FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 176u)));  if (t) { goto L_00319034; } }
L_00319000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42920000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319030u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319030u) [[unlikely]] return; }
L_00319030:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_00319034:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319040u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319040u) [[unlikely]] return; }
L_00319040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00319060:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[2].w[0] - 6456u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[6], c.r[29].w[0] + 296u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[5], c.r[5].w[0] - 6448u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[6].w[0]), c.r[2].d[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003190DCu); c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x003190DCu) [[unlikely]] return; }
L_003190DC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031923C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 548u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319238; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00319130; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], c.r[2].w[0] - 40u);
    st32((c.r[21].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    c.r[1].d[0] = c.r[2].sd[0] < -255ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 255u);  if (t) { goto L_0031914C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_0031914C; } }
L_00319130:
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[21].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031914C; } }
    st32((c.r[21].w[0] + 544u), 0u);
    c.budget -= 1;
L_0031914C:
    c.f[1] = ld32((c.r[21].w[0] + 536u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_0031917C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[20] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 536u), c.f[0]);  if (t) { goto L_0031918C; } }
L_0031917C:
    c.f[20] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    st32((c.r[21].w[0] + 536u), c.f[0]);
    c.budget -= 4;
L_0031918C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 548u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[21].w[0] + 548u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003191B8; } }
    st32((c.r[21].w[0] + 544u), 0u);
    st32((c.r[21].w[0] + 536u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 540u), 0u);  if (t) { goto L_00319238; } }
L_003191B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 548u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00319238; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 496u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 372u));
    set32(c.r[5], c.r[3].w[0] + 372u);
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] | 2ull;  if (t) { goto L_003191F8; } }
    c.r[2].d[0] = c.r[4].d[0] & 253ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003191FC; } }
L_003191F8:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003191FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319204u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 297u, depth + 1u); else { c.pc = 0x0031B670u; return; } if (c.pc != 0x00319204u) [[unlikely]] return; }
L_00319204:
    c.f[1] = ld32((c.r[21].w[0] + 536u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_0031922C; } }
    st32((c.r[21].w[0] + 536u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2900000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 540u), c.r[2].w[0]);  if (t) { goto L_00319238; } }
L_0031922C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42900000u);
    st32((c.r[21].w[0] + 536u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 540u), c.r[2].w[0]);
    c.budget -= 3;
L_00319238:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031923C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319244u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00319244u) [[unlikely]] return; }
L_00319244:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0031928C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 496u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 372u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031928C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319284u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00319284u) [[unlikely]] return; }
L_00319284:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 2;
L_0031928C:
    set32(c.r[2], ld32((c.r[21].w[0] + 532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 15u);  if (t) { goto L_003192AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192A0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003192A0u) [[unlikely]] return; }
L_003192A0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_003192BC; } }
L_003192AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192B4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003192B4u) [[unlikely]] return; }
L_003192B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003192BC:
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0031935C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 496u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 372u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00319358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003192F4u); set32(c.r[4], ld32((c.r[29].w[0] + 208u)));  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x003192F4u) [[unlikely]] return; }
L_003192F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319304u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00319304u) [[unlikely]] return; }
L_00319304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031930Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0031930Cu) [[unlikely]] return; }
L_0031930C:
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319318u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x00319318u) [[unlikely]] return; }
L_00319318:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319328u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x00319328u) [[unlikely]] return; }
L_00319328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319330u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00319330u) [[unlikely]] return; }
L_00319330:
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031933Cu); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011CEF8u; return; } if (c.pc != 0x0031933Cu) [[unlikely]] return; }
L_0031933C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031934Cu); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0031934Cu) [[unlikely]] return; }
L_0031934C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319354u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 78u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00319354u) [[unlikely]] return; }
L_00319354:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 1;
L_00319358:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0031935C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319364u);  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x00319364u) [[unlikely]] return; }
L_00319364:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003197EC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[30], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 9;
L_00319398:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0031944C; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.f[0] = ld32((c.r[1].w[0] - 13392u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003193CCu); set32(c.r[4], ld32((c.r[2].w[0] + 240u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003193CCu) [[unlikely]] return; }
L_003193CC:
    c.f[1] = c.r[19].w[0];
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43840000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[4] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[3] = ld32((c.r[21].w[0] + 540u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[13] = fp::add(c.f[0], c.f[2]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 536u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031942Cu); c.f[12] = fp::add(c.f[2], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031942Cu) [[unlikely]] return; }
L_0031942C:
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031944Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031944Cu) [[unlikely]] return; }
L_0031944C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_00319594; } }
    set32(c.r[2], c.r[21].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 524u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003194D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0031947C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00319494; } }
L_0031947C:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00319494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194B4u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x003194B4u) [[unlikely]] return; }
L_003194B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194C8u); set32(c.r[5], c.r[5].w[0] - 13480u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003194C8u) [[unlikely]] return; }
L_003194C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003194E4; } }
L_003194D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[2].w[0] >> 1);
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003194E4u); set32(c.r[5], c.r[5].w[0] - 13472u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003194E4u) [[unlikely]] return; }
L_003194E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = ld32((c.r[1].w[0] - 13392u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 280u);
    c.f[4] = c.r[19].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[2], 0u + 317u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 16u), c.f[1]);
    st32((c.r[20].w[0] + 20u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[20].w[0] + 24u), c.r[5].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[5]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[5]);
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = ld32((c.r[21].w[0] + 540u));
    c.f[0] = ld32((c.r[21].w[0] + 536u));
    c.f[13] = fp::add(c.f[3], c.f[4]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319570u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319570u) [[unlikely]] return; }
L_00319570:
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319590u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319590u) [[unlikely]] return; }
L_00319590:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00319594:
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 108u);  if (t) { goto L_003197DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    st32((c.r[6].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], 0u + 7u);
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003195D0u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003195D0u) [[unlikely]] return; }
L_003195D0:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.f[1] = c.r[19].w[0];
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], 0u + 265u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[1] = c.r[4].w[0];
    c.f[21] = fp::add(c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[21].w[0] + 540u));
    c.f[0] = ld32((c.r[21].w[0] + 536u));
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 37;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319664u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319664u) [[unlikely]] return; }
L_00319664:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319678u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319678u) [[unlikely]] return; }
L_00319678:
    set32(c.r[2], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[3], 0u + 265u);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 524u));
    c.f[1] = c.r[3].w[0];
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[21];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[1]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    st32((c.r[7].w[0] + 164u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 48u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[22].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[21].w[0] + 540u));
    c.f[0] = ld32((c.r[21].w[0] + 536u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 41;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031971Cu); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031971Cu) [[unlikely]] return; }
L_0031971C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319730u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319730u) [[unlikely]] return; }
L_00319730:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    set32(c.r[3], 0u + 263u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[13] = fp::add(c.f[0], c.f[20]);
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] + 132u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 48u), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 544u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[21].w[0] + 540u));
    c.f[0] = ld32((c.r[21].w[0] + 536u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 38;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003197C8u); c.f[12] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003197C8u) [[unlikely]] return; }
L_003197C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003197DCu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x003197DCu) [[unlikely]] return; }
L_003197DC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00319398u | kUnwind; return; } goto L_00319398; } }
L_003197EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031985C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 496u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319818u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00319818u) [[unlikely]] return; }
L_00319818:
    set32(c.r[4], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x00319824u) [[unlikely]] return; }
L_00319824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031982Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031982Cu) [[unlikely]] return; }
L_0031982C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00319858; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 48u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319848u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x00319848u) [[unlikely]] return; }
L_00319848:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319854u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00319854u) [[unlikely]] return; }
L_00319854:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00319858:
    st32((c.r[21].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_0031985C:
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00319A64; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319A60; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00319A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319888u);  if (depth < kMaxDepth) unit_0086(c, 351u, depth + 1u); else { c.pc = 0x0031BFF0u; return; } if (c.pc != 0x00319888u) [[unlikely]] return; }
L_00319888:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43240000u);  if (t) { goto L_003198B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    c.f[21] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_003198C0; } }
L_003198B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    c.f[21] = c.r[3].w[0];
    c.f[20] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 4;
L_003198C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[1].w[0] - 13392u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 13392u));
    c.f[12] = c.f[21];
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319908u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319908u) [[unlikely]] return; }
L_00319908:
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319920u); st32((c.r[2].w[0] + 132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00319920u) [[unlikely]] return; }
L_00319920:
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031995Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031995Cu) [[unlikely]] return; }
L_0031995C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[1].w[0] - 13392u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 13392u));
    c.f[12] = c.f[21];
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003199B4u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003199B4u) [[unlikely]] return; }
L_003199B4:
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003199C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003199C8u) [[unlikely]] return; }
L_003199C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003199E4u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003199E4u) [[unlikely]] return; }
L_003199E4:
    set32(c.r[5], ld32((c.r[21].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x426C0000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[12] = fp::sub(c.f[21], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.f[13] = fp::sub(c.f[20], c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A3Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319A3Cu) [[unlikely]] return; }
L_00319A3C:
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 118u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A60u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x00319A60u) [[unlikely]] return; }
L_00319A60:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00319A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319A6Cu);  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x00319A6Cu) [[unlikely]] return; }
L_00319A6C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00319B1C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00319B18; } }
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 532u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319AACu); set32(c.r[4], ld32((c.r[2].w[0] + 296u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00319AACu) [[unlikely]] return; }
L_00319AAC:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 532u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00319AD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43740000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0] + 176u)));  if (t) { goto L_00319ADC; } }
L_00319AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43770000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.budget -= 3;
L_00319ADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432E0000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B00u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319B00u) [[unlikely]] return; }
L_00319B00:
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B18u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319B18u) [[unlikely]] return; }
L_00319B18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00319B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B24u);  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x00319B24u) [[unlikely]] return; }
L_00319B24:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00319B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B3Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 347u, depth + 1u); else { c.pc = 0x0031BF10u; return; } if (c.pc != 0x00319B3Cu) [[unlikely]] return; }
L_00319B3C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00319B78; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 255ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 255ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00319B88; } }
L_00319B78:
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00319B88:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00319B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319B94u);  if (depth < kMaxDepth) unit_0086(c, 350u, depth + 1u); else { c.pc = 0x0031BFC0u; return; } if (c.pc != 0x00319B94u) [[unlikely]] return; }
L_00319B94:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00319CB8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);  if (t) { goto L_00319C18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 259u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] - 13408u));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 96u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C04u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319C04u) [[unlikely]] return; }
L_00319C04:
    set32(c.r[4], ld32((c.r[21].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319C18u) [[unlikely]] return; }
L_00319C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C20u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 428u, depth + 1u); else { c.pc = 0x00317D90u; return; } if (c.pc != 0x00319C20u) [[unlikely]] return; }
L_00319C20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 264u);
    set32(c.r[5], c.r[5].w[0] - 13472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C34u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00319C34u) [[unlikely]] return; }
L_00319C34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00319CB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 13400u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319C58u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00319C58u) [[unlikely]] return; }
L_00319C58:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], 0u + 259u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = fp::cvt_s_w(c.f[1]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319CA0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319CA0u) [[unlikely]] return; }
L_00319CA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 132u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319CB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319CB8u) [[unlikely]] return; }
L_00319CB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319EA8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00319DE8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319CE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00319CE8u) [[unlikely]] return; }
L_00319CE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_00319D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D00u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00319D00u) [[unlikely]] return; }
L_00319D00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00319D34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x72730000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D18u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00319D18u) [[unlikely]] return; }
L_00319D18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00319D24u) [[unlikely]] return; }
L_00319D24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00319D30u) [[unlikely]] return; }
L_00319D30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00319D34:
    st32((c.r[21].w[0] + 104u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13416u));
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13416u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00319DE8; } }
L_00319D60:
    set32(c.r[2], ld32((c.r[21].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00319D78u) [[unlikely]] return; }
L_00319D78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00319DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319D8Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00319D8Cu) [[unlikely]] return; }
L_00319D8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00319DC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x72730000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DA4u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00319DA4u) [[unlikely]] return; }
L_00319DA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00319DB0u) [[unlikely]] return; }
L_00319DB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319DBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00319DBCu) [[unlikely]] return; }
L_00319DBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00319DC0:
    st32((c.r[21].w[0] + 104u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13424u));
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13424u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 10;
L_00319DE8:
    set32(c.r[6], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00319E54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[21].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 596u)));
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    c.f[0] = ld32((c.r[21].w[0] + 592u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E40u); c.f[12] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319E40u) [[unlikely]] return; }
L_00319E40:
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00319E54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00319E54u) [[unlikely]] return; }
L_00319E54:
    set32(c.r[3], ld32((c.r[21].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00319EA8; } }
    c.f[2] = ld32((c.r[21].w[0] + 592u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[21].w[0] + 592u), c.f[1]);  if (t) { goto L_00319E88; } }
    st32((c.r[21].w[0] + 592u), c.f[0]);
    c.budget -= 1;
L_00319E88:
    set32(c.r[3], ld32((c.r[21].w[0] + 596u)));
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[21].w[0] + 596u), c.r[3].w[0]);  if (t) { goto L_00319E9C; } }
    st32((c.r[21].w[0] + 596u), 0u);
    c.budget -= 1;
L_00319E9C:
    set32(c.r[3], ld32((c.r[21].w[0] + 588u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 3;
L_00319EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00319EE0:
    set32(c.r[29], c.r[29].w[0] - 752u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 6416u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 6384u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st64((c.r[7].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 513u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 332u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031A018; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[2], c.r[2].w[0] - 42u);
    st32((c.r[17].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00319F80; } }
    st32((c.r[17].w[0] + 520u), 0u);
    c.budget -= 1;
L_00319F80:
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 4u);  if (t) { goto L_00319F9C; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 1;
L_00319F9C:
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 516u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 516u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 513u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031A01C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00319FDCu); st32((c.r[17].w[0] + 496u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0086(c, 297u, depth + 1u); else { c.pc = 0x0031B670u; return; } if (c.pc != 0x00319FDCu) [[unlikely]] return; }
L_00319FDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031A000; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031A000; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A000u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A000u) [[unlikely]] return; }
L_0031A000:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[17].w[0] + 516u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A018u); st32((c.r[17].w[0] + 520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0086(c, 334u, depth + 1u); else { c.pc = 0x0031BCA0u; return; } if (c.pc != 0x0031A018u) [[unlikely]] return; }
L_0031A018:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031A01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A024u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031A024u) [[unlikely]] return; }
L_0031A024:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0031A06C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 372u));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0031A06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A064u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031A064u) [[unlikely]] return; }
L_0031A064:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.budget -= 2;
L_0031A06C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031A880; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A088u); c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0012D200u; return; } if (c.pc != 0x0031A088u) [[unlikely]] return; }
L_0031A088:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A0C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);  if (t) { goto L_0031A0B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[24] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A0BC; } }
L_0031A0B8:
    c.f[24] = c.r[2].w[0];
    c.budget -= 1;
L_0031A0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 496u)));  if (t) { goto L_0031A0EC; } }
L_0031A0C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43590000u);  if (t) { goto L_0031A0E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436C0000u);
    c.f[24] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031A0E8; } }
L_0031A0E4:
    c.f[24] = c.r[2].w[0];
    c.budget -= 1;
L_0031A0E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 1;
L_0031A0EC:
    set32(c.r[5], c.r[29].w[0] + 496u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A104u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0089(c, 24u, depth + 1u); else { c.pc = 0x003242C0u; return; } if (c.pc != 0x0031A104u) [[unlikely]] return; }
L_0031A104:
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0031A140; } }
    set32(c.r[2], 0u + 469u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[23] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0031A16C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[24] = fp::add(c.f[24], c.f[0]);  if (t) { goto L_0031A16C; } }
L_0031A140:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 459u);  if (t) { goto L_0031A170; } }
    set32(c.r[3], 0u + 459u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.f[23] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0031A16C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[0] = c.r[2].w[0];
    c.f[24] = fp::add(c.f[24], c.f[0]);
    c.budget -= 4;
L_0031A16C:
    set32(c.r[2], 0u + 459u);
    c.budget -= 1;
L_0031A170:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[22] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0031A198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.budget -= 5;
L_0031A198:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0031A2A8; } }
    c.f[1] = ld32((c.r[17].w[0] + 564u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 496u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 13432u));
    set32(c.r[2], 0u + 1u);
    c.f[21] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 372u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[18].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0031A1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0031A1FC; } }
L_0031A1F8:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0031A1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A204u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031A204u) [[unlikely]] return; }
L_0031A204:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0031A234; } }
L_0031A224:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 568u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 4;
L_0031A234:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 211u);  if (t) { goto L_0031A244; } }
    set32(c.r[4], 0u + 442u);
    c.budget -= 1;
L_0031A244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A24Cu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0031A24Cu) [[unlikely]] return; }
L_0031A24C:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 516u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = fp::sub(c.f[24], c.f[1]);
    c.f[13] = fp::add(c.f[1], c.f[0]);
    c.f[12] = c.f[22];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A290u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A290u) [[unlikely]] return; }
L_0031A290:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A2A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A2A0u) [[unlikely]] return; }
L_0031A2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0031A5D4; } }
L_0031A2A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 13384u));
    c.f[21] = c.r[2].w[0];
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13384u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0031A2F0; } }
L_0031A2E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0031A2F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0031A310; } }
L_0031A308:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 2;
L_0031A310:
    set32(c.r[2], c.r[29].w[0] + 496u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 240u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031A338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[24], c.f[0]);  if (t) { goto L_0031A348; } }
L_0031A338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[24], c.f[0]);
    c.budget -= 4;
L_0031A348:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[0] = ld32((c.r[17].w[0] + 516u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::add(c.f[0], c.f[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A378u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A378u) [[unlikely]] return; }
L_0031A378:
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
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3B0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A3B0u) [[unlikely]] return; }
L_0031A3B0:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3D0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A3D0u) [[unlikely]] return; }
L_0031A3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A3D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031A3D8u) [[unlikely]] return; }
L_0031A3D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 240u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0031A508; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 13384u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13384u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0031A42C; } }
L_0031A424:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0031A42C:
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0031A44C; } }
L_0031A444:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 2;
L_0031A44C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 240u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.f[12] = c.f[23];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.f[2] = fp::sub(c.f[24], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::add(c.f[2], c.f[1]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A490u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A490u) [[unlikely]] return; }
L_0031A490:
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
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4C8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A4C8u) [[unlikely]] return; }
L_0031A4C8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4E8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A4E8u) [[unlikely]] return; }
L_0031A4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A4F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031A4F0u) [[unlikely]] return; }
L_0031A4F0:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031A508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A504u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031A504u) [[unlikely]] return; }
L_0031A504:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031A508:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0031A5D0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0031A5D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 13424u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13424u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0031A54C; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0031A54C:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[2] = fp::sub(c.f[23], c.f[2]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.f[12] = fp::sub(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[24], c.f[2]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A598u); c.f[13] = fp::add(c.f[2], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A598u) [[unlikely]] return; }
L_0031A598:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[3].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_0031A5B8; } }
L_0031A5B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 2;
L_0031A5B8:
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A5D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A5D0u) [[unlikely]] return; }
L_0031A5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0031A5D4:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0031A608; } }
L_0031A600:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0031A608:
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0031A628; } }
L_0031A620:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 2;
L_0031A628:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A640u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0031A640u) [[unlikely]] return; }
L_0031A640:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A650u); st32((c.r[16].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031A650u) [[unlikely]] return; }
L_0031A650:
    c.r[1].d[0] = c.r[2].sd[0] < 261ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031A6A4; } }
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A670u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031A670u) [[unlikely]] return; }
L_0031A670:
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43820000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.budget -= 13;
L_0031A6A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A6B8u); c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0012D200u; return; } if (c.pc != 0x0031A6B8u) [[unlikely]] return; }
L_0031A6B8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A728; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_0031A6E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A728; } }
L_0031A6E0:
    c.f[0] = ld32((c.r[17].w[0] + 516u));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.f[1] = fp::add(c.f[24], c.f[0]);  if (t) { goto L_0031A6FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 176u)));  if (t) { goto L_0031A708; } }
L_0031A6FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
L_0031A708:
    c.f[13] = fp::sub(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[22];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A720u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A720u) [[unlikely]] return; }
L_0031A720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0031A74C; } }
L_0031A728:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = ld32((c.r[17].w[0] + 516u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A748u); c.f[13] = fp::add(c.f[24], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A748u) [[unlikely]] return; }
L_0031A748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0031A74C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 312u), 0u);
    set32(c.r[7], 0u - 1u);
    st32((c.r[16].w[0] + 316u), c.f[21]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A77Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A77Cu) [[unlikely]] return; }
L_0031A77C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A79Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A79Cu) [[unlikely]] return; }
L_0031A79C:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A7B0u); c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));  if (depth < kMaxDepth) unit_000B(c, 112u, depth + 1u); else { c.pc = 0x0012D200u; return; } if (c.pc != 0x0031A7B0u) [[unlikely]] return; }
L_0031A7B0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031A880; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0031A7E8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031A81C; } }
L_0031A7E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.f[22];
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::add(c.f[24], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A814u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A814u) [[unlikely]] return; }
L_0031A814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 520u)));  if (t) { goto L_0031A84C; } }
L_0031A81C:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42380000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.f[22];
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::add(c.f[24], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A848u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A848u) [[unlikely]] return; }
L_0031A848:
    set32(c.r[3], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 1;
L_0031A84C:
    c.r[1].d[0] = c.r[3].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031A860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  if (t) { goto L_0031A868; } }
L_0031A860:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 2;
L_0031A868:
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031A880u) [[unlikely]] return; }
L_0031A880:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031AE14; } }
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x43020000u);  if (t) { goto L_0031A8D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x431A0000u);
    c.f[20] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 604u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], 0u + 8u);  if (t) { goto L_0031A8C8; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0031A8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 496u)));  if (t) { goto L_0031A8E0; } }
L_0031A8D0:
    set32(c.r[20], 0u + 7u);
    c.f[20] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.budget -= 4;
L_0031A8E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 604u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0031A8F8; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0031A8F8:
    set32(c.r[4], 0u + 118u);
    c.budget -= 1;
L_0031A8FC:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 144u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A8FCu | kUnwind; return; } goto L_0031A8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031AB4C; } }
L_0031A920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A928u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 294u, depth + 1u); else { c.pc = 0x0031B580u; return; } if (c.pc != 0x0031A928u) [[unlikely]] return; }
L_0031A928:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031A940; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_0031AB58; } }
L_0031A940:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { goto L_0031AB3C; } }
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], 0u + 2u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 516u));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031A970u); c.f[21] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031A970u) [[unlikely]] return; }
L_0031A970:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_0031A9DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431A0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031A9DC; } }
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0031A9EC; } }
L_0031A9DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 4;
L_0031A9EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[19].w[0] << 1);
    c.f[0] = ld32((c.r[1].w[0] - 13440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13440u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0031AA20u) [[unlikely]] return; }
L_0031AA20:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA30u); st32((c.r[16].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031AA30u) [[unlikely]] return; }
L_0031AA30:
    c.r[1].d[0] = c.r[2].sd[0] < 251ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031AAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AA44u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031AA44u) [[unlikely]] return; }
L_0031AA44:
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[6].w[0];
    c.f[12] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] - 13440u));
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[21];
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AAA8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AAA8u) [[unlikely]] return; }
L_0031AAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0031AAE4; } }
L_0031AAB0:
    set32(c.r[2], 0u + 463u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[21];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AAE0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AAE0u) [[unlikely]] return; }
L_0031AAE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0031AAE4:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB18u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AB18u) [[unlikely]] return; }
L_0031AB18:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AB38u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AB38u) [[unlikely]] return; }
L_0031AB38:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.budget -= 1;
L_0031AB3C:
    set32(c.r[5], c.r[19].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st16((c.r[3].w[0] + 144u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 4;
L_0031AB4C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031A920u | kUnwind; return; } goto L_0031A920; } }
L_0031AB58:
    c.f[1] = ld32((c.r[17].w[0] + 516u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43980000u);  if (t) { goto L_0031AB84; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 496u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 8u);  if (t) { goto L_0031AB94; } }
L_0031AB84:
    set32(c.r[19], 0u + 7u);
    c.f[20] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 496u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_0031AB94:
    set32(c.r[3], ld32((c.r[17].w[0] + 604u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031ABAC; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0031ABAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_0031AE0C; } }
L_0031ABB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ABBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 294u, depth + 1u); else { c.pc = 0x0031B580u; return; } if (c.pc != 0x0031ABBCu) [[unlikely]] return; }
L_0031ABBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031ABD4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0031AE14; } }
L_0031ABD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031ABF0; } }
L_0031ABDC:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 144u));
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_0031AC00; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0031ABF0:
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031ABDCu | kUnwind; return; } goto L_0031ABDC; } }
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 1;
L_0031AC00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031AE14; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[20].w[0] + 1u);  if (t) { goto L_0031AE04; } }
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], 0u + 2u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 516u));
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AC38u); c.f[21] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031AC38u) [[unlikely]] return; }
L_0031AC38:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st128((c.r[16].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_0031ACA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43970000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031ACA4; } }
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0031ACB4; } }
L_0031ACA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 4;
L_0031ACB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] << 1);
    c.f[0] = ld32((c.r[1].w[0] - 13440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13440u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ACE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0031ACE8u) [[unlikely]] return; }
L_0031ACE8:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ACF8u); st32((c.r[16].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031ACF8u) [[unlikely]] return; }
L_0031ACF8:
    c.r[1].d[0] = c.r[2].sd[0] < 251ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031AD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD0Cu);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0031AD0Cu) [[unlikely]] return; }
L_0031AD0C:
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[6].w[0];
    c.f[12] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[1].w[0] - 13440u));
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[21];
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AD70u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AD70u) [[unlikely]] return; }
L_0031AD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0031ADAC; } }
L_0031AD78:
    set32(c.r[2], 0u + 463u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[21];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADA8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031ADA8u) [[unlikely]] return; }
L_0031ADA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0031ADAC:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ADE0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031ADE0u) [[unlikely]] return; }
L_0031ADE0:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AE00u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AE00u) [[unlikely]] return; }
L_0031AE00:
    set32(c.r[5], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0031AE04:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0031AE0C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031ABB4u | kUnwind; return; } goto L_0031ABB4; } }
L_0031AE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_0031AE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], ld32((c.r[5].w[0] + 332u)));  if (t) { goto L_0031B094; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031AF04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AE9Cu); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031AE9Cu) [[unlikely]] return; }
L_0031AE9C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 441u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEACu); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0031AEACu) [[unlikely]] return; }
L_0031AEAC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[3], 0u + 315u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43070000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AEECu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AEECu) [[unlikely]] return; }
L_0031AEEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AF04u) [[unlikely]] return; }
L_0031AF04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031B004; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 560u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 556u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 13472u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF28u); set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0031AF28u) [[unlikely]] return; }
L_0031AF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AF30u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031AF30u) [[unlikely]] return; }
L_0031AF30:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[17].w[0] + 564u));
    c.f[0] = ld32((c.r[1].w[0] - 13416u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 568u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 560u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 556u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031AFC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DA0000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFBCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AFBCu) [[unlikely]] return; }
L_0031AFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 176u)));  if (t) { goto L_0031AFF8; } }
L_0031AFC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C60000u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031AFF4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031AFF4u) [[unlikely]] return; }
L_0031AFF4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 1;
L_0031AFF8:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B004u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B004u) [[unlikely]] return; }
L_0031B004:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 572u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_0031B094; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0031B05C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[17].w[0] + 564u));
    c.f[0] = ld32((c.r[1].w[0] - 13384u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 564u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 568u)));
    set32(c.r[3], c.r[3].w[0] + 31u);
    st32((c.r[17].w[0] + 568u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 568u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0031B094; } }
    st32((c.r[17].w[0] + 568u), 0u);
    st32((c.r[17].w[0] + 564u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 572u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031B094; } }
L_0031B05C:
    c.f[1] = ld32((c.r[17].w[0] + 564u));
    c.f[0] = ld32((c.r[1].w[0] - 13384u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 564u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 568u)));
    set32(c.r[3], c.r[3].w[0] - 31u);
    st32((c.r[17].w[0] + 568u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 568u)));
    c.r[1].d[0] = c.r[3].sd[0] < -239ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031B094; } }
    st32((c.r[17].w[0] + 568u), 0u);
    st32((c.r[17].w[0] + 564u), 0u);
    st8((c.r[17].w[0] + 572u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0031B094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031B0B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 6360u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld64((c.r[7].w[0]));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[6].w[0]), c.r[5].d[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0031B554; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 440u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 548u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 332u)));  if (t) { goto L_0031B21C; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0031B14C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[2], c.r[2].w[0] - 60u);
    st32((c.r[16].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 544u)));
    c.r[1].d[0] = c.r[2].sd[0] < -255ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 255u);  if (t) { goto L_0031B168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_0031B168; } }
L_0031B14C:
    set32(c.r[2], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 544u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 544u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0031B168; } }
    st32((c.r[16].w[0] + 544u), 0u);
    c.budget -= 1;
L_0031B168:
    c.f[1] = ld32((c.r[16].w[0] + 536u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_0031B198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 536u), c.f[0]);  if (t) { goto L_0031B1A8; } }
L_0031B198:
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 536u), c.f[0]);
    c.budget -= 4;
L_0031B1A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 548u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031B1D4; } }
    st32((c.r[16].w[0] + 544u), 0u);
    st32((c.r[16].w[0] + 536u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 540u), 0u);  if (t) { goto L_0031B21C; } }
L_0031B1D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 548u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031B21C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 508u)));
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 504u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 536u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_0031B210; } }
    st32((c.r[16].w[0] + 536u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2900000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 540u), c.r[2].w[0]);  if (t) { goto L_0031B21C; } }
L_0031B210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42900000u);
    st32((c.r[16].w[0] + 536u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 540u), c.r[2].w[0]);
    c.budget -= 3;
L_0031B21C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0031B2A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 13408u));
    set32(c.r[4], 0u + 4u);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 13408u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B248u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031B248u) [[unlikely]] return; }
L_0031B248:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 444u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B260u); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0031B260u) [[unlikely]] return; }
L_0031B260:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43820000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B298u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B298u) [[unlikely]] return; }
L_0031B298:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B2A8u) [[unlikely]] return; }
L_0031B2A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2C0u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_005B(c, 431u, depth + 1u); else { c.pc = 0x0026FF20u; return; } if (c.pc != 0x0031B2C0u) [[unlikely]] return; }
L_0031B2C0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B2E0u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_005C(c, 2u, depth + 1u); else { c.pc = 0x00270010u; return; } if (c.pc != 0x0031B2E0u) [[unlikely]] return; }
L_0031B2E0:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 36u));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 38u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[18], c.r[2].w[0] + 1u);  if (t) { goto L_0031B324; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 255ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 255ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0031B324:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0031B46C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B344u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031B344u) [[unlikely]] return; }
L_0031B344:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 13472u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B36Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0031B36Cu) [[unlikely]] return; }
L_0031B36C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436A0000u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3A8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B3A8u) [[unlikely]] return; }
L_0031B3A8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B3B8u) [[unlikely]] return; }
L_0031B3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3C0u); set32(c.r[4], 0u + 715u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0031B3C0u) [[unlikely]] return; }
L_0031B3C0:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43820000u);
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
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B3F8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B3F8u) [[unlikely]] return; }
L_0031B3F8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B408u) [[unlikely]] return; }
L_0031B408:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B41Cu); set32(c.r[5], c.r[5].w[0] - 13472u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0031B41Cu) [[unlikely]] return; }
L_0031B41C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438F0000u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B458u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B458u) [[unlikely]] return; }
L_0031B458:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B468u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B468u) [[unlikely]] return; }
L_0031B468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0031B46C:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B480u); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0031B480u) [[unlikely]] return; }
L_0031B480:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[3].w[0] + 160u);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 544u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0031B548; } }
L_0031B4AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B4D0u); set32(c.r[8], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005C(c, 10u, depth + 1u); else { c.pc = 0x002701C0u; return; } if (c.pc != 0x0031B4D0u) [[unlikely]] return; }
L_0031B4D0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0031B544; } }
    c.f[1] = c.r[20].w[0];
    set32(c.r[3], c.r[29].w[0] + 96u);
    st32((c.r[19].w[0] + 352u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43820000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] - 4u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[13] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 536u));
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B534u); c.f[12] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B534u) [[unlikely]] return; }
L_0031B534:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B544u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B544u) [[unlikely]] return; }
L_0031B544:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0031B548:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B4ACu | kUnwind; return; } goto L_0031B4AC; } }
L_0031B554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0031B580:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0031B594; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 492u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);  if (t) { goto L_0031B5A8; } }
L_0031B594:
    set32(c.r[8], ld32((c.r[4].w[0] + 492u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { goto L_0031B5AC; } }
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_0031B5A8:
    set32(c.r[2], c.r[5].w[0] << 1);
    c.budget -= 1;
L_0031B5AC:
    set32(c.r[7], 0u + 118u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_0031B5C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031B664; } }
L_0031B5C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0031B61C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0031B608; } }
L_0031B5DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_0031B5EC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 2;
L_0031B5EC:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 136u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0031B604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B664; } }
L_0031B604:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0031B608:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] - c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B5DCu | kUnwind; return; } goto L_0031B5DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0031B664; } }
L_0031B61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  if (t) { goto L_0031B658; } }
L_0031B624:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_0031B638; } }
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 2;
L_0031B638:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 136u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0031B650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031B664; } }
L_0031B650:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0031B658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B624u | kUnwind; return; } goto L_0031B624; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0031B664:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031B670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B688u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x0031B688u) [[unlikely]] return; }
L_0031B688:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031B6C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 372u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0031B6BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 532u), c.r[3].w[0]);  if (t) { goto L_0031B6C0; } }
L_0031B6BC:
    st32((c.r[16].w[0] + 532u), 0u);
    c.budget -= 1;
L_0031B6C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0031B6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B6CCu);  if (depth < kMaxDepth) unit_0085(c, 416u, depth + 1u); else { c.pc = 0x00317BE0u; return; } if (c.pc != 0x0031B6CCu) [[unlikely]] return; }
L_0031B6CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B6E0u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0031B6E0u) [[unlikely]] return; }
L_0031B6E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031B704; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B704; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B704u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B704u) [[unlikely]] return; }
L_0031B704:
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_0031B73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B71Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031B71Cu) [[unlikely]] return; }
L_0031B71C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B734; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B734u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0031B734u) [[unlikely]] return; }
L_0031B734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0031B760; } }
L_0031B73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B744u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0031B744u) [[unlikely]] return; }
L_0031B744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031B75C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B75Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0031B75Cu) [[unlikely]] return; }
L_0031B75C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_0031B760:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B778u); set32(c.r[8], 0u + 18u);  if (depth < kMaxDepth) unit_0017(c, 190u, depth + 1u); else { c.pc = 0x0015EE00u; return; } if (c.pc != 0x0031B778u) [[unlikely]] return; }
L_0031B778:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 13408u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031B7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031B884; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031B810; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B7F4u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0086(c, 294u, depth + 1u); else { c.pc = 0x0031B580u; return; } if (c.pc != 0x0031B7F4u) [[unlikely]] return; }
L_0031B7F4:
    set32(c.r[5], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 500u), c.r[2].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 516u), c.f[0]);  if (t) { goto L_0031B844; } }
L_0031B810:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B820u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0086(c, 294u, depth + 1u); else { c.pc = 0x0031B580u; return; } if (c.pc != 0x0031B820u) [[unlikely]] return; }
L_0031B820:
    set32(c.r[5], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[5].w[0];
    st32((c.r[17].w[0] + 500u), c.r[2].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 516u), c.f[0]);
    c.budget -= 9;
L_0031B844:
    set32(c.r[4], ld32((c.r[17].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 496u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031B85C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 516u), 0u);  if (t) { goto L_0031B884; } }
L_0031B85C:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);  if (t) { goto L_0031B86C; } }
    breakpoint(c, 0x0031B868u);
    c.budget -= 1;
L_0031B86C:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 255u);
    set32(c.r[4], 0u + 402u);
    st8((c.r[17].w[0] + 513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B884u); st32((c.r[17].w[0] + 520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031B884u) [[unlikely]] return; }
L_0031B884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031B8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031B8C8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031B93C; } }
L_0031B8C8:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031B8F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B8E8u); set32(c.r[5], c.r[2].w[0] - 14u);  if (depth < kMaxDepth) unit_0086(c, 294u, depth + 1u); else { c.pc = 0x0031B580u; return; } if (c.pc != 0x0031B8E8u) [[unlikely]] return; }
L_0031B8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 496u), c.r[2].w[0]);  if (t) { goto L_0031B904; } }
L_0031B8F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B900u); set32(c.r[5], c.r[2].w[0] + 14u);  if (depth < kMaxDepth) unit_0086(c, 294u, depth + 1u); else { c.pc = 0x0031B580u; return; } if (c.pc != 0x0031B900u) [[unlikely]] return; }
L_0031B900:
    st32((c.r[16].w[0] + 496u), c.r[2].w[0]);
    c.budget -= 1;
L_0031B904:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B928; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031B928; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B928u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031B928u) [[unlikely]] return; }
L_0031B928:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B934u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0086(c, 334u, depth + 1u); else { c.pc = 0x0031BCA0u; return; } if (c.pc != 0x0031B934u) [[unlikely]] return; }
L_0031B934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B93Cu); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031B93Cu) [[unlikely]] return; }
L_0031B93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031B950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0031B9E8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 496u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 556u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 576u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 136u));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 496u)));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 372u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0] + 372u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 556u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 556u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 560u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 240u);  if (t) { goto L_0031B9C0; } }
    st32((c.r[4].w[0] + 556u), c.r[2].w[0]);
    set32(c.r[3], 0u - 240u);
    c.budget -= 2;
L_0031B9C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 568u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[1].w[0] - 13448u));
    st32((c.r[4].w[0] + 564u), c.f[0]);
    st8((c.r[4].w[0] + 572u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031B9E0u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031B9E0u) [[unlikely]] return; }
L_0031B9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0031BAC0; } }
L_0031B9E8:
    set32(c.r[8], ld32((c.r[4].w[0] + 556u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031BA20; } }
L_0031B9F4:
    set32(c.r[7], ld32((c.r[4].w[0] + 496u)));
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[5], ld32((c.r[4].w[0] + 576u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.r[6].d[0] = ld16((c.r[6].w[0] + 136u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0031BA2C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0031BA20:
    c.r[5].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031B9F4u | kUnwind; return; } goto L_0031B9F4; } }
L_0031BA2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_0031BABC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 576u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[6], 0u + 118u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 496u)));
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 372u));
    c.r[2].d[0] = c.r[2].d[0] & 254ull;
    st8((c.r[5].w[0] + 372u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 556u), c.r[2].w[0]);  if (t) { goto L_0031BA90; } }
    st32((c.r[4].w[0] + 556u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 556u)));  if (t) { goto L_0031BA94; } }
L_0031BA78:
    set32(c.r[2], ld32((c.r[4].w[0] + 576u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0031BA90:
    set32(c.r[2], ld32((c.r[4].w[0] + 556u)));
    c.budget -= 1;
L_0031BA94:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031BA78u | kUnwind; return; } goto L_0031BA78; } }
    set32(c.r[3], 0u - 16u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 568u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 564u), 0u);
    st8((c.r[4].w[0] + 572u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BABCu); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031BABCu) [[unlikely]] return; }
L_0031BABC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0031BAC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0031BAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BAECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x0031BAECu) [[unlikely]] return; }
L_0031BAEC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031BB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB00u);  if (depth < kMaxDepth) unit_0086(c, 347u, depth + 1u); else { c.pc = 0x0031BF10u; return; } if (c.pc != 0x0031BB00u) [[unlikely]] return; }
L_0031BB00:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_0031BB70; } }
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    st8((c.r[16].w[0] + 548u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 544u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; st32((c.r[16].w[0] + 540u), 0u);  if (t) { goto L_0031BB48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    st32((c.r[16].w[0] + 536u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB40u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BB40u) [[unlikely]] return; }
L_0031BB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_0031BB68; } }
L_0031BB48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 536u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BB64u) [[unlikely]] return; }
L_0031BB64:
    set32(c.r[4], 0u + 402u);
    c.budget -= 1;
L_0031BB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BB70u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031BB70u) [[unlikely]] return; }
L_0031BB70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031BB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031BC88; } }
    set32(c.r[2], 0u + 12u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    st8((c.r[16].w[0] + 548u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 544u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 540u), 0u);  if (t) { goto L_0031BC28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 508u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_0031BC08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC00u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_005B(c, 431u, depth + 1u); else { c.pc = 0x0026FF20u; return; } if (c.pc != 0x0031BC00u) [[unlikely]] return; }
L_0031BC00:
    st32((c.r[16].w[0] + 508u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.budget -= 2;
L_0031BC08:
    st32((c.r[16].w[0] + 536u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC20u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BC20u) [[unlikely]] return; }
L_0031BC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 402u);  if (t) { goto L_0031BC80; } }
L_0031BC28:
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 508u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC50u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_005B(c, 431u, depth + 1u); else { c.pc = 0x0026FF20u; return; } if (c.pc != 0x0031BC50u) [[unlikely]] return; }
L_0031BC50:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031BC60; } }
    st32((c.r[16].w[0] + 508u), 0u);
    c.budget -= 1;
L_0031BC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 536u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BC7Cu) [[unlikely]] return; }
L_0031BC7C:
    set32(c.r[4], 0u + 402u);
    c.budget -= 1;
L_0031BC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BC88u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031BC88u) [[unlikely]] return; }
L_0031BC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031BCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43200000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 588u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 592u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 596u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BCEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BCEC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BCECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BCECu) [[unlikely]] return; }
L_0031BCEC:
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BD00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031BD24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031BE0C; } }
L_0031BD24:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 574u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031BE08; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0031BDF4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 372u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { goto L_0031BD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BD70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0086(c, 307u, depth + 1u); else { c.pc = 0x0031B7B0u; return; } if (c.pc != 0x0031BD70u) [[unlikely]] return; }
L_0031BD70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0031BDFC; } }
L_0031BD7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 576u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 136u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 372u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0] + 372u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 556u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 556u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 560u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 240u);  if (t) { goto L_0031BDCC; } }
    st32((c.r[16].w[0] + 556u), c.r[2].w[0]);
    c.budget -= 1;
L_0031BDCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 568u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[1].w[0] - 13448u));
    set32(c.r[4], 0u + 400u);
    st32((c.r[16].w[0] + 564u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDECu); st8((c.r[16].w[0] + 572u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0031BDECu) [[unlikely]] return; }
L_0031BDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031BE00; } }
L_0031BDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BDFCu);  if (depth < kMaxDepth) unit_0086(c, 307u, depth + 1u); else { c.pc = 0x0031B7B0u; return; } if (c.pc != 0x0031BDFCu) [[unlikely]] return; }
L_0031BDFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031BE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0031BE10; } }
L_0031BE08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031BE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0031BE10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 346u, depth + 1u); else { c.pc = 0x0031BEE0u; return; } if (c.pc != 0x0031BE34u) [[unlikely]] return; }
L_0031BE34:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031BE68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BE84; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE60u); set32(c.r[5], 0u + 98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BE60u) [[unlikely]] return; }
L_0031BE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (t) { goto L_0031BE88; } }
L_0031BE68:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BE84; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BE84u); set32(c.r[5], 0u + 94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BE84u) [[unlikely]] return; }
L_0031BE84:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0031BE88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0031BEA0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BEA0u); set32(c.r[5], 0u + 95u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BEA0u) [[unlikely]] return; }
L_0031BEA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_0031BEC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BEBCu); set32(c.r[5], 0u + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031BEBCu) [[unlikely]] return; }
L_0031BEBC:
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
L_0031BEC0:
    st8((c.r[16].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BEE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031BEFC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031BEFC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031BEFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 496u)));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 372u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031BFA0; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031BFA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0031BF60u) [[unlikely]] return; }
L_0031BF60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031BFA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031BF88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0031BF88u) [[unlikely]] return; }
L_0031BF88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031BFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031BFA4; } }
L_0031BFA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031BFA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031BFC0:
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0031BFD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031BFDC; } }
L_0031BFD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031BFDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031BFF0:
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 4u);  if (t) { [[clang::musttail]] return unit_0087(c, 2u, depth); } }
    [[clang::musttail]] return unit_0087(c, 1u, depth);
}

}
