#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Stormcrafter : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextHit; // 0x_            
            std::int32_t passive_movement_bonus; // 0x_            
            float range; // 0x_            
            float interval; // 0x_            
            std::int32_t damage; // 0x_            
            float slow_duration; // 0x_            
            float bonus_mana_regen; // 0x_            
            std::int32_t max_targets; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Stormcrafter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Stormcrafter) == 0x_);
    };
};
