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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Holdout_StaticRemnantThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t static_remnant_radius; // 0x17f8            
            std::int32_t static_remnant_damage_radius; // 0x17fc            
            std::int32_t static_remnant_damage; // 0x1800            
            float static_remnant_delay; // 0x1804            
            float overload_duration; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Holdout_StaticRemnantThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Holdout_StaticRemnantThinker) == 0x1810);
    };
};
