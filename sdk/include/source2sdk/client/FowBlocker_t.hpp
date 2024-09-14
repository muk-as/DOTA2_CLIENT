#pragma once
#include "source2sdk/client/FowBlockerShape_t.hpp"
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
    // Size: 0x48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flMinX"
    // static metadata: MNetworkVarNames "float m_flMaxX"
    // static metadata: MNetworkVarNames "float m_flMinY"
    // static metadata: MNetworkVarNames "float m_flMaxY"
    // static metadata: MNetworkVarNames "FowBlockerShape_t m_fowBlockerShape"
    // static metadata: MNetworkVarNames "bool m_bClearRegion"
    #pragma pack(push, 1)
    struct FowBlocker_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        float m_flMinX; // 0x30        
        // metadata: MNetworkEnable
        float m_flMaxX; // 0x34        
        // metadata: MNetworkEnable
        float m_flMinY; // 0x38        
        // metadata: MNetworkEnable
        float m_flMaxY; // 0x3c        
        // metadata: MNetworkEnable
        client::FowBlockerShape_t m_fowBlockerShape; // 0x40        
        // metadata: MNetworkEnable
        bool m_bClearRegion; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FowBlocker_t, m_flMinX) == 0x30);
    static_assert(offsetof(FowBlocker_t, m_flMaxX) == 0x34);
    static_assert(offsetof(FowBlocker_t, m_flMinY) == 0x38);
    static_assert(offsetof(FowBlocker_t, m_flMaxY) == 0x3c);
    static_assert(offsetof(FowBlocker_t, m_fowBlockerShape) == 0x40);
    static_assert(offsetof(FowBlocker_t, m_bClearRegion) == 0x44);
    
    static_assert(sizeof(FowBlocker_t) == 0x48);
};
