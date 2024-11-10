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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_Sai : public client::CDOTA_Buff
    {
    public:
        int32_t sai_attack_range; // 0x1708        
        int32_t sai_proc_vuln_chance; // 0x170c        
        int32_t shard_base_movement_speed; // 0x1710        
        int32_t shard_vuln_movement_speed; // 0x1714        
        float vuln_duration; // 0x1718        
        float sai_base_attack_time; // 0x171c        
        int32_t m_nCachedShardVulnMS; // 0x1720        
        int32_t m_nEnemiesWithVuln; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Sai because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_Sai) == 0x1728);
};
