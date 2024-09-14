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
    enum class EDOTAMatchPlayerTimeCustomStat : std::uint32_t
    {
        k_EDOTA_MatchPlayerTimeCustomStat_HPRegenUnderT1Towers = 0x1,
        k_EDOTA_MatchPlayerTimeCustomStat_MagicDamageReducedWithNewFormula_Absolute = 0x2,
        k_EDOTA_MatchPlayerTimeCustomStat_MagicDamageReducedWithNewFormula_PercentOfTotalHP = 0x3,
    };
};
