#pragma once
#include "Gambit.hpp"

#include "sead/PtrArrayImpl.hpp"

namespace Gambit
{
    namespace Game
    {
        class CloneObjMgr
        {
        public:
            uint8_t u0[0x78];
            sead::PtrArrayImpl bulletCloneHandleArray;

            VARIABLE(ADDRESS_DATA(0x101E22AC), CloneObjMgr*, sInstance);
        };
    }
}