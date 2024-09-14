#pragma once
#include "source2sdk/animlib/CNmPoseNode__CDefinition.hpp"
#include "source2sdk/animlib/CNmStateMachineNode__StateDefinition_t.hpp"
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
    // Size: 0x138
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmStateMachineNode__CDefinition : public animlib::CNmPoseNode__CDefinition
    {
    public:
        // m_stateDefinitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<animlib::CNmStateMachineNode__StateDefinition_t,5> m_stateDefinitions;
        char m_stateDefinitions[0x120]; // 0x10        
        int16_t m_nDefaultStateIndex; // 0x130        
        [[maybe_unused]] std::uint8_t pad_0x132[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmStateMachineNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmStateMachineNode__CDefinition) == 0x138);
};
