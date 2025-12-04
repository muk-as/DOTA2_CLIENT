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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Obsidian_Destroyer_Equilibrium : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t proc_chance; // 0x_            
            std::int32_t mana_restore; // 0x_            
            float scepter_barrier_threshold; // 0x_            
            float scepter_barrier_duration; // 0x_            
            float scepter_barrier_cooldown; // 0x_            
            float scepter_max_mana_barrier_pct; // 0x_            
            float mana_increase_duration; // 0x_            
            float mana_as_ms; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Obsidian_Destroyer_Equilibrium because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Obsidian_Destroyer_Equilibrium) == 0x_);
    };
};
