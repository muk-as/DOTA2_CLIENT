#pragma once
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x40
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmParameterizedBlendNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        // m_sourceNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<int16_t,5> m_sourceNodeIndices;
        char m_sourceNodeIndices[0x28]; // 0x10        
        int16_t m_nInputParameterValueNodeIdx; // 0x38        
        bool m_bAllowLooping; // 0x3a        
        [[maybe_unused]] std::uint8_t pad_0x3b[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmParameterizedBlendNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmParameterizedBlendNode__CDefinition) == 0x40);
};
