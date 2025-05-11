#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmIDValueNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x80
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIDSelectorNode_CDefinition : public source2sdk::animlib::CNmIDValueNode_CDefinition
        {
        public:
            // m_conditionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::int16_t,5> m_conditionNodeIndices;
            char m_conditionNodeIndices[0x28]; // 0x10            
            // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<CGlobalSymbol,5> m_values;
            char m_values[0x40]; // 0x38            
            CGlobalSymbol m_defaultValue; // 0x78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmIDSelectorNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmIDSelectorNode_CDefinition) == 0x80);
    };
};
