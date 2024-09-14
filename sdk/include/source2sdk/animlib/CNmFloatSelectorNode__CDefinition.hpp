#pragma once
#include "source2sdk/animlib/CNmFloatValueNode__CDefinition.hpp"
#include "source2sdk/animlib/NmEasingOperation_t.hpp"
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
    // Size: 0x78
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmFloatSelectorNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
    {
    public:
        // m_conditionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<int16_t,5> m_conditionNodeIndices;
        char m_conditionNodeIndices[0x28]; // 0x10        
        // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<float,5> m_values;
        char m_values[0x30]; // 0x38        
        float m_flDefaultValue; // 0x68        
        float m_flEaseTime; // 0x6c        
        animlib::NmEasingOperation_t m_easingOp; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x71[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFloatSelectorNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFloatSelectorNode__CDefinition) == 0x78);
};
