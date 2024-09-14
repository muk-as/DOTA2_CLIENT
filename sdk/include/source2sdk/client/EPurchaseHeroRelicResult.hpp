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
    enum class EPurchaseHeroRelicResult : std::uint32_t
    {
        k_EPurchaseHeroRelicResult_Success = 0x0,
        k_EPurchaseHeroRelicResult_FailedToSend = 0x1,
        k_EPurchaseHeroRelicResult_NotEnoughPoints = 0x2,
        k_EPurchaseHeroRelicResult_InternalServerError = 0x3,
        k_EPurchaseHeroRelicResult_PurchaseNotAllowed = 0x4,
        k_EPurchaseHeroRelicResult_InvalidRelic = 0x5,
        k_EPurchaseHeroRelicResult_AlreadyOwned = 0x6,
        k_EPurchaseHeroRelicResult_InvalidRarity = 0x7,
    };
};
