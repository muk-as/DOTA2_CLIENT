#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Guardian_Shell : public server::CDOTA_Buff_Item
    {
    public:
        int32_t all_stats; // 0x16e8        
        int32_t bonus_armor; // 0x16ec        
        float counter_cooldown; // 0x16f0        
        entity2::GameTime_t m_flLastCounterTime; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Guardian_Shell because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Guardian_Shell) == 0x16f8);
};
