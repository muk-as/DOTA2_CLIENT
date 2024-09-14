#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ETeamFanContentAssetStatus : std::uint32_t
    {
        k_eFanContentAssetStatus_None = 0x0,
        k_eFanContentAssetStatus_Approved = 0x1,
        k_eFanContentAssetStatus_Rejected = 0x2,
    };
};
