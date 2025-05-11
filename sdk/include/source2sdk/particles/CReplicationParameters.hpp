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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1118
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CReplicationParameters
        {
        public:
            // metadata: MPropertyFriendlyName "Replication mode"
            source2sdk::particles::ParticleReplicationMode_t m_nReplicationMode; // 0x0            
            // metadata: MPropertyFriendlyName "Scale child particle radius based on parent radius"
            bool m_bScaleChildParticleRadii; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            // metadata: MPropertyFriendlyName "Minimum random scale for radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x8            
            // metadata: MPropertyFriendlyName "Maximum random scale for radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x168            
            // metadata: MPropertyFriendlyName "min random displacement for child particles"
            source2sdk::particleslib::CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x2c8            
            // metadata: MPropertyFriendlyName "max random displacement for child particles"
            source2sdk::particleslib::CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x940            
            // metadata: MPropertyFriendlyName "Modelling scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flModellingScale; // 0xfb8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CReplicationParameters because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CReplicationParameters) == 0x1118);
    };
};
