#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/CPathParameters.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x210
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MParticleMinVersion "8"
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_LockToSavedSequentialPathV2 : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "start fade time"
            float m_flFadeStart; // 0x1c0            
            // metadata: MPropertyFriendlyName "end fade time"
            float m_flFadeEnd; // 0x1c4            
            // metadata: MPropertyFriendlyName "Use sequential CP pairs between start and end point"
            bool m_bCPPairs; // 0x1c8            
            uint8_t _pad01c9[0x7]; // 0x1c9
            source2sdk::particles::CPathParameters m_PathParams; // 0x1d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LockToSavedSequentialPathV2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LockToSavedSequentialPathV2) == 0x210);
    };
};
