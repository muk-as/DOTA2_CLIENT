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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_NaturesGrasp_Latch_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float latch_range; // 0x1878            
            float initial_latch_delay; // 0x187c            
            uint8_t _pad1880[0x14]; // 0x1880
            bool m_bBonus; // 0x1894            
            uint8_t _pad1895[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGrasp_Latch_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Treant_NaturesGrasp_Latch_Thinker) == 0x1898);
    };
};
