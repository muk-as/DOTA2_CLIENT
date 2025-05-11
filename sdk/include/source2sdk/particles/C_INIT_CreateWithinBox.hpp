#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        // Size: 0xed0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateWithinBox : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "min"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "max"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecMax; // 0x840            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0xeb8            
            // metadata: MPropertyFriendlyName "use local space"
            bool m_bLocalSpace; // 0xebc            
            uint8_t _pad0ebd[0x3]; // 0xebd
            // metadata: MPropertyFriendlyName "Random number generator controls"
            source2sdk::particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0xec0            
            // metadata: MPropertyFriendlyName "use new code"
            bool m_bUseNewCode; // 0xec8            
            uint8_t _pad0ec9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateWithinBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateWithinBox) == 0xed0);
    };
};
