#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"

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
        class C_OP_RemapDotProductToScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "first input control point"
            std::int32_t m_nInputCP1; // 0x_            
            // metadata: MPropertyFriendlyName "second input control point"
            std::int32_t m_nInputCP2; // 0x_            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "input minimum (-1 to 1)"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input maximum (-1 to 1)"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "use particle velocity for first input"
            bool m_bUseParticleVelocity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x_            
            // metadata: MPropertyFriendlyName "only active within specified input range"
            bool m_bActiveRange; // 0x_            
            // metadata: MPropertyFriendlyName "use particle normal for first input"
            bool m_bUseParticleNormal; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapDotProductToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapDotProductToScalar) == 0x_);
    };
};
