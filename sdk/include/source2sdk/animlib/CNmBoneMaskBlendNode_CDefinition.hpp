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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmBoneMaskBlendNode_CDefinition : public source2sdk::animlib::CNmBoneMaskValueNode_CDefinition
        {
        public:
            std::int16_t m_nSourceMaskNodeIdx; // 0x10            
            std::int16_t m_nTargetMaskNodeIdx; // 0x12            
            std::int16_t m_nBlendWeightValueNodeIdx; // 0x14            
            uint8_t _pad0016[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBoneMaskBlendNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBoneMaskBlendNode_CDefinition) == 0x18);
    };
};
