#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleReplicationMode_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CReplicationParameters
        {
        public:
            // metadata: MPropertyFriendlyName "Replication mode"
            source2sdk::particles::ParticleReplicationMode_t m_nReplicationMode; // 0x_            
            // metadata: MPropertyFriendlyName "Scale child particle radius based on parent radius"
            bool m_bScaleChildParticleRadii; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Minimum random scale for radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "Maximum random scale for radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "min random displacement for child particles"
            source2sdk::particleslib::CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x_            
            // metadata: MPropertyFriendlyName "max random displacement for child particles"
            source2sdk::particleslib::CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x_            
            // metadata: MPropertyFriendlyName "Modelling scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flModellingScale; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CReplicationParameters because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CReplicationParameters) == 0x_);
    };
};
