#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Broodmother_Spiders_Milk : public client::CDOTA_Buff
    {
    public:
        int32_t kill_heal_heroes; // 0x1708        
        int32_t kill_creeps_penalty; // 0x170c        
        int32_t kill_heal_aoe; // 0x1710        
        float kill_heal_duration; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_Spiders_Milk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Broodmother_Spiders_Milk) == 0x1718);
};
