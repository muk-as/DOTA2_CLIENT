#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Creep_Siege : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_building_damage; // 0x1708        
        int32_t incoming_hero_damage_penalty; // 0x170c        
        int32_t incoming_basic_damage_penalty; // 0x1710        
        int32_t incoming_controlled_unit_penalty; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Creep_Siege because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Creep_Siege) == 0x1718);
};
