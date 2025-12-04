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
        class C_INIT_RemapScalarToVector : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "input field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x_            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "input minimum"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input maximum"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vecOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "emitter lifetime start time (seconds)"
            float m_flStartTime; // 0x_            
            // metadata: MPropertyFriendlyName "emitter lifetime end time (seconds)"
            float m_flEndTime; // 0x_            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x_            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "use local system"
            bool m_bLocalCoords; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "remap bias"
            float m_flRemapBias; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RemapScalarToVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RemapScalarToVector) == 0x_);
    };
};
