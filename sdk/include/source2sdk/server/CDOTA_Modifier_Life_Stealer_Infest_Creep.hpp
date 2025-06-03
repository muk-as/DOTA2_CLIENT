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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Life_Stealer_Infest_Creep : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bChangedTeams; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            float creep_max_hp_drain_pct_per_second; // 0x187c            
            float m_flTickInterval; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Life_Stealer_Infest_Creep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Life_Stealer_Infest_Creep) == 0x1888);
    };
};
