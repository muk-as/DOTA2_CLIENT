#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"
#include "source2sdk/animlib/NmIKBlendMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTwoBoneIKNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            CGlobalSymbol m_effectorBoneID; // 0x_            
            std::int16_t m_nEffectorTargetNodeIdx; // 0x_            
            std::int16_t m_nEnabledNodeIdx; // 0x_            
            float m_flBlendTimeSeconds; // 0x_            
            source2sdk::animlib::NmIKBlendMode_t m_blendMode; // 0x_            
            bool m_bIsTargetInWorldSpace; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flReferencePoseTwistWeight; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTwoBoneIKNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTwoBoneIKNode_CDefinition) == 0x_);
    };
};
