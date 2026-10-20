#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F8000;
    case 2u: goto L_002F819C;
    case 3u: goto L_002F81B0;
    case 4u: goto L_002F81BC;
    case 5u: goto L_002F83BC;
    case 6u: goto L_002F83C0;
    case 7u: goto L_002F83D0;
    case 8u: goto L_002F8400;
    case 9u: goto L_002F8418;
    case 10u: goto L_002F8430;
    case 11u: goto L_002F8450;
    case 12u: goto L_002F8470;
    case 13u: goto L_002F8480;
    case 14u: goto L_002F8494;
    case 15u: goto L_002F84A8;
    case 16u: goto L_002F84BC;
    case 17u: goto L_002F8510;
    case 18u: goto L_002F8540;
    case 19u: goto L_002F8550;
    case 20u: goto L_002F8564;
    case 21u: goto L_002F85A0;
    case 22u: goto L_002F85B0;
    case 23u: goto L_002F85C0;
    case 24u: goto L_002F85D0;
    case 25u: goto L_002F85E4;
    case 26u: goto L_002F85F4;
    case 27u: goto L_002F8604;
    case 28u: goto L_002F8614;
    case 29u: goto L_002F8640;
    case 30u: goto L_002F8660;
    case 31u: goto L_002F8684;
    case 32u: goto L_002F86C0;
    case 33u: goto L_002F8728;
    case 34u: goto L_002F8740;
    case 35u: goto L_002F8778;
    case 36u: goto L_002F87C4;
    case 37u: goto L_002F87D0;
    case 38u: goto L_002F87E0;
    case 39u: goto L_002F8804;
    case 40u: goto L_002F88C0;
    case 41u: goto L_002F88CC;
    case 42u: goto L_002F8910;
    case 43u: goto L_002F895C;
    case 44u: goto L_002F89FC;
    case 45u: goto L_002F8A0C;
    case 46u: goto L_002F8A18;
    case 47u: goto L_002F8A78;
    case 48u: goto L_002F8A84;
    case 49u: goto L_002F8AB4;
    case 50u: goto L_002F8B18;
    case 51u: goto L_002F8BA0;
    case 52u: goto L_002F8BB4;
    case 53u: goto L_002F8BD4;
    case 54u: goto L_002F8C08;
    case 55u: goto L_002F8CB0;
    case 56u: goto L_002F8CC4;
    case 57u: goto L_002F8CD8;
    case 58u: goto L_002F8CE8;
    case 59u: goto L_002F8CF8;
    case 60u: goto L_002F8D20;
    case 61u: goto L_002F8D34;
    case 62u: goto L_002F8D58;
    case 63u: goto L_002F8D8C;
    case 64u: goto L_002F8DBC;
    case 65u: goto L_002F8DD4;
    case 66u: goto L_002F8DF8;
    case 67u: goto L_002F8E10;
    case 68u: goto L_002F8E30;
    case 69u: goto L_002F8E44;
    case 70u: goto L_002F8E64;
    case 71u: goto L_002F8EA0;
    case 72u: goto L_002F8F50;
    case 73u: goto L_002F8F68;
    case 74u: goto L_002F8FA4;
    case 75u: goto L_002F8FC8;
    case 76u: goto L_002F900C;
    case 77u: goto L_002F9060;
    case 78u: goto L_002F9074;
    case 79u: goto L_002F90AC;
    case 80u: goto L_002F9120;
    case 81u: goto L_002F9144;
    case 82u: goto L_002F9160;
    case 83u: goto L_002F917C;
    case 84u: goto L_002F91BC;
    case 85u: goto L_002F91CC;
    case 86u: goto L_002F91D8;
    case 87u: goto L_002F9234;
    case 88u: goto L_002F926C;
    case 89u: goto L_002F9280;
    case 90u: goto L_002F92B0;
    case 91u: goto L_002F92D0;
    case 92u: goto L_002F9310;
    case 93u: goto L_002F9368;
    case 94u: goto L_002F93CC;
    case 95u: goto L_002F9430;
    case 96u: goto L_002F945C;
    case 97u: goto L_002F9470;
    case 98u: goto L_002F94A0;
    case 99u: goto L_002F94B8;
    case 100u: goto L_002F94D0;
    case 101u: goto L_002F94EC;
    case 102u: goto L_002F9510;
    case 103u: goto L_002F9528;
    case 104u: goto L_002F9530;
    case 105u: goto L_002F9564;
    case 106u: goto L_002F95A0;
    case 107u: goto L_002F95C8;
    case 108u: goto L_002F9600;
    case 109u: goto L_002F9620;
    case 110u: goto L_002F9640;
    case 111u: goto L_002F9678;
    case 112u: goto L_002F968C;
    case 113u: goto L_002F96C0;
    case 114u: goto L_002F96D0;
    case 115u: goto L_002F96E4;
    case 116u: goto L_002F9700;
    case 117u: goto L_002F9730;
    case 118u: goto L_002F9750;
    case 119u: goto L_002F9780;
    case 120u: goto L_002F9798;
    case 121u: goto L_002F97B0;
    case 122u: goto L_002F97F0;
    case 123u: goto L_002F9820;
    case 124u: goto L_002F9840;
    case 125u: goto L_002F985C;
    case 126u: goto L_002F9888;
    case 127u: goto L_002F98A8;
    case 128u: goto L_002F98C8;
    case 129u: goto L_002F98DC;
    case 130u: goto L_002F98E8;
    case 131u: goto L_002F98FC;
    case 132u: goto L_002F990C;
    case 133u: goto L_002F9948;
    case 134u: goto L_002F9990;
    case 135u: goto L_002F99C0;
    case 136u: goto L_002F99E0;
    case 137u: goto L_002F99F0;
    case 138u: goto L_002F9A20;
    case 139u: goto L_002F9A40;
    case 140u: goto L_002F9A60;
    case 141u: goto L_002F9AAC;
    case 142u: goto L_002F9AD4;
    case 143u: goto L_002F9AFC;
    case 144u: goto L_002F9B18;
    case 145u: goto L_002F9B30;
    case 146u: goto L_002F9B48;
    case 147u: goto L_002F9B54;
    case 148u: goto L_002F9B6C;
    case 149u: goto L_002F9B90;
    case 150u: goto L_002F9BAC;
    case 151u: goto L_002F9BC8;
    case 152u: goto L_002F9BDC;
    case 153u: goto L_002F9BEC;
    case 154u: goto L_002F9C08;
    case 155u: goto L_002F9C1C;
    case 156u: goto L_002F9C2C;
    case 157u: goto L_002F9C44;
    case 158u: goto L_002F9C70;
    case 159u: goto L_002F9C84;
    case 160u: goto L_002F9D70;
    case 161u: goto L_002F9D80;
    case 162u: goto L_002F9E04;
    case 163u: goto L_002F9EB4;
    case 164u: goto L_002F9F14;
    case 165u: goto L_002F9F74;
    case 166u: goto L_002F9FD4;
    case 167u: goto L_002FA034;
    case 168u: goto L_002FA094;
    case 169u: goto L_002FA0F4;
    case 170u: goto L_002FA154;
    case 171u: goto L_002FA1B4;
    case 172u: goto L_002FA214;
    case 173u: goto L_002FA274;
    case 174u: goto L_002FA2D4;
    case 175u: goto L_002FA334;
    case 176u: goto L_002FA394;
    case 177u: goto L_002FA3F4;
    case 178u: goto L_002FA454;
    case 179u: goto L_002FA4B4;
    case 180u: goto L_002FA514;
    case 181u: goto L_002FA574;
    case 182u: goto L_002FA5D4;
    case 183u: goto L_002FA634;
    case 184u: goto L_002FA694;
    case 185u: goto L_002FA6F4;
    case 186u: goto L_002FA754;
    case 187u: goto L_002FA7B4;
    case 188u: goto L_002FA814;
    case 189u: goto L_002FA874;
    case 190u: goto L_002FA8D4;
    case 191u: goto L_002FA8E0;
    case 192u: goto L_002FA918;
    case 193u: goto L_002FA930;
    case 194u: goto L_002FA93C;
    case 195u: goto L_002FA954;
    case 196u: goto L_002FA960;
    case 197u: goto L_002FA978;
    case 198u: goto L_002FA998;
    case 199u: goto L_002FA9B4;
    case 200u: goto L_002FA9D0;
    case 201u: goto L_002FA9E0;
    case 202u: goto L_002FAA0C;
    case 203u: goto L_002FAA30;
    case 204u: goto L_002FAA50;
    case 205u: goto L_002FAA64;
    case 206u: goto L_002FAA88;
    case 207u: goto L_002FAAAC;
    case 208u: goto L_002FAACC;
    case 209u: goto L_002FAAD8;
    case 210u: goto L_002FAAEC;
    case 211u: goto L_002FAB1C;
    case 212u: goto L_002FABEC;
    case 213u: goto L_002FAC10;
    case 214u: goto L_002FAC2C;
    case 215u: goto L_002FAC44;
    case 216u: goto L_002FAC8C;
    case 217u: goto L_002FACA0;
    case 218u: goto L_002FACD8;
    case 219u: goto L_002FACEC;
    case 220u: goto L_002FAD00;
    case 221u: goto L_002FAD28;
    case 222u: goto L_002FAF00;
    case 223u: goto L_002FAF10;
    case 224u: goto L_002FAF40;
    case 225u: goto L_002FAF50;
    case 226u: goto L_002FAF60;
    case 227u: goto L_002FAF70;
    case 228u: goto L_002FAFC0;
    case 229u: goto L_002FB010;
    case 230u: goto L_002FB024;
    case 231u: goto L_002FB080;
    case 232u: goto L_002FB0D8;
    case 233u: goto L_002FB12C;
    case 234u: goto L_002FB14C;
    case 235u: goto L_002FB15C;
    case 236u: goto L_002FB16C;
    case 237u: goto L_002FB184;
    case 238u: goto L_002FB214;
    case 239u: goto L_002FB220;
    case 240u: goto L_002FB22C;
    case 241u: goto L_002FB238;
    case 242u: goto L_002FB2B4;
    case 243u: goto L_002FB2DC;
    case 244u: goto L_002FB380;
    case 245u: goto L_002FB3DC;
    case 246u: goto L_002FB46C;
    case 247u: goto L_002FB490;
    case 248u: goto L_002FB4EC;
    case 249u: goto L_002FB700;
    case 250u: goto L_002FB778;
    case 251u: goto L_002FB840;
    case 252u: goto L_002FB930;
    case 253u: goto L_002FB944;
    case 254u: goto L_002FB9B0;
    case 255u: goto L_002FB9FC;
    case 256u: goto L_002FBA24;
    case 257u: goto L_002FBA4C;
    case 258u: goto L_002FBA5C;
    case 259u: goto L_002FBA74;
    case 260u: goto L_002FBA90;
    case 261u: goto L_002FBAA8;
    case 262u: goto L_002FBAEC;
    case 263u: goto L_002FBAF8;
    case 264u: goto L_002FBB0C;
    case 265u: goto L_002FBB20;
    case 266u: goto L_002FBB38;
    case 267u: goto L_002FBB58;
    case 268u: goto L_002FBB94;
    case 269u: goto L_002FBBB8;
    case 270u: goto L_002FBBFC;
    case 271u: goto L_002FBC20;
    case 272u: goto L_002FBC3C;
    case 273u: goto L_002FBC54;
    case 274u: goto L_002FBC74;
    case 275u: goto L_002FBCB0;
    case 276u: goto L_002FBCC4;
    case 277u: goto L_002FBCE8;
    case 278u: goto L_002FBD04;
    case 279u: goto L_002FBD14;
    case 280u: goto L_002FBD40;
    case 281u: goto L_002FBD98;
    case 282u: goto L_002FBDB0;
    case 283u: goto L_002FBE20;
    case 284u: goto L_002FBEC0;
    case 285u: goto L_002FBED0;
    case 286u: goto L_002FBEE8;
    case 287u: goto L_002FBEFC;
    case 288u: goto L_002FBF04;
    case 289u: goto L_002FBF58;
    case 290u: goto L_002FBF70;
    case 291u: goto L_002FBFB8;
    default: bad_entry(c, 0x002F8000u); return;
    }
L_002F8000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 60u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 76u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = 0u;
    c.f[3] = c.r[2].w[0];
    c.f[1] = 0u;
    st32((c.r[16].w[0] + 48u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0F00000u);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    st32((c.r[16].w[0] + 60u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[2]);
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 76u), c.f[1]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 22144u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 368u));
    c.budget -= 35;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002F8098; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002F80B4; } }
L_002F8098:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_002F80B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22152u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 88u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F80EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_002F8110; } }
L_002F80EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22176u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F8110; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 88u), c.f[0]);
    c.budget -= 4;
L_002F8110:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[2].w[0] + 212u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 212u));
    c.f[2] = ld32((c.r[2].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_002F8148; } }
L_002F8144:
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_002F8148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8180; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F8180; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_002F8180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22152u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F819C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_002F819C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[16].w[0] + 88u));
    c.f[13] = ld32((c.r[1].w[0] - 22184u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81B0u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x002F81B0u) [[unlikely]] return; }
L_002F81B0:
    c.f[12] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81BCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x002F81BCu) [[unlikely]] return; }
L_002F81BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[16].w[0] + 48u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[8], c.r[29].w[0] + 32u);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[5]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[3].w[0] + 228u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + 224u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[3], c.r[3].w[0] + 212u);
    st32((c.r[3].w[0]), c.f[0]);
    ld128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.f[0] = ld32((c.r[3].w[0] + 228u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] + 224u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 212u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 65;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8328; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[3].w[0] + 212u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 212u);  if (t) { goto L_002F8304; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_002F8328; } }
L_002F8304:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22176u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F8328; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 4;
L_002F8328:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_002F8354; } }
L_002F8350:
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_002F8354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F838C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F838C; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_002F838C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22192u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F83BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F83BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83BCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F83BCu) [[unlikely]] return; }
L_002F83BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F83C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F83D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F8418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8400u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002F8400u) [[unlikely]] return; }
L_002F8400:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F841C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F8418u) [[unlikely]] return; }
L_002F8418:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F841C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F84F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8450u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F8450u) [[unlikely]] return; }
L_002F8450:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002F84F8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8470u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x002F8470u) [[unlikely]] return; }
L_002F8470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_002F849C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8480u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F8480u) [[unlikely]] return; }
L_002F8480:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F84F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8494u);  if (depth < kMaxDepth) unit_007D(c, 253u, depth + 1u); else { c.pc = 0x002F7E00u; return; } if (c.pc != 0x002F8494u) [[unlikely]] return; }
L_002F8494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F84FC; } }
L_002F849C:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 189u, depth + 1u); else { c.pc = 0x001D2700u; return; } if (c.pc != 0x002F84A8u) [[unlikely]] return; }
L_002F84A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F84F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84BCu); st32((c.r[2].w[0] + 640u), 0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F84BCu) [[unlikely]] return; }
L_002F84BC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 101u);  if (t) { goto L_002F84E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31080u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002F84DC; } }
    st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002F84DC:
    set32(c.r[4], 0u + 101u);
    c.budget -= 1;
L_002F84E0:
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 176u), 0u);
    st8((c.r[16].w[0] + 901u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002F84F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F84FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8510:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 4464u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F8530; } }
    set32(c.r[2], 0u + 4461u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8530; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F8530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8540:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 4460u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002F8550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F8564u) [[unlikely]] return; }
L_002F8564:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8584; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F8588; } }
L_002F8584:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F8588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F85A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4463ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002F85B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4454ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002F85C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4457ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002F85D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 17u, depth + 1u); else { c.pc = 0x002F8510u; return; } if (c.pc != 0x002F85E4u) [[unlikely]] return; }
L_002F85E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F862C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85F4u);  if (depth < kMaxDepth) unit_007E(c, 18u, depth + 1u); else { c.pc = 0x002F8540u; return; } if (c.pc != 0x002F85F4u) [[unlikely]] return; }
L_002F85F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F862C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8604u);  if (depth < kMaxDepth) unit_007E(c, 22u, depth + 1u); else { c.pc = 0x002F85B0u; return; } if (c.pc != 0x002F8604u) [[unlikely]] return; }
L_002F8604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F862C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8614u);  if (depth < kMaxDepth) unit_007E(c, 21u, depth + 1u); else { c.pc = 0x002F85A0u; return; } if (c.pc != 0x002F8614u) [[unlikely]] return; }
L_002F8614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F862C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 4470u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8630; } }
L_002F862C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F8630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8640:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8660u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007E(c, 21u, depth + 1u); else { c.pc = 0x002F85A0u; return; } if (c.pc != 0x002F8660u) [[unlikely]] return; }
L_002F8660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F87D8; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002F8794; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F870C; } }
L_002F8684:
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002F8708; } }
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F8708; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 369u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 369u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002F8708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86C0u);  if (depth < kMaxDepth) unit_0034(c, 71u, depth + 1u); else { c.pc = 0x001D0810u; return; } if (c.pc != 0x002F86C0u) [[unlikely]] return; }
L_002F86C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002F86E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0])));  if (t) { goto L_002F8718; } }
L_002F86E0:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8708; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002F8708:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F870C:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8684u | kUnwind; return; } goto L_002F8684; } }
L_002F8718:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 224u);  if (t) { goto L_002F8B84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8728u);  if (depth < kMaxDepth) unit_0038(c, 64u, depth + 1u); else { c.pc = 0x001E0CD0u; return; } if (c.pc != 0x002F8728u) [[unlikely]] return; }
L_002F8728:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[19].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F876C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8740u); set32(c.r[6], 0u + 4476u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002F8740u) [[unlikely]] return; }
L_002F8740:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 397u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F8778; } }
L_002F876C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8778u); set32(c.r[5], 0u + 4465u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8778u) [[unlikely]] return; }
L_002F8778:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 392u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F8A78; } }
L_002F8794:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F8A7C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 75u);  if (t) { goto L_002F87BC; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[2].w[0] + 76u);
    c.budget -= 2;
L_002F87BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x002F87C4u) [[unlikely]] return; }
L_002F87C4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F87D0u) [[unlikely]] return; }
L_002F87D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8A78; } }
L_002F87D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87E0u);  if (depth < kMaxDepth) unit_007E(c, 17u, depth + 1u); else { c.pc = 0x002F8510u; return; } if (c.pc != 0x002F87E0u) [[unlikely]] return; }
L_002F87E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8A78; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002F8820; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8804u); set32(c.r[5], 0u + 4466u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8804u) [[unlikely]] return; }
L_002F8804:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 397u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F8A58; } }
L_002F8820:
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 160u);  if (t) { goto L_002F8A58; } }
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 368u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], c.r[2].w[0] - 22304u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F887C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] - 22200u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.f[0]);  if (t) { goto L_002F88A0; } }
L_002F887C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 22303u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F88A0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] - 22208u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.budget -= 3;
L_002F88A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F8A58; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[5], 0u + 4461u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F88C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F88C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F88C0u) [[unlikely]] return; }
L_002F88C0:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F88CCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x002F88CCu) [[unlikely]] return; }
L_002F88CC:
    c.f[0] = 0u;
    set32(c.r[3], c.r[19].w[0] + 224u);
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[19].w[0] + 224u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8910u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x002F8910u) [[unlikely]] return; }
L_002F8910:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002F8944; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8A58; } }
L_002F8944:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 4463u);
    set32(c.r[4], 0u + 4456u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 28320u);  if (t) { goto L_002F89B0; } }
L_002F895C:
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[9].w[0] << 2);  if (t) { goto L_002F89AC; } }
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F89AC; } }
    c.r[6].d[0] = ld8((c.r[19].w[0] + 369u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 369u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002F89AC; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002F899C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F89BC; } }
L_002F899C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002F89AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002F89BC; } }
L_002F89AC:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002F89B0:
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F895Cu | kUnwind; return; } goto L_002F895C; } }
L_002F89BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F8A04; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 4456u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F89F0; } }
    set32(c.r[4], c.r[19].w[0] + 224u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_002F8B84; } }
L_002F89F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89FCu); set32(c.r[6], 0u + 4474u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002F89FCu) [[unlikely]] return; }
L_002F89FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 224u);  if (t) { goto L_002F8A10; } }
L_002F8A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A0Cu); set32(c.r[5], 0u + 4462u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8A0Cu) [[unlikely]] return; }
L_002F8A0C:
    set32(c.r[4], c.r[19].w[0] + 224u);
    c.budget -= 1;
L_002F8A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A18u);  if (depth < kMaxDepth) unit_0038(c, 64u, depth + 1u); else { c.pc = 0x001E0CD0u; return; } if (c.pc != 0x002F8A18u) [[unlikely]] return; }
L_002F8A18:
    st8((c.r[19].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], 0u + 1u);  if (t) { goto L_002F8A58; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 188u), c.r[6].w[0]);  if (t) { goto L_002F8A58; } }
    st32((c.r[16].w[0] + 188u), c.r[6].w[0]);
    c.budget -= 1;
L_002F8A58:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 4461u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F8A78; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F8A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A78u); set32(c.r[5], 0u + 4464u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8A78u) [[unlikely]] return; }
L_002F8A78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002F8A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A84u);  if (depth < kMaxDepth) unit_007E(c, 17u, depth + 1u); else { c.pc = 0x002F8510u; return; } if (c.pc != 0x002F8A84u) [[unlikely]] return; }
L_002F8A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8AA4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[3], 0u + 4460u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4470u);  if (t) { goto L_002F8AA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F8B84; } }
L_002F8AA4:
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    c.f[13] = ld32((c.r[19].w[0] + 224u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AB4u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0006(c, 219u, depth + 1u); else { c.pc = 0x0011A5D8u; return; } if (c.pc != 0x002F8AB4u) [[unlikely]] return; }
L_002F8AB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22152u));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[19].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F8AEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 212u), c.f[0]);  if (t) { goto L_002F8B0C; } }
L_002F8AEC:
    c.f[0] = ld32((c.r[1].w[0] - 22176u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F8B0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_002F8B0C:
    c.f[12] = ld32((c.r[19].w[0] + 212u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B18u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x002F8B18u) [[unlikely]] return; }
L_002F8B18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[19].w[0] + 224u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[19].w[0] + 224u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2840000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[19].w[0] + 228u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 232u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[19].w[0] + 236u), c.f[0]);
    set32(c.r[3], c.r[19].w[0] + 224u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[12]);
    c.budget -= 27;
L_002F8B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002F8BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 19u, depth + 1u); else { c.pc = 0x002F8550u; return; } if (c.pc != 0x002F8BB4u) [[unlikely]] return; }
L_002F8BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8C9C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BD4u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002F8BD4u) [[unlikely]] return; }
L_002F8BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8C9C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F8C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C08u); set32(c.r[5], 0u + 4460u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8C08u) [[unlikely]] return; }
L_002F8C08:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002F8C20; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002F8C38; } }
L_002F8C20:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002F8C38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22152u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F8C70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.f[0]);  if (t) { goto L_002F8C90; } }
L_002F8C70:
    c.f[0] = ld32((c.r[1].w[0] - 22176u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002F8C94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_002F8C90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F8C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F8CA4; } }
L_002F8C9C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F8CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F8CA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F8CC4u) [[unlikely]] return; }
L_002F8CC4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F8D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CD8u);  if (depth < kMaxDepth) unit_0034(c, 168u, depth + 1u); else { c.pc = 0x001D2090u; return; } if (c.pc != 0x002F8CD8u) [[unlikely]] return; }
L_002F8CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F8D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CE8u);  if (depth < kMaxDepth) unit_0035(c, 77u, depth + 1u); else { c.pc = 0x001D58D0u; return; } if (c.pc != 0x002F8CE8u) [[unlikely]] return; }
L_002F8CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F8D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CF8u); set32(c.r[5], 0u + 4451u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8CF8u) [[unlikely]] return; }
L_002F8CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F8D04; } }
L_002F8D00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F8D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F8D34u) [[unlikely]] return; }
L_002F8D34:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8E1C; } }
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D58u); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x002F8D58u) [[unlikely]] return; }
L_002F8D58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[1].w[0] - 22216u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F8D84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22224u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8E20; } }
L_002F8D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D8Cu);  if (depth < kMaxDepth) unit_0035(c, 77u, depth + 1u); else { c.pc = 0x001D58D0u; return; } if (c.pc != 0x002F8D8Cu) [[unlikely]] return; }
L_002F8D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8E1C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8DDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 4458u);  if (t) { goto L_002F8DB4; } }
    set32(c.r[5], 0u + 4451u);
    c.budget -= 1;
L_002F8DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8DBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8DBCu) [[unlikely]] return; }
L_002F8DBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F8DC8; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_002F8DC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8DD4u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x002F8DD4u) [[unlikely]] return; }
L_002F8DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F8E14; } }
L_002F8DDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 4458u);  if (t) { goto L_002F8DF0; } }
    set32(c.r[5], 0u + 4453u);
    c.budget -= 1;
L_002F8DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F8DF8u) [[unlikely]] return; }
L_002F8DF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F8E04; } }
    set32(c.r[6], c.r[6].w[0] + 436u);
    c.budget -= 1;
L_002F8E04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E10u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x002F8E10u) [[unlikely]] return; }
L_002F8E10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F8E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F8E24; } }
L_002F8E1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F8E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F8E24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 19u, depth + 1u); else { c.pc = 0x002F8550u; return; } if (c.pc != 0x002F8E44u) [[unlikely]] return; }
L_002F8E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8F34; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F8F38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E64u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002F8E64u) [[unlikely]] return; }
L_002F8E64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42840000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8F34; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F8F34; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8EA0u); set32(c.r[6], 0u + 4475u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002F8EA0u) [[unlikely]] return; }
L_002F8EA0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002F8EB8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002F8ED0; } }
L_002F8EB8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002F8ED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22152u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F8F08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.f[0]);  if (t) { goto L_002F8F28; } }
L_002F8F08:
    c.f[0] = ld32((c.r[1].w[0] - 22176u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002F8F2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22168u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_002F8F28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F8F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F8F3C; } }
L_002F8F34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F8F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F8F3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F8F68u) [[unlikely]] return; }
L_002F8F68:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F903C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F9040; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_002F903C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F903C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FA4u); set32(c.r[5], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x002F8FA4u) [[unlikely]] return; }
L_002F8FA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F903C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 22288u);  if (t) { goto L_002F9030; } }
L_002F8FC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F902C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 368u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F902C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 369u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F902C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F900Cu); set32(c.r[5], 0u + 4471u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F900Cu) [[unlikely]] return; }
L_002F900C:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F9024; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_002F9024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F9044; } }
L_002F902C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002F9030:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8FC8u | kUnwind; return; } goto L_002F8FC8; } }
L_002F903C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F9040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002F9044:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F9060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F9074u) [[unlikely]] return; }
L_002F9074:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F914C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F9150; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4463u);
    set32(c.r[3], 0u + 4462u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 28320u);  if (t) { goto L_002F9100; } }
L_002F90AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[9].w[0] << 2);  if (t) { goto L_002F90FC; } }
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002F90FC; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 369u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 369u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002F90FC; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002F90EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002F910C; } }
L_002F90EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F90FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F9150; } }
L_002F90FC:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002F9100:
    c.r[2].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F90ACu | kUnwind; return; } goto L_002F90AC; } }
L_002F910C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F913C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9120u); set32(c.r[6], 0u + 4473u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002F9120u) [[unlikely]] return; }
L_002F9120:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 397u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F9144; } }
L_002F913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9144u); set32(c.r[5], 0u + 4456u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F9144u) [[unlikely]] return; }
L_002F9144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F9150; } }
L_002F914C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F9150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F9160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F917Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002F917Cu) [[unlikely]] return; }
L_002F917C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F928C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F9290; } }
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 368u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F91BCu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x002F91BCu) [[unlikely]] return; }
L_002F91BC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 368u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F91CCu); set32(c.r[5], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x002F91CCu) [[unlikely]] return; }
L_002F91CC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F91D8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 28u, depth + 1u); else { c.pc = 0x00144620u; return; } if (c.pc != 0x002F91D8u) [[unlikely]] return; }
L_002F91D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22232u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F9200; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22240u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F9228; } }
L_002F9200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22248u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002F9224; } }
    c.f[2] = ld32((c.r[1].w[0] - 22256u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F923C; } }
L_002F9224:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F9228:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9234u); set32(c.r[6], 0u + 4469u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002F9234u) [[unlikely]] return; }
L_002F9234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F9284; } }
L_002F923C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22240u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F9274; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F9278; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F926Cu); set32(c.r[6], 0u + 4467u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002F926Cu) [[unlikely]] return; }
L_002F926C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9280; } }
L_002F9274:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F9278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9280u); set32(c.r[6], 0u + 4468u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002F9280u) [[unlikely]] return; }
L_002F9280:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F9284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F9294; } }
L_002F928C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F9290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002F9294:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F92B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F92D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002F92D0u) [[unlikely]] return; }
L_002F92D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16480u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F9310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F938C; } }
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22264u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9368u); set32(c.r[4], c.r[2].w[0] - 2u);  if (depth < kMaxDepth) unit_0047(c, 35u, depth + 1u); else { c.pc = 0x0021C7D0u; return; } if (c.pc != 0x002F9368u) [[unlikely]] return; }
L_002F9368:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F945C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_002F945C; } }
L_002F938C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002F93F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002F93CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 4455u);  if (t) { goto L_002F93CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93CCu);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002F93CCu) [[unlikely]] return; }
L_002F93CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F945C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_002F945C; } }
L_002F93F0:
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[1] = ld32((c.r[1].w[0] - 22264u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9430u); set32(c.r[4], c.r[2].w[0] - 2u);  if (depth < kMaxDepth) unit_0047(c, 35u, depth + 1u); else { c.pc = 0x0021C7D0u; return; } if (c.pc != 0x002F9430u) [[unlikely]] return; }
L_002F9430:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F945C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F945C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F945Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F945Cu) [[unlikely]] return; }
L_002F945C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F9470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F94B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002F94A0u) [[unlikely]] return; }
L_002F94A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F94BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F94B8u) [[unlikely]] return; }
L_002F94B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F94BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F94D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x002F94ECu) [[unlikely]] return; }
L_002F94EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + 16464u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9510u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0008(c, 173u, depth + 1u); else { c.pc = 0x00121AA8u; return; } if (c.pc != 0x002F9510u) [[unlikely]] return; }
L_002F9510:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F9564; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F9528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9530u);  if (depth < kMaxDepth) unit_003F(c, 312u, depth + 1u); else { c.pc = 0x001FF210u; return; } if (c.pc != 0x002F9530u) [[unlikely]] return; }
L_002F9530:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 12u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9528u | kUnwind; return; } goto L_002F9528; } }
    set32(c.r[2], c.r[17].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9528u | kUnwind; return; } goto L_002F9528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F9584; } }
L_002F9564:
    set32(c.r[3], c.r[4].w[0] + 2u);
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9564u | kUnwind; return; } goto L_002F9564; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F9584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F95A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F9610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95C8u);  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x002F95C8u) [[unlikely]] return; }
L_002F95C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3600u);  if (t) { goto L_002F96A8; } }
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F96A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002F96A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9600u); set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));  if (depth < kMaxDepth) unit_004D(c, 63u, depth + 1u); else { c.pc = 0x00235010u; return; } if (c.pc != 0x002F9600u) [[unlikely]] return; }
L_002F9600:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002F96A8; } }
L_002F9610:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002F9658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9620u); set32(c.r[4], ld32((c.r[1].w[0] - 27904u)));  if (depth < kMaxDepth) unit_004D(c, 64u, depth + 1u); else { c.pc = 0x00235030u; return; } if (c.pc != 0x002F9620u) [[unlikely]] return; }
L_002F9620:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F96A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9640u); set32(c.r[4], c.r[2].w[0] - 2u);  if (depth < kMaxDepth) unit_009E(c, 458u, depth + 1u); else { c.pc = 0x0037BB50u; return; } if (c.pc != 0x002F9640u) [[unlikely]] return; }
L_002F9640:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 70u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002F96A8; } }
L_002F9658:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F96A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[17].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9678u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F9678u) [[unlikely]] return; }
L_002F9678:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F968C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F968Cu);  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F92B0u; return; } if (c.pc != 0x002F968Cu) [[unlikely]] return; }
L_002F968C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_002F96A8; } }
L_002F96A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 2;
L_002F96A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F96C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96D0u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F96D0u) [[unlikely]] return; }
L_002F96D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F96E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96E4u);  if (depth < kMaxDepth) unit_007E(c, 100u, depth + 1u); else { c.pc = 0x002F94D0u; return; } if (c.pc != 0x002F96E4u) [[unlikely]] return; }
L_002F96E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F96E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1792u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F9700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 1792u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9738; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9730; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9730u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9730u) [[unlikely]] return; }
L_002F9730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 1792u), 0u);
    c.budget -= 2;
L_002F9738:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F9750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F9798; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9780u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x002F9780u) [[unlikely]] return; }
L_002F9780:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F979C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F9798u) [[unlikely]] return; }
L_002F9798:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F979C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F97B0:
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 32u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 96u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002F97F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F9824; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F9820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9820u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F9820u) [[unlikely]] return; }
L_002F9820:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F9824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F9840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F985Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002F985Cu) [[unlikely]] return; }
L_002F985C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 16528u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 26704u);
    set32(c.r[6], c.r[6].w[0] - 26640u);
    set32(c.r[7], 0u + 128u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9888u); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002F9888u) [[unlikely]] return; }
L_002F9888:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[16].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] - 26048u);
    set32(c.r[6], c.r[6].w[0] - 26128u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98A8u); set32(c.r[8], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002F98A8u) [[unlikely]] return; }
L_002F98A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[16].w[0] + 1472u);
    set32(c.r[5], c.r[5].w[0] - 26144u);
    set32(c.r[6], c.r[6].w[0] - 26224u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98C8u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x002F98C8u) [[unlikely]] return; }
L_002F98C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98DCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F98DCu) [[unlikely]] return; }
L_002F98DC:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98E8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002F98E8u) [[unlikely]] return; }
L_002F98E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F9900; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 394u, depth + 1u); else { c.pc = 0x0026F980u; return; } if (c.pc != 0x002F98FCu) [[unlikely]] return; }
L_002F98FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F9900:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F990Cu); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002F990Cu) [[unlikely]] return; }
L_002F990C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9948u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002F9948u) [[unlikely]] return; }
L_002F9948:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[16].w[0] + 1488u);
    st8((c.r[3].w[0] + 446u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 1572u), 0u);
    st32((c.r[16].w[0] + 1568u), 0u);
    st32((c.r[16].w[0] + 1576u), 0u);
    st32((c.r[16].w[0] + 1856u), 0u);
    st32((c.r[16].w[0] + 1860u), 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 1504u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F9990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F99C4; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F99C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99C0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F99C0u) [[unlikely]] return; }
L_002F99C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F99C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F99E0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002F99F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F9A24; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F9A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A20u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F9A20u) [[unlikely]] return; }
L_002F9A20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002F9A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F9A40:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_002F9A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F9B6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16528u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9AAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9AAC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9AACu) [[unlikely]] return; }
L_002F9AAC:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9AD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9AD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9AD4u) [[unlikely]] return; }
L_002F9AD4:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9AFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9AFC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9AFCu) [[unlikely]] return; }
L_002F9AFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[17].w[0] + 1472u);
    set32(c.r[5], c.r[5].w[0] - 26224u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B18u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002F9B18u) [[unlikely]] return; }
L_002F9B18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[17].w[0] + 1136u);
    set32(c.r[5], c.r[5].w[0] - 26128u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B30u); set32(c.r[7], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002F9B30u) [[unlikely]] return; }
L_002F9B30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] - 26640u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B48u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x002F9B48u) [[unlikely]] return; }
L_002F9B48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002F9B54u) [[unlikely]] return; }
L_002F9B54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F9B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002F9B6Cu) [[unlikely]] return; }
L_002F9B6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F9B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F9B90:
    set32(c.r[29], c.r[29].w[0] - 1472u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9BACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9BACu) [[unlikely]] return; }
L_002F9BAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9BC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9BC8u) [[unlikely]] return; }
L_002F9BC8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9BDCu); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F9BDCu) [[unlikely]] return; }
L_002F9BDC:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9BECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9BECu) [[unlikely]] return; }
L_002F9BEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9C08u) [[unlikely]] return; }
L_002F9C08:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002F9C1Cu) [[unlikely]] return; }
L_002F9C1C:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9C2Cu) [[unlikely]] return; }
L_002F9C2C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 1488u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9C44u) [[unlikely]] return; }
L_002F9C44:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[16].w[0] + 1504u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C70u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002F9C70u) [[unlikely]] return; }
L_002F9C70:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1456u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C84u); set32(c.r[6], c.r[29].w[0] + 1440u);  if (depth < kMaxDepth) unit_0010(c, 243u, depth + 1u); else { c.pc = 0x00143560u; return; } if (c.pc != 0x002F9C84u) [[unlikely]] return; }
L_002F9C84:
    c.f[0] = ld32((c.r[29].w[0] + 1464u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 1444u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 1456u));
    st32((c.r[16].w[0] + 112u), c.f[2]);
    st32((c.r[16].w[0] + 116u), c.f[1]);
    st32((c.r[16].w[0] + 120u), c.f[0]);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1464u));
    c.f[1] = ld32((c.r[29].w[0] + 1444u));
    c.f[2] = ld32((c.r[29].w[0] + 1440u));
    st32((c.r[16].w[0] + 240u), c.f[2]);
    st32((c.r[16].w[0] + 244u), c.f[1]);
    st32((c.r[16].w[0] + 248u), c.f[0]);
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1448u));
    c.f[1] = ld32((c.r[29].w[0] + 1444u));
    c.f[2] = ld32((c.r[29].w[0] + 1456u));
    st32((c.r[16].w[0] + 368u), c.f[2]);
    st32((c.r[16].w[0] + 372u), c.f[1]);
    st32((c.r[16].w[0] + 376u), c.f[0]);
    st32((c.r[16].w[0] + 380u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1448u));
    c.f[1] = ld32((c.r[29].w[0] + 1444u));
    c.f[2] = ld32((c.r[29].w[0] + 1440u));
    st32((c.r[16].w[0] + 496u), c.f[2]);
    st32((c.r[16].w[0] + 500u), c.f[1]);
    st32((c.r[16].w[0] + 504u), c.f[0]);
    st32((c.r[16].w[0] + 508u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1464u));
    c.f[1] = ld32((c.r[29].w[0] + 1460u));
    c.f[2] = ld32((c.r[29].w[0] + 1456u));
    st32((c.r[16].w[0] + 624u), c.f[2]);
    st32((c.r[16].w[0] + 628u), c.f[1]);
    st32((c.r[16].w[0] + 632u), c.f[0]);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1464u));
    c.f[1] = ld32((c.r[29].w[0] + 1460u));
    c.f[2] = ld32((c.r[29].w[0] + 1440u));
    st32((c.r[16].w[0] + 752u), c.f[2]);
    st32((c.r[16].w[0] + 756u), c.f[1]);
    st32((c.r[16].w[0] + 760u), c.f[0]);
    st32((c.r[16].w[0] + 764u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1448u));
    c.f[1] = ld32((c.r[29].w[0] + 1460u));
    c.f[2] = ld32((c.r[29].w[0] + 1456u));
    st32((c.r[16].w[0] + 880u), c.f[2]);
    st32((c.r[16].w[0] + 884u), c.f[1]);
    st32((c.r[16].w[0] + 888u), c.f[0]);
    st32((c.r[16].w[0] + 892u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 1448u));
    c.f[1] = ld32((c.r[29].w[0] + 1460u));
    c.f[2] = ld32((c.r[29].w[0] + 1440u));
    st32((c.r[16].w[0] + 1008u), c.f[2]);
    st32((c.r[16].w[0] + 1012u), c.f[1]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D70u); st32((c.r[16].w[0] + 1020u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 220u, depth + 1u); else { c.pc = 0x002FAD00u; return; } if (c.pc != 0x002F9D70u) [[unlikely]] return; }
L_002F9D70:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F9D80u) [[unlikely]] return; }
L_002F9D80:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[3], c.r[16].w[0] + 1520u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 496u);
    set32(c.r[3], c.r[29].w[0] + 1424u);
    set32(c.r[5], c.r[29].w[0] + 480u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[16].w[0] + 1552u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 1424u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 1552u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 1520u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 480u);
    set32(c.r[3], c.r[29].w[0] + 1408u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 1408u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 1504u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 1504u) & ~15u, c.r[2]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 1488u) & ~15u, c.r[2]);  if (t) { goto L_002F9E2C; } }
    set32(c.r[3], c.r[5].w[0] << 7);
    c.budget -= 1;
L_002F9E04:
    set32(c.r[2], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    ld128((c.r[4].w[0] + 112u) & ~15u, c.r[4]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[5].w[0] << 7);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 160u);
    st128((c.r[3].w[0] + 128u) & ~15u, c.r[4]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 10;
L_002F9E2C:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9E04u | kUnwind; return; } goto L_002F9E04; } }
    set32(c.r[3], c.r[16].w[0] + 112u);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1472u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1476u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1480u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1484u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 1136u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1140u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 464u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1136u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1140u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[6], c.r[29].w[0] + 1376u);
    set32(c.r[2], c.r[29].w[0] + 1376u);
    set32(c.r[4], c.r[29].w[0] + 1392u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1392u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EB4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002F9EB4u) [[unlikely]] return; }
L_002F9EB4:
    st32((c.r[16].w[0] + 1144u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1148u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 448u);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1152u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1152u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[6], c.r[29].w[0] + 1344u);
    set32(c.r[2], c.r[29].w[0] + 1344u);
    set32(c.r[4], c.r[29].w[0] + 1360u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1360u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F14u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002F9F14u) [[unlikely]] return; }
L_002F9F14:
    st32((c.r[16].w[0] + 1156u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 1160u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 432u);
    set32(c.r[2], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1160u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1164u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[6], c.r[29].w[0] + 1312u);
    set32(c.r[2], c.r[29].w[0] + 1312u);
    set32(c.r[4], c.r[29].w[0] + 1328u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1328u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F74u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002F9F74u) [[unlikely]] return; }
L_002F9F74:
    st32((c.r[16].w[0] + 1168u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1172u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 416u);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1172u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1176u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[29].w[0] + 1280u);
    set32(c.r[2], c.r[29].w[0] + 1280u);
    set32(c.r[4], c.r[29].w[0] + 1296u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1296u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9FD4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002F9FD4u) [[unlikely]] return; }
L_002F9FD4:
    st32((c.r[16].w[0] + 1180u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 624u);
    st32((c.r[16].w[0] + 1184u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 400u);
    set32(c.r[2], c.r[16].w[0] + 752u);
    st32((c.r[16].w[0] + 1188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1184u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1188u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[6], c.r[29].w[0] + 1248u);
    set32(c.r[2], c.r[29].w[0] + 1248u);
    set32(c.r[4], c.r[29].w[0] + 1264u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1264u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA034u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA034u) [[unlikely]] return; }
L_002FA034:
    st32((c.r[16].w[0] + 1192u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 1196u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 384u);
    set32(c.r[2], c.r[16].w[0] + 1008u);
    st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1200u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[29].w[0] + 1216u);
    set32(c.r[2], c.r[29].w[0] + 1216u);
    set32(c.r[4], c.r[29].w[0] + 1232u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1232u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA094u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA094u) [[unlikely]] return; }
L_002FA094:
    st32((c.r[16].w[0] + 1204u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 624u);
    st32((c.r[16].w[0] + 1208u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 368u);
    set32(c.r[2], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 1212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1208u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1212u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[6], c.r[29].w[0] + 1184u);
    set32(c.r[2], c.r[29].w[0] + 1184u);
    set32(c.r[4], c.r[29].w[0] + 1200u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1200u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA0F4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA0F4u) [[unlikely]] return; }
L_002FA0F4:
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 752u);
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[16].w[0] + 1008u);
    st32((c.r[16].w[0] + 1224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1220u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1224u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[29].w[0] + 1152u);
    set32(c.r[2], c.r[29].w[0] + 1152u);
    set32(c.r[4], c.r[29].w[0] + 1168u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1168u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA154u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA154u) [[unlikely]] return; }
L_002FA154:
    st32((c.r[16].w[0] + 1228u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 1232u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[16].w[0] + 624u);
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1232u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1236u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], c.r[29].w[0] + 1120u);
    set32(c.r[2], c.r[29].w[0] + 1120u);
    set32(c.r[4], c.r[29].w[0] + 1136u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1136u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA1B4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA1B4u) [[unlikely]] return; }
L_002FA1B4:
    st32((c.r[16].w[0] + 1240u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1244u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[16].w[0] + 752u);
    st32((c.r[16].w[0] + 1248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1244u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1248u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[29].w[0] + 1088u);
    set32(c.r[2], c.r[29].w[0] + 1088u);
    set32(c.r[4], c.r[29].w[0] + 1104u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1104u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA214u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA214u) [[unlikely]] return; }
L_002FA214:
    st32((c.r[16].w[0] + 1252u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1256u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1256u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 1056u);
    set32(c.r[2], c.r[29].w[0] + 1056u);
    set32(c.r[4], c.r[29].w[0] + 1072u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1072u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA274u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA274u) [[unlikely]] return; }
L_002FA274:
    st32((c.r[16].w[0] + 1264u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[16].w[0] + 1008u);
    st32((c.r[16].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1268u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1272u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 1024u);
    set32(c.r[2], c.r[29].w[0] + 1024u);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1040u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA2D4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA2D4u) [[unlikely]] return; }
L_002FA2D4:
    st32((c.r[16].w[0] + 1276u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[16].w[0] + 1008u);
    st32((c.r[16].w[0] + 1284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1280u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1284u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[6], c.r[29].w[0] + 992u);
    set32(c.r[2], c.r[29].w[0] + 992u);
    set32(c.r[4], c.r[29].w[0] + 1008u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 1008u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA334u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA334u) [[unlikely]] return; }
L_002FA334:
    st32((c.r[16].w[0] + 1288u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1292u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 1296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1296u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 960u);
    set32(c.r[2], c.r[29].w[0] + 960u);
    set32(c.r[4], c.r[29].w[0] + 976u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 976u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA394u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA394u) [[unlikely]] return; }
L_002FA394:
    st32((c.r[16].w[0] + 1300u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[16].w[0] + 752u);
    st32((c.r[16].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1308u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 928u);
    set32(c.r[2], c.r[29].w[0] + 928u);
    set32(c.r[4], c.r[29].w[0] + 944u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 944u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA3F4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA3F4u) [[unlikely]] return; }
L_002FA3F4:
    st32((c.r[16].w[0] + 1312u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1316u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[16].w[0] + 624u);
    st32((c.r[16].w[0] + 1320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1316u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1320u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 896u);
    set32(c.r[2], c.r[29].w[0] + 896u);
    set32(c.r[4], c.r[29].w[0] + 912u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 912u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA454u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA454u) [[unlikely]] return; }
L_002FA454:
    st32((c.r[16].w[0] + 1324u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 1328u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1332u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1328u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1332u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 864u);
    set32(c.r[2], c.r[29].w[0] + 864u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 880u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4B4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA4B4u) [[unlikely]] return; }
L_002FA4B4:
    st32((c.r[16].w[0] + 1336u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1340u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[2], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1340u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1344u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 832u);
    set32(c.r[2], c.r[29].w[0] + 832u);
    set32(c.r[4], c.r[29].w[0] + 848u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 848u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA514u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA514u) [[unlikely]] return; }
L_002FA514:
    st32((c.r[16].w[0] + 1348u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 624u);
    st32((c.r[16].w[0] + 1352u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[16].w[0] + 1008u);
    st32((c.r[16].w[0] + 1356u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1352u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1356u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 800u);
    set32(c.r[2], c.r[29].w[0] + 800u);
    set32(c.r[4], c.r[29].w[0] + 816u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 816u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA574u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA574u) [[unlikely]] return; }
L_002FA574:
    st32((c.r[16].w[0] + 1360u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 752u);
    st32((c.r[16].w[0] + 1364u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 1368u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1364u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1368u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 768u);
    set32(c.r[2], c.r[29].w[0] + 768u);
    set32(c.r[4], c.r[29].w[0] + 784u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 784u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5D4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA5D4u) [[unlikely]] return; }
L_002FA5D4:
    st32((c.r[16].w[0] + 1372u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 1376u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 1380u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1376u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1380u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 736u);
    set32(c.r[2], c.r[29].w[0] + 736u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 752u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA634u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA634u) [[unlikely]] return; }
L_002FA634:
    st32((c.r[16].w[0] + 1384u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1388u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[16].w[0] + 624u);
    st32((c.r[16].w[0] + 1392u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1388u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1392u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 704u);
    set32(c.r[2], c.r[29].w[0] + 704u);
    set32(c.r[4], c.r[29].w[0] + 720u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 720u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA694u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA694u) [[unlikely]] return; }
L_002FA694:
    st32((c.r[16].w[0] + 1396u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1400u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[16].w[0] + 1008u);
    st32((c.r[16].w[0] + 1404u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1400u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1404u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 672u);
    set32(c.r[2], c.r[29].w[0] + 672u);
    set32(c.r[4], c.r[29].w[0] + 688u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 688u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6F4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA6F4u) [[unlikely]] return; }
L_002FA6F4:
    st32((c.r[16].w[0] + 1408u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1412u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[16].w[0] + 752u);
    st32((c.r[16].w[0] + 1416u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1412u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1416u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 640u);
    set32(c.r[2], c.r[29].w[0] + 640u);
    set32(c.r[4], c.r[29].w[0] + 656u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 656u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA754u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA754u) [[unlikely]] return; }
L_002FA754:
    st32((c.r[16].w[0] + 1420u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 112u);
    st32((c.r[16].w[0] + 1424u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[16].w[0] + 752u);
    st32((c.r[16].w[0] + 1428u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1424u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1428u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 608u);
    set32(c.r[2], c.r[29].w[0] + 608u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 624u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7B4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA7B4u) [[unlikely]] return; }
L_002FA7B4:
    st32((c.r[16].w[0] + 1432u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 240u);
    st32((c.r[16].w[0] + 1436u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[16].w[0] + 624u);
    st32((c.r[16].w[0] + 1440u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1436u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1440u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 576u);
    set32(c.r[2], c.r[29].w[0] + 576u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 592u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA814u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA814u) [[unlikely]] return; }
L_002FA814:
    st32((c.r[16].w[0] + 1444u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 368u);
    st32((c.r[16].w[0] + 1448u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[16].w[0] + 1008u);
    st32((c.r[16].w[0] + 1452u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1448u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1452u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 544u);
    set32(c.r[2], c.r[29].w[0] + 544u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 560u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA874u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA874u) [[unlikely]] return; }
L_002FA874:
    st32((c.r[16].w[0] + 1456u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 496u);
    st32((c.r[16].w[0] + 1460u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 1464u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1460u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1464u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 512u);
    set32(c.r[2], c.r[29].w[0] + 512u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[29].w[0] + 528u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8D4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x002FA8D4u) [[unlikely]] return; }
L_002FA8D4:
    st32((c.r[16].w[0] + 1468u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 220u, depth + 1u); else { c.pc = 0x002FAD00u; return; } if (c.pc != 0x002FA8E0u) [[unlikely]] return; }
L_002FA8E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], 0u + 2u);
    ld128((c.r[16].w[0] + 1504u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    ld128((c.r[16].w[0] + 1536u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    ld128((c.r[16].w[0] + 1504u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    ld128((c.r[16].w[0] + 1536u) & ~15u, c.r[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA918u); st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002FA918u) [[unlikely]] return; }
L_002FA918:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA930u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA930u) [[unlikely]] return; }
L_002FA930:
    st32((c.r[16].w[0] + 1840u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA93Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002FA93Cu) [[unlikely]] return; }
L_002FA93C:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA954u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA954u) [[unlikely]] return; }
L_002FA954:
    st32((c.r[16].w[0] + 1844u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA960u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002FA960u) [[unlikely]] return; }
L_002FA960:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA978u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA978u) [[unlikely]] return; }
L_002FA978:
    st32((c.r[16].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1840u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA998u); set32(c.r[5], c.r[16].w[0] + 1584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA998u) [[unlikely]] return; }
L_002FA998:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1844u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9B4u); set32(c.r[5], c.r[16].w[0] + 1648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA9B4u) [[unlikely]] return; }
L_002FA9B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1848u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9D0u); set32(c.r[5], c.r[16].w[0] + 1712u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA9D0u) [[unlikely]] return; }
L_002FA9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1472u);  c.pc = t; return; }
L_002FA9E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1572u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FAA14; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAA0Cu) [[unlikely]] return; }
L_002FAA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  if (t) { goto L_002FAA54; } }
L_002FAA14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002FAA38; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAA30u) [[unlikely]] return; }
L_002FAA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FAA50; } }
L_002FAA38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002FAA50; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAA50u) [[unlikely]] return; }
L_002FAA50:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 1;
L_002FAA54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 416u);  if (t) { goto L_002FAC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA64u);  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0013C5A0u; return; } if (c.pc != 0x002FAA64u) [[unlikely]] return; }
L_002FAA64:
    c.f[1] = ld32((c.r[17].w[0] + 1576u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 1504u);  if (t) { goto L_002FAAA4; } }
    set32(c.r[4], c.r[17].w[0] + 1504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA88u); set32(c.r[5], c.r[17].w[0] + 1488u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x002FAA88u) [[unlikely]] return; }
L_002FAA88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[1].w[0] - 22008u));
    c.f[1] = ld32((c.r[17].w[0] + 1856u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1856u), c.f[0]);  if (t) { goto L_002FAAC4; } }
L_002FAAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAAACu); set32(c.r[5], c.r[17].w[0] + 1488u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x002FAAACu) [[unlikely]] return; }
L_002FAAAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[1].w[0] - 22008u));
    c.f[1] = ld32((c.r[17].w[0] + 1856u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1856u), c.f[0]);
    c.budget -= 6;
L_002FAAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAACCu); c.f[12] = ld32((c.r[17].w[0] + 1856u));  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002FAACCu) [[unlikely]] return; }
L_002FAACC:
    st32((c.r[17].w[0] + 1856u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002FABF0; } }
L_002FAAD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002FAAF4; } }
    c.f[12] = ld32((c.r[17].w[0] + 1856u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAAECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x002FAAECu) [[unlikely]] return; }
L_002FAAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] << 6);  if (t) { goto L_002FAB20; } }
L_002FAAF4:
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 1856u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB1Cu); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0011(c, 59u, depth + 1u); else { c.pc = 0x001453E0u; return; } if (c.pc != 0x002FAB1Cu) [[unlikely]] return; }
L_002FAB1C:
    set32(c.r[2], c.r[16].w[0] << 6);
    c.budget -= 1;
L_002FAB20:
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1584u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 144u);
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
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 1840u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 51;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FABECu); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FABECu) [[unlikely]] return; }
L_002FABEC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FABF0:
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAAD8u | kUnwind; return; } goto L_002FAAD8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC10u); set32(c.r[6], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x002FAC10u) [[unlikely]] return; }
L_002FAC10:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC2Cu); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAC2Cu) [[unlikely]] return; }
L_002FAC2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAC44u) [[unlikely]] return; }
L_002FAC44:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAC8C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAC8C; } }
    ld128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22016u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC8Cu); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FAC8Cu) [[unlikely]] return; }
L_002FAC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002FACA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FACEC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FACD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACD8u);  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002FACD8u) [[unlikely]] return; }
L_002FACD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FACEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACECu);  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002FACECu) [[unlikely]] return; }
L_002FACEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FAD00:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 272u);  if (t) { goto L_002FAD44; } }
    set32(c.r[2], c.r[4].w[0] << 7);
    c.budget -= 1;
L_002FAD28:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
L_002FAD44:
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 7);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAD28u | kUnwind; return; } goto L_002FAD28; } }
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[5] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[16].w[0] + 112u);
    set32(c.r[6], c.r[16].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[3] = c.r[2].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[4] = ld32((c.r[29].w[0] + 112u));
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 112u);
    fpu_div(c, 4u, c.f[4], c.f[5]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[4]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 1520u) & ~15u, c.r[2]);
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[16].w[0] + 496u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[16].w[0] + 368u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[8], c.r[29].w[0] + 240u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 176u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.f[3] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[4]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[29].w[0] + 240u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 256u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 108;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF00u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002FAF00u) [[unlikely]] return; }
L_002FAF00:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAF10u) [[unlikely]] return; }
L_002FAF10:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 1536u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[12] = ld32((c.r[29].w[0] + 260u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[13] = fp::sqrt(c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF40u);  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x002FAF40u) [[unlikely]] return; }
L_002FAF40:
    c.f[1] = ld32((c.r[16].w[0] + 1536u));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF50u); st32((c.r[16].w[0] + 1536u), c.f[12]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002FAF50u) [[unlikely]] return; }
L_002FAF50:
    st32((c.r[16].w[0] + 1536u), c.f[0]);
    c.f[13] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF60u); c.f[12] = ld32((c.r[29].w[0] + 256u));  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x002FAF60u) [[unlikely]] return; }
L_002FAF60:
    c.f[1] = ld32((c.r[16].w[0] + 1540u));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF70u); st32((c.r[16].w[0] + 1540u), c.f[12]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002FAF70u) [[unlikely]] return; }
L_002FAF70:
    st32((c.r[16].w[0] + 1540u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[16].w[0] + 1504u);
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFC0u); st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_007E(c, 229u, depth + 1u); else { c.pc = 0x002FB010u; return; } if (c.pc != 0x002FAFC0u) [[unlikely]] return; }
L_002FAFC0:
    ld128((c.r[16].w[0] + 1520u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[16].w[0] + 1552u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 1504u) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002FB010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[29].w[0] + 16u);  if (t) { goto L_002FB06C; } }
L_002FB024:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[9].w[0] << 7);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[9].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    ld128((c.r[8].w[0]) & ~15u, c.r[6]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 112u) & ~15u, c.r[6]);
    c.budget -= 18;
L_002FB06C:
    c.r[3].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB024u | kUnwind; return; } goto L_002FB024; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FB080:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 288u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 224u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002FB350; } }
L_002FB0D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FB34C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 12084u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FB34C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 276u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB12Cu); set32(c.r[4], ld32((c.r[16].w[0] + 912u)));  if (depth < kMaxDepth) unit_0049(c, 324u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x002FB12Cu) [[unlikely]] return; }
L_002FB12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB34C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB34C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB14Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x002FB14Cu) [[unlikely]] return; }
L_002FB14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 288u);  if (t) { goto L_002FB178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB15Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x002FB15Cu) [[unlikely]] return; }
L_002FB15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB16Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x002FB16Cu) [[unlikely]] return; }
L_002FB16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB34C; } }
L_002FB174:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_002FB178:
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB184u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 141u, depth + 1u); else { c.pc = 0x00141AC0u; return; } if (c.pc != 0x002FB184u) [[unlikely]] return; }
L_002FB184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB190; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002FB190:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002FB34C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] - 9888u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[5], c.r[18].w[0] + 1536u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB214u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x002FB214u) [[unlikely]] return; }
L_002FB214:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB220u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0011(c, 19u, depth + 1u); else { c.pc = 0x00144490u; return; } if (c.pc != 0x002FB220u) [[unlikely]] return; }
L_002FB220:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB22Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002FB22Cu) [[unlikely]] return; }
L_002FB22C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB238u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 348u, depth + 1u); else { c.pc = 0x00103930u; return; } if (c.pc != 0x002FB238u) [[unlikely]] return; }
L_002FB238:
    c.f[6] = ld32((c.r[29].w[0] + 240u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 248u));
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[6], c.f[1]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 88u), c.f[7]);
    st32((c.r[29].w[0] + 84u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FB2D4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2B4u); set32(c.r[5], 0u + 12080u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FB2B4u) [[unlikely]] return; }
L_002FB2B4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002FB2F4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002FB2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2DCu); set32(c.r[5], 0u + 12081u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FB2DCu) [[unlikely]] return; }
L_002FB2DC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002FB2F4:
    set32(c.r[7], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], 0u + 1u);
    ld128((c.r[7].w[0] + 224u) & ~15u, c.r[7]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[7]);
    set32(c.r[7], ld32((c.r[18].w[0] + 96u)));
    ld128((c.r[7].w[0] + 208u) & ~15u, c.r[7]);
    st128((c.r[16].w[0] + 208u) & ~15u, c.r[7]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 1568u), c.r[16].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1572u), c.r[8].w[0]);  if (t) { goto L_002FB35C; } }
L_002FB34C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002FB350:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB0D8u | kUnwind; return; } goto L_002FB0D8; } }
L_002FB35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002FB380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 12080u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1568u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12081u);  if (t) { goto L_002FB3C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FB3C0; } }
    st32((c.r[16].w[0] + 1568u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1572u), 0u);  if (t) { goto L_002FB46C; } }
L_002FB3C0:
    set32(c.r[18], ld32((c.r[16].w[0] + 1568u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3DCu); set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));  if (depth < kMaxDepth) unit_001A(c, 59u, depth + 1u); else { c.pc = 0x00168DB0u; return; } if (c.pc != 0x002FB3DCu) [[unlikely]] return; }
L_002FB3DC:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FB46C; } }
    set32(c.r[2], 0u + 12085u);
    set32(c.r[8], 0u - 65u);
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[11], ld32((c.r[16].w[0] + 1568u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[7], 0u - 2u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u + 150u);
    st32((c.r[11].w[0] + 176u), 0u);
    set32(c.r[12], ld32((c.r[16].w[0] + 1568u)));
    c.r[11].d[0] = ld8((c.r[12].w[0] + 394u));
    c.r[8].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[12].w[0] + 394u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 1568u)));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 395u));
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[10].d[0];
    st8((c.r[9].w[0] + 395u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0] + 1568u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 392u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[8].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1572u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1576u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB46Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002FB46Cu) [[unlikely]] return; }
L_002FB46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FB490:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 12082u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 1568u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12083u);  if (t) { goto L_002FB53C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FB53C; } }
    set32(c.r[3], 0u + 12085u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002FB53C; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31184u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FB52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4ECu); set32(c.r[5], 0u + 12091u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FB4ECu) [[unlikely]] return; }
L_002FB4EC:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 394u));
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 1504u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    ld128((c.r[18].w[0] + 1536u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    c.budget -= 16;
L_002FB52C:
    ld128((c.r[18].w[0] + 1504u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 1488u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1572u), 0u);  if (t) { goto L_002FB910; } }
L_002FB53C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 472u));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 12085u);  if (t) { goto L_002FB57C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 1576u));
    c.f[1] = ld32((c.r[1].w[0] - 22024u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 1576u), c.f[1]);  if (t) { goto L_002FB678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1576u), c.f[0]);  if (t) { goto L_002FB678; } }
L_002FB57C:
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16ull;  if (t) { goto L_002FB5F4; } }
    c.f[1] = ld32((c.r[18].w[0] + 1576u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002FB5CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22032u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 1576u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22040u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FB678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1576u), c.f[2]);  if (t) { goto L_002FB678; } }
L_002FB5CC:
    c.f[0] = ld32((c.r[1].w[0] - 22032u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 1576u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22048u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FB678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1576u), c.f[2]);  if (t) { goto L_002FB678; } }
L_002FB5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002FB628; } }
    c.f[0] = ld32((c.r[1].w[0] - 22056u));
    c.f[1] = ld32((c.r[18].w[0] + 1576u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 1576u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 22064u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FB678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1576u), c.f[0]);  if (t) { goto L_002FB678; } }
L_002FB628:
    c.f[2] = ld32((c.r[18].w[0] + 1576u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002FB660; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 22072u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 1576u), c.f[0]);  if (t) { goto L_002FB678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1576u), c.f[1]);  if (t) { goto L_002FB678; } }
L_002FB660:
    c.f[0] = ld32((c.r[1].w[0] - 22080u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 1576u), c.f[0]);  if (t) { goto L_002FB678; } }
    st32((c.r[18].w[0] + 1576u), c.f[1]);
    c.budget -= 1;
L_002FB678:
    set32(c.r[3], ld32((c.r[17].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002FB798; } }
    c.f[1] = ld32((c.r[18].w[0] + 1576u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = ld32((c.r[18].w[0] + 1540u));  if (t) { goto L_002FB6A8; } }
    set32(c.r[2], c.r[3].w[0] + 4u);
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 2;
L_002FB6A8:
    set32(c.r[2], c.r[3].w[0] << 29);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[1].w[0] - 22088u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 156u), c.f[12]);
    c.f[1] = ld32((c.r[18].w[0] + 1576u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FB6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB6EC; } }
L_002FB6E8:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_002FB6EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[18].w[0] + 1540u);
    c.f[0] = ld32((c.r[1].w[0] - 22096u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB700u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x002FB700u) [[unlikely]] return; }
L_002FB700:
    c.f[1] = ld32((c.r[18].w[0] + 1576u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002FB71C; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_002FB71C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FB72C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 12083u);  if (t) { goto L_002FB73C; } }
L_002FB72C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FB73C; } }
    set32(c.r[16], 0u + 12082u);
    c.budget -= 1;
L_002FB73C:
    c.f[2] = ld32((c.r[18].w[0] + 1540u));
    c.f[1] = ld32((c.r[18].w[0] + 1576u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = fp::sub(c.f[2], c.f[20]);  if (t) { goto L_002FB768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 4;
L_002FB768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB778u); c.f[12] = fp::mul(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002FB778u) [[unlikely]] return; }
L_002FB778:
    c.f[2] = ld32((c.r[18].w[0] + 1860u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 22040u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1860u), c.f[0]);  if (t) { goto L_002FB7A8; } }
L_002FB798:
    c.f[1] = ld32((c.r[18].w[0] + 1860u));
    c.f[0] = ld32((c.r[1].w[0] - 22104u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 1860u), c.f[0]);
    c.budget -= 4;
L_002FB7A8:
    ld128((c.r[18].w[0] + 1504u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[18].w[0] + 1504u);
    st128((c.r[18].w[0] + 1488u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    ld128((c.r[2].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 1504u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF400000u);
    c.f[4] = c.r[2].w[0];
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[18].w[0] + 1576u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    c.f[12] = ld32((c.r[18].w[0] + 1540u));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB840u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002FB840u) [[unlikely]] return; }
L_002FB840:
    set32(c.r[4], c.r[18].w[0] + 1504u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 1508u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002FB874; } }
    st32((c.r[17].w[0] + 176u), 0u);
    c.budget -= 1;
L_002FB874:
    st32((c.r[17].w[0] + 164u), c.r[16].w[0]);
    ld128((c.r[18].w[0] + 1504u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    ld128((c.r[18].w[0] + 1536u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    ld128((c.r[18].w[0] + 1504u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    ld128((c.r[18].w[0] + 1536u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    ld128((c.r[18].w[0] + 1504u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    ld128((c.r[18].w[0] + 1536u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 208u) & ~15u, c.r[3]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 474u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 12084u);  if (t) { goto L_002FB910; } }
    set32(c.r[4], 0u - 65u);
    st32((c.r[17].w[0] + 164u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[17].w[0] + 176u), 0u);
    set32(c.r[3], 0u - 2u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[18].w[0] + 1504u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 1488u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 1576u), 0u);
    st32((c.r[18].w[0] + 1572u), 0u);
    c.budget -= 18;
L_002FB910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002FB930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB944u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 124u, depth + 1u); else { c.pc = 0x002F9840u; return; } if (c.pc != 0x002FB944u) [[unlikely]] return; }
L_002FB944:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 16656u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1936u), 0u);
    set32(c.r[3], c.r[16].w[0] + 1968u);
    st32((c.r[16].w[0] + 1940u), 0u);
    st32((c.r[16].w[0] + 1944u), 0u);
    st32((c.r[16].w[0] + 1948u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 1956u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1872u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1873u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1874u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1876u), 0u);
    st32((c.r[16].w[0] + 1880u), 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1984u), 0u);
    st32((c.r[16].w[0] + 1884u), 0u);
    st32((c.r[16].w[0] + 1988u), 0u);
    st32((c.r[16].w[0] + 1992u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FB9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FBA74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 16656u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB9FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB9FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB9FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FB9FCu) [[unlikely]] return; }
L_002FB9FC:
    st32((c.r[17].w[0] + 1880u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1884u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBA24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBA24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FBA24u) [[unlikely]] return; }
L_002FBA24:
    st32((c.r[17].w[0] + 1884u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1984u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBA4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBA4C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FBA4Cu) [[unlikely]] return; }
L_002FBA4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA5Cu); st32((c.r[17].w[0] + 1984u), 0u);  if (depth < kMaxDepth) unit_007E(c, 140u, depth + 1u); else { c.pc = 0x002F9A60u; return; } if (c.pc != 0x002FBA5Cu) [[unlikely]] return; }
L_002FBA5C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FBA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002FBA74u) [[unlikely]] return; }
L_002FBA74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002FBA78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FBA90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBAA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007E(c, 149u, depth + 1u); else { c.pc = 0x002F9B90u; return; } if (c.pc != 0x002FBAA8u) [[unlikely]] return; }
L_002FBAA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[16], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBAECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002FBAECu) [[unlikely]] return; }
L_002FBAEC:
    st32((c.r[17].w[0] + 1880u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBAF8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002FBAF8u) [[unlikely]] return; }
L_002FBAF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBB0C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1880u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 394u, depth + 1u); else { c.pc = 0x0026F980u; return; } if (c.pc != 0x002FBB0Cu) [[unlikely]] return; }
L_002FBB0C:
    st32((c.r[17].w[0] + 1992u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1880u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1992u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB20u); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002FBB20u) [[unlikely]] return; }
L_002FBB20:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB38u); set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002FBB38u) [[unlikely]] return; }
L_002FBB38:
    set32(c.r[3], ld32((c.r[17].w[0] + 1880u)));
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1880u)));
    ld128((c.r[17].w[0] + 1536u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB58u); set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FBB58u) [[unlikely]] return; }
L_002FBB58:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB94u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002FBB94u) [[unlikely]] return; }
L_002FBB94:
    st32((c.r[17].w[0] + 1884u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1884u)));
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1884u)));
    ld128((c.r[17].w[0] + 1536u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBBB8u); set32(c.r[4], ld32((c.r[17].w[0] + 1884u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FBBB8u) [[unlikely]] return; }
L_002FBBB8:
    set32(c.r[2], ld32((c.r[17].w[0] + 1884u)));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[2].w[0] + 446u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBBFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002FBBFCu) [[unlikely]] return; }
L_002FBBFC:
    st32((c.r[17].w[0] + 1984u), c.r[2].w[0]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1984u)));
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1984u)));
    ld128((c.r[17].w[0] + 1536u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC20u); set32(c.r[4], ld32((c.r[17].w[0] + 1984u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FBC20u) [[unlikely]] return; }
L_002FBC20:
    st8((c.r[17].w[0] + 1872u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 1873u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 1874u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC3Cu); st32((c.r[17].w[0] + 1876u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C2240u; return; } if (c.pc != 0x002FBC3Cu) [[unlikely]] return; }
L_002FBC3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC54u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FBC54u) [[unlikely]] return; }
L_002FBC54:
    st32((c.r[17].w[0] + 1852u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 1852u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC74u); set32(c.r[5], c.r[17].w[0] + 1776u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FBC74u) [[unlikely]] return; }
L_002FBC74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 9872u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.f[12] = 0u;
    set32(c.r[4], c.r[17].w[0] + 1888u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] - 9856u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCB0u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 110u, depth + 1u); else { c.pc = 0x002257F0u; return; } if (c.pc != 0x002FBCB0u) [[unlikely]] return; }
L_002FBCB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    c.r[5].d[0] = c.r[2].d[0] | 19794ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCC4u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002FBCC4u) [[unlikely]] return; }
L_002FBCC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBCD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002FBCD8; } }
L_002FBCD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FBCD8:
    st32((c.r[17].w[0] + 1988u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007E(c, 280u, depth + 1u); else { c.pc = 0x002FBD40u; return; } if (c.pc != 0x002FBCE8u) [[unlikely]] return; }
L_002FBCE8:
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 68u), 0u);  if (t) { goto L_002FBD18; } }
L_002FBD04:
    set32(c.r[4], ld32((c.r[17].w[0] + 1992u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD14u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 398u, depth + 1u); else { c.pc = 0x0026FAC0u; return; } if (c.pc != 0x002FBD14u) [[unlikely]] return; }
L_002FBD14:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FBD18:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBD04u | kUnwind; return; } goto L_002FBD04; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FBD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1988u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 12u);  if (t) { goto L_002FBD98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    if (c.r[5].d[0] == 0) c.r[3].d[0] = 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], 0u + 50u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1988u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD98u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_005B(c, 398u, depth + 1u); else { c.pc = 0x0026FAC0u; return; } if (c.pc != 0x002FBD98u) [[unlikely]] return; }
L_002FBD98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FBDB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1992u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FBEC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1880u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBEC0; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1873u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBE10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1880u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_002FBE28; } }
L_002FBE10:
    set32(c.r[4], ld32((c.r[16].w[0] + 1992u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 398u, depth + 1u); else { c.pc = 0x0026FAC0u; return; } if (c.pc != 0x002FBE20u) [[unlikely]] return; }
L_002FBE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 1992u)));  if (t) { goto L_002FBEB4; } }
L_002FBE28:
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 9840u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1880u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + 64u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1992u)));
    c.budget -= 35;
L_002FBEB4:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 398u, depth + 1u); else { c.pc = 0x0026FAC0u; return; } if (c.pc != 0x002FBEC0u) [[unlikely]] return; }
L_002FBEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FBED0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_007E(c, 201u, depth + 1u); else { c.pc = 0x002FA9E0u; return; } if (c.pc != 0x002FBEE8u) [[unlikely]] return; }
L_002FBEE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1880u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEFCu);  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002FBEFCu) [[unlikely]] return; }
L_002FBEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 282u, depth + 1u); else { c.pc = 0x002FBDB0u; return; } if (c.pc != 0x002FBF04u) [[unlikely]] return; }
L_002FBF04:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[2].w[0] + 228u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1880u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBF70; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1873u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FBF70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[6], c.r[5].w[0] + 48u);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1880u)));
    ld128((c.r[17].w[0] + 1536u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1984u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF58u); set32(c.r[7], c.r[17].w[0] + 1536u);  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002FBF58u) [[unlikely]] return; }
L_002FBF58:
    set32(c.r[2], ld32((c.r[17].w[0] + 1984u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FBF70u) [[unlikely]] return; }
L_002FBF70:
    set32(c.r[2], ld32((c.r[17].w[0] + 1880u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21992u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    ld128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1884u)));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1884u)));
    ld128((c.r[17].w[0] + 1536u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1884u)));
    set32(c.r[5], c.r[2].w[0] + 224u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFB8u); set32(c.r[6], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x002FBFB8u) [[unlikely]] return; }
L_002FBFB8:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);  if (t) { goto L_002FBFE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { [[clang::musttail]] return unit_007F(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.budget -= 1;
L_002FBFE4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_007F(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 2u, depth); } }
    [[clang::musttail]] return unit_007F(c, 1u, depth);
}

}
