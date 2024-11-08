#pragma once
#include "source2sdk/client/SurvivorsPhysicsBodyID_t.hpp"
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
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        client::SurvivorsPhysicsBodyID_t m_unPhysicsBodyID; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x14];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsEntity, m_unPhysicsBodyID) == 0x10);
    
    static_assert(sizeof(CSurvivorsEntity) == 0x28);
};
