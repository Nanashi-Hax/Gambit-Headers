#pragma once
#include "Gambit.hpp"
#include <cstdint>

#include "Gambit/Cmn/GambitActor.hpp"
#include "Gambit/Game/Bullet.hpp"

#include "sead/Vector3.hpp"

namespace Gambit
{
    namespace Game
    {
        class BulletBombBase : public Bullet
        {
        public:
            struct VTable : public Game::Bullet::VTable
            {

            };

            BIND_METHOD(ADDRESS_TEXT(0x021FDB84), void, initializeSender, BulletBombBase,
                Cmn::GambitActor* sender, int index, int index2, sead::Vector3<float>* pos, sead::Vector3<float>* vel, uint32_t seed)
            CONNECT_METHOD(initializeSender,
                sender, index, index2, pos, vel, seed)

            int u0[0x71];
        };
    }

    static_assert(sizeof(Game::BulletBombBase) == 0x248, "Struct size is incorrect");
}