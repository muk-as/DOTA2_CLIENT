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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Creep_Siege : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_building_damage; // 0x17f8            
            std::int32_t incoming_hero_damage_penalty; // 0x17fc            
            std::int32_t incoming_basic_damage_penalty; // 0x1800            
            std::int32_t incoming_controlled_unit_penalty; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Creep_Siege because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Creep_Siege) == 0x1808);
    };
};
