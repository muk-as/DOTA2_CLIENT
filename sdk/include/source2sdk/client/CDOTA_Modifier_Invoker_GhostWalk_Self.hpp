#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
        class CDOTA_Modifier_Invoker_GhostWalk_Self : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t self_slow; // 0x_            
            std::int32_t apply_ice_wall_debuff; // 0x_            
            float area_of_effect; // 0x_            
            float aura_fade_time; // 0x_            
            float health_regen; // 0x_            
            float mana_regen; // 0x_            
            float disable_time; // 0x_            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_GhostWalk_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_GhostWalk_Self) == 0x_);
    };
};
