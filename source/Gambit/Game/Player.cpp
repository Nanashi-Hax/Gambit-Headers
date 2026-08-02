#include <cstdint>

#include "Gambit/Game/Player.hpp"
#include "Gambit/Game/PlayerInkAction.hpp"
#include "Gambit/Game/PlayerMotion.hpp"

namespace Gambit
{
    namespace Game
    {
        void Player::startMotion_BombThrow(bool u0, bool u1)
        {
            int var0;
            int var1;
            int var2;

            if (!u0)
            {
                playerMotion->FUN_026c7cc8(&var0);
                FUN_02647be8(var0, 0);
                var2 = 10;
                var1 = field_0x1e4;
            }
            else
            {
                playerMotion->FUN_026c7e30(&var0);
                FUN_02647be8(var0, u0);
                var2 = 0xf;
                var1 = field_0x1e4;

            }
            if (var1 < var2)
            {
                field_0x1e4 = var2;
            }
            if (field_0x1f4 < 0xf)
            {
                field_0x1f4 = 0xf;
            }
            var1 = playerInkAction->FUN_0269f4f8();
            FUN_02658afc(var1, 1);
            playerInkAction->FUN_0269f53c(u1);
            if (field_0xf8 < var1)
            {
                field_0xf8 = var1;
            }
        }
    }
}
