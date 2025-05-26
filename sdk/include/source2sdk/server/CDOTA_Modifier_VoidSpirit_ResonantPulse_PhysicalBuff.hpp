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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_absorb_amount; // 0x1878            
            std::int32_t m_nAbsorbRemaining; // 0x187c            
            std::int32_t m_nMaxAbsorb; // 0x1880            
            bool is_all_barrier; // 0x1884            
            bool m_bAllDamageAbsorb; // 0x1885            
            uint8_t _pad1886[0x1a];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff) == 0x18a0);
    };
};
