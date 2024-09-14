#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class CMsgDOTARequestMatches_SkillLevel : std::uint32_t
    {
        CMsgDOTARequestMatches_SkillLevel_Any = 0x0,
        CMsgDOTARequestMatches_SkillLevel_Normal = 0x1,
        CMsgDOTARequestMatches_SkillLevel_High = 0x2,
        CMsgDOTARequestMatches_SkillLevel_VeryHigh = 0x3,
    };
};
