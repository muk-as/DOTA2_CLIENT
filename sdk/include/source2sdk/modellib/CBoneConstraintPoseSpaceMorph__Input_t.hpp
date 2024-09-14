#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    #pragma pack(push, 1)
    struct CBoneConstraintPoseSpaceMorph__Input_t
    {
    public:
        Vector m_inputValue; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_outputWeightList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_outputWeightList;
        char m_outputWeightList[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBoneConstraintPoseSpaceMorph__Input_t, m_inputValue) == 0x0);
    static_assert(offsetof(CBoneConstraintPoseSpaceMorph__Input_t, m_outputWeightList) == 0x10);
    
    static_assert(sizeof(CBoneConstraintPoseSpaceMorph__Input_t) == 0x28);
};
