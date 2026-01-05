#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_CroakOfGenius_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_duration; // 0x_            
            float damage_threshold; // 0x_            
            float mana_cost_reduction; // 0x_            
            float damage_per_second; // 0x_            
            float damage_portion_pct; // 0x_            
            float duration_reduction; // 0x_            
            float max_distance; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_CroakOfGenius_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Largo_CroakOfGenius_Buff) == 0x_);
    };
};
