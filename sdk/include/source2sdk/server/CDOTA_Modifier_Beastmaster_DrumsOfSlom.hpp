#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Beastmaster_DrumsOfSlom : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x16e8        
        int32_t radius; // 0x16ec        
        int32_t max_stacks; // 0x16f0        
        float base_damage; // 0x16f4        
        int32_t heal_pct; // 0x16f8        
        int32_t creep_heal_pct; // 0x16fc        
        int32_t iCurrentAttacksAtMinInterval; // 0x1700        
        float stack_decay_time; // 0x1704        
        float max_drum_hit_interval; // 0x1708        
        float min_drum_hit_interval; // 0x170c        
        entity2::GameTime_t m_flLastStackChangeTime; // 0x1710        
        entity2::GameTime_t m_flLastDrumHitTime; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_DrumsOfSlom because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Beastmaster_DrumsOfSlom) == 0x1718);
};
