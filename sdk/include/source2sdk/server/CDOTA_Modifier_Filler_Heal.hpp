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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Filler_Heal : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_heal; // 0x1888            
            std::int32_t mp_heal; // 0x188c            
            std::int32_t hp_heal_growth; // 0x1890            
            float mp_heal_growth; // 0x1894            
            std::int32_t hp_heal_pct; // 0x1898            
            std::int32_t mp_heal_pct; // 0x189c            
            std::int32_t tota_hp_per_second; // 0x18a0            
            std::int32_t tota_mp_per_second; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Filler_Heal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Filler_Heal) == 0x18a8);
    };
};
