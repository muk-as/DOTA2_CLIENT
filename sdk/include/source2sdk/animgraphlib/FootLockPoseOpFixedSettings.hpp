#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/FootFixedData_t.hpp"
#include "source2sdk/animgraphlib/IKSolverType.hpp"
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
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class FootLockPoseOpFixedSettings
    {
    public:
        // m_footInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::FootFixedData_t> m_footInfo;
        char m_footInfo[0x18]; // 0x0        
        animgraphlib::CAnimInputDamping m_hipDampingSettings; // 0x18        
        int32_t m_nHipBoneIndex; // 0x28        
        animgraphlib::IKSolverType m_ikSolverType; // 0x2c        
        bool m_bApplyTilt; // 0x30        
        bool m_bApplyHipDrop; // 0x31        
        bool m_bAlwaysUseFallbackHinge; // 0x32        
        bool m_bApplyFootRotationLimits; // 0x33        
        bool m_bApplyLegTwistLimits; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x3]; // 0x35
        float m_flMaxFootHeight; // 0x38        
        float m_flExtensionScale; // 0x3c        
        float m_flMaxLegTwist; // 0x40        
        bool m_bEnableLockBreaking; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3]; // 0x45
        float m_flLockBreakTolerance; // 0x48        
        float m_flLockBlendTime; // 0x4c        
        bool m_bEnableStretching; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        float m_flMaxStretchAmount; // 0x54        
        float m_flStretchExtensionScale; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_footInfo) == 0x0);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_hipDampingSettings) == 0x18);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_nHipBoneIndex) == 0x28);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_ikSolverType) == 0x2c);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_bApplyTilt) == 0x30);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_bApplyHipDrop) == 0x31);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_bAlwaysUseFallbackHinge) == 0x32);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_bApplyFootRotationLimits) == 0x33);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_bApplyLegTwistLimits) == 0x34);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_flMaxFootHeight) == 0x38);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_flExtensionScale) == 0x3c);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_flMaxLegTwist) == 0x40);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_bEnableLockBreaking) == 0x44);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_flLockBreakTolerance) == 0x48);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_flLockBlendTime) == 0x4c);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_bEnableStretching) == 0x50);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_flMaxStretchAmount) == 0x54);
    static_assert(offsetof(FootLockPoseOpFixedSettings, m_flStretchExtensionScale) == 0x58);
    
    static_assert(sizeof(FootLockPoseOpFixedSettings) == 0x60);
};
