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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Earthshaker_Fissure_Shard : public client::CDOTA_Buff
    {
    public:
        int32_t shard_aftershock_stun_duration_pct; // 0x1708        
        float shard_free_pathing_linger_duration; // 0x170c        
        float fissure_movement_speed; // 0x1710        
        float fissure_max_distance_moved; // 0x1714        
        Vector m_vStartPos; // 0x1718        
        Vector m_vEndPos; // 0x1724        
        Vector m_vMoveDir; // 0x1730        
        float m_flTotalDistanceMoved; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Fissure_Shard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Earthshaker_Fissure_Shard) == 0x1740);
};
