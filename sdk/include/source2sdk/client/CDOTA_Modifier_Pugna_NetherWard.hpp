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
        class CDOTA_Modifier_Pugna_NetherWard : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x_            
            float mana_multiplier; // 0x_            
            float mana_drained_per_attack; // 0x_            
            std::int32_t attacks_to_destroy; // 0x_            
            std::int32_t health_restore_pct; // 0x_            
            std::int32_t mana_restore_pct; // 0x_            
            float self_restoration_range; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_NetherWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pugna_NetherWard) == 0x_);
    };
};
