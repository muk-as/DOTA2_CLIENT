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
        class CDOTA_Modifier_Dawnbreaker_Luminosity : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAppliesToCreeps; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t attack_count; // 0x_            
            bool triggered_by_celestial_hammer; // 0x_            
            bool m_bShouldIncrement; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nStackCount; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Luminosity) == 0x_);
    };
};
