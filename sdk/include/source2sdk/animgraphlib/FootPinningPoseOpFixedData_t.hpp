#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/FootFixedData_t.hpp"

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
        struct FootPinningPoseOpFixedData_t
        {
        public:
            // m_footInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::FootFixedData_t> m_footInfo;
            char m_footInfo[0x_]; // 0x_            
            float m_flBlendTime; // 0x_            
            float m_flLockBreakDistance; // 0x_            
            float m_flMaxLegTwist; // 0x_            
            std::int32_t m_nHipBoneIndex; // 0x_            
            bool m_bApplyLegTwistLimits; // 0x_            
            bool m_bApplyFootRotationLimits; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t, m_footInfo) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t, m_flBlendTime) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t, m_flLockBreakDistance) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t, m_flMaxLegTwist) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t, m_nHipBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t, m_bApplyLegTwistLimits) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t, m_bApplyFootRotationLimits) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::FootPinningPoseOpFixedData_t) == 0x_);
    };
};
