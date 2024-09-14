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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker : public client::CDOTA_Buff
    {
    public:
        float speed; // 0x16e8        
        int32_t min_distance_before_bounce; // 0x16ec        
        float drag; // 0x16f0        
        float max_height; // 0x16f4        
        float max_vertical_move_time; // 0x16f8        
        float bounce_turn_angle; // 0x16fc        
        float bounce_turn_angle_tree; // 0x1700        
        float bounce_delay; // 0x1704        
        Vector m_vLastPos; // 0x1708        
        Vector m_vDir; // 0x1714        
        float m_flSpeed; // 0x1720        
        float m_flDistRemaining; // 0x1724        
        float m_flTreeTimeRemaining; // 0x1728        
        // m_hLastHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastHit;
        char m_hLastHit[0x4]; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker) == 0x1730);
};
