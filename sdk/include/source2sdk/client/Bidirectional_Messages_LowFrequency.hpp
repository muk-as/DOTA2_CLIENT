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
    enum class Bidirectional_Messages_LowFrequency : std::uint32_t
    {
        bi_RelayInfo = 0x2bc,
        bi_RelayPacket = 0x2bd,
    };
};
