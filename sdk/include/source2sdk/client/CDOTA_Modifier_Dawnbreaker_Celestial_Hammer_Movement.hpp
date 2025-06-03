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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nProjectileID; // 0x1878            
            std::int32_t projectile_speed; // 0x187c            
            std::int32_t travel_speed_pct; // 0x1880            
            std::int32_t m_nMaxRange; // 0x1884            
            Vector m_vStartPoint; // 0x1888            
            Vector m_vLastTrailThinkerLocation; // 0x1894            
            Vector m_vEndPointShard; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x18ac            
            float flare_radius; // 0x18b0            
            bool bHasStartedBurning; // 0x18b4            
            uint8_t _pad18b5[0x3]; // 0x18b5
            float flare_debuff_duration; // 0x18b8            
            float fire_trail_health_regen; // 0x18bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement) == 0x18c0);
    };
};
