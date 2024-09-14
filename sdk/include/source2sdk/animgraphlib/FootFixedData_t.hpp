#pragma once
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
    // Size: 0x50
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FootFixedData_t
    {
    public:
        VectorAligned m_vToeOffset; // 0x0        
        VectorAligned m_vHeelOffset; // 0x10        
        int32_t m_nTargetBoneIndex; // 0x20        
        int32_t m_nAnkleBoneIndex; // 0x24        
        int32_t m_nIKAnchorBoneIndex; // 0x28        
        int32_t m_ikChainIndex; // 0x2c        
        float m_flMaxIKLength; // 0x30        
        int32_t m_nFootIndex; // 0x34        
        int32_t m_nTagIndex; // 0x38        
        float m_flMaxRotationLeft; // 0x3c        
        float m_flMaxRotationRight; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FootFixedData_t, m_vToeOffset) == 0x0);
    static_assert(offsetof(FootFixedData_t, m_vHeelOffset) == 0x10);
    static_assert(offsetof(FootFixedData_t, m_nTargetBoneIndex) == 0x20);
    static_assert(offsetof(FootFixedData_t, m_nAnkleBoneIndex) == 0x24);
    static_assert(offsetof(FootFixedData_t, m_nIKAnchorBoneIndex) == 0x28);
    static_assert(offsetof(FootFixedData_t, m_ikChainIndex) == 0x2c);
    static_assert(offsetof(FootFixedData_t, m_flMaxIKLength) == 0x30);
    static_assert(offsetof(FootFixedData_t, m_nFootIndex) == 0x34);
    static_assert(offsetof(FootFixedData_t, m_nTagIndex) == 0x38);
    static_assert(offsetof(FootFixedData_t, m_flMaxRotationLeft) == 0x3c);
    static_assert(offsetof(FootFixedData_t, m_flMaxRotationRight) == 0x40);
    
    static_assert(sizeof(FootFixedData_t) == 0x50);
};
