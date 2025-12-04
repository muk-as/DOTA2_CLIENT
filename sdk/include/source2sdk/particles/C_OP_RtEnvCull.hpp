#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RtEnvCull : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "test direction"
            // metadata: MVectorIsCoordinate
            Vector m_vecTestDir; // 0x_            
            // metadata: MPropertyFriendlyName "cull normal"
            // metadata: MVectorIsCoordinate
            Vector m_vecTestNormal; // 0x_            
            // metadata: MPropertyFriendlyName "cull on miss"
            bool m_bCullOnMiss; // 0x_            
            // metadata: MPropertyFriendlyName "stick instead of cull"
            bool m_bStickInsteadOfCull; // 0x_            
            // metadata: MPropertyFriendlyName "ray trace environment name"
            char m_RtEnvName[128]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "ray trace environment cp"
            std::int32_t m_nRTEnvCP; // 0x_            
            // metadata: MPropertyFriendlyName "rt env control point component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nComponent; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RtEnvCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RtEnvCull) == 0x_);
    };
};
