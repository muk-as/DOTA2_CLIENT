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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public source2sdk::client::CDOTA_Buff
        {
        public:
            float challenge_duration; // 0x1888            
            float reveal_duration; // 0x188c            
            float reveal_delay; // 0x1890            
            float completed_cooldown; // 0x1894            
            float think_interval; // 0x1898            
            float acknowledge_range; // 0x189c            
            uint8_t _pad18a0[0x4]; // 0x18a0
            source2sdk::entity2::GameTime_t m_flRevealTime; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nOverheadFXIndex; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_RockPaperScissors because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_TI11_RockPaperScissors) == 0x18b0);
    };
};
