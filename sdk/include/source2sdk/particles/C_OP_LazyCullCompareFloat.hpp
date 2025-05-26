#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_LazyCullCompareFloat : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "Comparison Value 1"
            source2sdk::particleslib::CPerParticleFloatInput m_flComparsion1; // 0x1c0            
            // metadata: MPropertyFriendlyName "Comparison Value 2"
            source2sdk::particleslib::CPerParticleFloatInput m_flComparsion2; // 0x320            
            // metadata: MPropertyFriendlyName "Cull Lifetime"
            source2sdk::particleslib::CPerParticleFloatInput m_flCullTime; // 0x480            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LazyCullCompareFloat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LazyCullCompareFloat) == 0x5e0);
    };
};
