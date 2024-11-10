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
    // Size: 0x30
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmParameterizedSelectorNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        // m_optionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<int16_t,5> m_optionNodeIndices;
        char m_optionNodeIndices[0x18]; // 0x10        
        int16_t m_parameterNodeIdx; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmParameterizedSelectorNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmParameterizedSelectorNode__CDefinition) == 0x30);
};
