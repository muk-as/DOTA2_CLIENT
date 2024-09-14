#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc4
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct VsInputSignatureElement_t
    {
    public:
        char m_pName[64]; // 0x0        
        char m_pSemantic[64]; // 0x40        
        char m_pD3DSemanticName[64]; // 0x80        
        int32_t m_nD3DSemanticIndex; // 0xc0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VsInputSignatureElement_t, m_pName) == 0x0);
    static_assert(offsetof(VsInputSignatureElement_t, m_pSemantic) == 0x40);
    static_assert(offsetof(VsInputSignatureElement_t, m_pD3DSemanticName) == 0x80);
    static_assert(offsetof(VsInputSignatureElement_t, m_nD3DSemanticIndex) == 0xc0);
    
    static_assert(sizeof(VsInputSignatureElement_t) == 0xc4);
};
