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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_Pounce : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTime; // 0x16e8        
        float m_flInitialVelocity; // 0x16ec        
        Vector m_vStartPosition; // 0x16f0        
        Vector m_vTargetHorizontalDirection; // 0x16fc        
        float m_flCurrentTimeHoriz; // 0x1708        
        float m_flCurrentTimeVert; // 0x170c        
        bool m_bInterrupted; // 0x1710        
        bool m_bFoundUnit; // 0x1711        
        [[maybe_unused]] std::uint8_t pad_0x1712[0x2]; // 0x1712
        int32_t pounce_distance; // 0x1714        
        int32_t pounce_distance_scepter; // 0x1718        
        float pounce_speed; // 0x171c        
        float pounce_acceleration; // 0x1720        
        int32_t pounce_radius; // 0x1724        
        int32_t pounce_damage; // 0x1728        
        float leash_duration; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_Pounce) == 0x1730);
};
