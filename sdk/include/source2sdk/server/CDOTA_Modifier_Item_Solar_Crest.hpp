#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Solar_Crest : public server::CDOTA_Buff_Item
    {
    public:
        float bonus_mana; // 0x1708        
        int32_t bonus_armor; // 0x170c        
        int32_t bonus_all_stats; // 0x1710        
        int32_t bonus_health; // 0x1714        
        int32_t self_movement_speed; // 0x1718        
        client::ParticleIndex_t nFXIndex; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Solar_Crest because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Solar_Crest) == 0x1720);
};
