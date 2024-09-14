#pragma once
#include "source2sdk/client/PeriodicResourceID_t.hpp"
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
    // Size: 0x40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "PeriodicResourceID_t m_unPeriodicResourceID"
    // static metadata: MNetworkVarNames "uint32 m_unPeriodicResourceMax"
    // static metadata: MNetworkVarNames "uint32 m_unPeriodicResourceRemaining"
    #pragma pack(push, 1)
    struct PlayerResourcePlayerPeriodicResourceData_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        client::PeriodicResourceID_t m_unPeriodicResourceID; // 0x30        
        // metadata: MNetworkEnable
        uint32_t m_unPeriodicResourceMax; // 0x34        
        // metadata: MNetworkEnable
        uint32_t m_unPeriodicResourceRemaining; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceID) == 0x30);
    static_assert(offsetof(PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceMax) == 0x34);
    static_assert(offsetof(PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceRemaining) == 0x38);
    
    static_assert(sizeof(PlayerResourcePlayerPeriodicResourceData_t) == 0x40);
};
