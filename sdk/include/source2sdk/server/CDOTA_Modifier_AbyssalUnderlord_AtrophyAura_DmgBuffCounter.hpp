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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t cleave_damage_pct; // 0x17f8            
            float cleave_starting_width; // 0x17fc            
            std::int32_t cleave_angle; // 0x1800            
            float cleave_distance_base; // 0x1804            
            std::int32_t cleave_distance_per_stack; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter) == 0x1810);
    };
};
