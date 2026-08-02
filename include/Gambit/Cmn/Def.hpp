#pragma once
#include <cstdint>
#include "Gambit.hpp"

namespace Gambit
{
    namespace Cmn::Def
    {
        using DMG = float;

        enum class Mode : uint32_t
        {
            ShootingRange = 8,
        };

        BIND_FUNCTION(ADDRESS_TEXT(0x020189F0), void, getCurMode, Mode*);
    }
}