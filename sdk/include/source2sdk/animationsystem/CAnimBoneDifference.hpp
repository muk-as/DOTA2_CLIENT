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
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimBoneDifference
    {
    public:
        CBufferString m_name; // 0x0        
        CBufferString m_parent; // 0x10        
        Vector m_posError; // 0x20        
        bool m_bHasRotation; // 0x2c        
        bool m_bHasMovement; // 0x2d        
        [[maybe_unused]] std::uint8_t pad_0x2e[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimBoneDifference, m_name) == 0x0);
    static_assert(offsetof(CAnimBoneDifference, m_parent) == 0x10);
    static_assert(offsetof(CAnimBoneDifference, m_posError) == 0x20);
    static_assert(offsetof(CAnimBoneDifference, m_bHasRotation) == 0x2c);
    static_assert(offsetof(CAnimBoneDifference, m_bHasMovement) == 0x2d);
    
    static_assert(sizeof(CAnimBoneDifference) == 0x30);
};
