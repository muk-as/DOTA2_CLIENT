#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyCustomEditor "ParticleVariableRef()"
        #pragma pack(push, 1)
        class CParticleVariableRef
        {
        public:
            // metadata: MFgdFromSchemaCompletelySkipField
            CKV3MemberNameWithStorage m_variableName; // 0x_            
            // metadata: MFgdFromSchemaCompletelySkipField
            CPulseValueFullType m_variableType; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particleslib::CParticleVariableRef, m_variableName) == 0x_);
        static_assert(offsetof(source2sdk::particleslib::CParticleVariableRef, m_variableType) == 0x_);
        
        static_assert(sizeof(source2sdk::particleslib::CParticleVariableRef) == 0x_);
    };
};
