#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmRootMotionData_SamplingMode_t.hpp"

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
        class CNmOrientationWarpNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nClipReferenceNodeIdx; // 0x10            
            std::int16_t m_nTargetValueNodeIdx; // 0x12            
            bool m_bIsOffsetNode; // 0x14            
            bool m_bIsOffsetRelativeToCharacter; // 0x15            
            source2sdk::animlib::CNmRootMotionData_SamplingMode_t m_samplingMode; // 0x16            
            uint8_t _pad0017[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmOrientationWarpNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmOrientationWarpNode_CDefinition) == 0x18);
    };
};
