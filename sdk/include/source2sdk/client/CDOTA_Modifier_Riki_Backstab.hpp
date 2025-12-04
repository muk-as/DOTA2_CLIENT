#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_PersistentInvisibility.hpp"

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
        class CDOTA_Modifier_Riki_Backstab : public source2sdk::client::CDOTA_Modifier_PersistentInvisibility
        {
        public:
            std::int32_t cleave; // 0x_            
            float bonus_health_regen; // 0x_            
            float bonus_mana_regen; // 0x_            
            std::int32_t creep_bonus_damage; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Riki_Backstab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Riki_Backstab) == 0x_);
    };
};
