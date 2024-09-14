#pragma once
#include "source2sdk/animgraphlib/MotionIndex.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionGraphConfig
    {
    public:
        float m_paramValues[4]; // 0x0        
        float m_flDuration; // 0x10        
        animgraphlib::MotionIndex m_nMotionIndex; // 0x14        
        int32_t m_nSampleStart; // 0x18        
        int32_t m_nSampleCount; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMotionGraphConfig, m_paramValues) == 0x0);
    static_assert(offsetof(CMotionGraphConfig, m_flDuration) == 0x10);
    static_assert(offsetof(CMotionGraphConfig, m_nMotionIndex) == 0x14);
    static_assert(offsetof(CMotionGraphConfig, m_nSampleStart) == 0x18);
    static_assert(offsetof(CMotionGraphConfig, m_nSampleCount) == 0x1c);
    
    static_assert(sizeof(CMotionGraphConfig) == 0x20);
};
