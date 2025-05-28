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
        class CDOTA_Modifier_Mirana_MoonlightShadow : public source2sdk::server::CDOTA_Modifier_PersistentInvisibility
        {
        public:
            float duration; // 0x1898            
            std::int32_t bonus_movement_speed; // 0x189c            
            std::int32_t evasion; // 0x18a0            
            float bonus_outgoing_damage_pct; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_MoonlightShadow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mirana_MoonlightShadow) == 0x18a8);
    };
};
