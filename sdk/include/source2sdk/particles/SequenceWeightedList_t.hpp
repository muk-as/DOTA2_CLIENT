#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SequenceWeightedList_t
        {
        public:
            // metadata: MPropertyFriendlyName "sequence"
            // metadata: MPropertyAttributeEditor "SequencePicker( 1 )"
            std::int32_t m_nSequence; // 0x_            
            // metadata: MPropertyFriendlyName "weight"
            float m_flRelativeWeight; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::SequenceWeightedList_t, m_nSequence) == 0x_);
        static_assert(offsetof(source2sdk::particles::SequenceWeightedList_t, m_flRelativeWeight) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::SequenceWeightedList_t) == 0x_);
    };
};
