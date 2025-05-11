#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_Fissure_Shard : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t shard_aftershock_stun_duration_pct; // 0x17f8            
            float shard_free_pathing_linger_duration; // 0x17fc            
            float fissure_movement_speed; // 0x1800            
            float fissure_max_distance_moved; // 0x1804            
            Vector m_vStartPos; // 0x1808            
            Vector m_vEndPos; // 0x1814            
            Vector m_vMoveDir; // 0x1820            
            float m_flTotalDistanceMoved; // 0x182c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Fissure_Shard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Earthshaker_Fissure_Shard) == 0x1830);
    };
};
