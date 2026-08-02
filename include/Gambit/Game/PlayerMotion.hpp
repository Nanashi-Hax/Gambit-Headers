#pragma once
#include "Gambit.hpp"
#include <cstdint>

namespace Gambit
{
    namespace Game
    {
        class Player;

        class PlayerMotion
        {
        public:
            BIND_METHOD(ADDRESS_TEXT(0x026C7CC8), void, FUN_026c7cc8, PlayerMotion, int * arg0)
            CONNECT_METHOD(FUN_026c7cc8, arg0)

            BIND_METHOD(ADDRESS_TEXT(0x026C7E30), void, FUN_026c7e30, PlayerMotion, int * arg0)
            CONNECT_METHOD(FUN_026c7e30, arg0)

            Player* player;
            uint8_t field0[0x3C];
        };

        static_assert(sizeof(Game::PlayerMotion) == 0x40, "Struct size is incorrect");
    }
}