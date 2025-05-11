#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

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
        class C_INIT_RandomSecondSequence : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "sequence min"
            // metadata: MPropertyAttributeEditor "SequencePicker( 2 )"
            std::int32_t m_nSequenceMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "sequence max"
            // metadata: MPropertyAttributeEditor "SequencePicker( 2 )"
            std::int32_t m_nSequenceMax; // 0x1cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomSecondSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomSecondSequence) == 0x1d0);
    };
};
