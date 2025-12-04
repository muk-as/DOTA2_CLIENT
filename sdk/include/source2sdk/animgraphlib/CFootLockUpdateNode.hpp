#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FootFixedSettings.hpp"
#include "source2sdk/animgraphlib/FootLockPoseOpFixedSettings.hpp"

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
        class CFootLockUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::FootLockPoseOpFixedSettings m_opFixedSettings; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_footSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::FootFixedSettings> m_footSettings;
            char m_footSettings[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimInputDamping m_hipShiftDamping; // 0x_            
            source2sdk::animgraphlib::CAnimInputDamping m_rootHeightDamping; // 0x_            
            float m_flStrideCurveScale; // 0x_            
            float m_flStrideCurveLimitScale; // 0x_            
            float m_flStepHeightIncreaseScale; // 0x_            
            float m_flStepHeightDecreaseScale; // 0x_            
            float m_flHipShiftScale; // 0x_            
            float m_flBlendTime; // 0x_            
            float m_flMaxRootHeightOffset; // 0x_            
            float m_flMinRootHeightOffset; // 0x_            
            float m_flTiltPlanePitchSpringStrength; // 0x_            
            float m_flTiltPlaneRollSpringStrength; // 0x_            
            bool m_bApplyFootRotationLimits; // 0x_            
            bool m_bApplyHipShift; // 0x_            
            bool m_bModulateStepHeight; // 0x_            
            bool m_bResetChild; // 0x_            
            bool m_bEnableVerticalCurvedPaths; // 0x_            
            bool m_bEnableRootHeightDamping; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootLockUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootLockUpdateNode) == 0x_);
    };
};
