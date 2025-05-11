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
        class CDOTA_Modifier_Treant_LeechSeed : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_interval; // 0x17f8            
            std::int32_t leech_damage; // 0x17fc            
            std::int32_t movement_slow; // 0x1800            
            float radius; // 0x1804            
            std::int32_t projectile_speed; // 0x1808            
            bool ground_plant; // 0x180c            
            uint8_t _pad180d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_LeechSeed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_LeechSeed) == 0x1810);
    };
};
