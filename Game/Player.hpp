#pragma once
#include <cstdint>
#include "Cmn/PlayerInfo.hpp"
#include "Macro.hpp"

#include "Cmn/Def/DMG.hpp"
#include "Cmn/GambitActor.hpp"
#include "Game/DamageReason.hpp"

namespace Game
{
    class Player : public Cmn::GambitActor
    {
    public:
        enum class PlayerControlType : uint32_t
        {
            Local = 0,
            Net = 2
        };

        struct VTable : public Cmn::GambitActor::VTable
        {

        };

        BIND_METHOD(0x0E641C1C, void, onFirstCalc, Player)
        CONNECT_METHOD(onFirstCalc, Player)

        BIND_METHOD(0x0E645F2C, Cmn::Def::DMG, informDamage_Impl, Player, int attackerPlayerIndex, DamageReason *reason, bool u0, bool u1, Cmn::Def::DMG damage)
        CONNECT_METHOD(informDamage_Impl, Player, attackerPlayerIndex, reason, u0, u1, damage)

        PlayerControlType controlType;
        int unknown0[0x12];
        int playerIndex;
        int unknown1;
        Cmn::PlayerInfo* playerInfo;
        void* playerMgr;
        int unknown2[0x14];
        bool specialTrigger;
        uint8_t unknown3[0x3];
        int unknown4[0x18];
        float damage;
        int stateMachine[0xE];
        int unknown5[0x2B];
        float pos[0x3];
        int unknown6[0x143];
        void* playerInkAction;
        int unknown7;
        void* playerModel;
        void* playerMotion;
        void* playerEffect;
        int unknown8[0x4];
        void* playerNetControl;
        void* playerDamage;
        int unknown9[0x9];
        bool isRemoteControlled;
        uint8_t unknown10[0x3];
        int unknown11[0x47];
        void* playerBehindCamera;
        int unknown12[0x70];
    };
}

static_assert(sizeof(Game::Player) == 0xA94, "Struct size is incorrect");