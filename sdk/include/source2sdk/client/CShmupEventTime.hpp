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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupEventTime
    {
    public:
        float m_flDelay; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_strEventName; // 0x8        
        bool m_bPathFlipped; // 0x10        
        bool m_bInvertColors; // 0x11        
        [[maybe_unused]] std::uint8_t pad_0x12[0x2]; // 0x12
        int32_t m_nCount; // 0x14        
        float m_flRepeatInterval; // 0x18        
        Vector m_vOffset; // 0x1c        
        Vector m_vRepeatOffset; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4]; // 0x34
        // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CShmupEventTime> m_children;
        char m_children[0x18]; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x50[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupEventTime, m_flDelay) == 0x0);
    static_assert(offsetof(CShmupEventTime, m_strEventName) == 0x8);
    static_assert(offsetof(CShmupEventTime, m_bPathFlipped) == 0x10);
    static_assert(offsetof(CShmupEventTime, m_bInvertColors) == 0x11);
    static_assert(offsetof(CShmupEventTime, m_nCount) == 0x14);
    static_assert(offsetof(CShmupEventTime, m_flRepeatInterval) == 0x18);
    static_assert(offsetof(CShmupEventTime, m_vOffset) == 0x1c);
    static_assert(offsetof(CShmupEventTime, m_vRepeatOffset) == 0x28);
    static_assert(offsetof(CShmupEventTime, m_children) == 0x38);
    
    static_assert(sizeof(CShmupEventTime) == 0x60);
};
