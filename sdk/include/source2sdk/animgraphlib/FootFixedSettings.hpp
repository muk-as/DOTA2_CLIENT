#pragma once
#include "source2sdk/animgraphlib/TraceSettings_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class FootFixedSettings
    {
    public:
        animgraphlib::TraceSettings_t m_traceSettings; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        VectorAligned m_vFootBaseBindPosePositionMS; // 0x10        
        float m_flFootBaseLength; // 0x20        
        float m_flMaxRotationLeft; // 0x24        
        float m_flMaxRotationRight; // 0x28        
        int32_t m_footstepLandedTagIndex; // 0x2c        
        bool m_bEnableTracing; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x3]; // 0x31
        float m_flTraceAngleBlend; // 0x34        
        int32_t m_nDisableTagIndex; // 0x38        
        int32_t m_nFootIndex; // 0x3c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FootFixedSettings, m_traceSettings) == 0x0);
    static_assert(offsetof(FootFixedSettings, m_vFootBaseBindPosePositionMS) == 0x10);
    static_assert(offsetof(FootFixedSettings, m_flFootBaseLength) == 0x20);
    static_assert(offsetof(FootFixedSettings, m_flMaxRotationLeft) == 0x24);
    static_assert(offsetof(FootFixedSettings, m_flMaxRotationRight) == 0x28);
    static_assert(offsetof(FootFixedSettings, m_footstepLandedTagIndex) == 0x2c);
    static_assert(offsetof(FootFixedSettings, m_bEnableTracing) == 0x30);
    static_assert(offsetof(FootFixedSettings, m_flTraceAngleBlend) == 0x34);
    static_assert(offsetof(FootFixedSettings, m_nDisableTagIndex) == 0x38);
    static_assert(offsetof(FootFixedSettings, m_nFootIndex) == 0x3c);
    
    static_assert(sizeof(FootFixedSettings) == 0x40);
};
