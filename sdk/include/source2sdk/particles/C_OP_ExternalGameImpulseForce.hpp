#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ExternalGameImpulseForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "force scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flForceScale; // 0x_            
            // metadata: MPropertyFriendlyName "rope shake"
            bool m_bRopes; // 0x_            
            // metadata: MPropertyFriendlyName "limit rope impulses to Z"
            bool m_bRopesZOnly; // 0x_            
            // metadata: MPropertyFriendlyName "explosions"
            bool m_bExplosions; // 0x_            
            // metadata: MPropertyFriendlyName "particle systems"
            bool m_bParticles; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ExternalGameImpulseForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ExternalGameImpulseForce) == 0x_);
    };
};
