#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::scenesystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSSDSMsg_ViewTarget
    {
    public:
        CUtlString m_Name; // 0x0        
        uint64_t m_TextureId; // 0x8        
        int32_t m_nWidth; // 0x10        
        int32_t m_nHeight; // 0x14        
        int32_t m_nRequestedWidth; // 0x18        
        int32_t m_nRequestedHeight; // 0x1c        
        int32_t m_nNumMipLevels; // 0x20        
        int32_t m_nDepth; // 0x24        
        int32_t m_nMultisampleNumSamples; // 0x28        
        int32_t m_nFormat; // 0x2c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_Name) == 0x0);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_TextureId) == 0x8);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nWidth) == 0x10);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nHeight) == 0x14);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nRequestedWidth) == 0x18);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nRequestedHeight) == 0x1c);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nNumMipLevels) == 0x20);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nDepth) == 0x24);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nMultisampleNumSamples) == 0x28);
    static_assert(offsetof(CSSDSMsg_ViewTarget, m_nFormat) == 0x2c);
    
    static_assert(sizeof(CSSDSMsg_ViewTarget) == 0x30);
};
