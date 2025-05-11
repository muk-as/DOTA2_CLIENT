#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        // Size: 0x850
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InitFromVectorFieldSnapshot : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nControlPointNumber; // 0x1c8            
            // metadata: MPropertyFriendlyName "local space control point number"
            std::int32_t m_nLocalSpaceCP; // 0x1cc            
            // metadata: MPropertyFriendlyName "weight update control point"
            std::int32_t m_nWeightUpdateCP; // 0x1d0            
            // metadata: MPropertyFriendlyName "use vertical velocity for weighting"
            bool m_bUseVerticalVelocity; // 0x1d4            
            uint8_t _pad01d5[0x3]; // 0x1d5
            // metadata: MPropertyFriendlyName "Component Scale"
            source2sdk::particleslib::CPerParticleVecInput m_vecScale; // 0x1d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitFromVectorFieldSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitFromVectorFieldSnapshot) == 0x850);
    };
};
