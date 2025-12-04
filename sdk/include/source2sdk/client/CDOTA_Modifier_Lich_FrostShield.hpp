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
        class CDOTA_Modifier_Lich_FrostShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float interval; // 0x_            
            std::int32_t damage_reduction; // 0x_            
            std::int32_t health_regen; // 0x_            
            float bonus_duration_per_hero_killed; // 0x_            
            float bonus_duration_per_creep_killed; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_FrostShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lich_FrostShield) == 0x_);
    };
};
