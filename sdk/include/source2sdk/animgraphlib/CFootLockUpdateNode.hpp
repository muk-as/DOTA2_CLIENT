#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FootFixedSettings.hpp"
#include "source2sdk/animgraphlib/FootLockPoseOpFixedSettings.hpp"
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
    // Size: 0x138
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootLockUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::FootLockPoseOpFixedSettings m_opFixedSettings; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x8]; // 0xc8
        // m_footSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::FootFixedSettings> m_footSettings;
        char m_footSettings[0x18]; // 0xd0        
        animgraphlib::CAnimInputDamping m_hipShiftDamping; // 0xe8        
        animgraphlib::CAnimInputDamping m_rootHeightDamping; // 0xf8        
        float m_flStrideCurveScale; // 0x108        
        float m_flStrideCurveLimitScale; // 0x10c        
        float m_flStepHeightIncreaseScale; // 0x110        
        float m_flStepHeightDecreaseScale; // 0x114        
        float m_flHipShiftScale; // 0x118        
        float m_flBlendTime; // 0x11c        
        float m_flMaxRootHeightOffset; // 0x120        
        float m_flMinRootHeightOffset; // 0x124        
        float m_flTiltPlanePitchSpringStrength; // 0x128        
        float m_flTiltPlaneRollSpringStrength; // 0x12c        
        bool m_bApplyFootRotationLimits; // 0x130        
        bool m_bApplyHipShift; // 0x131        
        bool m_bModulateStepHeight; // 0x132        
        bool m_bResetChild; // 0x133        
        bool m_bEnableVerticalCurvedPaths; // 0x134        
        bool m_bEnableRootHeightDamping; // 0x135        
        [[maybe_unused]] std::uint8_t pad_0x136[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootLockUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFootLockUpdateNode) == 0x138);
};
