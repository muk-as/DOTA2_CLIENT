#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        class C_INIT_RemapParticleCountToScalar : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "input minimum"
            std::int32_t m_nInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input maximum"
            std::int32_t m_nInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "input scale control point"
            std::int32_t m_nScaleControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "input scale control point field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nScaleControlPointField; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x_            
            // metadata: MPropertyFriendlyName "only active within specified input range"
            bool m_bActiveRange; // 0x_            
            // metadata: MPropertyFriendlyName "invert input from total particle count"
            bool m_bInvert; // 0x_            
            // metadata: MPropertyFriendlyName "wrap input"
            bool m_bWrap; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "remap bias"
            float m_flRemapBias; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RemapParticleCountToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RemapParticleCountToScalar) == 0x_);
    };
};
