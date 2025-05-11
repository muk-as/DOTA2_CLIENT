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
        class CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t base_absorb_amount; // 0x17f8            
            std::int32_t m_nAbsorbRemaining; // 0x17fc            
            std::int32_t m_nMaxAbsorb; // 0x1800            
            bool is_all_barrier; // 0x1804            
            bool m_bAllDamageAbsorb; // 0x1805            
            uint8_t _pad1806[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VoidSpirit_ResonantPulse_PhysicalBuff) == 0x1810);
    };
};
