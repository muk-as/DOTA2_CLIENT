#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Morphling_Accumulation : public client::CDOTA_Buff
    {
    public:
        bool m_bActive; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float percent_to_increment; // 0x170c        
        float m_flStrengthGain; // 0x1710        
        float m_flAgilityGain; // 0x1714        
        float m_flIntellectGain; // 0x1718        
        int32_t nAttributeLevels; // 0x171c        
        int32_t bonus_all_stats_per_level_of_attributes; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Accumulation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morphling_Accumulation) == 0x1728);
};
