#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"

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
        class CDOTA_Modifier_Nyx_Assassin_Burrow : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            float health_regen_rate; // 0x_            
            float mana_regen_rate; // 0x_            
            std::int32_t damage_reduction; // 0x_            
            std::int32_t cooldown_reduction; // 0x_            
            std::int32_t cast_range; // 0x_            
            Vector m_vecInitialPos; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nyx_Assassin_Burrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nyx_Assassin_Burrow) == 0x_);
    };
};
