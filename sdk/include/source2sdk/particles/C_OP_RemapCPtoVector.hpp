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
        // Size: 0x210
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapCPtoVector : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "input control point number"
            std::int32_t m_nCPInput; // 0x1c0            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4            
            // metadata: MPropertyFriendlyName "local space CP"
            std::int32_t m_nLocalSpaceCP; // 0x1c8            
            // metadata: MPropertyFriendlyName "input minimum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vInputMin; // 0x1cc            
            // metadata: MPropertyFriendlyName "input maximum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vInputMax; // 0x1d8            
            // metadata: MPropertyFriendlyName "output minimum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vOutputMin; // 0x1e4            
            // metadata: MPropertyFriendlyName "output maximum"
            // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
            Vector m_vOutputMax; // 0x1f0            
            // metadata: MPropertyFriendlyName "emitter lifetime start time (seconds)"
            float m_flStartTime; // 0x1fc            
            // metadata: MPropertyFriendlyName "emitter lifetime end time (seconds)"
            float m_flEndTime; // 0x200            
            // metadata: MPropertyFriendlyName "interpolation scale"
            float m_flInterpRate; // 0x204            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x208            
            // metadata: MPropertyFriendlyName "offset position"
            bool m_bOffset; // 0x20c            
            // metadata: MPropertyFriendlyName "accelerate position"
            bool m_bAccelerate; // 0x20d            
            uint8_t _pad020e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapCPtoVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapCPtoVector) == 0x210);
    };
};
