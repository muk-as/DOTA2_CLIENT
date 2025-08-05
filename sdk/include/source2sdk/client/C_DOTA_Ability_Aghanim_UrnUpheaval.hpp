#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x700
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Aghanim_UrnUpheaval : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x688            
            float aoe; // 0x694            
            float slow_rate; // 0x698            
            float slow_rate_duration; // 0x69c            
            float duration; // 0x6a0            
            float max_slow; // 0x6a4            
            float burn_damage; // 0x6a8            
            float m_flCurrentSlow; // 0x6ac            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6b0            
            uint8_t _pad06b4[0x4]; // 0x6b4
            source2sdk::client::CountdownTimer m_SlowTimer; // 0x6b8            
            source2sdk::client::CountdownTimer m_timer; // 0x6d0            
            uint8_t _pad06e8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Aghanim_UrnUpheaval) == 0x700);
    };
};
