#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace ir {
        u32 read(void* buffer, u32 size);
        void write(void* buffer, u32 size, bool wait);
    }
}