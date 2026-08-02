#pragma once
#include <cstdint>

#include "Gambit/Cmn/GambitActor.hpp"

namespace Gambit
{
    namespace Game
    {
        class Bullet : public Cmn::GambitActor
        {
        public:
            struct VTable : public Cmn::GambitActor::VTable
            {

            };

            int u0;
            int senderIndex;
            int u1[0xB];
        };
    }

    static_assert(sizeof(Game::Bullet) == 0x84, "Struct size is incorrect");
}