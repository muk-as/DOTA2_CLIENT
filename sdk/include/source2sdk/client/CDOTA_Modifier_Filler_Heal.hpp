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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Filler_Heal : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_heal; // 0x1878            
            std::int32_t mp_heal; // 0x187c            
            std::int32_t hp_heal_growth; // 0x1880            
            float mp_heal_growth; // 0x1884            
            std::int32_t hp_heal_pct; // 0x1888            
            std::int32_t mp_heal_pct; // 0x188c            
            std::int32_t tota_hp_per_second; // 0x1890            
            std::int32_t tota_mp_per_second; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Filler_Heal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Filler_Heal) == 0x1898);
    };
};
