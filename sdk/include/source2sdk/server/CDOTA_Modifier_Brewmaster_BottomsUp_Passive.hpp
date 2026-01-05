#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_BottomsUp_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t brewed_up_per_ability; // 0x_            
            std::int32_t brewed_up_per_proc; // 0x_            
            std::int32_t brewed_up_max_stack; // 0x_            
            std::int32_t max_hp_regen; // 0x_            
            float brewed_up_min_speed; // 0x_            
            float brewed_up_max_speed; // 0x_            
            float speed_toggle_time; // 0x_            
            float stack_duration; // 0x_            
            bool m_bMinimumSpeed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_SpeedToggleTime; // 0x_            
            std::int32_t m_nMaxHPRegen; // 0x_            
            std::int32_t m_nCurrentSpeed; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_BottomsUp_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_BottomsUp_Passive) == 0x_);
    };
};
