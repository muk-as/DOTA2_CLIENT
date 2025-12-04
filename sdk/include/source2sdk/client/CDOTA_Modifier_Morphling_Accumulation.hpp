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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_Accumulation : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float percent_to_increment; // 0x_            
            float m_flStrengthGain; // 0x_            
            float m_flAgilityGain; // 0x_            
            float m_flIntellectGain; // 0x_            
            std::int32_t m_nAttributeLevels; // 0x_            
            std::int32_t bonus_primary_stat_per_level_of_attributes; // 0x_            
            std::int32_t bonus_int_per_level_of_attributes; // 0x_            
            std::int32_t m_nPrimaryStat; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_Accumulation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Morphling_Accumulation) == 0x_);
    };
};
