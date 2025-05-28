#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Batrider_StickyNapalm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float movement_speed_pct; // 0x1888            
            std::int32_t turn_rate_pct; // 0x188c            
            float damage; // 0x1890            
            float application_damage; // 0x1894            
            float building_damage_pct; // 0x1898            
            float creep_damage_pct; // 0x189c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_StickyNapalm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Batrider_StickyNapalm) == 0x18a8);
    };
};
