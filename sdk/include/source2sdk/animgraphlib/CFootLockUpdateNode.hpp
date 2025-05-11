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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x140
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootLockUpdateNode : public source2sdk::animgraphlib::CUnaryUpdateNode
        {
        public:
            source2sdk::animgraphlib::FootLockPoseOpFixedSettings m_opFixedSettings; // 0x70            
            uint8_t _pad00d0[0x8]; // 0xd0
            // m_footSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::FootFixedSettings> m_footSettings;
            char m_footSettings[0x18]; // 0xd8            
            source2sdk::animgraphlib::CAnimInputDamping m_hipShiftDamping; // 0xf0            
            source2sdk::animgraphlib::CAnimInputDamping m_rootHeightDamping; // 0x100            
            float m_flStrideCurveScale; // 0x110            
            float m_flStrideCurveLimitScale; // 0x114            
            float m_flStepHeightIncreaseScale; // 0x118            
            float m_flStepHeightDecreaseScale; // 0x11c            
            float m_flHipShiftScale; // 0x120            
            float m_flBlendTime; // 0x124            
            float m_flMaxRootHeightOffset; // 0x128            
            float m_flMinRootHeightOffset; // 0x12c            
            float m_flTiltPlanePitchSpringStrength; // 0x130            
            float m_flTiltPlaneRollSpringStrength; // 0x134            
            bool m_bApplyFootRotationLimits; // 0x138            
            bool m_bApplyHipShift; // 0x139            
            bool m_bModulateStepHeight; // 0x13a            
            bool m_bResetChild; // 0x13b            
            bool m_bEnableVerticalCurvedPaths; // 0x13c            
            bool m_bEnableRootHeightDamping; // 0x13d            
            uint8_t _pad013e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootLockUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootLockUpdateNode) == 0x140);
    };
};
