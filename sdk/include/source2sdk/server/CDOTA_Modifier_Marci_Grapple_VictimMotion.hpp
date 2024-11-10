#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Grapple_VictimMotion : public client::CDOTA_Buff
    {
    public:
        int32_t impact_damage; // 0x1708        
        float debuff_duration; // 0x170c        
        int32_t landing_radius; // 0x1710        
        float air_duration; // 0x1714        
        int32_t air_height; // 0x1718        
        int32_t travel_distance; // 0x171c        
        Vector m_vDestination; // 0x1720        
        float m_flStartZ; // 0x172c        
        float m_flCurTime; // 0x1730        
        float m_flJumpDuration; // 0x1734        
        float m_flJumpHeight; // 0x1738        
        Vector m_vTargetHorizontalDirection; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Grapple_VictimMotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Grapple_VictimMotion) == 0x1748);
};
