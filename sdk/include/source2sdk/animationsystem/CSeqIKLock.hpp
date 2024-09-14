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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqIKLock
    {
    public:
        float m_flPosWeight; // 0x0        
        float m_flAngleWeight; // 0x4        
        int16_t m_nLocalBone; // 0x8        
        bool m_bBonesOrientedAlongPositiveX; // 0xa        
        [[maybe_unused]] std::uint8_t pad_0x0b[0x1];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqIKLock, m_flPosWeight) == 0x0);
    static_assert(offsetof(CSeqIKLock, m_flAngleWeight) == 0x4);
    static_assert(offsetof(CSeqIKLock, m_nLocalBone) == 0x8);
    static_assert(offsetof(CSeqIKLock, m_bBonesOrientedAlongPositiveX) == 0xa);
    
    static_assert(sizeof(CSeqIKLock) == 0xc);
};
