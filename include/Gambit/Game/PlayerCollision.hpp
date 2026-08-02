#pragma once
#include "Gambit.hpp"

#include "../Cmn/Def.hpp"
#include "Gambit/Game/Player.hpp"
#include "Gambit/Game/Bullet.hpp"
#include "sead/Vector3.hpp"

namespace Gambit
{
    namespace Game
    {
        class PlayerCollision
        {
        public:
            BIND_METHOD(ADDRESS_TEXT(0x0267B840), Cmn::Def::DMG, processDamageFromBullet_, PlayerCollision, Bullet* bullet, sead::Vector3<float>* knockback, Cmn::Def::DMG damage)
            CONNECT_METHOD(processDamageFromBullet_, bullet, knockback, damage)

            Game::Player* player;
        };
    }
}