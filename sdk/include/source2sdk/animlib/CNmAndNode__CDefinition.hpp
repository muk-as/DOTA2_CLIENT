#pragma once
#include "source2sdk/animlib/CNmBoolValueNode__CDefinition.hpp"
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
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmAndNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
    {
    public:
        // m_conditionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<int16_t,4> m_conditionNodeIndices;
        char m_conditionNodeIndices[0x10]; // 0x10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmAndNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmAndNode__CDefinition) == 0x20);
};
