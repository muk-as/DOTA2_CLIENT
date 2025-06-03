#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            float rune_pull_strength; // 0x187c            
            float rune_pull_max_speed_as_multiplier_of_pull_strength; // 0x1880            
            float rune_activate_radius_buffer; // 0x1884            
            float rune_pull_falloff_multiplier; // 0x1888            
            float rune_pull_radius; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1890            
            source2sdk::entity2::GameTime_t m_flBubbleExpirationTime; // 0x1894            
            uint8_t _pad1898[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet) == 0x18b0);
    };
};
