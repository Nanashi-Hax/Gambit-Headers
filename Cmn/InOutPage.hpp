#pragma once

#include "Cmn/Page.hpp"

namespace Cmn
{
    class InOutPage : public Page
    {
    public:
        struct VTable : public Page::VTable
        {
            int p0;
            void (*show)(Cmn::InOutPage* t);
            int p1;
            void (*kill)(Cmn::InOutPage* t);
            uint8_t u1[0x14];
            bool (*isAppeared)(Cmn::InOutPage* t);
            uint8_t u2[0x58];
        };

        uint8_t u0[0x40];

        void show() { reinterpret_cast<Cmn::InOutPage::VTable*>(vtable)->show(this); }
        void kill() { reinterpret_cast<Cmn::InOutPage::VTable*>(vtable)->kill(this); }
        bool isAppeared() { return reinterpret_cast<Cmn::InOutPage::VTable*>(vtable)->isAppeared(this); }
    };
}

static_assert(sizeof(Cmn::InOutPage) == 0x21C, "Struct size is incorrect");
static_assert(sizeof(Cmn::InOutPage::VTable) == 0x1E0, "Struct size is incorrect");