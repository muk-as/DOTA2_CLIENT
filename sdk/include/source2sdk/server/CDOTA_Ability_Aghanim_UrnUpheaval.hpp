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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Aghanim_UrnUpheaval : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vPosition; // 0x_            
            float aoe; // 0x_            
            float slow_rate; // 0x_            
            float slow_rate_duration; // 0x_            
            float duration; // 0x_            
            float max_slow; // 0x_            
            float burn_damage; // 0x_            
            float m_flCurrentSlow; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_SlowTimer; // 0x_            
            source2sdk::server::CountdownTimer m_timer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Aghanim_UrnUpheaval because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Aghanim_UrnUpheaval) == 0x_);
    };
};
