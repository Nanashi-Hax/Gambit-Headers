#pragma once
#include <cstdint>
#include "Gambit/Cmn/PlayerInfo.hpp"
#include "Gambit.hpp"

#include "Gambit/Cmn/Def.hpp"
#include "Gambit/Cmn/GambitActor.hpp"
#include "Gambit/Game/DamageReason.hpp"

namespace Gambit
{
    namespace Game
    {
        class PlayerParam;
        class PlayerInkAction;
        class PlayerMotion;

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

            BIND_METHOD(ADDRESS_TEXT(0x02641C1C), void, onFirstCalc, Player)
            CONNECT_METHOD(onFirstCalc)

            BIND_METHOD(ADDRESS_TEXT(0x02645F2C), Cmn::Def::DMG, informDamage_Impl, Player, int attackerPlayerIndex, DamageReason *reason, bool u0, bool u1, Cmn::Def::DMG damage)
            CONNECT_METHOD(informDamage_Impl, attackerPlayerIndex, reason, u0, u1, damage)

            BIND_METHOD(ADDRESS_TEXT(0x02647BE8), int, FUN_02647be8, Player, int arg0, int arg1)
            CONNECT_METHOD(FUN_02647be8, arg0, arg1)

            BIND_METHOD(ADDRESS_TEXT(0x02658AFC), void, FUN_02658afc, Player, int arg0, int arg1)
            CONNECT_METHOD(FUN_02658afc, arg0, arg1)

            void startMotion_BombThrow(bool u0, bool u1); // 0x02658BD0

            PlayerControlType controlType;
            int unknown0[0x12];
            int playerIndex;
            int unknown1;
            Cmn::PlayerInfo* playerInfo;
            void* playerMgr;
            int unknown2[0x13];
            int field_0xf8;
            bool specialTrigger;
            uint8_t unknown3[0x3];
            int unknown4[0x18];
            float damage;
            int stateMachine[0xE];
            int unknown5[0x12];
            int field_0x1e4;
            int unknown6[0x3];
            int field_0x1f4;
            int unknown7[0x14];
            float pos[0x3];
            int unknown8[0x141];
            PlayerParam* playerParam;
            int unknown9;
            PlayerInkAction* playerInkAction;
            int unknown10;
            void* playerModel;
            PlayerMotion* playerMotion;
            void* playerEffect;
            int unknown11[0x4];
            void* playerNetControl;
            void* playerDamage;
            int unknown12[0x9];
            bool isRemoteControlled;
            uint8_t unknown13[0x3];
            int unknown14[0x47];
            void* playerBehindCamera;
            int unknown15[0x70];
        };

        static_assert(sizeof(Player) == 0xA94, "Struct size is incorrect");
    }
}