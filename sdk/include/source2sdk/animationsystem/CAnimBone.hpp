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
    // Size: 0x48
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimBone
    {
    public:
        CBufferString m_name; // 0x0        
        int32_t m_parent; // 0x10        
        Vector m_pos; // 0x14        
        QuaternionStorage m_quat; // 0x20        
        float m_scale; // 0x30        
        QuaternionStorage m_qAlignment; // 0x34        
        int32_t m_flags; // 0x44        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimBone, m_name) == 0x0);
    static_assert(offsetof(CAnimBone, m_parent) == 0x10);
    static_assert(offsetof(CAnimBone, m_pos) == 0x14);
    static_assert(offsetof(CAnimBone, m_quat) == 0x20);
    static_assert(offsetof(CAnimBone, m_scale) == 0x30);
    static_assert(offsetof(CAnimBone, m_qAlignment) == 0x34);
    static_assert(offsetof(CAnimBone, m_flags) == 0x44);
    
    static_assert(sizeof(CAnimBone) == 0x48);
};
