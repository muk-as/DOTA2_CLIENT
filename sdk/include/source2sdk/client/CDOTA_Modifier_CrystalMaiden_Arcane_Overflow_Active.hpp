#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_CrystalMaiden_Arcane_Overflow_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            float mana_battery_radius; // 0x1878            
            float mana_battery_mana_pct; // 0x187c            
            float activation_mana_cost_increase_pct; // 0x1880            
            float activation_spell_amp_pct; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_Arcane_Overflow_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_CrystalMaiden_Arcane_Overflow_Active) == 0x1888);
    };
};
