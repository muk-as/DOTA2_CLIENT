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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t health_min; // 0x17f8            
            std::int32_t new_max; // 0x17fc            
            std::int32_t health_bonus; // 0x1800            
            std::int32_t model_scale; // 0x1804            
            std::int32_t creep_bonus_damage; // 0x1808            
            std::int32_t creep_bonus_hp_regen; // 0x180c            
            std::int32_t creep_bonus_mp_regen; // 0x1810            
            std::int32_t creep_bonus_armor; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_HelmOfTheDominator_BonusHealth) == 0x1818);
    };
};
