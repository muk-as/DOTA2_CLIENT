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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Death_Prophet_MourningRitual : public source2sdk::client::CDOTA_Buff
        {
        public:
            float delay_pct; // 0x1888            
            float delay_time; // 0x188c            
            float damage_interval; // 0x1890            
            float m_flDamageMultiplier; // 0x1894            
            bool m_bApplyingDelayedDamage; // 0x1898            
            uint8_t _pad1899[0x1f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Death_Prophet_MourningRitual because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Death_Prophet_MourningRitual) == 0x18b8);
    };
};
