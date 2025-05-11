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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapCPtoScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "input control point number"
            std::int32_t m_nCPInput; // 0x1c0            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4            
            // metadata: MPropertyFriendlyName "input field 0-2 X/Y/Z"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nField; // 0x1c8            
            // metadata: MPropertyFriendlyName "input minimum"
            float m_flInputMin; // 0x1cc            
            // metadata: MPropertyFriendlyName "input maximum"
            float m_flInputMax; // 0x1d0            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1d4            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1d8            
            // metadata: MPropertyFriendlyName "emitter lifetime start time (seconds)"
            float m_flStartTime; // 0x1dc            
            // metadata: MPropertyFriendlyName "emitter lifetime end time (seconds)"
            float m_flEndTime; // 0x1e0            
            // metadata: MPropertyFriendlyName "interpolation scale"
            float m_flInterpRate; // 0x1e4            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x1e8            
            uint8_t _pad01ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapCPtoScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapCPtoScalar) == 0x1f0);
    };
};
