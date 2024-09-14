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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PermModelDataAnimatedMaterialAttribute_t
    {
    public:
        CUtlString m_AttributeName; // 0x0        
        int32_t m_nNumChannels; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PermModelDataAnimatedMaterialAttribute_t, m_AttributeName) == 0x0);
    static_assert(offsetof(PermModelDataAnimatedMaterialAttribute_t, m_nNumChannels) == 0x8);
    
    static_assert(sizeof(PermModelDataAnimatedMaterialAttribute_t) == 0x10);
};
