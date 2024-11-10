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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        float scepter_radius; // 0x170c        
        float wraith_vision_radius; // 0x1710        
        int32_t wraith_speed; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x8]; // 0x1718
        float activation_delay; // 0x1720        
        float scepter_activation_delay; // 0x1724        
        float think_interval; // 0x1728        
        float m_flSparkDamage; // 0x172c        
        int32_t m_nViewerID; // 0x1730        
        int32_t m_nViewerTeam; // 0x1734        
        bool m_bActive; // 0x1738        
        bool m_bOriginal; // 0x1739        
        [[maybe_unused]] std::uint8_t pad_0x173a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x1740);
};
