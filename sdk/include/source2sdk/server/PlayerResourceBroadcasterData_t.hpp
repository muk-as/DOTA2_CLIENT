#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszBroadcasterChannelDescription"
        // static metadata: MNetworkVarNames "string_t m_iszBroadcasterChannelCountryCode"
        // static metadata: MNetworkVarNames "string_t m_iszBroadcasterChannelLanguageCode"
        #pragma pack(push, 1)
        struct PlayerResourceBroadcasterData_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszBroadcasterChannelDescription; // 0x30            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszBroadcasterChannelCountryCode; // 0x38            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszBroadcasterChannelLanguageCode; // 0x40            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PlayerResourceBroadcasterData_t, m_iszBroadcasterChannelDescription) == 0x30);
        static_assert(offsetof(source2sdk::server::PlayerResourceBroadcasterData_t, m_iszBroadcasterChannelCountryCode) == 0x38);
        static_assert(offsetof(source2sdk::server::PlayerResourceBroadcasterData_t, m_iszBroadcasterChannelLanguageCode) == 0x40);
        
        static_assert(sizeof(source2sdk::server::PlayerResourceBroadcasterData_t) == 0x48);
    };
};
