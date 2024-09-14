#pragma once
#include "source2sdk/animgraphlib/BoneDemoCaptureSettings_t.hpp"
#include "source2sdk/animgraphlib/EDemoBoneSelectionMode.hpp"
#include "source2sdk/animgraphlib/IKDemoCaptureSettings_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x80
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimDemoCaptureSettings
    {
    public:
        // metadata: MPropertyFriendlyName "Rotation Error Range"
        // metadata: MPropertyGroupName "+Spline Settings"
        Vector2D m_vecErrorRangeSplineRotation; // 0x0        
        // metadata: MPropertyFriendlyName "Translation Error Range"
        // metadata: MPropertyGroupName "+Spline Settings"
        Vector2D m_vecErrorRangeSplineTranslation; // 0x8        
        // metadata: MPropertyFriendlyName "Scale Error Range"
        // metadata: MPropertyGroupName "+Spline Settings"
        Vector2D m_vecErrorRangeSplineScale; // 0x10        
        // metadata: MPropertyFriendlyName "Max IK Rotation Error"
        // metadata: MPropertyGroupName "+Spline Settings"
        float m_flIkRotation_MaxSplineError; // 0x18        
        // metadata: MPropertyFriendlyName "Max IK Translation Error"
        // metadata: MPropertyGroupName "+Spline Settings"
        float m_flIkTranslation_MaxSplineError; // 0x1c        
        // metadata: MPropertyFriendlyName "Rotation Error Range"
        // metadata: MPropertyGroupName "+Quantization Settings"
        Vector2D m_vecErrorRangeQuantizationRotation; // 0x20        
        // metadata: MPropertyFriendlyName "Translation Error Range"
        // metadata: MPropertyGroupName "+Quantization Settings"
        Vector2D m_vecErrorRangeQuantizationTranslation; // 0x28        
        // metadata: MPropertyFriendlyName "Scale Error Range"
        // metadata: MPropertyGroupName "+Quantization Settings"
        Vector2D m_vecErrorRangeQuantizationScale; // 0x30        
        // metadata: MPropertyFriendlyName "Max IK Rotation Error"
        // metadata: MPropertyGroupName "+Quantization Settings"
        float m_flIkRotation_MaxQuantizationError; // 0x38        
        // metadata: MPropertyFriendlyName "Max IK Translation Error"
        // metadata: MPropertyGroupName "+Quantization Settings"
        float m_flIkTranslation_MaxQuantizationError; // 0x3c        
        // metadata: MPropertyFriendlyName "Base Sequence"
        // metadata: MPropertyGroupName "+Base Pose"
        // metadata: MPropertyAttributeChoiceName "Sequence"
        CUtlString m_baseSequence; // 0x40        
        // metadata: MPropertyFriendlyName "Base Sequence Frame"
        // metadata: MPropertyGroupName "+Base Pose"
        int32_t m_nBaseSequenceFrame; // 0x48        
        // metadata: MPropertyFriendlyName "Bone Selection Mode"
        // metadata: MPropertyGroupName "+Bones"
        // metadata: MPropertyAttrChangeCallback
        animgraphlib::EDemoBoneSelectionMode m_boneSelectionMode; // 0x4c        
        // metadata: MPropertyFriendlyName "Bones"
        // metadata: MPropertyGroupName "+Bones"
        // metadata: MPropertyAttrStateCallback
        // m_bones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::BoneDemoCaptureSettings_t> m_bones;
        char m_bones[0x18]; // 0x50        
        // metadata: MPropertyFriendlyName "IK Chains"
        // m_ikChains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::IKDemoCaptureSettings_t> m_ikChains;
        char m_ikChains[0x18]; // 0x68        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimDemoCaptureSettings, m_vecErrorRangeSplineRotation) == 0x0);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_vecErrorRangeSplineTranslation) == 0x8);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_vecErrorRangeSplineScale) == 0x10);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_flIkRotation_MaxSplineError) == 0x18);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_flIkTranslation_MaxSplineError) == 0x1c);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_vecErrorRangeQuantizationRotation) == 0x20);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_vecErrorRangeQuantizationTranslation) == 0x28);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_vecErrorRangeQuantizationScale) == 0x30);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_flIkRotation_MaxQuantizationError) == 0x38);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_flIkTranslation_MaxQuantizationError) == 0x3c);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_baseSequence) == 0x40);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_nBaseSequenceFrame) == 0x48);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_boneSelectionMode) == 0x4c);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_bones) == 0x50);
    static_assert(offsetof(CAnimDemoCaptureSettings, m_ikChains) == 0x68);
    
    static_assert(sizeof(CAnimDemoCaptureSettings) == 0x80);
};
