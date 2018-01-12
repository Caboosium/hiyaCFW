#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace utf {
        const std::u16string utf8to16(const std::string utf8);
        const std::u32string utf8to32(const std::string utf8);
        const std::string utf16to8(const std::u16string utf16);
        const std::u32string utf16to32(const std::u16string utf16);
        const std::string utf32to8(const std::u32string utf32);
        const std::u16string utf32to16(const std::u32string utf32);
    }
}