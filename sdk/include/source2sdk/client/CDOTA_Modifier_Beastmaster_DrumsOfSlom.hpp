#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Beastmaster_DrumsOfSlom : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x1708        
        int32_t radius; // 0x170c        
        int32_t max_stacks; // 0x1710        
        float base_damage; // 0x1714        
        int32_t heal_pct; // 0x1718        
        int32_t creep_heal_pct; // 0x171c        
        int32_t iCurrentAttacksAtMinInterval; // 0x1720        
        float stack_decay_time; // 0x1724        
        float max_drum_hit_interval; // 0x1728        
        float min_drum_hit_interval; // 0x172c        
        entity2::GameTime_t m_flLastStackChangeTime; // 0x1730        
        entity2::GameTime_t m_flLastDrumHitTime; // 0x1734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_DrumsOfSlom because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Beastmaster_DrumsOfSlom) == 0x1738);
};
