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
        // Size: 0x1860
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_MoonGlaive_Shield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rotating_glaives; // 0x17f8            
            float rotating_glaives_hit_radius; // 0x17fc            
            float rotating_glaives_speed; // 0x1800            
            float rotating_glaives_collision_damage; // 0x1804            
            float rotating_glaives_movement_radius; // 0x1808            
            float rotating_glaives_movement_radius_expand_speed_scale; // 0x180c            
            float rotating_glaives_damage_reduction; // 0x1810            
            float rotating_glaives_duration; // 0x1814            
            float m_flCurRotation; // 0x1818            
            float m_flCurRadius; // 0x181c            
            float m_flCurRadiusUnclamped; // 0x1820            
            float m_flSecondsPerRotation; // 0x1824            
            float m_flMaxRadius; // 0x1828            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x182c            
            uint8_t _pad1830[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_MoonGlaive_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Luna_MoonGlaive_Shield) == 0x1860);
    };
};
