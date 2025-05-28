#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Mirana_SolarFlare : public source2sdk::client::CDOTA_Buff
        {
        public:
            float duration; // 0x1888            
            float smoothness; // 0x188c            
            float increase_rate; // 0x1890            
            std::int32_t max_total_increase; // 0x1894            
            source2sdk::entity2::GameTime_t flMaxDamageGameTime; // 0x1898            
            std::int32_t evasion; // 0x189c            
            std::int32_t m_iTotalAmount; // 0x18a0            
            std::int32_t ally_pct; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_SolarFlare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mirana_SolarFlare) == 0x18a8);
    };
};
