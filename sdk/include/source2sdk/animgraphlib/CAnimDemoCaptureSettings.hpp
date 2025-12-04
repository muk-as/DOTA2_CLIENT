#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/BoneDemoCaptureSettings_t.hpp"
#include "source2sdk/animgraphlib/EDemoBoneSelectionMode.hpp"
#include "source2sdk/animgraphlib/IKDemoCaptureSettings_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimDemoCaptureSettings
        {
        public:
            // metadata: MPropertyFriendlyName "Rotation Error Range"
            // metadata: MPropertyGroupName "+Spline Settings"
            Vector2D m_vecErrorRangeSplineRotation; // 0x_            
            // metadata: MPropertyFriendlyName "Translation Error Range"
            // metadata: MPropertyGroupName "+Spline Settings"
            Vector2D m_vecErrorRangeSplineTranslation; // 0x_            
            // metadata: MPropertyFriendlyName "Scale Error Range"
            // metadata: MPropertyGroupName "+Spline Settings"
            Vector2D m_vecErrorRangeSplineScale; // 0x_            
            // metadata: MPropertyFriendlyName "Max IK Rotation Error"
            // metadata: MPropertyGroupName "+Spline Settings"
            float m_flIkRotation_MaxSplineError; // 0x_            
            // metadata: MPropertyFriendlyName "Max IK Translation Error"
            // metadata: MPropertyGroupName "+Spline Settings"
            float m_flIkTranslation_MaxSplineError; // 0x_            
            // metadata: MPropertyFriendlyName "Rotation Error Range"
            // metadata: MPropertyGroupName "+Quantization Settings"
            Vector2D m_vecErrorRangeQuantizationRotation; // 0x_            
            // metadata: MPropertyFriendlyName "Translation Error Range"
            // metadata: MPropertyGroupName "+Quantization Settings"
            Vector2D m_vecErrorRangeQuantizationTranslation; // 0x_            
            // metadata: MPropertyFriendlyName "Scale Error Range"
            // metadata: MPropertyGroupName "+Quantization Settings"
            Vector2D m_vecErrorRangeQuantizationScale; // 0x_            
            // metadata: MPropertyFriendlyName "Max IK Rotation Error"
            // metadata: MPropertyGroupName "+Quantization Settings"
            float m_flIkRotation_MaxQuantizationError; // 0x_            
            // metadata: MPropertyFriendlyName "Max IK Translation Error"
            // metadata: MPropertyGroupName "+Quantization Settings"
            float m_flIkTranslation_MaxQuantizationError; // 0x_            
            // metadata: MPropertyFriendlyName "Base Sequence"
            // metadata: MPropertyGroupName "+Base Pose"
            // metadata: MPropertyAttributeChoiceName "Sequence"
            CUtlString m_baseSequence; // 0x_            
            // metadata: MPropertyFriendlyName "Base Sequence Frame"
            // metadata: MPropertyGroupName "+Base Pose"
            std::int32_t m_nBaseSequenceFrame; // 0x_            
            // metadata: MPropertyFriendlyName "Bone Selection Mode"
            // metadata: MPropertyGroupName "+Bones"
            // metadata: MPropertyAutoRebuildOnChange
            source2sdk::animgraphlib::EDemoBoneSelectionMode m_boneSelectionMode; // 0x_            
            // metadata: MPropertyFriendlyName "Bones"
            // metadata: MPropertyGroupName "+Bones"
            // metadata: MPropertyAttrStateCallback
            // m_bones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::BoneDemoCaptureSettings_t> m_bones;
            char m_bones[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "IK Chains"
            // m_ikChains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::IKDemoCaptureSettings_t> m_ikChains;
            char m_ikChains[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_vecErrorRangeSplineRotation) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_vecErrorRangeSplineTranslation) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_vecErrorRangeSplineScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_flIkRotation_MaxSplineError) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_flIkTranslation_MaxSplineError) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_vecErrorRangeQuantizationRotation) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_vecErrorRangeQuantizationTranslation) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_vecErrorRangeQuantizationScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_flIkRotation_MaxQuantizationError) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_flIkTranslation_MaxQuantizationError) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_baseSequence) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_nBaseSequenceFrame) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_boneSelectionMode) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_bones) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimDemoCaptureSettings, m_ikChains) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimDemoCaptureSettings) == 0x_);
    };
};
