#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace nor {
        void read(u32 offset, void* data, u32 size);
        void write(u32 offset, void* data, u32 size);
    }
}