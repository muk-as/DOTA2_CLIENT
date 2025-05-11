#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Standard-layout class: true
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct MaterialVariable_t
        {
        public:
            // metadata: MPropertyFriendlyName "material variable"
            CUtlString m_strVariable; // 0x0            
            // metadata: MPropertyFriendlyName "particle field"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nVariableField; // 0x8            
            // metadata: MPropertyFriendlyName "scale"
            float m_flScale; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::MaterialVariable_t, m_strVariable) == 0x0);
        static_assert(offsetof(source2sdk::particles::MaterialVariable_t, m_nVariableField) == 0x8);
        static_assert(offsetof(source2sdk::particles::MaterialVariable_t, m_flScale) == 0xc);
        
        static_assert(sizeof(source2sdk::particles::MaterialVariable_t) == 0x10);
    };
};
