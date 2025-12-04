#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_DrumsOfSlom : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x_            
            float radius; // 0x_            
            std::int32_t max_stacks; // 0x_            
            float base_damage; // 0x_            
            std::int32_t heal_pct; // 0x_            
            std::int32_t creep_heal_pct; // 0x_            
            std::int32_t creep_damage_pct; // 0x_            
            std::int32_t iCurrentAttacksAtMinInterval; // 0x_            
            float stack_decay_time; // 0x_            
            float max_drum_hit_interval; // 0x_            
            float min_drum_hit_interval; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastStackChangeTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastDrumHitTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_DrumsOfSlom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Beastmaster_DrumsOfSlom) == 0x_);
    };
};
