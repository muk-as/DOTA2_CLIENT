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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTargetWarpNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nClipReferenceNodeIdx; // 0x_            
            std::int16_t m_nTargetValueNodeIdx; // 0x_            
            source2sdk::animlib::CNmRootMotionData_SamplingMode_t m_samplingMode; // 0x_            
            bool m_bAllowTargetUpdate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSamplingPositionErrorThresholdSq; // 0x_            
            float m_flMaxTangentLength; // 0x_            
            float m_flLerpFallbackDistanceThreshold; // 0x_            
            float m_flTargetUpdateDistanceThreshold; // 0x_            
            float m_flTargetUpdateAngleThresholdRadians; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTargetWarpNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTargetWarpNode_CDefinition) == 0x_);
    };
};
