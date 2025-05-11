#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmStateMachineNode_StateDefinition_t.hpp"

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
        // Size: 0x138
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmStateMachineNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            // m_stateDefinitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmStateMachineNode_StateDefinition_t,5> m_stateDefinitions;
            char m_stateDefinitions[0x120]; // 0x10            
            std::int16_t m_nDefaultStateIndex; // 0x130            
            uint8_t _pad0132[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmStateMachineNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmStateMachineNode_CDefinition) == 0x138);
    };
};
