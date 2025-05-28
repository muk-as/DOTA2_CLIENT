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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bloodseeker_Bloodrage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t attack_speed; // 0x1888            
            std::int32_t spell_amp; // 0x188c            
            float max_health_dmg_pct; // 0x1890            
            float damage_pct; // 0x1894            
            float damage_pct_enemies; // 0x1898            
            float base_damage_amp; // 0x189c            
            float flTickRate; // 0x18a0            
            bool m_bDoesSilence; // 0x18a4            
            uint8_t _pad18a5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bloodseeker_Bloodrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Bloodseeker_Bloodrage) == 0x18a8);
    };
};
