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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_mana_regen; // 0x17f8            
            float proximity_bonus_factor; // 0x17fc            
            float aoe_bonus; // 0x1800            
            float proximity_bonus_radius; // 0x1804            
            std::int32_t self_cast_range_bonus; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect) == 0x1810);
    };
};
