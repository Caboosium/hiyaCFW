#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace core {
        bool init(int argc);
        void exit();
        bool running();
        bool launcher();

        u64 time();
    }
}