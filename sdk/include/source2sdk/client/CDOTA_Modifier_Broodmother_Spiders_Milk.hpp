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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Broodmother_Spiders_Milk : public client::CDOTA_Buff
    {
    public:
        int32_t kill_heal_heroes; // 0x16e8        
        int32_t kill_creeps_penalty; // 0x16ec        
        int32_t kill_heal_aoe; // 0x16f0        
        float kill_heal_duration; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_Spiders_Milk because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Broodmother_Spiders_Milk) == 0x16f8);
};
