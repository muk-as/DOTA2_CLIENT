#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nProjectileID; // 0x17f8            
            std::int32_t projectile_speed; // 0x17fc            
            std::int32_t travel_speed_pct; // 0x1800            
            std::int32_t m_nMaxRange; // 0x1804            
            Vector m_vStartPoint; // 0x1808            
            Vector m_vLastTrailThinkerLocation; // 0x1814            
            Vector m_vEndPointShard; // 0x1820            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x182c            
            float flare_radius; // 0x1830            
            bool bHasStartedBurning; // 0x1834            
            uint8_t _pad1835[0x3]; // 0x1835
            float flare_debuff_duration; // 0x1838            
            float fire_trail_health_regen; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement) == 0x1840);
    };
};
