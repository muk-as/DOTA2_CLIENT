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
        class CDOTA_Modifier_Snapfire_Magma_Burn_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nMoveSlowPct; // 0x1888            
            float m_fBurnDamagePerTick; // 0x188c            
            std::int32_t move_slow_pct; // 0x1890            
            float burn_interval; // 0x1894            
            std::int32_t burn_damage; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_Magma_Burn_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_Magma_Burn_Slow) == 0x18a0);
    };
};
