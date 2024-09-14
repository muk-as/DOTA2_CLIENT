#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqPoseParamDesc
    {
    public:
        CBufferString m_sName; // 0x0        
        float m_flStart; // 0x10        
        float m_flEnd; // 0x14        
        float m_flLoop; // 0x18        
        bool m_bLooping; // 0x1c        
        [[maybe_unused]] std::uint8_t pad_0x1d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqPoseParamDesc, m_sName) == 0x0);
    static_assert(offsetof(CSeqPoseParamDesc, m_flStart) == 0x10);
    static_assert(offsetof(CSeqPoseParamDesc, m_flEnd) == 0x14);
    static_assert(offsetof(CSeqPoseParamDesc, m_flLoop) == 0x18);
    static_assert(offsetof(CSeqPoseParamDesc, m_bLooping) == 0x1c);
    
    static_assert(sizeof(CSeqPoseParamDesc) == 0x20);
};
