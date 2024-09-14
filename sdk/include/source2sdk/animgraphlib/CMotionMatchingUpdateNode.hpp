#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CMotionDataSet.hpp"
#include "source2sdk/animgraphlib/CMotionMetricEvaluator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
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
    class CMotionMatchingUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        animgraphlib::CMotionDataSet m_dataSet; // 0x58        
        // m_metrics has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSmartPtr<animgraphlib::CMotionMetricEvaluator>> m_metrics;
        char m_metrics[0x18]; // 0x78        
        // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_weights;
        char m_weights[0x18]; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0xa8[0x38]; // 0xa8
        bool m_bSearchEveryTick; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe1[0x3]; // 0xe1
        float m_flSearchInterval; // 0xe4        
        bool m_bSearchWhenClipEnds; // 0xe8        
        bool m_bSearchWhenGoalChanges; // 0xe9        
        [[maybe_unused]] std::uint8_t pad_0xea[0x2]; // 0xea
        animgraphlib::CBlendCurve m_blendCurve; // 0xec        
        float m_flSampleRate; // 0xf4        
        float m_flBlendTime; // 0xf8        
        bool m_bLockClipWhenWaning; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0xfd[0x3]; // 0xfd
        float m_flSelectionThreshold; // 0x100        
        float m_flReselectionTimeWindow; // 0x104        
        bool m_bEnableRotationCorrection; // 0x108        
        bool m_bGoalAssist; // 0x109        
        [[maybe_unused]] std::uint8_t pad_0x10a[0x2]; // 0x10a
        float m_flGoalAssistDistance; // 0x10c        
        float m_flGoalAssistTolerance; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x114[0x4]; // 0x114
        animgraphlib::CAnimInputDamping m_distanceScale_Damping; // 0x118        
        float m_flDistanceScale_OuterRadius; // 0x128        
        float m_flDistanceScale_InnerRadius; // 0x12c        
        float m_flDistanceScale_MaxScale; // 0x130        
        float m_flDistanceScale_MinScale; // 0x134        
        bool m_bEnableDistanceScaling; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x139[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMotionMatchingUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CMotionMatchingUpdateNode) == 0x140);
};
