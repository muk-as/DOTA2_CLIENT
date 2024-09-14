#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Luna_MoonGlaive_Shield : public client::CDOTA_Buff
    {
    public:
        int32_t rotating_glaives; // 0x16e8        
        float rotating_glaives_hit_radius; // 0x16ec        
        float rotating_glaives_speed; // 0x16f0        
        float rotating_glaives_collision_damage; // 0x16f4        
        float rotating_glaives_movement_radius; // 0x16f8        
        float rotating_glaives_damage_reduction; // 0x16fc        
        int32_t unclamp_max_radius; // 0x1700        
        float rotating_glaives_duration; // 0x1704        
        float m_flCurRotation; // 0x1708        
        float m_flCurRadius; // 0x170c        
        float m_flCurRadiusUnclamped; // 0x1710        
        float m_flSecondsPerRotation; // 0x1714        
        float m_flMaxRadius; // 0x1718        
        entity2::GameTime_t m_flStartTime; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x1720[0x30];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Luna_MoonGlaive_Shield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Luna_MoonGlaive_Shield) == 0x1750);
};
