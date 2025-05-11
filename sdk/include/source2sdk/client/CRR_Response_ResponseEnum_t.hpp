#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class CRR_Response_ResponseEnum_t : std::uint32_t
        {
            MAX_RESPONSE_NAME = 0xc0,
            MAX_RULE_NAME = 0x80,
        };
    };
};
