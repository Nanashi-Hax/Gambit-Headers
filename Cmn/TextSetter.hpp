#pragma once
#include <cstdint>
#include "Macro.hpp"

namespace Cmn
{
    class TextSetter
    {
    public:
        uint8_t u0[0x254];

        BIND_METHOD(0x0E0C7D80, void, directSetUtf16, TextSetter, char16_t const * text)
        CONNECT_METHOD(directSetUtf16, TextSetter, text)
    };
}

static_assert(sizeof(Cmn::TextSetter) == 0x254, "Struct size is incorrect");