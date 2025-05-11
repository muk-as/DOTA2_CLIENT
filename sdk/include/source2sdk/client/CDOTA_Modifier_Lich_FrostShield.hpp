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
        class CDOTA_Modifier_Lich_FrostShield : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            float interval; // 0x17fc            
            std::int32_t damage_reduction; // 0x1800            
            std::int32_t health_regen; // 0x1804            
            float bonus_duration_per_hero_killed; // 0x1808            
            float bonus_duration_per_creep_killed; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_FrostShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lich_FrostShield) == 0x1810);
    };
};
