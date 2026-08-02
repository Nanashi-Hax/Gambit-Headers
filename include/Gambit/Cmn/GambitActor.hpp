#pragma once

#include "Gambit/Sys/Actor.hpp"

namespace Gambit
{
    namespace Cmn
    {
        class GambitActor : public Sys::Actor
        {
        public:
            struct VTable : public Sys::Actor::VTable
            {

            };

            int unknown0;
            int team;
            void* xlink;
            int unknown1[7];
        };
    }

    static_assert(sizeof(Cmn::GambitActor) == 0x50, "Struct size is incorrect");
}