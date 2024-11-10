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
    class CDOTA_Modifier_Skywrath_Mage_Shard : public client::CDOTA_Buff
    {
    public:
        float stack_duration; // 0x1708        
        int32_t damage_barrier_base; // 0x170c        
        int32_t damage_barrier_per_level; // 0x1710        
        float barrier_duration; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Skywrath_Mage_Shard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Skywrath_Mage_Shard) == 0x1718);
};
