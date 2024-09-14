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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        float scepter_radius; // 0x16ec        
        float wraith_vision_radius; // 0x16f0        
        int32_t wraith_speed; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f8[0x8]; // 0x16f8
        float activation_delay; // 0x1700        
        float scepter_activation_delay; // 0x1704        
        float think_interval; // 0x1708        
        float m_flSparkDamage; // 0x170c        
        int32_t m_nViewerID; // 0x1710        
        int32_t m_nViewerTeam; // 0x1714        
        bool m_bActive; // 0x1718        
        bool m_bOriginal; // 0x1719        
        [[maybe_unused]] std::uint8_t pad_0x171a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x1720);
};
