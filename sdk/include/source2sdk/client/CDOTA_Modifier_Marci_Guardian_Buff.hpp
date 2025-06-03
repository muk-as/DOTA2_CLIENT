#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Guardian_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float lifesteal_pct; // 0x1878            
            std::int32_t bonus_damage; // 0x187c            
            std::int32_t bonus_attack_range; // 0x1880            
            std::int32_t max_partner_distance; // 0x1884            
            std::int32_t max_partner_penalty; // 0x1888            
            std::int32_t creep_lifesteal_reduction_pct; // 0x188c            
            float m_fLifestealPct; // 0x1890            
            float m_fDamageAbsorbed; // 0x1894            
            bool m_bActive; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Guardian_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Marci_Guardian_Buff) == 0x18a0);
    };
};
