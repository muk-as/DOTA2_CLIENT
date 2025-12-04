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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Unleash_Flurry : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t flurry_bonus_attack_speed; // 0x_            
            float time_between_flurries; // 0x_            
            float debuff_duration; // 0x_            
            float max_time_window_per_hit; // 0x_            
            bool m_bBonusSpeed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x_            
            bool m_bIsDoingFlurryAttack; // 0x_            
            bool m_bIsDoingFlurryPulseAttack; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_fLastAttackTime; // 0x_            
            bool m_bShouldConsiderSilence; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash_Flurry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Marci_Unleash_Flurry) == 0x_);
    };
};
