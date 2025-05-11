#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        // Size: 0x238
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderTreeShake : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "peak strength"
            float m_flPeakStrength; // 0x210            
            // metadata: MPropertyFriendlyName "peak strength field override"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x214            
            // metadata: MPropertyFriendlyName "radius"
            float m_flRadius; // 0x218            
            // metadata: MPropertyFriendlyName "strength field override"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x21c            
            // metadata: MPropertyFriendlyName "shake duration after end"
            float m_flShakeDuration; // 0x220            
            // metadata: MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
            float m_flTransitionTime; // 0x224            
            // metadata: MPropertyFriendlyName "Twist amount (-1..1)"
            float m_flTwistAmount; // 0x228            
            // metadata: MPropertyFriendlyName "Radial Amount (-1..1)"
            float m_flRadialAmount; // 0x22c            
            // metadata: MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
            float m_flControlPointOrientationAmount; // 0x230            
            // metadata: MPropertyFriendlyName "Control Point for Orientation Amount"
            std::int32_t m_nControlPointForLinearDirection; // 0x234            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderTreeShake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderTreeShake) == 0x238);
    };
};
