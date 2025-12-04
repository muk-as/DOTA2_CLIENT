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
        class CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t health_min; // 0x_            
            std::int32_t new_max; // 0x_            
            std::int32_t health_bonus; // 0x_            
            std::int32_t model_scale; // 0x_            
            std::int32_t creep_bonus_damage; // 0x_            
            std::int32_t creep_bonus_hp_regen; // 0x_            
            std::int32_t creep_bonus_mp_regen; // 0x_            
            std::int32_t creep_bonus_armor; // 0x_            
            float creep_damage_taken_cooldown; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth) == 0x_);
    };
};
