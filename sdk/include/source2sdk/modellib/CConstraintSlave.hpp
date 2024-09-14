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
    class CConstraintSlave
    {
    public:
        Quaternion m_qBaseOrientation; // 0x0        
        Vector m_vBasePosition; // 0x10        
        uint32_t m_nBoneHash; // 0x1c        
        float m_flWeight; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        CUtlString m_sName; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x30[0x30];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CConstraintSlave, m_qBaseOrientation) == 0x0);
    static_assert(offsetof(CConstraintSlave, m_vBasePosition) == 0x10);
    static_assert(offsetof(CConstraintSlave, m_nBoneHash) == 0x1c);
    static_assert(offsetof(CConstraintSlave, m_flWeight) == 0x20);
    static_assert(offsetof(CConstraintSlave, m_sName) == 0x28);
    
    static_assert(sizeof(CConstraintSlave) == 0x60);
};
