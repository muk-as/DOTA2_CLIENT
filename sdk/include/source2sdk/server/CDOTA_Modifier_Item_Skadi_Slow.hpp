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
        class CDOTA_Modifier_Item_Skadi_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t cold_slow_melee; // 0x17f8            
            std::int32_t cold_slow_ranged; // 0x17fc            
            std::int32_t cold_attack_slow_melee; // 0x1800            
            std::int32_t cold_attack_slow_ranged; // 0x1804            
            std::int32_t heal_reduction; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Skadi_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Skadi_Slow) == 0x1810);
    };
};
