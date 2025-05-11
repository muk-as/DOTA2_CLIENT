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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1100
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_LightningSnapshotGenerator : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nCPSnapshot; // 0x1c8            
            // metadata: MPropertyFriendlyName "start control point number"
            std::int32_t m_nCPStartPnt; // 0x1cc            
            // metadata: MPropertyFriendlyName "end control point number"
            std::int32_t m_nCPEndPnt; // 0x1d0            
            uint8_t _pad01d4[0x4]; // 0x1d4
            // metadata: MPropertyFriendlyName "Recursion Depth"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSegments; // 0x1d8            
            // metadata: MPropertyFriendlyName "Offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOffset; // 0x338            
            // metadata: MPropertyFriendlyName "Offset Decay"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOffsetDecay; // 0x498            
            // metadata: MPropertyFriendlyName "Recalculation Rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRecalcRate; // 0x5f8            
            // metadata: MPropertyFriendlyName "UV Scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flUVScale; // 0x758            
            // metadata: MPropertyFriendlyName "UV Offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flUVOffset; // 0x8b8            
            // metadata: MPropertyFriendlyName "Branch Split Rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSplitRate; // 0xa18            
            // metadata: MPropertyFriendlyName "Branch Twist"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flBranchTwist; // 0xb78            
            // metadata: MPropertyFriendlyName "Branch Behavior"
            source2sdk::particles::ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xcd8            
            uint8_t _pad0cdc[0x4]; // 0xcdc
            // metadata: MPropertyFriendlyName "Start Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusStart; // 0xce0            
            // metadata: MPropertyFriendlyName "End Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadiusEnd; // 0xe40            
            // metadata: MPropertyFriendlyName "Dedicated Particle Pool Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDedicatedPool; // 0xfa0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LightningSnapshotGenerator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LightningSnapshotGenerator) == 0x1100);
    };
};
