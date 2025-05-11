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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x140
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionMatchingUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            source2sdk::animgraphlib::CMotionDataSet m_dataSet; // 0x58            
            // m_metrics has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CMotionMetricEvaluator>> m_metrics;
            char m_metrics[0x18]; // 0x78            
            // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_weights;
            char m_weights[0x18]; // 0x90            
            uint8_t _pad00a8[0x38]; // 0xa8
            bool m_bSearchEveryTick; // 0xe0            
            uint8_t _pad00e1[0x3]; // 0xe1
            float m_flSearchInterval; // 0xe4            
            bool m_bSearchWhenClipEnds; // 0xe8            
            bool m_bSearchWhenGoalChanges; // 0xe9            
            uint8_t _pad00ea[0x2]; // 0xea
            source2sdk::animgraphlib::CBlendCurve m_blendCurve; // 0xec            
            float m_flSampleRate; // 0xf4            
            float m_flBlendTime; // 0xf8            
            bool m_bLockClipWhenWaning; // 0xfc            
            uint8_t _pad00fd[0x3]; // 0xfd
            float m_flSelectionThreshold; // 0x100            
            float m_flReselectionTimeWindow; // 0x104            
            bool m_bEnableRotationCorrection; // 0x108            
            bool m_bGoalAssist; // 0x109            
            uint8_t _pad010a[0x2]; // 0x10a
            float m_flGoalAssistDistance; // 0x10c            
            float m_flGoalAssistTolerance; // 0x110            
            uint8_t _pad0114[0x4]; // 0x114
            source2sdk::animgraphlib::CAnimInputDamping m_distanceScale_Damping; // 0x118            
            float m_flDistanceScale_OuterRadius; // 0x128            
            float m_flDistanceScale_InnerRadius; // 0x12c            
            float m_flDistanceScale_MaxScale; // 0x130            
            float m_flDistanceScale_MinScale; // 0x134            
            bool m_bEnableDistanceScaling; // 0x138            
            uint8_t _pad0139[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMotionMatchingUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionMatchingUpdateNode) == 0x140);
    };
};
