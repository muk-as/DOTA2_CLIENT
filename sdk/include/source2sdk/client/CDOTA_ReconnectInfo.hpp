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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDOTA_ReconnectInfo
        {
        public:
            std::uint64_t m_playerSteamId; // 0x_            
            std::int32_t m_iTeam; // 0x_            
            CEntityIndex m_iUnitControlled; // 0x_            
            bool m_bWantsRandomHero; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_playerSteamId) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_iTeam) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_iUnitControlled) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_ReconnectInfo, m_bWantsRandomHero) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTA_ReconnectInfo) == 0x_);
    };
};
