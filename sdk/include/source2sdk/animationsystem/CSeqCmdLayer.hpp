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
    // Size: 0x18
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqCmdLayer
    {
    public:
        int16_t m_cmd; // 0x0        
        int16_t m_nLocalReference; // 0x2        
        int16_t m_nLocalBonemask; // 0x4        
        int16_t m_nDstResult; // 0x6        
        int16_t m_nSrcResult; // 0x8        
        bool m_bSpline; // 0xa        
        [[maybe_unused]] std::uint8_t pad_0x0b[0x1]; // 0xb
        float m_flVar1; // 0xc        
        float m_flVar2; // 0x10        
        int16_t m_nLineNumber; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqCmdLayer, m_cmd) == 0x0);
    static_assert(offsetof(CSeqCmdLayer, m_nLocalReference) == 0x2);
    static_assert(offsetof(CSeqCmdLayer, m_nLocalBonemask) == 0x4);
    static_assert(offsetof(CSeqCmdLayer, m_nDstResult) == 0x6);
    static_assert(offsetof(CSeqCmdLayer, m_nSrcResult) == 0x8);
    static_assert(offsetof(CSeqCmdLayer, m_bSpline) == 0xa);
    static_assert(offsetof(CSeqCmdLayer, m_flVar1) == 0xc);
    static_assert(offsetof(CSeqCmdLayer, m_flVar2) == 0x10);
    static_assert(offsetof(CSeqCmdLayer, m_nLineNumber) == 0x14);
    
    static_assert(sizeof(CSeqCmdLayer) == 0x18);
};
