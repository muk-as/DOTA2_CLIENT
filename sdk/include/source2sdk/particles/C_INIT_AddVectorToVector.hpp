#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
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
        // Size: 0x200
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_AddVectorToVector : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "component scale factor"
            Vector m_vecScale; // 0x1c8            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4            
            // metadata: MPropertyFriendlyName "input field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1d8            
            // metadata: MPropertyFriendlyName "random offset min"
            Vector m_vOffsetMin; // 0x1dc            
            // metadata: MPropertyFriendlyName "random offset max"
            Vector m_vOffsetMax; // 0x1e8            
            // metadata: MPropertyFriendlyName "Random number generator controls"
            source2sdk::particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1f4            
            uint8_t _pad01fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_AddVectorToVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_AddVectorToVector) == 0x200);
    };
};
