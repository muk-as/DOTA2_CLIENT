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
        // Size: 0x618
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Aghanim_UrnUpheaval : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x5b0            
            float aoe; // 0x5bc            
            float slow_rate; // 0x5c0            
            float slow_rate_duration; // 0x5c4            
            float duration; // 0x5c8            
            float max_slow; // 0x5cc            
            float burn_damage; // 0x5d0            
            float m_flCurrentSlow; // 0x5d4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5d8            
            uint8_t _pad05dc[0x4]; // 0x5dc
            source2sdk::client::CountdownTimer m_SlowTimer; // 0x5e0            
            source2sdk::client::CountdownTimer m_timer; // 0x5f8            
            uint8_t _pad0610[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Aghanim_UrnUpheaval) == 0x618);
    };
};
