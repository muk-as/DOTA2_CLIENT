#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    #pragma pack(push, 1)
    class C_BaseFlex__Emphasized_Phoneme
    {
    public:
        CUtlString m_sClassName; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x08[0x10]; // 0x8
        float m_flAmount; // 0x18        
        bool m_bRequired; // 0x1c        
        bool m_bBasechecked; // 0x1d        
        bool m_bValid; // 0x1e        
        [[maybe_unused]] std::uint8_t pad_0x1f[0x1];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_BaseFlex__Emphasized_Phoneme, m_sClassName) == 0x0);
    static_assert(offsetof(C_BaseFlex__Emphasized_Phoneme, m_flAmount) == 0x18);
    static_assert(offsetof(C_BaseFlex__Emphasized_Phoneme, m_bRequired) == 0x1c);
    static_assert(offsetof(C_BaseFlex__Emphasized_Phoneme, m_bBasechecked) == 0x1d);
    static_assert(offsetof(C_BaseFlex__Emphasized_Phoneme, m_bValid) == 0x1e);
    
    static_assert(sizeof(C_BaseFlex__Emphasized_Phoneme) == 0x20);
};
