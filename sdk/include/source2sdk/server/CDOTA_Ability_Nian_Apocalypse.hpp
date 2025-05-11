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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nian_Apocalypse : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t area_of_effect; // 0x5b8            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x5bc            
            float fire_interval; // 0x5c0            
            float delay; // 0x5c4            
            float target_range; // 0x5c8            
            uint8_t _pad05cc[0x4]; // 0x5cc
            source2sdk::server::CountdownTimer m_ctTimer; // 0x5d0            
            float m_flTiming; // 0x5e8            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nian_Apocalypse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nian_Apocalypse) == 0x5f0);
    };
};
