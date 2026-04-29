#pragma once
#include <cstdint>

#include "Cmn/WeaponSubType.hpp"

namespace Cmn
{
    class WeaponData
    {
    public:
        uint8_t u0[0xF8];
        WeaponSubType subType;
        uint8_t u1[0x8];
    };
}

static_assert(sizeof(Cmn::WeaponData) == 0x104, "Struct size is incorrect");