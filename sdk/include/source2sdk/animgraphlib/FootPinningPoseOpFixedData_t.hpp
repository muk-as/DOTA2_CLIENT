#pragma once
#include "source2sdk/animgraphlib/FootFixedData_t.hpp"
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
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FootPinningPoseOpFixedData_t
    {
    public:
        // m_footInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::FootFixedData_t> m_footInfo;
        char m_footInfo[0x18]; // 0x0        
        float m_flBlendTime; // 0x18        
        float m_flLockBreakDistance; // 0x1c        
        float m_flMaxLegTwist; // 0x20        
        int32_t m_nHipBoneIndex; // 0x24        
        bool m_bApplyLegTwistLimits; // 0x28        
        bool m_bApplyFootRotationLimits; // 0x29        
        [[maybe_unused]] std::uint8_t pad_0x2a[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FootPinningPoseOpFixedData_t, m_footInfo) == 0x0);
    static_assert(offsetof(FootPinningPoseOpFixedData_t, m_flBlendTime) == 0x18);
    static_assert(offsetof(FootPinningPoseOpFixedData_t, m_flLockBreakDistance) == 0x1c);
    static_assert(offsetof(FootPinningPoseOpFixedData_t, m_flMaxLegTwist) == 0x20);
    static_assert(offsetof(FootPinningPoseOpFixedData_t, m_nHipBoneIndex) == 0x24);
    static_assert(offsetof(FootPinningPoseOpFixedData_t, m_bApplyLegTwistLimits) == 0x28);
    static_assert(offsetof(FootPinningPoseOpFixedData_t, m_bApplyFootRotationLimits) == 0x29);
    
    static_assert(sizeof(FootPinningPoseOpFixedData_t) == 0x30);
};
