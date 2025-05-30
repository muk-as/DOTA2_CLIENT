#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/FootFixedData_t.hpp"
#include "source2sdk/animgraphlib/IKSolverType.hpp"

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
        // Standard-layout class: true
        // Size: 0x68
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class FootLockPoseOpFixedSettings
        {
        public:
            // m_footInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::FootFixedData_t> m_footInfo;
            char m_footInfo[0x18]; // 0x0            
            source2sdk::animgraphlib::CAnimInputDamping m_hipDampingSettings; // 0x18            
            std::int32_t m_nHipBoneIndex; // 0x30            
            source2sdk::animgraphlib::IKSolverType m_ikSolverType; // 0x34            
            bool m_bApplyTilt; // 0x38            
            bool m_bApplyHipDrop; // 0x39            
            bool m_bAlwaysUseFallbackHinge; // 0x3a            
            bool m_bApplyFootRotationLimits; // 0x3b            
            bool m_bApplyLegTwistLimits; // 0x3c            
            uint8_t _pad003d[0x3]; // 0x3d
            float m_flMaxFootHeight; // 0x40            
            float m_flExtensionScale; // 0x44            
            float m_flMaxLegTwist; // 0x48            
            bool m_bEnableLockBreaking; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            float m_flLockBreakTolerance; // 0x50            
            float m_flLockBlendTime; // 0x54            
            bool m_bEnableStretching; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            float m_flMaxStretchAmount; // 0x5c            
            float m_flStretchExtensionScale; // 0x60            
            uint8_t _pad0064[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_footInfo) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_hipDampingSettings) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_nHipBoneIndex) == 0x30);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_ikSolverType) == 0x34);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyTilt) == 0x38);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyHipDrop) == 0x39);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bAlwaysUseFallbackHinge) == 0x3a);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyFootRotationLimits) == 0x3b);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyLegTwistLimits) == 0x3c);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flMaxFootHeight) == 0x40);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flExtensionScale) == 0x44);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flMaxLegTwist) == 0x48);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bEnableLockBreaking) == 0x4c);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flLockBreakTolerance) == 0x50);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flLockBlendTime) == 0x54);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bEnableStretching) == 0x58);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flMaxStretchAmount) == 0x5c);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flStretchExtensionScale) == 0x60);
        
        static_assert(sizeof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings) == 0x68);
    };
};
