#pragma once
#include "Gambit.hpp"
#include <cstdint>

namespace Gambit
{
    namespace Cmn
    {
        class PlayerInfo;

        class PlayerInfoAry
        {
        public:
            BIND_METHOD(ADDRESS_TEXT(0x021A7778), int, getValidInfoNum, PlayerInfoAry)
            CONNECT_METHOD(getValidInfoNum)

            PlayerInfo* ary[8];
        };
    }

    static_assert(sizeof(Cmn::PlayerInfoAry) == 0x20, "Struct size is incorrect");
}