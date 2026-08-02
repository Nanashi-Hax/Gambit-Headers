#pragma once
#include <cstdint>
#include "Gambit.hpp"

#include "Gambit/Game/DamageReason.hpp"
#include "Gambit/Cmn/Def/DMG.hpp"
#include "sead/Vector3.hpp"

namespace Gambit
{
    namespace Game
    {
        class PlayerCloneHandle
        {
        public:
            BIND_METHOD(ADDRESS_TEXT(0x02676D74), bool, sendAttackEvent_Player, PlayerCloneHandle,
                Cmn::Def::DMG damage, int attackerIndex, int victimIndex, int generationIndex,
                sead::Vector3<float>* knockback, Game::DamageReason* reason, bool u0, uint8_t u1)
            CONNECT_METHOD(sendAttackEvent_Player, damage, attackerIndex, victimIndex, generationIndex, knockback, reason, u0, u1)
        };
    }
}