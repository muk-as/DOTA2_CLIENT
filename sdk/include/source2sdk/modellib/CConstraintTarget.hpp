#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CConstraintTarget
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x20]; // 0x0
        Quaternion m_qOffset; // 0x20        
        Vector m_vOffset; // 0x30        
        uint32_t m_nBoneHash; // 0x3c        
        CUtlString m_sName; // 0x40        
        float m_flWeight; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0xd]; // 0x4c
        bool m_bIsAttachment; // 0x59        
        [[maybe_unused]] std::uint8_t pad_0x5a[0x6];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CConstraintTarget, m_qOffset) == 0x20);
    static_assert(offsetof(CConstraintTarget, m_vOffset) == 0x30);
    static_assert(offsetof(CConstraintTarget, m_nBoneHash) == 0x3c);
    static_assert(offsetof(CConstraintTarget, m_sName) == 0x40);
    static_assert(offsetof(CConstraintTarget, m_flWeight) == 0x48);
    static_assert(offsetof(CConstraintTarget, m_bIsAttachment) == 0x59);
    
    static_assert(sizeof(CConstraintTarget) == 0x60);
};
