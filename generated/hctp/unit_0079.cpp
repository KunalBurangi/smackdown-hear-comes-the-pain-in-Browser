#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0079[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 25, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0,
    0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 311,
    0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0,
    341, 0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0,
    354, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0,
    0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0,
    382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0,
    0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0,
};

void unit_0079(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E4000;
    case 2u: goto L_002E4010;
    case 3u: goto L_002E4028;
    case 4u: goto L_002E4060;
    case 5u: goto L_002E4084;
    case 6u: goto L_002E40AC;
    case 7u: goto L_002E40C4;
    case 8u: goto L_002E411C;
    case 9u: goto L_002E4168;
    case 10u: goto L_002E419C;
    case 11u: goto L_002E41CC;
    case 12u: goto L_002E41F0;
    case 13u: goto L_002E423C;
    case 14u: goto L_002E4264;
    case 15u: goto L_002E42A4;
    case 16u: goto L_002E42CC;
    case 17u: goto L_002E42F0;
    case 18u: goto L_002E4320;
    case 19u: goto L_002E433C;
    case 20u: goto L_002E4360;
    case 21u: goto L_002E4390;
    case 22u: goto L_002E43AC;
    case 23u: goto L_002E43D0;
    case 24u: goto L_002E4400;
    case 25u: goto L_002E4414;
    case 26u: goto L_002E4418;
    case 27u: goto L_002E4420;
    case 28u: goto L_002E4430;
    case 29u: goto L_002E444C;
    case 30u: goto L_002E44C0;
    case 31u: goto L_002E44DC;
    case 32u: goto L_002E4590;
    case 33u: goto L_002E45B4;
    case 34u: goto L_002E4600;
    case 35u: goto L_002E4610;
    case 36u: goto L_002E4630;
    case 37u: goto L_002E4640;
    case 38u: goto L_002E4660;
    case 39u: goto L_002E467C;
    case 40u: goto L_002E46E0;
    case 41u: goto L_002E46FC;
    case 42u: goto L_002E4740;
    case 43u: goto L_002E4750;
    case 44u: goto L_002E4770;
    case 45u: goto L_002E4780;
    case 46u: goto L_002E47A0;
    case 47u: goto L_002E47B4;
    case 48u: goto L_002E47E0;
    case 49u: goto L_002E47F4;
    case 50u: goto L_002E4820;
    case 51u: goto L_002E4830;
    case 52u: goto L_002E4840;
    case 53u: goto L_002E4850;
    case 54u: goto L_002E4858;
    case 55u: goto L_002E4860;
    case 56u: goto L_002E4874;
    case 57u: goto L_002E487C;
    case 58u: goto L_002E4890;
    case 59u: goto L_002E48E0;
    case 60u: goto L_002E4934;
    case 61u: goto L_002E4950;
    case 62u: goto L_002E49A8;
    case 63u: goto L_002E4A08;
    case 64u: goto L_002E4A28;
    case 65u: goto L_002E4A80;
    case 66u: goto L_002E4AB4;
    case 67u: goto L_002E4AD0;
    case 68u: goto L_002E4B28;
    case 69u: goto L_002E4B74;
    case 70u: goto L_002E4B90;
    case 71u: goto L_002E4BE0;
    case 72u: goto L_002E4C28;
    case 73u: goto L_002E4C40;
    case 74u: goto L_002E4C90;
    case 75u: goto L_002E4CC4;
    case 76u: goto L_002E4CE0;
    case 77u: goto L_002E4D30;
    case 78u: goto L_002E4D7C;
    case 79u: goto L_002E4D98;
    case 80u: goto L_002E4DE8;
    case 81u: goto L_002E4E1C;
    case 82u: goto L_002E4E38;
    case 83u: goto L_002E4E90;
    case 84u: goto L_002E4EC4;
    case 85u: goto L_002E4EE0;
    case 86u: goto L_002E4F38;
    case 87u: goto L_002E4F74;
    case 88u: goto L_002E4F90;
    case 89u: goto L_002E4FE8;
    case 90u: goto L_002E501C;
    case 91u: goto L_002E5038;
    case 92u: goto L_002E5090;
    case 93u: goto L_002E5118;
    case 94u: goto L_002E5138;
    case 95u: goto L_002E5190;
    case 96u: goto L_002E51D0;
    case 97u: goto L_002E51F0;
    case 98u: goto L_002E520C;
    case 99u: goto L_002E5250;
    case 100u: goto L_002E5280;
    case 101u: goto L_002E5298;
    case 102u: goto L_002E52B0;
    case 103u: goto L_002E52EC;
    case 104u: goto L_002E5398;
    case 105u: goto L_002E53E4;
    case 106u: goto L_002E542C;
    case 107u: goto L_002E5448;
    case 108u: goto L_002E545C;
    case 109u: goto L_002E5480;
    case 110u: goto L_002E548C;
    case 111u: goto L_002E54C0;
    case 112u: goto L_002E5518;
    case 113u: goto L_002E5574;
    case 114u: goto L_002E5614;
    case 115u: goto L_002E56A4;
    case 116u: goto L_002E5700;
    case 117u: goto L_002E5710;
    case 118u: goto L_002E573C;
    case 119u: goto L_002E57B0;
    case 120u: goto L_002E57C4;
    case 121u: goto L_002E57D0;
    case 122u: goto L_002E57E4;
    case 123u: goto L_002E5800;
    case 124u: goto L_002E5810;
    case 125u: goto L_002E5820;
    case 126u: goto L_002E582C;
    case 127u: goto L_002E583C;
    case 128u: goto L_002E5848;
    case 129u: goto L_002E584C;
    case 130u: goto L_002E5880;
    case 131u: goto L_002E58E0;
    case 132u: goto L_002E5910;
    case 133u: goto L_002E5940;
    case 134u: goto L_002E5970;
    case 135u: goto L_002E59A0;
    case 136u: goto L_002E59D0;
    case 137u: goto L_002E5A00;
    case 138u: goto L_002E5A30;
    case 139u: goto L_002E5A60;
    case 140u: goto L_002E5A90;
    case 141u: goto L_002E5AC0;
    case 142u: goto L_002E5AD0;
    case 143u: goto L_002E5AE8;
    case 144u: goto L_002E5B00;
    case 145u: goto L_002E5B68;
    case 146u: goto L_002E5B84;
    case 147u: goto L_002E5BA8;
    case 148u: goto L_002E5BC4;
    case 149u: goto L_002E5BE8;
    case 150u: goto L_002E5C04;
    case 151u: goto L_002E5C24;
    case 152u: goto L_002E5C38;
    case 153u: goto L_002E5C4C;
    case 154u: goto L_002E5C68;
    case 155u: goto L_002E5CC0;
    case 156u: goto L_002E5CF8;
    case 157u: goto L_002E5D3C;
    case 158u: goto L_002E5D68;
    case 159u: goto L_002E5D80;
    case 160u: goto L_002E5DA0;
    case 161u: goto L_002E5DB4;
    case 162u: goto L_002E5DD0;
    case 163u: goto L_002E5DF4;
    case 164u: goto L_002E5E08;
    case 165u: goto L_002E5E24;
    case 166u: goto L_002E5E48;
    case 167u: goto L_002E5E5C;
    case 168u: goto L_002E5E78;
    case 169u: goto L_002E5E9C;
    case 170u: goto L_002E5EB0;
    case 171u: goto L_002E5ECC;
    case 172u: goto L_002E5EF0;
    case 173u: goto L_002E5F04;
    case 174u: goto L_002E5F20;
    case 175u: goto L_002E5F44;
    case 176u: goto L_002E5F58;
    case 177u: goto L_002E5F74;
    case 178u: goto L_002E5FCC;
    case 179u: goto L_002E60D0;
    case 180u: goto L_002E60FC;
    case 181u: goto L_002E6124;
    case 182u: goto L_002E6144;
    case 183u: goto L_002E6170;
    case 184u: goto L_002E6178;
    case 185u: goto L_002E61A4;
    case 186u: goto L_002E61AC;
    case 187u: goto L_002E61D8;
    case 188u: goto L_002E61E0;
    case 189u: goto L_002E620C;
    case 190u: goto L_002E6214;
    case 191u: goto L_002E6240;
    case 192u: goto L_002E6248;
    case 193u: goto L_002E6274;
    case 194u: goto L_002E62C0;
    case 195u: goto L_002E62FC;
    case 196u: goto L_002E6320;
    case 197u: goto L_002E6348;
    case 198u: goto L_002E6384;
    case 199u: goto L_002E63A8;
    case 200u: goto L_002E63D4;
    case 201u: goto L_002E63F4;
    case 202u: goto L_002E640C;
    case 203u: goto L_002E641C;
    case 204u: goto L_002E6430;
    case 205u: goto L_002E6440;
    case 206u: goto L_002E6450;
    case 207u: goto L_002E64D4;
    case 208u: goto L_002E6518;
    case 209u: goto L_002E6540;
    case 210u: goto L_002E6564;
    case 211u: goto L_002E656C;
    case 212u: goto L_002E6570;
    case 213u: goto L_002E6598;
    case 214u: goto L_002E65C4;
    case 215u: goto L_002E65F0;
    case 216u: goto L_002E661C;
    case 217u: goto L_002E6648;
    case 218u: goto L_002E6674;
    case 219u: goto L_002E66A0;
    case 220u: goto L_002E66CC;
    case 221u: goto L_002E6700;
    case 222u: goto L_002E671C;
    case 223u: goto L_002E6744;
    case 224u: goto L_002E676C;
    case 225u: goto L_002E6794;
    case 226u: goto L_002E67BC;
    case 227u: goto L_002E67E4;
    case 228u: goto L_002E680C;
    case 229u: goto L_002E6834;
    case 230u: goto L_002E685C;
    case 231u: goto L_002E6874;
    case 232u: goto L_002E6884;
    case 233u: goto L_002E68A4;
    case 234u: goto L_002E68D4;
    case 235u: goto L_002E68F0;
    case 236u: goto L_002E6900;
    case 237u: goto L_002E6910;
    case 238u: goto L_002E6920;
    case 239u: goto L_002E693C;
    case 240u: goto L_002E6964;
    case 241u: goto L_002E698C;
    case 242u: goto L_002E69B4;
    case 243u: goto L_002E69DC;
    case 244u: goto L_002E6A04;
    case 245u: goto L_002E6A2C;
    case 246u: goto L_002E6A54;
    case 247u: goto L_002E6A7C;
    case 248u: goto L_002E6AA4;
    case 249u: goto L_002E6AC4;
    case 250u: goto L_002E6AF4;
    case 251u: goto L_002E6B00;
    case 252u: goto L_002E6B10;
    case 253u: goto L_002E6B20;
    case 254u: goto L_002E6B30;
    case 255u: goto L_002E6B40;
    case 256u: goto L_002E6B50;
    case 257u: goto L_002E6B60;
    case 258u: goto L_002E6B70;
    case 259u: goto L_002E6B80;
    case 260u: goto L_002E6B90;
    case 261u: goto L_002E6BA4;
    case 262u: goto L_002E6BD0;
    case 263u: goto L_002E6BF8;
    case 264u: goto L_002E6C08;
    case 265u: goto L_002E6C18;
    case 266u: goto L_002E6C6C;
    case 267u: goto L_002E6C74;
    case 268u: goto L_002E6C84;
    case 269u: goto L_002E6C94;
    case 270u: goto L_002E6CD0;
    case 271u: goto L_002E6CDC;
    case 272u: goto L_002E6D04;
    case 273u: goto L_002E6D14;
    case 274u: goto L_002E6D24;
    case 275u: goto L_002E6D74;
    case 276u: goto L_002E6D80;
    case 277u: goto L_002E6DA8;
    case 278u: goto L_002E6DB8;
    case 279u: goto L_002E6DC8;
    case 280u: goto L_002E6E1C;
    case 281u: goto L_002E6E28;
    case 282u: goto L_002E6E34;
    case 283u: goto L_002E6E40;
    case 284u: goto L_002E6E68;
    case 285u: goto L_002E6E78;
    case 286u: goto L_002E6E88;
    case 287u: goto L_002E6EE8;
    case 288u: goto L_002E6EF8;
    case 289u: goto L_002E6F08;
    case 290u: goto L_002E6F64;
    case 291u: goto L_002E6F74;
    case 292u: goto L_002E6F84;
    case 293u: goto L_002E6FE0;
    case 294u: goto L_002E6FF0;
    case 295u: goto L_002E7000;
    case 296u: goto L_002E7050;
    case 297u: goto L_002E70B0;
    case 298u: goto L_002E70C0;
    case 299u: goto L_002E70D8;
    case 300u: goto L_002E70F0;
    case 301u: goto L_002E711C;
    case 302u: goto L_002E717C;
    case 303u: goto L_002E718C;
    case 304u: goto L_002E71A0;
    case 305u: goto L_002E71A8;
    case 306u: goto L_002E71BC;
    case 307u: goto L_002E71C4;
    case 308u: goto L_002E71D8;
    case 309u: goto L_002E71E0;
    case 310u: goto L_002E71F4;
    case 311u: goto L_002E71FC;
    case 312u: goto L_002E7210;
    case 313u: goto L_002E7218;
    case 314u: goto L_002E722C;
    case 315u: goto L_002E7234;
    case 316u: goto L_002E7248;
    case 317u: goto L_002E728C;
    case 318u: goto L_002E72A0;
    case 319u: goto L_002E72B8;
    case 320u: goto L_002E72E0;
    case 321u: goto L_002E72F0;
    case 322u: goto L_002E7304;
    case 323u: goto L_002E7324;
    case 324u: goto L_002E7340;
    case 325u: goto L_002E7354;
    case 326u: goto L_002E7374;
    case 327u: goto L_002E7390;
    case 328u: goto L_002E73B8;
    case 329u: goto L_002E73D8;
    case 330u: goto L_002E73E4;
    case 331u: goto L_002E7400;
    case 332u: goto L_002E7418;
    case 333u: goto L_002E7470;
    case 334u: goto L_002E7498;
    case 335u: goto L_002E74AC;
    case 336u: goto L_002E74B4;
    case 337u: goto L_002E74C8;
    case 338u: goto L_002E74D0;
    case 339u: goto L_002E74E4;
    case 340u: goto L_002E74EC;
    case 341u: goto L_002E7500;
    case 342u: goto L_002E7508;
    case 343u: goto L_002E751C;
    case 344u: goto L_002E7524;
    case 345u: goto L_002E7538;
    case 346u: goto L_002E7540;
    case 347u: goto L_002E7554;
    case 348u: goto L_002E7564;
    case 349u: goto L_002E7570;
    case 350u: goto L_002E75A8;
    case 351u: goto L_002E75D0;
    case 352u: goto L_002E75E4;
    case 353u: goto L_002E75EC;
    case 354u: goto L_002E7600;
    case 355u: goto L_002E7608;
    case 356u: goto L_002E761C;
    case 357u: goto L_002E7624;
    case 358u: goto L_002E7638;
    case 359u: goto L_002E7640;
    case 360u: goto L_002E7654;
    case 361u: goto L_002E765C;
    case 362u: goto L_002E7670;
    case 363u: goto L_002E7678;
    case 364u: goto L_002E768C;
    case 365u: goto L_002E769C;
    case 366u: goto L_002E76A8;
    case 367u: goto L_002E76C0;
    case 368u: goto L_002E76D4;
    case 369u: goto L_002E76F8;
    case 370u: goto L_002E7720;
    case 371u: goto L_002E773C;
    case 372u: goto L_002E7750;
    case 373u: goto L_002E7760;
    case 374u: goto L_002E7780;
    case 375u: goto L_002E77A4;
    case 376u: goto L_002E77D0;
    case 377u: goto L_002E77D8;
    case 378u: goto L_002E77E0;
    case 379u: goto L_002E77E8;
    case 380u: goto L_002E77F0;
    case 381u: goto L_002E77F8;
    case 382u: goto L_002E7800;
    case 383u: goto L_002E7814;
    case 384u: goto L_002E7830;
    case 385u: goto L_002E7854;
    case 386u: goto L_002E7880;
    case 387u: goto L_002E7888;
    case 388u: goto L_002E7890;
    case 389u: goto L_002E7898;
    case 390u: goto L_002E78A0;
    case 391u: goto L_002E78A8;
    case 392u: goto L_002E78B0;
    case 393u: goto L_002E78C4;
    case 394u: goto L_002E78E0;
    case 395u: goto L_002E78F4;
    case 396u: goto L_002E7914;
    case 397u: goto L_002E793C;
    case 398u: goto L_002E794C;
    case 399u: goto L_002E795C;
    case 400u: goto L_002E796C;
    case 401u: goto L_002E7998;
    case 402u: goto L_002E79C0;
    case 403u: goto L_002E79D0;
    case 404u: goto L_002E79E0;
    case 405u: goto L_002E7A1C;
    case 406u: goto L_002E7A28;
    case 407u: goto L_002E7A34;
    case 408u: goto L_002E7A40;
    case 409u: goto L_002E7A68;
    case 410u: goto L_002E7A78;
    case 411u: goto L_002E7A88;
    case 412u: goto L_002E7B04;
    case 413u: goto L_002E7B10;
    case 414u: goto L_002E7B1C;
    case 415u: goto L_002E7B28;
    case 416u: goto L_002E7B34;
    case 417u: goto L_002E7B40;
    case 418u: goto L_002E7B68;
    case 419u: goto L_002E7B78;
    case 420u: goto L_002E7B88;
    case 421u: goto L_002E7BE8;
    case 422u: goto L_002E7BF8;
    case 423u: goto L_002E7C08;
    case 424u: goto L_002E7C64;
    case 425u: goto L_002E7C74;
    case 426u: goto L_002E7C84;
    case 427u: goto L_002E7CEC;
    case 428u: goto L_002E7CFC;
    case 429u: goto L_002E7D0C;
    case 430u: goto L_002E7D74;
    case 431u: goto L_002E7D84;
    case 432u: goto L_002E7D94;
    case 433u: goto L_002E7DFC;
    case 434u: goto L_002E7E0C;
    case 435u: goto L_002E7E1C;
    case 436u: goto L_002E7E80;
    case 437u: goto L_002E7EBC;
    case 438u: goto L_002E7ED4;
    case 439u: goto L_002E7EF0;
    case 440u: goto L_002E7F74;
    case 441u: goto L_002E7FB8;
    case 442u: goto L_002E7FD0;
    case 443u: goto L_002E7FE0;
    case 444u: goto L_002E7FF0;
    default: bad_entry(c, 0x002E4000u); return;
    }
L_002E4000:
    c.r[7].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4010u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0078(c, 395u, depth + 1u); else { c.pc = 0x002E3710u; return; } if (c.pc != 0x002E4010u) [[unlikely]] return; }
L_002E4010:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3FACu | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 439u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4414; } }
L_002E4028:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 44u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E4414; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[18], c.r[21].w[0] + 8u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + 20u);
    c.budget -= 4;
L_002E4060:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E40AC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4084u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0079(c, 94u, depth + 1u); else { c.pc = 0x002E5138u; return; } if (c.pc != 0x002E4084u) [[unlikely]] return; }
L_002E4084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_002E40AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E40AC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E40ACu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0078(c, 398u, depth + 1u); else { c.pc = 0x002E3780u; return; } if (c.pc != 0x002E40ACu) [[unlikely]] return; }
L_002E40AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E4060u | kUnwind; return; } goto L_002E4060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4414; } }
L_002E40C4:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 44u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 1u);  if (t) { goto L_002E4414; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[21].w[0] + 8u);  if (t) { goto L_002E40FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 126u);  if (t) { goto L_002E4114; } }
L_002E40FC:
    c.r[1].d[0] = c.r[2].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E4110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002E4114; } }
L_002E4110:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002E4114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002E4154; } }
L_002E411C:
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].d[0] = c.r[2].sd[0] < 127ll ? 1ull : 0ull;  if (t) { goto L_002E4130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 126u);  if (t) { goto L_002E4144; } }
L_002E4130:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E4140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002E4144; } }
L_002E4140:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002E4144:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[22].sd[0] < 127ll ? 1ull : 0ull;  if (t) { goto L_002E4174; } }
L_002E4154:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], 0u + 17u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4168u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 94u, depth + 1u); else { c.pc = 0x002E5138u; return; } if (c.pc != 0x002E4168u) [[unlikely]] return; }
L_002E4168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E411Cu | kUnwind; return; } goto L_002E411C; } }
    c.r[1].d[0] = c.r[22].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 1;
L_002E4174:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E4414; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E419Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 396u, depth + 1u); else { c.pc = 0x002E3740u; return; } if (c.pc != 0x002E419Cu) [[unlikely]] return; }
L_002E419C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] < 0;  if (t) { goto L_002E4414; } }
    c.r[7].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], 0u + 8192u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_002E41CC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E41CCu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 395u, depth + 1u); else { c.pc = 0x002E3710u; return; } if (c.pc != 0x002E41CCu) [[unlikely]] return; }
L_002E41CC:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_002E41F0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E41F0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 400u, depth + 1u); else { c.pc = 0x002E37C0u; return; } if (c.pc != 0x002E41F0u) [[unlikely]] return; }
L_002E41F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[22].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[3].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    st16((c.r[3].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E4414; } }
L_002E423C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    set32(c.r[19], c.r[21].w[0] + 8u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E42B4; } }
L_002E4264:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002E42B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002E42B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E42A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4CE0u; return; } if (c.pc != 0x002E42A4u) [[unlikely]] return; }
L_002E42A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
L_002E42B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E42B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E4264u | kUnwind; return; } goto L_002E4264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4414; } }
L_002E42CC:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E4324; } }
L_002E42F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], 0u + 2u);  if (t) { goto L_002E4320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4320u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 76u, depth + 1u); else { c.pc = 0x002E4CE0u; return; } if (c.pc != 0x002E4320u) [[unlikely]] return; }
L_002E4320:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E4324:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E42F0u | kUnwind; return; } goto L_002E42F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4414; } }
L_002E433C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E4394; } }
L_002E4360:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], 0u + 31u);  if (t) { goto L_002E4390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4390u);  if (depth < kMaxDepth) unit_0079(c, 67u, depth + 1u); else { c.pc = 0x002E4AD0u; return; } if (c.pc != 0x002E4390u) [[unlikely]] return; }
L_002E4390:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E4394:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E4360u | kUnwind; return; } goto L_002E4360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E4414; } }
L_002E43AC:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 2560u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002E4404; } }
L_002E43D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], 0u + 31u);  if (t) { goto L_002E4400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4400u);  if (depth < kMaxDepth) unit_0079(c, 67u, depth + 1u); else { c.pc = 0x002E4AD0u; return; } if (c.pc != 0x002E4400u) [[unlikely]] return; }
L_002E4400:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E4404:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E43D0u | kUnwind; return; } goto L_002E43D0; } }
L_002E4414:
    st32((c.r[21].w[0]), 0u);
    c.budget -= 1;
L_002E4418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4420u);  if (depth < kMaxDepth) unit_0078(c, 382u, depth + 1u); else { c.pc = 0x002E3430u; return; } if (c.pc != 0x002E4420u) [[unlikely]] return; }
L_002E4420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E38D0u | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 407u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E380Cu | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 402u, depth); } }
L_002E4430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E444Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E444Cu) [[unlikely]] return; }
L_002E444C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 19u);  if (t) { goto L_002E445C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E44A8; } }
L_002E445C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 19;
L_002E44A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E44C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E44DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E44DCu) [[unlikely]] return; }
L_002E44DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 23u);  if (t) { goto L_002E44EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E457C; } }
L_002E44EC:
    set32(c.r[3], 0u + 127u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002E450C; } }
    breakpoint(c, 0x002E4508u);
    c.budget -= 1;
L_002E450C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 11488u)));
    set32(c.r[3], c.r[3].w[0] - 23360u);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] >> 4);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 28;
L_002E457C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E45B4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E45B4u) [[unlikely]] return; }
L_002E45B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E45C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E45DC; } }
L_002E45C4:
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], 0u + 24u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002E45DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E4600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4610u);  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E4610u) [[unlikely]] return; }
L_002E4610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 25u);  if (t) { goto L_002E461C; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E461C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E4630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4640u);  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E4640u) [[unlikely]] return; }
L_002E4640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 26u);  if (t) { goto L_002E464C; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E464C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E4660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E467Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E467Cu) [[unlikely]] return; }
L_002E467C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_002E468C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E46C0; } }
L_002E468C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - 23360u);
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] - 11488u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 13;
L_002E46C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E46E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E46FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E46FCu) [[unlikely]] return; }
L_002E46FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_002E470C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E4720; } }
L_002E470C:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_002E4720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E4740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4750u);  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E4750u) [[unlikely]] return; }
L_002E4750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 17u);  if (t) { goto L_002E475C; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E475C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E4770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4780u);  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E4780u) [[unlikely]] return; }
L_002E4780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 18u);  if (t) { goto L_002E478C; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_002E478C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E47A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E47B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E47B4u) [[unlikely]] return; }
L_002E47B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 11u);  if (t) { goto L_002E47C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E47D0; } }
L_002E47C4:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002E47D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E47E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E47F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 384u, depth + 1u); else { c.pc = 0x002E3480u; return; } if (c.pc != 0x002E47F4u) [[unlikely]] return; }
L_002E47F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_002E4804; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E4810; } }
L_002E4804:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002E4810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E4820:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2540u | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 258u, depth); }
L_002E4830:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E24B0u | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 254u, depth); }
L_002E4840:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2A20u | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 305u, depth); }
L_002E4850:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E26B0u | kUnwind; return; } [[clang::musttail]] return unit_0078(c, 271u, depth); }
L_002E4858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002E4860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 187u, depth + 1u); else { c.pc = 0x00115188u; return; } if (c.pc != 0x002E4874u) [[unlikely]] return; }
L_002E4874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E487Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 203u, depth + 1u); else { c.pc = 0x00115588u; return; } if (c.pc != 0x002E487Cu) [[unlikely]] return; }
L_002E487C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E4890:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] - 11456u);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E48E0u); st64((c.r[29].w[0] + 184u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E48E0u) [[unlikely]] return; }
L_002E48E0:
    st32((c.r[17].w[0] - 11456u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] - 11456u);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[8], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[16].w[0]), c.r[8].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4934u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4934u) [[unlikely]] return; }
L_002E4934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E4950:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11392u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E49A8u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E49A8u) [[unlikely]] return; }
L_002E49A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[18].w[0] - 11392u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[8], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[8].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4A08u); st32((c.r[16].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4A08u) [[unlikely]] return; }
L_002E4A08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E4A28:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11392u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4A80u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4A80u) [[unlikely]] return; }
L_002E4A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] - 11392u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4AB4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4AB4u) [[unlikely]] return; }
L_002E4AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E4AD0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11392u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B28u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4B28u) [[unlikely]] return; }
L_002E4B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] - 11392u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4B74u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4B74u) [[unlikely]] return; }
L_002E4B74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E4B90:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] - 11328u);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4BE0u); st64((c.r[29].w[0] + 184u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4BE0u) [[unlikely]] return; }
L_002E4BE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[17].w[0] - 11328u), c.r[3].w[0]);
    set32(c.r[6], c.r[17].w[0] - 11328u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[16].w[0]), c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[16].w[0]), c.r[7].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C28u); st32((c.r[16].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4C28u) [[unlikely]] return; }
L_002E4C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E4C40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] - 11328u);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4C90u); st64((c.r[29].w[0] + 184u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4C90u) [[unlikely]] return; }
L_002E4C90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 11328u), c.r[3].w[0]);
    set32(c.r[6], c.r[17].w[0] - 11328u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[5].d[0] = 0ull | 37104ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4CC4u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4CC4u) [[unlikely]] return; }
L_002E4CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E4CE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] - 11328u);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4D30u); st64((c.r[29].w[0] + 184u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4D30u) [[unlikely]] return; }
L_002E4D30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] - 11328u), c.r[3].w[0]);
    set32(c.r[6], c.r[17].w[0] - 11328u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[7], 0u + 64u);
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4D7Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4D7Cu) [[unlikely]] return; }
L_002E4D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E4D98:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] - 11328u);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4DE8u); st64((c.r[29].w[0] + 184u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4DE8u) [[unlikely]] return; }
L_002E4DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] - 11328u), c.r[3].w[0]);
    set32(c.r[6], c.r[17].w[0] - 11328u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.r[5].d[0] = 0ull | 37104ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4E1Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4E1Cu) [[unlikely]] return; }
L_002E4E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E4E38:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11264u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4E90u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4E90u) [[unlikely]] return; }
L_002E4E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] - 11264u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4EC4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4EC4u) [[unlikely]] return; }
L_002E4EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E4EE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11200u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4F38u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4F38u) [[unlikely]] return; }
L_002E4F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03000000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[18].w[0] - 11200u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4F74u); st32((c.r[16].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E4F74u) [[unlikely]] return; }
L_002E4F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E4F90:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11200u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E4FE8u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E4FE8u) [[unlikely]] return; }
L_002E4FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03000000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] - 11200u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E501Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E501Cu) [[unlikely]] return; }
L_002E501C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E5038:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11200u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5090u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E5090u) [[unlikely]] return; }
L_002E5090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03000000u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[18].w[0] - 11200u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[7], 0u + 64u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[8], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[16].w[0]), c.r[8].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5118u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E5118u) [[unlikely]] return; }
L_002E5118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E5138:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 11200u);
    st64((c.r[29].w[0] + 152u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 168u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[8].d[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st64((c.r[29].w[0] + 184u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[10].d[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5190u); st64((c.r[29].w[0] + 200u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002E5190u) [[unlikely]] return; }
L_002E5190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x03000000u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[18].w[0] - 11200u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.r[5].d[0] = 0ull | 37104ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[7], 0u + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E51D0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 198u, depth + 1u); else { c.pc = 0x001152C8u; return; } if (c.pc != 0x002E51D0u) [[unlikely]] return; }
L_002E51D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002E51F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E520Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002E520Cu) [[unlikely]] return; }
L_002E520C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13840u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E5250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E5298; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5280u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002E5280u) [[unlikely]] return; }
L_002E5280:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E529C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E5298u) [[unlikely]] return; }
L_002E5298:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E529C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E52B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E5320; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 38u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28352u);  if (t) { goto L_002E5314; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 1;
L_002E52EC:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E5310; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002E5310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[7].w[0]);  if (t) { goto L_002E5320; } }
L_002E5310:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002E5314:
    c.r[3].d[0] = c.r[7].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E52ECu | kUnwind; return; } goto L_002E52EC; } }
L_002E5320:
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002E54A4; } }
    c.r[3].d[0] = c.r[4].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002E54A8; } }
L_002E5340:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002E54A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E54A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 15170u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15160u);  if (t) { goto L_002E53C4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_002E538C; } }
    set32(c.r[18], c.r[18].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 2;
L_002E538C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5398u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002E5398u) [[unlikely]] return; }
L_002E5398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002E53AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002E53AC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E53AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E54A4; } }
    st32((c.r[3].w[0] + 48u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E54A4; } }
    set32(c.r[3], 0u + 15160u);
    c.budget -= 1;
L_002E53C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E54A4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E54A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E5498; } }
L_002E53E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E54A4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E5494; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E5420; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002E5420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E542Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002E542Cu) [[unlikely]] return; }
L_002E542C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E5440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002E5440; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E5440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5448u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x002E5448u) [[unlikely]] return; }
L_002E5448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5494; } }
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E545Cu); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 16u, depth + 1u); else { c.pc = 0x00144400u; return; } if (c.pc != 0x002E545Cu) [[unlikely]] return; }
L_002E545C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E5494; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5480u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002E5480u) [[unlikely]] return; }
L_002E5480:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E548Cu); set32(c.r[5], 0u + 15170u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002E548Cu) [[unlikely]] return; }
L_002E548C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E54A4; } }
L_002E5494:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002E5498:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E53E4u | kUnwind; return; } goto L_002E53E4; } }
L_002E54A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002E54A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E54C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 38u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E56E8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], 0u + 15160u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E56E8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002E56E8; } }
    set32(c.r[6], 0u - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28352u);  if (t) { goto L_002E5534; } }
L_002E5518:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002E5530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E5540; } }
L_002E5530:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002E5534:
    c.r[3].d[0] = c.r[5].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E5518u | kUnwind; return; } goto L_002E5518; } }
L_002E5540:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002E56E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);  if (t) { goto L_002E556C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002E556C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5574u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002E5574u) [[unlikely]] return; }
L_002E5574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E5580; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002E5580:
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = c.f[3] ^ fp::kSign;  if (t) { goto L_002E559C; } }
    c.f[1] = c.f[3];
    c.budget -= 1;
L_002E559C:
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[2] ^ fp::kSign;  if (t) { goto L_002E55B8; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_002E55B8:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E5654; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E55E8; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E560C; } }
L_002E55E8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 10u);  if (t) { goto L_002E56E4; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E56E0; } }
L_002E560C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5614u);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x002E5614u) [[unlikely]] return; }
L_002E5614:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = ld32((c.r[1].w[0] - 23344u));
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_002E56E0; } }
L_002E5654:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E5678; } }
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E569C; } }
L_002E5678:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E56E0; } }
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E56E0; } }
L_002E569C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E56A4u);  if (depth < kMaxDepth) unit_0010(c, 27u, depth + 1u); else { c.pc = 0x00140650u; return; } if (c.pc != 0x002E56A4u) [[unlikely]] return; }
L_002E56A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = ld32((c.r[1].w[0] - 23344u));
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 15;
L_002E56E0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_002E56E4:
    st32((c.r[18].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 1;
L_002E56E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E5700:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E52B0u | kUnwind; return; } goto L_002E52B0; }
L_002E5710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E573Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 50u, depth + 1u); else { c.pc = 0x002C4C70u; return; } if (c.pc != 0x002E573Cu) [[unlikely]] return; }
L_002E573C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15120u);
    set32(c.r[2], c.r[2].w[0] + 15208u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 160u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 2360u), 0u);
    set32(c.r[2], 0u + 402u);
    st32((c.r[16].w[0] + 2364u), 0u);
    st32((c.r[16].w[0] + 2368u), 0u);
    st32((c.r[16].w[0] + 2372u), 0u);
    st32((c.r[16].w[0] + 2376u), 0u);
    st32((c.r[16].w[0] + 2380u), 0u);
    st32((c.r[16].w[0] + 2384u), 0u);
    st32((c.r[16].w[0] + 2388u), 0u);
    st32((c.r[16].w[0] + 2392u), 0u);
    st32((c.r[16].w[0] + 2404u), 0u);
    st8((c.r[16].w[0] + 2432u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 2436u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2440u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 2444u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 2448u), 0u);
    st32((c.r[16].w[0] + 2452u), 0u);
    st32((c.r[16].w[0] + 2456u), 0u);
    st32((c.r[16].w[0] + 2460u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57B0u); st32((c.r[16].w[0] + 2464u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E57B0u) [[unlikely]] return; }
L_002E57B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E57C4; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57C4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002E57C4u) [[unlikely]] return; }
L_002E57C4:
    st32((c.r[16].w[0] + 2396u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57D0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E57D0u) [[unlikely]] return; }
L_002E57D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E57E4; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E57E4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x002E57E4u) [[unlikely]] return; }
L_002E57E4:
    st32((c.r[16].w[0] + 2400u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 10011u);
    set32(c.r[18], c.r[2].w[0] + 624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5800u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002E5800u) [[unlikely]] return; }
L_002E5800:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5810u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002E5810u) [[unlikely]] return; }
L_002E5810:
    set32(c.r[4], ld32((c.r[16].w[0] + 2396u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5820u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002E5820u) [[unlikely]] return; }
L_002E5820:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E582Cu); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x002E582Cu) [[unlikely]] return; }
L_002E582C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E583Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x002E583Cu) [[unlikely]] return; }
L_002E583C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2400u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E584Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x002E584Cu) [[unlikely]] return; }
    goto L_002E584C;
L_002E5848:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E584C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E5880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E5AE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 15120u);
    set32(c.r[2], c.r[2].w[0] + 15208u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2360u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E58E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E58E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E58E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E58E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E58E0u) [[unlikely]] return; }
L_002E58E0:
    st32((c.r[17].w[0] + 2360u), 0u);
    c.budget -= 1;
L_002E58E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5914; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5910; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5910; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5910u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5910u) [[unlikely]] return; }
L_002E5910:
    st32((c.r[17].w[0] + 2364u), 0u);
    c.budget -= 1;
L_002E5914:
    set32(c.r[4], ld32((c.r[17].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5944; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5940; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5940u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5940u) [[unlikely]] return; }
L_002E5940:
    st32((c.r[17].w[0] + 2368u), 0u);
    c.budget -= 1;
L_002E5944:
    set32(c.r[4], ld32((c.r[17].w[0] + 2372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5974; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5970; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5970; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5970u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5970u) [[unlikely]] return; }
L_002E5970:
    st32((c.r[17].w[0] + 2372u), 0u);
    c.budget -= 1;
L_002E5974:
    set32(c.r[4], ld32((c.r[17].w[0] + 2376u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E59A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E59A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E59A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E59A0u) [[unlikely]] return; }
L_002E59A0:
    st32((c.r[17].w[0] + 2376u), 0u);
    c.budget -= 1;
L_002E59A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2380u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E59D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E59D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E59D0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E59D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E59D0u) [[unlikely]] return; }
L_002E59D0:
    st32((c.r[17].w[0] + 2380u), 0u);
    c.budget -= 1;
L_002E59D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5A00u) [[unlikely]] return; }
L_002E5A00:
    st32((c.r[17].w[0] + 2384u), 0u);
    c.budget -= 1;
L_002E5A04:
    set32(c.r[4], ld32((c.r[17].w[0] + 2388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A34; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5A30u) [[unlikely]] return; }
L_002E5A30:
    st32((c.r[17].w[0] + 2388u), 0u);
    c.budget -= 1;
L_002E5A34:
    set32(c.r[4], ld32((c.r[17].w[0] + 2392u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A60u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5A60u) [[unlikely]] return; }
L_002E5A60:
    st32((c.r[17].w[0] + 2392u), 0u);
    c.budget -= 1;
L_002E5A64:
    set32(c.r[4], ld32((c.r[17].w[0] + 2396u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5A90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5A90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5A90u) [[unlikely]] return; }
L_002E5A90:
    st32((c.r[17].w[0] + 2396u), 0u);
    c.budget -= 1;
L_002E5A94:
    set32(c.r[4], ld32((c.r[17].w[0] + 2400u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5AC4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5AC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E5AC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5AC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5AC0u) [[unlikely]] return; }
L_002E5AC0:
    st32((c.r[17].w[0] + 2400u), 0u);
    c.budget -= 1;
L_002E5AC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5AD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0071(c, 53u, depth + 1u); else { c.pc = 0x002C4CF0u; return; } if (c.pc != 0x002E5AD0u) [[unlikely]] return; }
L_002E5AD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E5AEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5AE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E5AE8u) [[unlikely]] return; }
L_002E5AE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E5AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E5B00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11136u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[29].w[0] + 156u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 2360u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E5B88; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5B68u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5B68u) [[unlikely]] return; }
L_002E5B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5B84; } }
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5B84u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5B84u) [[unlikely]] return; }
L_002E5B84:
    st32((c.r[17].w[0] + 2360u), c.r[2].w[0]);
    c.budget -= 1;
L_002E5B88:
    set32(c.r[2], ld32((c.r[17].w[0] + 2364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5BC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5BA8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5BA8u) [[unlikely]] return; }
L_002E5BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5BC4; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5BC4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5BC4u) [[unlikely]] return; }
L_002E5BC4:
    st32((c.r[17].w[0] + 2364u), c.r[2].w[0]);
    c.budget -= 1;
L_002E5BC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E5C24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5BE8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5BE8u) [[unlikely]] return; }
L_002E5BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5C04; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5C04u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5C04u) [[unlikely]] return; }
L_002E5C04:
    st32((c.r[17].w[0] + 2368u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2368u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5C24u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5C24u) [[unlikely]] return; }
L_002E5C24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002E5CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5C38u);  if (depth < kMaxDepth) unit_006E(c, 486u, depth + 1u); else { c.pc = 0x002BBCA0u; return; } if (c.pc != 0x002E5C38u) [[unlikely]] return; }
L_002E5C38:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5C4Cu); c.f[22] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006E(c, 486u, depth + 1u); else { c.pc = 0x002BBCA0u; return; } if (c.pc != 0x002E5C4Cu) [[unlikely]] return; }
L_002E5C4C:
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 156u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = ld32((c.r[2].w[0] + 72u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5C68u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x002E5C68u) [[unlikely]] return; }
L_002E5C68:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 2360u)));
    c.f[0] = fp::add(c.f[22], c.f[20]);
    c.f[21] = fp::cvt_s_w(c.f[1]);
    c.f[20] = 0u;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = fp::add(c.f[21], c.f[0]);  if (t) { goto L_002E5CC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[3].w[0] + 68u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5CC0u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5CC0u) [[unlikely]] return; }
L_002E5CC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 2364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.f[0] = fp::add(c.f[22], c.f[21]);  if (t) { goto L_002E5CF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[20] = fp::add(c.f[20], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[3].w[0] + 68u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5CF8u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5CF8u) [[unlikely]] return; }
L_002E5CF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002E5D1C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E5D1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5D3Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5D3Cu) [[unlikely]] return; }
L_002E5D3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[21].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 2404u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[17].w[0] + 2448u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[17].w[0] + 2452u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[17].w[0] + 2456u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2464u), 0u);  if (t) { goto L_002E5FAC; } }
L_002E5D68:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_002E5F98; } }
L_002E5D80:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E5F94; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23328u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E5DA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 2372u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5DB4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5DB4u) [[unlikely]] return; }
L_002E5DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5DD0; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5DD0u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5DD0u) [[unlikely]] return; }
L_002E5DD0:
    st32((c.r[17].w[0] + 2372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2372u)));
    st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002E5DDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[22].w[0] + 56u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002E5F94; } }
L_002E5DF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 2376u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5E08u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5E08u) [[unlikely]] return; }
L_002E5E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5E24; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5E24u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5E24u) [[unlikely]] return; }
L_002E5E24:
    st32((c.r[17].w[0] + 2376u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2376u)));
    st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002E5E30:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[18].w[0] + 1080u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002E5F94; } }
L_002E5E48:
    set32(c.r[2], ld32((c.r[17].w[0] + 2380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5E5Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5E5Cu) [[unlikely]] return; }
L_002E5E5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5E78; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5E78u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5E78u) [[unlikely]] return; }
L_002E5E78:
    st32((c.r[17].w[0] + 2380u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2380u)));
    st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002E5E84:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[18].w[0] + 1336u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002E5F94; } }
L_002E5E9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 2384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5EB0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5EB0u) [[unlikely]] return; }
L_002E5EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5ECC; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5ECCu); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5ECCu) [[unlikely]] return; }
L_002E5ECC:
    st32((c.r[17].w[0] + 2384u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2384u)));
    st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002E5ED8:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] + 1592u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002E5F94; } }
L_002E5EF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 2388u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5F04u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5F04u) [[unlikely]] return; }
L_002E5F04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5F20; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5F20u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5F20u) [[unlikely]] return; }
L_002E5F20:
    st32((c.r[17].w[0] + 2388u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2388u)));
    st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002E5F2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[18].w[0] + 1848u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002E5F94; } }
L_002E5F44:
    set32(c.r[2], ld32((c.r[17].w[0] + 2392u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E5F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5F58u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E5F58u) [[unlikely]] return; }
L_002E5F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E5F74; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5F74u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E5F74u) [[unlikely]] return; }
L_002E5F74:
    st32((c.r[17].w[0] + 2392u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2392u)));
    st8((c.r[2].w[0] + 204u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002E5F80:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[18].w[0] + 2104u);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002E5F94:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002E5F98:
    set32(c.r[2], ld32((c.r[17].w[0] + 2448u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E5D80u | kUnwind; return; } goto L_002E5D80; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002E5FAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 2452u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] << 6);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E5D68u | kUnwind; return; } goto L_002E5D68; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E5FCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E5FCCu) [[unlikely]] return; }
L_002E5FCC:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 2408u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 2412u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[17].w[0] + 2416u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[17].w[0] + 2420u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[17].w[0] + 2424u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    st32((c.r[17].w[0] + 2428u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2408u));
    set32(c.r[4], ld32((c.r[17].w[0] + 2396u)));
    c.f[1] = ld32((c.r[17].w[0] + 2412u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    st32((c.r[4].w[0] + 100u), c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[2]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 2428u));
    set32(c.r[4], ld32((c.r[17].w[0] + 2396u)));
    c.f[0] = ld32((c.r[17].w[0] + 2424u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2416u));
    set32(c.r[4], ld32((c.r[17].w[0] + 2400u)));
    c.f[1] = ld32((c.r[17].w[0] + 2420u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    st32((c.r[4].w[0] + 100u), c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[2]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 2428u));
    set32(c.r[4], ld32((c.r[17].w[0] + 2400u)));
    c.f[0] = ld32((c.r[17].w[0] + 2424u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 62;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002E60D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002E628C; } }
L_002E60FC:
    set32(c.r[4], ld32((c.r[21].w[0] + 2464u)));
    set32(c.r[3], c.r[20].w[0] << 6);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[18], c.r[20].w[0] << 2);
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 2460u), c.r[3].w[0]);  if (t) { goto L_002E6278; } }
L_002E6124:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E6274; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23296u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E6144:
    set32(c.r[3], ld32((c.r[21].w[0] + 2404u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 2464u)));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6170u); set32(c.r[5], c.r[17].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6170u) [[unlikely]] return; }
L_002E6170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_002E6278; } }
L_002E6178:
    set32(c.r[3], ld32((c.r[21].w[0] + 2404u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 2464u)));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61A4u); set32(c.r[5], c.r[16].w[0] + 1080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E61A4u) [[unlikely]] return; }
L_002E61A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6274; } }
L_002E61AC:
    set32(c.r[3], ld32((c.r[21].w[0] + 2404u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 2464u)));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E61D8u); set32(c.r[5], c.r[16].w[0] + 1336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E61D8u) [[unlikely]] return; }
L_002E61D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6274; } }
L_002E61E0:
    set32(c.r[3], ld32((c.r[21].w[0] + 2404u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 2464u)));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E620Cu); set32(c.r[5], c.r[16].w[0] + 1592u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E620Cu) [[unlikely]] return; }
L_002E620C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6274; } }
L_002E6214:
    set32(c.r[3], ld32((c.r[21].w[0] + 2404u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 2464u)));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6240u); set32(c.r[5], c.r[16].w[0] + 1848u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6240u) [[unlikely]] return; }
L_002E6240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E6274; } }
L_002E6248:
    set32(c.r[3], ld32((c.r[21].w[0] + 2404u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 2464u)));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6274u); set32(c.r[5], c.r[16].w[0] + 2104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6274u) [[unlikely]] return; }
L_002E6274:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002E6278:
    set32(c.r[3], ld32((c.r[21].w[0] + 2448u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E6124u | kUnwind; return; } goto L_002E6124; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002E628C:
    set32(c.r[3], ld32((c.r[21].w[0] + 2452u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E60FCu | kUnwind; return; } goto L_002E60FC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E62C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E6328; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002E62FC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E62FCu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E62FCu) [[unlikely]] return; }
L_002E62FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E6348; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6320u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6320u) [[unlikely]] return; }
L_002E6320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 2456u)));  if (t) { goto L_002E634C; } }
L_002E6328:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E6348; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6348u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6348u) [[unlikely]] return; }
L_002E6348:
    set32(c.r[3], ld32((c.r[17].w[0] + 2456u)));
    c.budget -= 1;
L_002E634C:
    set32(c.r[2], ld32((c.r[17].w[0] + 2452u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E63B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E6384; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6384u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6384u) [[unlikely]] return; }
L_002E6384:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E63D4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E63A8u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E63A8u) [[unlikely]] return; }
L_002E63A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));  if (t) { goto L_002E63D8; } }
L_002E63B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E63D4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E63D4u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E63D4u) [[unlikely]] return; }
L_002E63D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 2464u)));
    c.budget -= 1;
L_002E63D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002E63F4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2432u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E63F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E63F4u); set32(c.r[4], ld32((c.r[17].w[0] + 2436u)));  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002E63F4u) [[unlikely]] return; }
L_002E63F4:
    st32((c.r[17].w[0] + 2464u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E640Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E640Cu) [[unlikely]] return; }
L_002E640C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E641Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E641Cu) [[unlikely]] return; }
L_002E641C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E6430:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4DB0u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 58u, depth); }
L_002E6440:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[5].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E62C0u | kUnwind; return; } goto L_002E62C0; }
L_002E6450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E64D4; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 2452u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 2464u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 2456u)));
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E64BC; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002E64BC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002E64D4; } }
    set32(c.r[2], 0u + 437u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E64D4u); st32((c.r[17].w[0] + 2436u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0079(c, 194u, depth + 1u); else { c.pc = 0x002E62C0u; return; } if (c.pc != 0x002E64D4u) [[unlikely]] return; }
L_002E64D4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 402u);  if (t) { goto L_002E651C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 2464u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 2452u)));
    set32(c.r[5], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_002E6500; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E6500:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002E6518; } }
    set32(c.r[2], 0u + 437u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6518u); st32((c.r[17].w[0] + 2436u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0079(c, 194u, depth + 1u); else { c.pc = 0x002E62C0u; return; } if (c.pc != 0x002E6518u) [[unlikely]] return; }
L_002E6518:
    set32(c.r[3], 0u + 402u);
    c.budget -= 1;
L_002E651C:
    st32((c.r[17].w[0] + 2436u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E6540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 2360u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002E657C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_002E6564:
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6570u) [[unlikely]] return; }
    goto L_002E6570;
L_002E656C:
    c.budget -= 1;
L_002E6570:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002E657C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E65A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6598u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6598u) [[unlikely]] return; }
L_002E6598:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E65A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E65D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E65C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E65C4u) [[unlikely]] return; }
L_002E65C4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E65D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6600; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E65F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E65F0u) [[unlikely]] return; }
L_002E65F0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E6600:
    set32(c.r[4], ld32((c.r[17].w[0] + 2376u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E662C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E661Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E661Cu) [[unlikely]] return; }
L_002E661C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E662C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2380u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6658; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6648u) [[unlikely]] return; }
L_002E6648:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E6658:
    set32(c.r[4], ld32((c.r[17].w[0] + 2384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6684; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6674u) [[unlikely]] return; }
L_002E6674:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E6684:
    set32(c.r[4], ld32((c.r[17].w[0] + 2388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E66B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E66A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E66A0u) [[unlikely]] return; }
L_002E66A0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E66B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 2392u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E66E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E66CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E66CCu) [[unlikely]] return; }
L_002E66CC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_002E66E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E6700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E671Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E671Cu) [[unlikely]] return; }
L_002E671C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2360u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6744; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6744u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6744u) [[unlikely]] return; }
L_002E6744:
    set32(c.r[4], ld32((c.r[16].w[0] + 2364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E676C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E676Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E676Cu) [[unlikely]] return; }
L_002E676C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6794; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6794u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6794u) [[unlikely]] return; }
L_002E6794:
    set32(c.r[4], ld32((c.r[16].w[0] + 2372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E67BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67BCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E67BCu) [[unlikely]] return; }
L_002E67BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 2376u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E67E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E67E4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E67E4u) [[unlikely]] return; }
L_002E67E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2380u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E680C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E680Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E680Cu) [[unlikely]] return; }
L_002E680C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6834; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6834u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6834u) [[unlikely]] return; }
L_002E6834:
    set32(c.r[4], ld32((c.r[16].w[0] + 2388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E685C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E685Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E685Cu) [[unlikely]] return; }
L_002E685C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2392u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6884; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
L_002E6874:
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6884u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6884u) [[unlikely]] return; }
L_002E6884:
    set32(c.r[2], ld32((c.r[16].w[0] + 2464u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E68A4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E68A4u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E68A4u) [[unlikely]] return; }
L_002E68A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2456u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2452u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2464u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E68D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E68D4u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E68D4u) [[unlikely]] return; }
L_002E68D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 2452u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2456u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_002E68F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E68F0u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002E68F0u) [[unlikely]] return; }
L_002E68F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002E6904; } }
L_002E68F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6900u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x002E6900u) [[unlikely]] return; }
L_002E6900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002E6904:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E6910:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E6920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E693Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E693Cu) [[unlikely]] return; }
L_002E693C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2360u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6964; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6964u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6964u) [[unlikely]] return; }
L_002E6964:
    set32(c.r[4], ld32((c.r[16].w[0] + 2364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E698C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E698Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E698Cu) [[unlikely]] return; }
L_002E698C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E69B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E69B4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E69B4u) [[unlikely]] return; }
L_002E69B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E69DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E69DCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E69DCu) [[unlikely]] return; }
L_002E69DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 2376u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6A04; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6A04u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6A04u) [[unlikely]] return; }
L_002E6A04:
    set32(c.r[4], ld32((c.r[16].w[0] + 2380u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6A2C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6A2Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6A2Cu) [[unlikely]] return; }
L_002E6A2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6A54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6A54u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6A54u) [[unlikely]] return; }
L_002E6A54:
    set32(c.r[4], ld32((c.r[16].w[0] + 2388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6A7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6A7Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6A7Cu) [[unlikely]] return; }
L_002E6A7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2392u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E6AA4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6AA4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6AA4u) [[unlikely]] return; }
L_002E6AA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2464u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E6AC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2396u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6AC4u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6AC4u) [[unlikely]] return; }
L_002E6AC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2456u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 2452u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2464u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_002E6AF8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6AF4u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E6AF4u) [[unlikely]] return; }
L_002E6AF4:
    set32(c.r[4], 0u + 401u);
    c.budget -= 1;
L_002E6AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6B00u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x002E6B00u) [[unlikely]] return; }
L_002E6B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E6B10:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E6B20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E6B30:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E6B40:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E6B50:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E6B60:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E6B70:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E6B80:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 4;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E6B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6BA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 117u, depth + 1u); else { c.pc = 0x002E5710u; return; } if (c.pc != 0x002E6BA4u) [[unlikely]] return; }
L_002E6BA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14880u);
    set32(c.r[2], c.r[2].w[0] + 14968u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 315u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 3520u), 0u);
    st32((c.r[16].w[0] + 3908u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6BD0u); st32((c.r[16].w[0] + 3912u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E6BD0u) [[unlikely]] return; }
L_002E6BD0:
    st32((c.r[16].w[0] + 2468u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 2480u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2484u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2468u);
    st32((c.r[16].w[0] + 2488u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6BF8u); st32((c.r[16].w[0] + 2492u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6BF8u) [[unlikely]] return; }
L_002E6BF8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C08u); st128((c.r[16].w[0] + 2496u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6C08u) [[unlikely]] return; }
L_002E6C08:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C18u); st128((c.r[16].w[0] + 2512u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6C18u) [[unlikely]] return; }
L_002E6C18:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 2528u) & ~15u, c.r[8]);
    set32(c.r[2], c.r[16].w[0] + 2576u);
    st32((c.r[16].w[0] + 2544u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 2548u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[16].w[0] + 2552u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[16].w[0] + 2556u), c.f[0]);
    st32((c.r[16].w[0] + 2560u), 0u);
    st32((c.r[16].w[0] + 2576u), 0u);
    st32((c.r[16].w[0] + 2592u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2596u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2600u), c.r[2].w[0]);
    c.budget -= 21;
L_002E6C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C74u); st32((c.r[16].w[0] + 2604u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6C74u) [[unlikely]] return; }
L_002E6C74:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C84u); st128((c.r[16].w[0] + 2608u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6C84u) [[unlikely]] return; }
L_002E6C84:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6C94u); st128((c.r[16].w[0] + 2624u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6C94u) [[unlikely]] return; }
L_002E6C94:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 321u);
    st128((c.r[16].w[0] + 2640u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[16].w[0] + 2656u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2660u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[16].w[0] + 2664u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[16].w[0] + 2668u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6CD0u); st32((c.r[16].w[0] + 2672u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E6CD0u) [[unlikely]] return; }
L_002E6CD0:
    st32((c.r[16].w[0] + 2688u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6CDCu); set32(c.r[4], 0u + 322u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E6CDCu) [[unlikely]] return; }
L_002E6CDC:
    st32((c.r[16].w[0] + 2692u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 2688u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 2704u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2708u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 2712u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6D04u); st32((c.r[16].w[0] + 2716u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6D04u) [[unlikely]] return; }
L_002E6D04:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6D14u); st128((c.r[16].w[0] + 2720u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6D14u) [[unlikely]] return; }
L_002E6D14:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6D24u); st128((c.r[16].w[0] + 2736u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6D24u) [[unlikely]] return; }
L_002E6D24:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 318u);
    st128((c.r[16].w[0] + 2752u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st32((c.r[16].w[0] + 2768u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2772u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[16].w[0] + 2776u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23040u));
    st32((c.r[16].w[0] + 2780u), c.f[0]);
    st32((c.r[16].w[0] + 2784u), 0u);
    st32((c.r[16].w[0] + 2800u), 0u);
    st32((c.r[16].w[0] + 2804u), 0u);
    st32((c.r[16].w[0] + 2808u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6D74u); st32((c.r[16].w[0] + 2812u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E6D74u) [[unlikely]] return; }
L_002E6D74:
    st32((c.r[16].w[0] + 2816u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6D80u); set32(c.r[4], 0u + 319u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E6D80u) [[unlikely]] return; }
L_002E6D80:
    st32((c.r[16].w[0] + 2820u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 2816u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 2832u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2836u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 2840u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6DA8u); st32((c.r[16].w[0] + 2844u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6DA8u) [[unlikely]] return; }
L_002E6DA8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6DB8u); st128((c.r[16].w[0] + 2848u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6DB8u) [[unlikely]] return; }
L_002E6DB8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6DC8u); st128((c.r[16].w[0] + 2864u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6DC8u) [[unlikely]] return; }
L_002E6DC8:
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43C40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[16].w[0] + 2944u);
    set32(c.r[5], 0u + 48u);
    st128((c.r[16].w[0] + 2880u) & ~15u, c.r[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    st32((c.r[16].w[0] + 2896u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 2900u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 2904u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 2908u), c.f[0]);
    st32((c.r[16].w[0] + 2912u), 0u);
    st32((c.r[16].w[0] + 2928u), 0u);
    st32((c.r[16].w[0] + 2932u), 0u);
    st32((c.r[16].w[0] + 2936u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E1Cu); st32((c.r[16].w[0] + 2940u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E6E1Cu) [[unlikely]] return; }
L_002E6E1C:
    set32(c.r[4], c.r[16].w[0] + 2992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E28u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E6E28u) [[unlikely]] return; }
L_002E6E28:
    set32(c.r[4], c.r[16].w[0] + 3040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E34u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E6E34u) [[unlikely]] return; }
L_002E6E34:
    set32(c.r[4], c.r[16].w[0] + 3088u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E40u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E6E40u) [[unlikely]] return; }
L_002E6E40:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 3136u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 3140u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 2944u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[16].w[0] + 3144u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E68u); st32((c.r[16].w[0] + 3148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6E68u) [[unlikely]] return; }
L_002E6E68:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E78u); st128((c.r[16].w[0] + 3152u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6E78u) [[unlikely]] return; }
L_002E6E78:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6E88u); st128((c.r[16].w[0] + 3168u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6E88u) [[unlikely]] return; }
L_002E6E88:
    ld128((c.r[2].w[0]) & ~15u, c.r[10]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42F80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], 0u + 21u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] + 2992u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 3184u) & ~15u, c.r[10]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[16].w[0] + 3200u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 3204u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3208u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3212u), c.f[0]);
    st32((c.r[16].w[0] + 3216u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 3232u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3236u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3240u), c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6EE8u); st32((c.r[16].w[0] + 3244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6EE8u) [[unlikely]] return; }
L_002E6EE8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6EF8u); st128((c.r[16].w[0] + 3248u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6EF8u) [[unlikely]] return; }
L_002E6EF8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6F08u); st128((c.r[16].w[0] + 3264u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6F08u) [[unlikely]] return; }
L_002E6F08:
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x431D0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42F80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 3040u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 3280u) & ~15u, c.r[9]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[16].w[0] + 3296u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 3300u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3304u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3308u), c.f[0]);
    st32((c.r[16].w[0] + 3312u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3328u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3332u), 0u);
    st32((c.r[16].w[0] + 3336u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6F64u); st32((c.r[16].w[0] + 3340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6F64u) [[unlikely]] return; }
L_002E6F64:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6F74u); st128((c.r[16].w[0] + 3344u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6F74u) [[unlikely]] return; }
L_002E6F74:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6F84u); st128((c.r[16].w[0] + 3360u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6F84u) [[unlikely]] return; }
L_002E6F84:
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43C40000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 3088u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 3376u) & ~15u, c.r[9]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[16].w[0] + 3392u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 3396u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3400u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3404u), c.f[0]);
    st32((c.r[16].w[0] + 3408u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3424u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3428u), 0u);
    st32((c.r[16].w[0] + 3432u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6FE0u); st32((c.r[16].w[0] + 3436u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6FE0u) [[unlikely]] return; }
L_002E6FE0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E6FF0u); st128((c.r[16].w[0] + 3440u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E6FF0u) [[unlikely]] return; }
L_002E6FF0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7000u); st128((c.r[16].w[0] + 3456u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7000u) [[unlikely]] return; }
L_002E7000:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43F10000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43040000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 21u);
    st128((c.r[16].w[0] + 3472u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 3488u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 3492u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3496u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3500u), c.f[0]);
    st32((c.r[16].w[0] + 3504u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E7050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E70D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14880u);
    set32(c.r[2], c.r[2].w[0] + 14968u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 3520u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E70B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E70B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E70B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E70B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E70B0u) [[unlikely]] return; }
L_002E70B0:
    st32((c.r[17].w[0] + 3520u), 0u);
    c.budget -= 1;
L_002E70B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E70C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E5880u; return; } if (c.pc != 0x002E70C0u) [[unlikely]] return; }
L_002E70C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E70DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E70D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E70D8u) [[unlikely]] return; }
L_002E70D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E70DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E70F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 3912u), c.r[5].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2480u);
    set32(c.r[4], c.r[5].w[0] + 323u);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2592u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E711Cu); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E711Cu) [[unlikely]] return; }
L_002E711C:
    st32((c.r[16].w[0] + 2576u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2832u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2928u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3136u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3232u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3328u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3424u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 3912u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E724C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23264u);
    c.budget -= 3;
L_002E717C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E718C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));
    set32(c.r[5], c.r[16].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E71A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 414u, depth + 1u); else { c.pc = 0x002B7F60u; return; } if (c.pc != 0x002E71A0u) [[unlikely]] return; }
L_002E71A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002E724C; } }
L_002E71A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));
    set32(c.r[5], c.r[16].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E71BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 416u, depth + 1u); else { c.pc = 0x002B7F80u; return; } if (c.pc != 0x002E71BCu) [[unlikely]] return; }
L_002E71BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002E724C; } }
L_002E71C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));
    set32(c.r[5], c.r[16].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E71D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 418u, depth + 1u); else { c.pc = 0x002B7FA0u; return; } if (c.pc != 0x002E71D8u) [[unlikely]] return; }
L_002E71D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002E724C; } }
L_002E71E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));
    set32(c.r[5], c.r[16].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E71F4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 420u, depth + 1u); else { c.pc = 0x002B7FC0u; return; } if (c.pc != 0x002E71F4u) [[unlikely]] return; }
L_002E71F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002E724C; } }
L_002E71FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));
    set32(c.r[5], c.r[16].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7210u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 422u, depth + 1u); else { c.pc = 0x002B7FE0u; return; } if (c.pc != 0x002E7210u) [[unlikely]] return; }
L_002E7210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002E724C; } }
L_002E7218:
    set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));
    set32(c.r[5], c.r[16].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E722Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 1u, depth + 1u); else { c.pc = 0x002B8000u; return; } if (c.pc != 0x002E722Cu) [[unlikely]] return; }
L_002E722C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002E724C; } }
L_002E7234:
    set32(c.r[4], ld32((c.r[16].w[0] + 2440u)));
    set32(c.r[5], c.r[16].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7248u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 3u, depth + 1u); else { c.pc = 0x002B8020u; return; } if (c.pc != 0x002E7248u) [[unlikely]] return; }
L_002E7248:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_002E724C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 320u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    set32(c.r[2], c.r[16].w[0] + 3524u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 98u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 388u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E728Cu); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E5B00u; return; } if (c.pc != 0x002E728Cu) [[unlikely]] return; }
L_002E728C:
    set32(c.r[2], ld32((c.r[16].w[0] + 3520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 208u);  if (t) { goto L_002E72BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E72A0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002E72A0u) [[unlikely]] return; }
L_002E72A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E72B8; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E72B8u); set32(c.r[7], c.r[16].w[0] + 2704u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002E72B8u) [[unlikely]] return; }
L_002E72B8:
    st32((c.r[16].w[0] + 3520u), c.r[2].w[0]);
    c.budget -= 1;
L_002E72BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 3520u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 3520u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 2716u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E72E0u); set32(c.r[5], c.r[16].w[0] + 2800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E72E0u) [[unlikely]] return; }
L_002E72E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E72F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 221u, depth + 1u); else { c.pc = 0x002E6700u; return; } if (c.pc != 0x002E7304u) [[unlikely]] return; }
L_002E7304:
    set32(c.r[4], ld32((c.r[16].w[0] + 3520u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7324u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E7324u) [[unlikely]] return; }
L_002E7324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E7340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7354u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 238u, depth + 1u); else { c.pc = 0x002E6920u; return; } if (c.pc != 0x002E7354u) [[unlikely]] return; }
L_002E7354:
    set32(c.r[4], ld32((c.r[16].w[0] + 3520u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7374u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E7374u) [[unlikely]] return; }
L_002E7374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E7390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 3520u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E73B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E73B8u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002E73B8u) [[unlikely]] return; }
L_002E73B8:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E73DC; } }
    st32((c.r[17].w[0] + 3908u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3520u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 3908u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E73D8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002E73D8u) [[unlikely]] return; }
L_002E73D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E73DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E73E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4DB0u; return; } if (c.pc != 0x002E73E4u) [[unlikely]] return; }
L_002E73E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E7400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7418u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0079(c, 206u, depth + 1u); else { c.pc = 0x002E6450u; return; } if (c.pc != 0x002E7418u) [[unlikely]] return; }
L_002E7418:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E7570; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 3908u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E7570; } }
    st32((c.r[17].w[0] + 3908u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 3520u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 3908u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7470u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002E7470u) [[unlikely]] return; }
L_002E7470:
    set32(c.r[2], ld32((c.r[17].w[0] + 3912u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E7554; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23200u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E7498:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E74ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 414u, depth + 1u); else { c.pc = 0x002B7F60u; return; } if (c.pc != 0x002E74ACu) [[unlikely]] return; }
L_002E74AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_002E7558; } }
L_002E74B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E74C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 416u, depth + 1u); else { c.pc = 0x002B7F80u; return; } if (c.pc != 0x002E74C8u) [[unlikely]] return; }
L_002E74C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7554; } }
L_002E74D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E74E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 418u, depth + 1u); else { c.pc = 0x002B7FA0u; return; } if (c.pc != 0x002E74E4u) [[unlikely]] return; }
L_002E74E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7554; } }
L_002E74EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7500u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 420u, depth + 1u); else { c.pc = 0x002B7FC0u; return; } if (c.pc != 0x002E7500u) [[unlikely]] return; }
L_002E7500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7554; } }
L_002E7508:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E751Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 422u, depth + 1u); else { c.pc = 0x002B7FE0u; return; } if (c.pc != 0x002E751Cu) [[unlikely]] return; }
L_002E751C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7554; } }
L_002E7524:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7538u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 1u, depth + 1u); else { c.pc = 0x002B8000u; return; } if (c.pc != 0x002E7538u) [[unlikely]] return; }
L_002E7538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E7554; } }
L_002E7540:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7554u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 3u, depth + 1u); else { c.pc = 0x002B8020u; return; } if (c.pc != 0x002E7554u) [[unlikely]] return; }
L_002E7554:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002E7558:
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7564u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E7564u) [[unlikely]] return; }
L_002E7564:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7570u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 194u, depth + 1u); else { c.pc = 0x002E62C0u; return; } if (c.pc != 0x002E7570u) [[unlikely]] return; }
L_002E7570:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E76A8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 3908u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E76A8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 3908u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 3520u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 3908u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E75A8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002E75A8u) [[unlikely]] return; }
L_002E75A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 3912u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002E768C; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E75D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E75E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 415u, depth + 1u); else { c.pc = 0x002B7F70u; return; } if (c.pc != 0x002E75E4u) [[unlikely]] return; }
L_002E75E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_002E7690; } }
L_002E75EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7600u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 417u, depth + 1u); else { c.pc = 0x002B7F90u; return; } if (c.pc != 0x002E7600u) [[unlikely]] return; }
L_002E7600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E768C; } }
L_002E7608:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E761Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 419u, depth + 1u); else { c.pc = 0x002B7FB0u; return; } if (c.pc != 0x002E761Cu) [[unlikely]] return; }
L_002E761C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E768C; } }
L_002E7624:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7638u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 421u, depth + 1u); else { c.pc = 0x002B7FD0u; return; } if (c.pc != 0x002E7638u) [[unlikely]] return; }
L_002E7638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E768C; } }
L_002E7640:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7654u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006D(c, 423u, depth + 1u); else { c.pc = 0x002B7FF0u; return; } if (c.pc != 0x002E7654u) [[unlikely]] return; }
L_002E7654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E768C; } }
L_002E765C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7670u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 2u, depth + 1u); else { c.pc = 0x002B8010u; return; } if (c.pc != 0x002E7670u) [[unlikely]] return; }
L_002E7670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E768C; } }
L_002E7678:
    set32(c.r[4], ld32((c.r[17].w[0] + 2440u)));
    set32(c.r[5], c.r[17].w[0] + 3524u);
    set32(c.r[6], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E768Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 4u, depth + 1u); else { c.pc = 0x002B8030u; return; } if (c.pc != 0x002E768Cu) [[unlikely]] return; }
L_002E768C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002E7690:
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E769Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E769Cu) [[unlikely]] return; }
L_002E769C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E76A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 194u, depth + 1u); else { c.pc = 0x002E62C0u; return; } if (c.pc != 0x002E76A8u) [[unlikely]] return; }
L_002E76A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E76C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E76D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 209u, depth + 1u); else { c.pc = 0x002E6540u; return; } if (c.pc != 0x002E76D4u) [[unlikely]] return; }
L_002E76D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 3520u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002E7708; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E76F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E76F8u) [[unlikely]] return; }
L_002E76F8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002E7708:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E7720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E773Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002E773Cu) [[unlikely]] return; }
L_002E773C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7750u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E7750u) [[unlikely]] return; }
L_002E7750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E7760:
    set32(c.r[2], ld32((c.r[4].w[0] + 2460u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 6;
    { set32(c.r[5], c.r[5].w[0] - 23272u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127458u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 204u, depth); }
L_002E7780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E77A4u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002E77A4u) [[unlikely]] return; }
L_002E77A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 3912u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002E7804; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23152u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E77D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 3u));  if (t) { goto L_002E7804; } }
L_002E77D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_002E7804; } }
L_002E77E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 7u));  if (t) { goto L_002E7804; } }
L_002E77E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 9u));  if (t) { goto L_002E7804; } }
L_002E77F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 11u));  if (t) { goto L_002E7804; } }
L_002E77F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 13u));  if (t) { goto L_002E7804; } }
L_002E7800:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 15u));
    c.budget -= 1;
L_002E7804:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7814u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E7814u) [[unlikely]] return; }
L_002E7814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E7830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 2444u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7854u); set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002E7854u) [[unlikely]] return; }
L_002E7854:
    set32(c.r[3], ld32((c.r[17].w[0] + 3912u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002E78B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002E4000u < 16384u) { entry = entries_0079[(t - 0x002E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E7880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 4u));  if (t) { goto L_002E78B4; } }
L_002E7888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 6u));  if (t) { goto L_002E78B4; } }
L_002E7890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 8u));  if (t) { goto L_002E78B4; } }
L_002E7898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 10u));  if (t) { goto L_002E78B4; } }
L_002E78A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 12u));  if (t) { goto L_002E78B4; } }
L_002E78A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[2].w[0] + 14u));  if (t) { goto L_002E78B4; } }
L_002E78B0:
    c.r[6].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 1;
L_002E78B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E78C4u); set32(c.r[5], c.r[5].w[0] - 23272u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002E78C4u) [[unlikely]] return; }
L_002E78C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E78E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E78F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 117u, depth + 1u); else { c.pc = 0x002E5710u; return; } if (c.pc != 0x002E78F4u) [[unlikely]] return; }
L_002E78F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14640u);
    set32(c.r[2], c.r[2].w[0] + 14728u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 315u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7914u); st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E7914u) [[unlikely]] return; }
L_002E7914:
    st32((c.r[16].w[0] + 2468u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 2480u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2484u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2468u);
    st32((c.r[16].w[0] + 2488u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E793Cu); st32((c.r[16].w[0] + 2492u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E793Cu) [[unlikely]] return; }
L_002E793C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E794Cu); st128((c.r[16].w[0] + 2496u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E794Cu) [[unlikely]] return; }
L_002E794C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E795Cu); st128((c.r[16].w[0] + 2512u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E795Cu) [[unlikely]] return; }
L_002E795C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 312u);
    c.budget -= 4;
L_002E796C:
    st128((c.r[16].w[0] + 2528u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[16].w[0] + 2544u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2548u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[16].w[0] + 2552u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23024u));
    st32((c.r[16].w[0] + 2556u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7998u); st32((c.r[16].w[0] + 2560u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E7998u) [[unlikely]] return; }
L_002E7998:
    st32((c.r[16].w[0] + 2576u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 2592u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2596u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 2576u);
    st32((c.r[16].w[0] + 2600u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79C0u); st32((c.r[16].w[0] + 2604u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E79C0u) [[unlikely]] return; }
L_002E79C0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79D0u); st128((c.r[16].w[0] + 2608u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E79D0u) [[unlikely]] return; }
L_002E79D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E79E0u); st128((c.r[16].w[0] + 2624u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E79E0u) [[unlikely]] return; }
L_002E79E0:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 317u);
    st128((c.r[16].w[0] + 2640u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[16].w[0] + 2656u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2660u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[16].w[0] + 2664u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23032u));
    st32((c.r[16].w[0] + 2668u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A1Cu); st32((c.r[16].w[0] + 2672u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E7A1Cu) [[unlikely]] return; }
L_002E7A1C:
    st32((c.r[16].w[0] + 2688u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A28u); set32(c.r[4], 0u + 318u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E7A28u) [[unlikely]] return; }
L_002E7A28:
    st32((c.r[16].w[0] + 2692u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A34u); set32(c.r[4], 0u + 319u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E7A34u) [[unlikely]] return; }
L_002E7A34:
    st32((c.r[16].w[0] + 2696u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A40u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002E7A40u) [[unlikely]] return; }
L_002E7A40:
    st32((c.r[16].w[0] + 2700u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 2688u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 2704u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2708u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 2712u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A68u); st32((c.r[16].w[0] + 2716u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7A68u) [[unlikely]] return; }
L_002E7A68:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A78u); st128((c.r[16].w[0] + 2720u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7A78u) [[unlikely]] return; }
L_002E7A78:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7A88u); st128((c.r[16].w[0] + 2736u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7A88u) [[unlikely]] return; }
L_002E7A88:
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    set32(c.r[4], c.r[16].w[0] + 2832u);
    set32(c.r[5], 0u + 56u);
    set32(c.r[2], 0u + 291u);
    st128((c.r[16].w[0] + 2752u) & ~15u, c.r[9]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    st32((c.r[16].w[0] + 2768u), c.f[0]);
    st32((c.r[16].w[0] + 2772u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 2776u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 2780u), c.f[0]);
    st32((c.r[16].w[0] + 2784u), 0u);
    st32((c.r[16].w[0] + 2800u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 2804u), 0u);
    st32((c.r[16].w[0] + 2808u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 2812u), 0u);
    st32((c.r[16].w[0] + 2816u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2820u), 0u);
    st32((c.r[16].w[0] + 2824u), c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B04u); st32((c.r[16].w[0] + 2828u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E7B04u) [[unlikely]] return; }
L_002E7B04:
    set32(c.r[4], c.r[16].w[0] + 2888u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B10u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E7B10u) [[unlikely]] return; }
L_002E7B10:
    set32(c.r[4], c.r[16].w[0] + 2944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B1Cu); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E7B1Cu) [[unlikely]] return; }
L_002E7B1C:
    set32(c.r[4], c.r[16].w[0] + 3000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B28u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E7B28u) [[unlikely]] return; }
L_002E7B28:
    set32(c.r[4], c.r[16].w[0] + 3056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B34u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E7B34u) [[unlikely]] return; }
L_002E7B34:
    set32(c.r[4], c.r[16].w[0] + 3112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B40u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002E7B40u) [[unlikely]] return; }
L_002E7B40:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 3168u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 3172u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 2832u);
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 3176u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B68u); st32((c.r[16].w[0] + 3180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7B68u) [[unlikely]] return; }
L_002E7B68:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B78u); st128((c.r[16].w[0] + 3184u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7B78u) [[unlikely]] return; }
L_002E7B78:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7B88u); st128((c.r[16].w[0] + 3200u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7B88u) [[unlikely]] return; }
L_002E7B88:
    ld128((c.r[2].w[0]) & ~15u, c.r[10]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], 0u + 21u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] + 2888u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 3216u) & ~15u, c.r[10]);
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 3232u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 3236u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3240u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3244u), c.f[0]);
    st32((c.r[16].w[0] + 3248u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 3264u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3268u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3272u), c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7BE8u); st32((c.r[16].w[0] + 3276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7BE8u) [[unlikely]] return; }
L_002E7BE8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7BF8u); st128((c.r[16].w[0] + 3280u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7BF8u) [[unlikely]] return; }
L_002E7BF8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C08u); st128((c.r[16].w[0] + 3296u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7C08u) [[unlikely]] return; }
L_002E7C08:
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42A60000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 2944u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 3312u) & ~15u, c.r[9]);
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 3328u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 3332u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3336u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3340u), c.f[0]);
    st32((c.r[16].w[0] + 3344u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3360u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3364u), 0u);
    st32((c.r[16].w[0] + 3368u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C64u); st32((c.r[16].w[0] + 3372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7C64u) [[unlikely]] return; }
L_002E7C64:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C74u); st128((c.r[16].w[0] + 3376u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7C74u) [[unlikely]] return; }
L_002E7C74:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7C84u); st128((c.r[16].w[0] + 3392u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7C84u) [[unlikely]] return; }
L_002E7C84:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 3000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 311u);
    st128((c.r[16].w[0] + 3408u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 3424u), c.f[0]);
    st32((c.r[16].w[0] + 3428u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3432u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3436u), c.f[0]);
    st32((c.r[16].w[0] + 3440u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3456u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3460u), 0u);
    st32((c.r[16].w[0] + 3464u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7CECu); st32((c.r[16].w[0] + 3468u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7CECu) [[unlikely]] return; }
L_002E7CEC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7CFCu); st128((c.r[16].w[0] + 3472u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7CFCu) [[unlikely]] return; }
L_002E7CFC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D0Cu); st128((c.r[16].w[0] + 3488u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7D0Cu) [[unlikely]] return; }
L_002E7D0C:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 3056u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 381u);
    st128((c.r[16].w[0] + 3504u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 3520u), c.f[0]);
    st32((c.r[16].w[0] + 3524u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3528u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3532u), c.f[0]);
    st32((c.r[16].w[0] + 3536u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3552u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3556u), 0u);
    st32((c.r[16].w[0] + 3560u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D74u); st32((c.r[16].w[0] + 3564u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7D74u) [[unlikely]] return; }
L_002E7D74:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D84u); st128((c.r[16].w[0] + 3568u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7D84u) [[unlikely]] return; }
L_002E7D84:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7D94u); st128((c.r[16].w[0] + 3584u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7D94u) [[unlikely]] return; }
L_002E7D94:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 3112u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 451u);
    st128((c.r[16].w[0] + 3600u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 14u);
    st32((c.r[16].w[0] + 3616u), c.f[0]);
    st32((c.r[16].w[0] + 3620u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3624u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3628u), c.f[0]);
    st32((c.r[16].w[0] + 3632u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 3648u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 3652u), 0u);
    st32((c.r[16].w[0] + 3656u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7DFCu); st32((c.r[16].w[0] + 3660u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7DFCu) [[unlikely]] return; }
L_002E7DFC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7E0Cu); st128((c.r[16].w[0] + 3664u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7E0Cu) [[unlikely]] return; }
L_002E7E0C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7E1Cu); st128((c.r[16].w[0] + 3680u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002E7E1Cu) [[unlikely]] return; }
L_002E7E1C:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[2], 0u + 531u);
    st128((c.r[16].w[0] + 3696u) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 3712u), c.f[0]);
    st32((c.r[16].w[0] + 3716u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3720u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[16].w[0] + 3724u), c.f[0]);
    st32((c.r[16].w[0] + 3728u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E7E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E7ED4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 14640u);
    set32(c.r[2], c.r[2].w[0] + 14728u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7EBCu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0079(c, 130u, depth + 1u); else { c.pc = 0x002E5880u; return; } if (c.pc != 0x002E7EBCu) [[unlikely]] return; }
L_002E7EBC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E7ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7ED4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002E7ED4u) [[unlikely]] return; }
L_002E7ED4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002E7ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E7EF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 2480u);
    set32(c.r[2], c.r[16].w[0] + 2592u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 2704u);
    set32(c.r[2], c.r[16].w[0] + 2800u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 14u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 3168u);
    set32(c.r[2], c.r[16].w[0] + 3264u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 3360u);
    set32(c.r[2], c.r[16].w[0] + 3456u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 3552u);
    set32(c.r[2], c.r[16].w[0] + 3648u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2440u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7F74u); set32(c.r[5], c.r[16].w[0] + 3744u);  if (depth < kMaxDepth) unit_006D(c, 412u, depth + 1u); else { c.pc = 0x002B7F40u; return; } if (c.pc != 0x002E7F74u) [[unlikely]] return; }
L_002E7F74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 320u);
    c.f[0] = ld32((c.r[1].w[0] - 23048u));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 3744u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 58u);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], 0u + 388u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E7FB8u); st32((c.r[29].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E5B00u; return; } if (c.pc != 0x002E7FB8u) [[unlikely]] return; }
L_002E7FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002E7FD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E6700u | kUnwind; return; } goto L_002E6700; }
L_002E7FE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E6920u | kUnwind; return; } goto L_002E6920; }
L_002E7FF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4DB0u | kUnwind; return; } [[clang::musttail]] return unit_0071(c, 58u, depth); }
}

}
