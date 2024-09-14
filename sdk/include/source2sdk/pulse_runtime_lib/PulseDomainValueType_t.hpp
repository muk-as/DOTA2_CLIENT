#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class PulseDomainValueType_t : std::uint32_t
    {
        // MPropertyFriendlyName "Invalid"
        INVALID = 0xffffffff,
        // MPropertyFriendlyName "Parent Map Entity"
        ENTITY_NAME = 0x0,
        // MPropertyFriendlyName "Parent XML Panel"
        PANEL_ID = 0x1,
        COUNT = 0x2,
    };
};
