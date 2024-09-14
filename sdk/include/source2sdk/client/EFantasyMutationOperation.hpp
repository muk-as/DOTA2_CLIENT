#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 8
    // Alignment: 4
    // Size: 0x4
    enum class EFantasyMutationOperation : std::uint32_t
    {
        k_eFantasyMutationOperation_RollEverything = 0x0,
        k_eFantasyMutationOperation_RollShape = 0x1,
        k_eFantasyMutationOperation_RollQuality = 0x2,
        k_eFantasyMutationOperation_RollStat = 0x3,
        k_eFantasyMutationOperation_IncreaseQuality = 0x4,
        k_eFantasyMutationOperation_DecreaseQuality = 0x5,
        k_eFantasyMutationOperation_IncreaseOneQuality = 0x6,
        k_eFantasyMutationOperation_IncreaseTwoQualitiesDecreaseOne = 0x7,
    };
};
