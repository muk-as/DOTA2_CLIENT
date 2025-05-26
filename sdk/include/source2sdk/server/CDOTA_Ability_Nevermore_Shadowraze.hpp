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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Nevermore_Shadowraze : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c0            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x5c4            
            float cooldown_reduction_on_hero_hit; // 0x5c8            
            bool m_bReadyToSetCooldown; // 0x5cc            
            uint8_t _pad05cd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Nevermore_Shadowraze because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Nevermore_Shadowraze) == 0x5d0);
    };
};
