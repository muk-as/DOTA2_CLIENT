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
        class CDOTA_Modifier_Spectre_Dispersion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_reflection_pct; // 0x1888            
            float min_radius; // 0x188c            
            float max_radius; // 0x1890            
            std::int32_t activation_bonus_pct; // 0x1894            
            source2sdk::entity2::GameTime_t m_flLastDispersionPulseEffectTime; // 0x1898            
            float m_fDamageCounter; // 0x189c            
            float m_fLastTime; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_Dispersion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Spectre_Dispersion) == 0x18a8);
    };
};
