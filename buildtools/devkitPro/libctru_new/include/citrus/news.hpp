#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace news {
        void add(std::u16string title, std::u16string message, void* image, u32 imageSize, bool jpeg);
    }
}