#pragma once
#include "Gambit.hpp"

namespace Gambit
{
    namespace Cmn
    {
        class SceneLayoutMgr
        {
        public:
            BIND_METHOD(ADDRESS_TEXT(0x020D2080), void, registHandlers, SceneLayoutMgr)
            CONNECT_METHOD(registHandlers)
        };
    }
}