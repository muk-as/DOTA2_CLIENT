#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class EUnderDraftResponse : std::uint32_t
    {
        k_eInternalError = 0x0,
        k_eSuccess = 0x1,
        k_eNoGold = 0x2,
        k_eInvalidSlot = 0x3,
        k_eNoBenchSpace = 0x4,
        k_eNoTickets = 0x5,
        k_eEventNotOwned = 0x6,
        k_eInvalidReward = 0x7,
        k_eHasBigReward = 0x8,
        k_eNoGCConnection = 0x9,
        k_eTooBusy = 0xa,
        k_eCantRollBack = 0xb,
    };
};
