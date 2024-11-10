#pragma once
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Stormcrafter : public client::CDOTA_Buff_Item
    {
    public:
        entity2::GameTime_t m_flNextHit; // 0x1708        
        int32_t passive_movement_bonus; // 0x170c        
        float range; // 0x1710        
        float interval; // 0x1714        
        int32_t damage; // 0x1718        
        float slow_duration; // 0x171c        
        float bonus_mana_regen; // 0x1720        
        int32_t max_targets; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Stormcrafter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Stormcrafter) == 0x1728);
};
