#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"

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
        // Size: 0x248
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapTransformVisibilityToScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x1c0            
            uint8_t _pad01c4[0x4]; // 0x1c4
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x1c8            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x230            
            // metadata: MPropertyFriendlyName "CP visibility minimum"
            float m_flInputMin; // 0x234            
            // metadata: MPropertyFriendlyName "CP visibility maximum"
            float m_flInputMax; // 0x238            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x23c            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x240            
            // metadata: MPropertyFriendlyName "visibility radius"
            float m_flRadius; // 0x244            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapTransformVisibilityToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapTransformVisibilityToScalar) == 0x248);
    };
};
