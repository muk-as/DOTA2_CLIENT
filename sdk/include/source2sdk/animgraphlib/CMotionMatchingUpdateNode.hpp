#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CMotionDataSet.hpp"
#include "source2sdk/animgraphlib/CMotionMetricEvaluator.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
        class CMotionMatchingUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            source2sdk::animgraphlib::CMotionDataSet m_dataSet; // 0x_            
            // m_metrics has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CMotionMetricEvaluator>> m_metrics;
            char m_metrics[0x_]; // 0x_            
            // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_weights;
            char m_weights[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bSearchEveryTick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSearchInterval; // 0x_            
            bool m_bSearchWhenClipEnds; // 0x_            
            bool m_bSearchWhenGoalChanges; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CBlendCurve m_blendCurve; // 0x_            
            float m_flSampleRate; // 0x_            
            float m_flBlendTime; // 0x_            
            bool m_bLockClipWhenWaning; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSelectionThreshold; // 0x_            
            float m_flReselectionTimeWindow; // 0x_            
            bool m_bEnableRotationCorrection; // 0x_            
            bool m_bGoalAssist; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flGoalAssistDistance; // 0x_            
            float m_flGoalAssistTolerance; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimInputDamping m_distanceScale_Damping; // 0x_            
            float m_flDistanceScale_OuterRadius; // 0x_            
            float m_flDistanceScale_InnerRadius; // 0x_            
            float m_flDistanceScale_MaxScale; // 0x_            
            float m_flDistanceScale_MinScale; // 0x_            
            bool m_bEnableDistanceScaling; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMotionMatchingUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionMatchingUpdateNode) == 0x_);
    };
};
