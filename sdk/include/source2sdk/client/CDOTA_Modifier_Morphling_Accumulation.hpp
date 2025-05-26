#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_Accumulation : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            float percent_to_increment; // 0x187c            
            float m_flStrengthGain; // 0x1880            
            float m_flAgilityGain; // 0x1884            
            float m_flIntellectGain; // 0x1888            
            std::int32_t m_nAttributeLevels; // 0x188c            
            std::int32_t bonus_primary_stat_per_level_of_attributes; // 0x1890            
            std::int32_t bonus_int_per_level_of_attributes; // 0x1894            
            std::int32_t m_nPrimaryStat; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Accumulation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Morphling_Accumulation) == 0x18a0);
    };
};
