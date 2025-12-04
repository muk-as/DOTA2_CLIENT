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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x_
        enum class EntityAttachmentType_t : std::uint32_t
        {
            eAbsOrigin = 0x0,
            eCenter = 0x1,
            eEyes = 0x2,
            eAttachment = 0x3,
        };
    };
};
