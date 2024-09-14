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
    // Size: 0x18
    // Has Trivial Destructor
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_ReconnectInfo
    {
    public:
        uint64_t m_playerSteamId; // 0x0        
        int32_t m_iTeam; // 0x8        
        CEntityIndex m_iUnitControlled; // 0xc        
        bool m_bWantsRandomHero; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_ReconnectInfo, m_playerSteamId) == 0x0);
    static_assert(offsetof(CDOTA_ReconnectInfo, m_iTeam) == 0x8);
    static_assert(offsetof(CDOTA_ReconnectInfo, m_iUnitControlled) == 0xc);
    static_assert(offsetof(CDOTA_ReconnectInfo, m_bWantsRandomHero) == 0x10);
    
    static_assert(sizeof(CDOTA_ReconnectInfo) == 0x18);
};
