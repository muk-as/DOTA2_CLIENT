#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_PersistentInvisibility.hpp"

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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Riki_Backstab : public source2sdk::server::CDOTA_Modifier_PersistentInvisibility
        {
        public:
            std::int32_t cleave; // 0x1898            
            float bonus_health_regen; // 0x189c            
            float bonus_mana_regen; // 0x18a0            
            std::int32_t creep_bonus_damage; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Riki_Backstab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Riki_Backstab) == 0x18a8);
    };
};
