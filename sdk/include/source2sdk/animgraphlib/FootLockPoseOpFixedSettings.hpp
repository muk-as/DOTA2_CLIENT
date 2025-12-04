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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class FootLockPoseOpFixedSettings
        {
        public:
            // m_footInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::FootFixedData_t> m_footInfo;
            char m_footInfo[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimInputDamping m_hipDampingSettings; // 0x_            
            std::int32_t m_nHipBoneIndex; // 0x_            
            source2sdk::animgraphlib::IKSolverType m_ikSolverType; // 0x_            
            bool m_bApplyTilt; // 0x_            
            bool m_bApplyHipDrop; // 0x_            
            bool m_bAlwaysUseFallbackHinge; // 0x_            
            bool m_bApplyFootRotationLimits; // 0x_            
            bool m_bApplyLegTwistLimits; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxFootHeight; // 0x_            
            float m_flExtensionScale; // 0x_            
            float m_flMaxLegTwist; // 0x_            
            bool m_bEnableLockBreaking; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLockBreakTolerance; // 0x_            
            float m_flLockBlendTime; // 0x_            
            bool m_bEnableStretching; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxStretchAmount; // 0x_            
            float m_flStretchExtensionScale; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_footInfo) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_hipDampingSettings) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_nHipBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_ikSolverType) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyTilt) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyHipDrop) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bAlwaysUseFallbackHinge) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyFootRotationLimits) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bApplyLegTwistLimits) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flMaxFootHeight) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flExtensionScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flMaxLegTwist) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bEnableLockBreaking) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flLockBreakTolerance) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flLockBlendTime) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_bEnableStretching) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flMaxStretchAmount) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings, m_flStretchExtensionScale) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::FootLockPoseOpFixedSettings) == 0x_);
    };
};
