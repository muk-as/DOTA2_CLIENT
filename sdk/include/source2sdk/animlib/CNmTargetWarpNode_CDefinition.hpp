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
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTargetWarpNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nClipReferenceNodeIdx; // 0x10            
            std::int16_t m_nTargetValueNodeIdx; // 0x12            
            source2sdk::animlib::CNmRootMotionData_SamplingMode_t m_samplingMode; // 0x14            
            bool m_bAllowTargetUpdate; // 0x15            
            uint8_t _pad0016[0x2]; // 0x16
            float m_flSamplingPositionErrorThresholdSq; // 0x18            
            float m_flMaxTangentLength; // 0x1c            
            float m_flLerpFallbackDistanceThreshold; // 0x20            
            float m_flTargetUpdateDistanceThreshold; // 0x24            
            float m_flTargetUpdateAngleThresholdRadians; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTargetWarpNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTargetWarpNode_CDefinition) == 0x30);
    };
};
