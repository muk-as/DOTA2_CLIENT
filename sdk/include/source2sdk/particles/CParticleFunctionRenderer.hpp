#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunction.hpp"
#include "source2sdk/particles/CParticleVisibilityInputs.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x210
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CParticleFunctionRenderer : public source2sdk::particles::CParticleFunction
        {
        public:
            // metadata: MPropertySortPriority "-1"
            source2sdk::particles::CParticleVisibilityInputs VisibilityInputs; // 0x1c0            
            // metadata: MPropertyStartGroup "Rendering filter"
            // metadata: MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
            // metadata: MPropertySortPriority "-1"
            bool m_bCannotBeRefracted; // 0x208            
            // metadata: MPropertyFriendlyName "Skip rendering on mobile"
            // metadata: MPropertySortPriority "-1"
            bool m_bSkipRenderingOnMobile; // 0x209            
            uint8_t _pad020a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleFunctionRenderer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CParticleFunctionRenderer) == 0x210);
    };
};
