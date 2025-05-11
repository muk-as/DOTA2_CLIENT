#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
        // Size: 0x758
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapDotProductToCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "first input control point"
            std::int32_t m_nInputCP1; // 0x1c8            
            // metadata: MPropertyFriendlyName "second input control point"
            std::int32_t m_nInputCP2; // 0x1cc            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutputCP; // 0x1d0            
            // metadata: MPropertyFriendlyName "output component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nOutVectorField; // 0x1d4            
            // metadata: MPropertyFriendlyName "input minimum (-1 to 1)"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flInputMin; // 0x1d8            
            // metadata: MPropertyFriendlyName "input maximum (-1 to 1)"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flInputMax; // 0x338            
            // metadata: MPropertyFriendlyName "output minimum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x498            
            // metadata: MPropertyFriendlyName "output maximum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x5f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapDotProductToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapDotProductToCP) == 0x758);
    };
};
