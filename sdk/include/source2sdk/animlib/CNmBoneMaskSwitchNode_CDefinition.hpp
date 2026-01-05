#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmBoneMaskValueNode_CDefinition.hpp"

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
        class CNmBoneMaskSwitchNode_CDefinition : public source2sdk::animlib::CNmBoneMaskValueNode_CDefinition
        {
        public:
            std::int16_t m_nSwitchValueNodeIdx; // 0x_            
            std::int16_t m_nTrueValueNodeIdx; // 0x_            
            std::int16_t m_nFalseValueNodeIdx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBlendTimeSeconds; // 0x_            
            bool m_bSwitchDynamically; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBoneMaskSwitchNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBoneMaskSwitchNode_CDefinition) == 0x_);
    };
};
