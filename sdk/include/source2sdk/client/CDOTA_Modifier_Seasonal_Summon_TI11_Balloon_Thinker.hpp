#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1768
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker : public client::CDOTA_Buff
    {
    public:
        float speed; // 0x1708        
        int32_t min_distance_before_bounce; // 0x170c        
        float drag; // 0x1710        
        float max_height; // 0x1714        
        float max_vertical_move_time; // 0x1718        
        float bounce_turn_angle; // 0x171c        
        float bounce_turn_angle_tree; // 0x1720        
        float bounce_delay; // 0x1724        
        int32_t max_bounces; // 0x1728        
        float max_model_scale; // 0x172c        
        float power_growth_exponent; // 0x1730        
        Vector m_vLastPos; // 0x1734        
        Vector m_vDir; // 0x1740        
        float m_flSpeed; // 0x174c        
        float m_flDistRemaining; // 0x1750        
        float m_flTreeTimeRemaining; // 0x1754        
        int32_t m_nTimesBounced; // 0x1758        
        float m_flModelScale; // 0x175c        
        // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastHit;
        char m_hLastHit[0x4]; // 0x1760        
        [[maybe_unused]] std::uint8_t pad_0x1764[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker) == 0x1768);
};
