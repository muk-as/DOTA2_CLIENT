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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Abaddon_Frostmourne_Debuff_Bonus : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flDamage; // 0x1878            
            std::int32_t curse_slow; // 0x187c            
            float curse_interval; // 0x1880            
            std::int32_t curse_dps; // 0x1884            
            std::int32_t tower_dps_pct; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Abaddon_Frostmourne_Debuff_Bonus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Abaddon_Frostmourne_Debuff_Bonus) == 0x1890);
    };
};
