#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDOTA_ReconnectInfo
        {
        public:
            std::uint64_t m_playerSteamId; // 0x0            
            std::int32_t m_iTeam; // 0x8            
            CEntityIndex m_iUnitControlled; // 0xc            
            bool m_bWantsRandomHero; // 0x10            
            uint8_t _pad0011[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_playerSteamId) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_iTeam) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_iUnitControlled) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_bWantsRandomHero) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CDOTA_ReconnectInfo) == 0x18);
    };
};
