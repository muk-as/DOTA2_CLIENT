#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleLightnintBranchBehavior_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
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
    class C_OP_LightningSnapshotGenerator : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nCPSnapshot; // 0x1c8        
        // metadata: MPropertyFriendlyName "start control point number"
        int32_t m_nCPStartPnt; // 0x1cc        
        // metadata: MPropertyFriendlyName "end control point number"
        int32_t m_nCPEndPnt; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4]; // 0x1d4
        // metadata: MPropertyFriendlyName "Recursion Depth"
        particleslib::CParticleCollectionFloatInput m_flSegments; // 0x1d8        
        // metadata: MPropertyFriendlyName "Offset"
        particleslib::CParticleCollectionFloatInput m_flOffset; // 0x338        
        // metadata: MPropertyFriendlyName "Offset Decay"
        particleslib::CParticleCollectionFloatInput m_flOffsetDecay; // 0x498        
        // metadata: MPropertyFriendlyName "Recalculation Rate"
        particleslib::CParticleCollectionFloatInput m_flRecalcRate; // 0x5f8        
        // metadata: MPropertyFriendlyName "UV Scale"
        particleslib::CParticleCollectionFloatInput m_flUVScale; // 0x758        
        // metadata: MPropertyFriendlyName "UV Offset"
        particleslib::CParticleCollectionFloatInput m_flUVOffset; // 0x8b8        
        // metadata: MPropertyFriendlyName "Branch Split Rate"
        particleslib::CParticleCollectionFloatInput m_flSplitRate; // 0xa18        
        // metadata: MPropertyFriendlyName "Branch Twist"
        particleslib::CParticleCollectionFloatInput m_flBranchTwist; // 0xb78        
        // metadata: MPropertyFriendlyName "Branch Behavior"
        particles::ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xcd8        
        [[maybe_unused]] std::uint8_t pad_0xcdc[0x4]; // 0xcdc
        // metadata: MPropertyFriendlyName "Start Radius"
        particleslib::CParticleCollectionFloatInput m_flRadiusStart; // 0xce0        
        // metadata: MPropertyFriendlyName "End Radius"
        particleslib::CParticleCollectionFloatInput m_flRadiusEnd; // 0xe40        
        // metadata: MPropertyFriendlyName "Dedicated Particle Pool Count"
        particleslib::CParticleCollectionFloatInput m_flDedicatedPool; // 0xfa0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LightningSnapshotGenerator because it is not a standard-layout class
    static_assert(sizeof(C_OP_LightningSnapshotGenerator) == 0x1100);
};
