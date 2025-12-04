#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleLightnintBranchBehavior_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

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
        class C_OP_LightningSnapshotGenerator : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nCPSnapshot; // 0x_            
            // metadata: MPropertyFriendlyName "start control point number"
            std::int32_t m_nCPStartPnt; // 0x_            
            // metadata: MPropertyFriendlyName "end control point number"
            std::int32_t m_nCPEndPnt; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Recursion Depth"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSegments; // 0x_            
            // metadata: MPropertyFriendlyName "Offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOffset; // 0x_            
            // metadata: MPropertyFriendlyName "Offset Decay"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOffsetDecay; // 0x_            
            // metadata: MPropertyFriendlyName "Recalculation Rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRecalcRate; // 0x_            
            // metadata: MPropertyFriendlyName "UV Scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flUVScale; // 0x_            
            // metadata: MPropertyFriendlyName "UV Offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flUVOffset; // 0x_            
            // metadata: MPropertyFriendlyName "Branch Split Rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSplitRate; // 0x_            
            // metadata: MPropertyFriendlyName "Branch Twist"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBranchTwist; // 0x_            
            // metadata: MPropertyFriendlyName "Branch Behavior"
            source2sdk::particles::ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Start Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusStart; // 0x_            
            // metadata: MPropertyFriendlyName "End Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusEnd; // 0x_            
            // metadata: MPropertyFriendlyName "Dedicated Particle Pool Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDedicatedPool; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LightningSnapshotGenerator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LightningSnapshotGenerator) == 0x_);
    };
};
