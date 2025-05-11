#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

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
        // Size: 0x680
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VecInputMaterialVariable_t
        {
        public:
            // metadata: MPropertyFriendlyName "material variable"
            CUtlString m_strVariable; // 0x0            
            // metadata: MPropertyFriendlyName "input"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecInput; // 0x8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in VecInputMaterialVariable_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::VecInputMaterialVariable_t) == 0x680);
    };
};
