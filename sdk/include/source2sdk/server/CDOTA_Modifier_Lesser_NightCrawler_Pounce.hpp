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
    class CDOTA_Modifier_Lesser_NightCrawler_Pounce : public client::CDOTA_Buff
    {
    public:
        float m_flTotalTime; // 0x16e8        
        float m_flInitialVelocity; // 0x16ec        
        Vector m_vStartPosition; // 0x16f0        
        Vector m_vTargetHorizontalDirection; // 0x16fc        
        float m_flCurrentTimeHoriz; // 0x1708        
        float m_flCurrentTimeVert; // 0x170c        
        bool m_bInterrupted; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        int32_t pounce_distance; // 0x1714        
        float pounce_speed; // 0x1718        
        float pounce_acceleration; // 0x171c        
        int32_t pounce_radius; // 0x1720        
        int32_t pounce_damage; // 0x1724        
        float leash_duration; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lesser_NightCrawler_Pounce because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lesser_NightCrawler_Pounce) == 0x1730);
};
