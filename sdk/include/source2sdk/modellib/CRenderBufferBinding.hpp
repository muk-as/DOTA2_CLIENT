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
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRenderBufferBinding
    {
    public:
        uint64_t m_hBuffer; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        uint32_t m_nBindOffsetBytes; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRenderBufferBinding, m_hBuffer) == 0x0);
    static_assert(offsetof(CRenderBufferBinding, m_nBindOffsetBytes) == 0x10);
    
    static_assert(sizeof(CRenderBufferBinding) == 0x20);
};
