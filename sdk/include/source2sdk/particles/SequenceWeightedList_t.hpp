#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
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
        int32_t m_nSequence; // 0x0        
        // metadata: MPropertyFriendlyName "weight"
        float m_flRelativeWeight; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SequenceWeightedList_t, m_nSequence) == 0x0);
    static_assert(offsetof(SequenceWeightedList_t, m_flRelativeWeight) == 0x4);
    
    static_assert(sizeof(SequenceWeightedList_t) == 0x8);
};
