#pragma once
#include "Gambit.hpp"

#include "Gambit/Game/Player.hpp"

namespace Gambit
{
    namespace Game
    {
        class RivalMgr
        {
        public:
            BIND_METHOD(ADDRESS_TEXT(0x0270BBA4), void, initializePlayerForRival, RivalMgr, Player* player, bool u0)
            CONNECT_METHOD(initializePlayerForRival, player, u0)
        };
    }
}