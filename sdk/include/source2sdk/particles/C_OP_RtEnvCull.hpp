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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x268
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
            Vector m_vecTestDir; // 0x1c0            
            // metadata: MPropertyFriendlyName "cull normal"
            // metadata: MVectorIsCoordinate
            Vector m_vecTestNormal; // 0x1cc            
            // metadata: MPropertyFriendlyName "cull on miss"
            bool m_bCullOnMiss; // 0x1d8            
            // metadata: MPropertyFriendlyName "stick instead of cull"
            bool m_bStickInsteadOfCull; // 0x1d9            
            // metadata: MPropertyFriendlyName "ray trace environment name"
            char m_RtEnvName[128]; // 0x1da            
            uint8_t _pad025a[0x2]; // 0x25a
            // metadata: MPropertyFriendlyName "ray trace environment cp"
            std::int32_t m_nRTEnvCP; // 0x25c            
            // metadata: MPropertyFriendlyName "rt env control point component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nComponent; // 0x260            
            uint8_t _pad0264[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RtEnvCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RtEnvCull) == 0x268);
    };
};
