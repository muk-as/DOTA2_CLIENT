#pragma once
#include "source2sdk/rendersystemdx11/VsInputSignatureElement_t.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    #pragma pack(push, 1)
    struct VsInputSignature_t
    {
    public:
        // m_elems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<rendersystemdx11::VsInputSignatureElement_t> m_elems;
        char m_elems[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VsInputSignature_t, m_elems) == 0x0);
    
    static_assert(sizeof(VsInputSignature_t) == 0x18);
};
