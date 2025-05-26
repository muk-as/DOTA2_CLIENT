#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Meepo_Poof : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c0            
            uint8_t _pad05c4[0x14]; // 0x5c4
            float radius; // 0x5d8            
            uint8_t _pad05dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Meepo_Poof because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Meepo_Poof) == 0x5e0);
    };
};
