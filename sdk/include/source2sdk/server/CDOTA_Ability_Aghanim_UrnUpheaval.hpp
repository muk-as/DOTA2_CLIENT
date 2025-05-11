#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x620
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Aghanim_UrnUpheaval : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x5b8            
            float aoe; // 0x5c4            
            float slow_rate; // 0x5c8            
            float slow_rate_duration; // 0x5cc            
            float duration; // 0x5d0            
            float max_slow; // 0x5d4            
            float burn_damage; // 0x5d8            
            float m_flCurrentSlow; // 0x5dc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5e0            
            uint8_t _pad05e4[0x4]; // 0x5e4
            source2sdk::server::CountdownTimer m_SlowTimer; // 0x5e8            
            source2sdk::server::CountdownTimer m_timer; // 0x600            
            uint8_t _pad0618[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Aghanim_UrnUpheaval) == 0x620);
    };
};
