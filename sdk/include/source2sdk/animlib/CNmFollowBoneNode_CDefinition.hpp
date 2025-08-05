#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"
#include "source2sdk/animlib/NmFollowBoneMode_t.hpp"

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
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmFollowBoneNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            CGlobalSymbol m_bone; // 0x18            
            CGlobalSymbol m_followTargetBone; // 0x20            
            std::int16_t m_nEnabledNodeIdx; // 0x28            
            source2sdk::animlib::NmFollowBoneMode_t m_mode; // 0x2a            
            uint8_t _pad002b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmFollowBoneNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmFollowBoneNode_CDefinition) == 0x30);
    };
};
