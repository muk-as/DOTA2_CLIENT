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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventPostDataUpdate_t
    {
    public:
        int32_t m_nCount; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EventPostDataUpdate_t, m_nCount) == 0x0);
    
    static_assert(sizeof(EventPostDataUpdate_t) == 0x10);
};
