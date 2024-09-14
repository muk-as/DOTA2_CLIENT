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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Morphling_Accumulation : public client::CDOTA_Buff
    {
    public:
        bool m_bActive; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        float percent_to_increment; // 0x16ec        
        float m_flStrengthGain; // 0x16f0        
        float m_flAgilityGain; // 0x16f4        
        float m_flIntellectGain; // 0x16f8        
        int32_t nAttributeLevels; // 0x16fc        
        int32_t bonus_all_stats_per_level_of_attributes; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Accumulation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Morphling_Accumulation) == 0x1708);
};
