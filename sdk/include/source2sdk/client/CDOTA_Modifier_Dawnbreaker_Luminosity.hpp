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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Luminosity : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAppliesToCreeps; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            std::int32_t attack_count; // 0x188c            
            bool triggered_by_celestial_hammer; // 0x1890            
            bool m_bShouldIncrement; // 0x1891            
            uint8_t _pad1892[0x2]; // 0x1892
            std::int32_t m_nStackCount; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Luminosity) == 0x1898);
    };
};
