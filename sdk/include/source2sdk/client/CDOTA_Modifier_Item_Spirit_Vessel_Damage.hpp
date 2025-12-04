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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Spirit_Vessel_Damage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal_reduction_enemy; // 0x_            
            float restoration_reduction_enemy; // 0x_            
            std::int32_t soul_damage_amount; // 0x_            
            float enemy_hp_drain; // 0x_            
            std::int32_t enemy_slow_pct; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Spirit_Vessel_Damage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Spirit_Vessel_Damage) == 0x_);
    };
};
