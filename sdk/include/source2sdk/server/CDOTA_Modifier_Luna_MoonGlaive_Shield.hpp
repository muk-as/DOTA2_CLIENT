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
        // Size: 0x18f0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_MoonGlaive_Shield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rotating_glaives; // 0x1888            
            float rotating_glaives_hit_radius; // 0x188c            
            float rotating_glaives_speed; // 0x1890            
            float rotating_glaives_collision_damage; // 0x1894            
            float rotating_glaives_movement_radius; // 0x1898            
            float rotating_glaives_movement_radius_expand_speed_scale; // 0x189c            
            float rotating_glaives_damage_reduction; // 0x18a0            
            float rotating_glaives_duration; // 0x18a4            
            float m_flCurRotation; // 0x18a8            
            float m_flCurRadius; // 0x18ac            
            float m_flCurRadiusUnclamped; // 0x18b0            
            float m_flSecondsPerRotation; // 0x18b4            
            float m_flMaxRadius; // 0x18b8            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x18bc            
            uint8_t _pad18c0[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_MoonGlaive_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Luna_MoonGlaive_Shield) == 0x18f0);
    };
};
