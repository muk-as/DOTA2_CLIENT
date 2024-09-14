#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Solar_Crest : public client::CDOTA_Buff_Item
    {
    public:
        float bonus_mana; // 0x16e8        
        int32_t bonus_armor; // 0x16ec        
        int32_t bonus_all_stats; // 0x16f0        
        int32_t bonus_health; // 0x16f4        
        int32_t self_movement_speed; // 0x16f8        
        client::ParticleIndex_t nFXIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Solar_Crest because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Solar_Crest) == 0x1700);
};
