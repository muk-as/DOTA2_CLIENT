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
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszBroadcasterChannelDescription"
        // static metadata: MNetworkVarNames "string_t m_iszBroadcasterChannelCountryCode"
        // static metadata: MNetworkVarNames "string_t m_iszBroadcasterChannelLanguageCode"
        #pragma pack(push, 1)
        struct PlayerResourceBroadcasterData_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszBroadcasterChannelDescription; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszBroadcasterChannelCountryCode; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszBroadcasterChannelLanguageCode; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerResourceBroadcasterData_t, m_iszBroadcasterChannelDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourceBroadcasterData_t, m_iszBroadcasterChannelCountryCode) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourceBroadcasterData_t, m_iszBroadcasterChannelLanguageCode) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PlayerResourceBroadcasterData_t) == 0x_);
    };
};
