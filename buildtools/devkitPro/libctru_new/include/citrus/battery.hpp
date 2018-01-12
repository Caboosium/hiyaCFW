#pragma once

#include "citrus/types.hpp"

namespace ctr {
    namespace battery {
        bool charging();
        u8 level();
    }
}