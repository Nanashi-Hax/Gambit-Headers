#pragma once
#include "Gambit/Sys/ActorMgr.hpp"

namespace Game
{
    class TextWriter : public Sys::ActorMgr
    {
    public:
        struct VTable : public Sys::ActorMgr::VTable
        {

        };
    };
}
