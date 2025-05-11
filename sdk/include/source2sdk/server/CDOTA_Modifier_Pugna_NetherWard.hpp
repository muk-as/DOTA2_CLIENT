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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pugna_NetherWard : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            float mana_multiplier; // 0x17fc            
            float mana_drained_per_attack; // 0x1800            
            std::int32_t attacks_to_destroy; // 0x1804            
            std::int32_t health_restore_pct; // 0x1808            
            std::int32_t mana_restore_pct; // 0x180c            
            float self_restoration_range; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_NetherWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pugna_NetherWard) == 0x1818);
    };
};
