#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Marci_Unleash_Flurry : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t flurry_bonus_attack_speed; // 0x1878            
            float time_between_flurries; // 0x187c            
            float debuff_duration; // 0x1880            
            float max_time_window_per_hit; // 0x1884            
            bool m_bBonusSpeed; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x188c            
            bool m_bIsDoingFlurryAttack; // 0x1890            
            bool m_bIsDoingFlurryPulseAttack; // 0x1891            
            uint8_t _pad1892[0x2]; // 0x1892
            source2sdk::entity2::GameTime_t m_fLastAttackTime; // 0x1894            
            bool m_bShouldConsiderSilence; // 0x1898            
            uint8_t _pad1899[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash_Flurry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Marci_Unleash_Flurry) == 0x18a0);
    };
};
