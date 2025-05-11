#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"

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
        // Size: 0x1d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_PlayEndCapWhenFinished : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "play when emission ends"
            bool m_bFireOnEmissionEnd; // 0x1c8            
            // metadata: MPropertyFriendlyName "wait for children to finish"
            bool m_bIncludeChildren; // 0x1c9            
            uint8_t _pad01ca[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PlayEndCapWhenFinished because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PlayEndCapWhenFinished) == 0x1d0);
    };
};
