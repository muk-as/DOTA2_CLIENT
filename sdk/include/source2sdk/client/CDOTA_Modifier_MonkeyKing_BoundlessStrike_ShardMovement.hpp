#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t acceleration_z; // 0x_            
            std::int32_t min_height_above_lowest; // 0x_            
            std::int32_t min_height_above_highest; // 0x_            
            std::int32_t max_horizontal_acceleration; // 0x_            
            std::int32_t spring_channel_pct; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_BoundlessStrike_ShardMovement) == 0x_);
    };
};
