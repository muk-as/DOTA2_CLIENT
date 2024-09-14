#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class PointTemplateClientOnlyEntityBehavior_t : std::uint32_t
    {
        CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY = 0x0,
        CREATE_FOR_CLIENTS_WHO_CONNECT_LATER = 0x1,
    };
};
