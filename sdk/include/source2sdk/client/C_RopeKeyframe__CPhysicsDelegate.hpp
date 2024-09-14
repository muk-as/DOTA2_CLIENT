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
    class C_RopeKeyframe;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class C_RopeKeyframe__CPhysicsDelegate
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::C_RopeKeyframe* m_pKeyframe; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_RopeKeyframe__CPhysicsDelegate, m_pKeyframe) == 0x8);
    
    static_assert(sizeof(C_RopeKeyframe__CPhysicsDelegate) == 0x10);
};
