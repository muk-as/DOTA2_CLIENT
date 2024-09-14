#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x960
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_DistanceToCPInit : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "distance minimum"
        particleslib::CPerParticleFloatInput m_flInputMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "distance maximum"
        particleslib::CPerParticleFloatInput m_flInputMax; // 0x330        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CPerParticleFloatInput m_flOutputMin; // 0x490        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5f0        
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nStartCP; // 0x750        
        // metadata: MPropertyFriendlyName "ensure line of sight"
        bool m_bLOS; // 0x754        
        // metadata: MPropertyFriendlyName "LOS collision group"
        char m_CollisionGroupName[128]; // 0x755        
        [[maybe_unused]] std::uint8_t pad_0x7d5[0x3]; // 0x7d5
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x7d8        
        [[maybe_unused]] std::uint8_t pad_0x7dc[0x4]; // 0x7dc
        // metadata: MPropertyFriendlyName "Maximum Trace Length"
        particleslib::CPerParticleFloatInput m_flMaxTraceLength; // 0x7e0        
        // metadata: MPropertyFriendlyName "LOS Failure Scalar"
        float m_flLOSScale; // 0x940        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x944        
        // metadata: MPropertyFriendlyName "only active within specified distance"
        bool m_bActiveRange; // 0x948        
        [[maybe_unused]] std::uint8_t pad_0x949[0x3]; // 0x949
        // metadata: MPropertyFriendlyName "distance component scale"
        Vector m_vecDistanceScale; // 0x94c        
        // metadata: MPropertyFriendlyName "remap bias"
        float m_flRemapBias; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x95c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_DistanceToCPInit because it is not a standard-layout class
    static_assert(sizeof(C_INIT_DistanceToCPInit) == 0x960);
};
