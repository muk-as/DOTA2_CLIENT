#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"

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
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTwoBoneIKNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            CGlobalSymbol m_effectorBoneID; // 0x18            
            std::int16_t m_nEffectorTargetNodeIdx; // 0x20            
            std::int16_t m_nEnabledNodeIdx; // 0x22            
            bool m_bIsTargetInWorldSpace; // 0x24            
            uint8_t _pad0025[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTwoBoneIKNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTwoBoneIKNode_CDefinition) == 0x28);
    };
};
