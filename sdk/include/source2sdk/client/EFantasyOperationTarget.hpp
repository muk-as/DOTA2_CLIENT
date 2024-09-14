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
    enum class EFantasyOperationTarget : std::uint32_t
    {
        k_eFantasyOperationTarget_None = 0x0,
        k_eFantasyOperationTarget_GemType = 0x1,
        k_eFantasyOperationTarget_Region = 0x2,
        k_eFantasyOperationTarget_SpecificGem = 0x3,
        k_eFantasyOperationTarget_Title = 0x4,
        k_eFantasyOperationTarget_ExtraInput = 0x5,
        k_eFantasyOperationTarget_PlayerDraft = 0x6,
        k_eFantasyOperationTarget_TitleDraft = 0x7,
    };
};
