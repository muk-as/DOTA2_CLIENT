#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class EOverworldMinigameAction : std::uint32_t
    {
        k_eOverworldMinigameAction_Invalid = 0x0,
        k_eOverworldMinigameAction_DevReset = 0x1,
        k_eOverworldMinigameAction_DevGiveCurrency = 0x2,
        k_eOverworldMinigameAction_Purchase = 0x3,
        k_eOverworldMinigameAction_SetOption = 0x4,
        k_eOverworldMinigameAction_ReportCurrencyGained = 0x5,
        k_eOverworldMinigameAction_UnlockDifficulty = 0x6,
    };
};
