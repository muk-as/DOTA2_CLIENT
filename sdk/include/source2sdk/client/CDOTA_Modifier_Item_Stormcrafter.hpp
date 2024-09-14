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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Stormcrafter : public client::CDOTA_Buff_Item
    {
    public:
        entity2::GameTime_t m_flNextHit; // 0x16e8        
        int32_t passive_movement_bonus; // 0x16ec        
        float range; // 0x16f0        
        float interval; // 0x16f4        
        int32_t damage; // 0x16f8        
        float slow_duration; // 0x16fc        
        float bonus_mana_regen; // 0x1700        
        int32_t max_targets; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Stormcrafter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Stormcrafter) == 0x1708);
};
