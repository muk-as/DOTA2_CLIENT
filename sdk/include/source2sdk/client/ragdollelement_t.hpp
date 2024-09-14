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
    // Size: 0x28
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct ragdollelement_t
    {
    public:
        Vector originParentSpace; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x14]; // 0xc
        int32_t parentIndex; // 0x20        
        float m_flRadius; // 0x24        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ragdollelement_t, originParentSpace) == 0x0);
    static_assert(offsetof(ragdollelement_t, parentIndex) == 0x20);
    static_assert(offsetof(ragdollelement_t, m_flRadius) == 0x24);
    
    static_assert(sizeof(ragdollelement_t) == 0x28);
};
