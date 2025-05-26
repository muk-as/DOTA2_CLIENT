#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Magnataur_ReversePolarity : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x680            
            Vector m_vPullLocation; // 0x684            
            float push_radius; // 0x690            
            float max_knockback_distance; // 0x694            
            float pull_radius; // 0x698            
            float flEffectRadius; // 0x69c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_ReversePolarity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Magnataur_ReversePolarity) == 0x6a0);
    };
};
