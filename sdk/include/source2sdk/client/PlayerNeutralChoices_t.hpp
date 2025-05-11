#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x110
        // Has VTable
        // Has Trivial Destructor
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "AbilityID_t m_vecTrinketChoices"
        // static metadata: MNetworkVarNames "AbilityID_t m_vecEnhancementChoices"
        // static metadata: MNetworkVarNames "int m_vecSelectedTrinkets"
        // static metadata: MNetworkVarNames "int m_vecSelectedEnhancements"
        // static metadata: MNetworkVarNames "int m_vecTimesCrafted"
        #pragma pack(push, 1)
        struct PlayerNeutralChoices_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_vecTrinketChoices[25]; // 0x8            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_vecEnhancementChoices[25]; // 0x6c            
            // metadata: MNetworkEnable
            std::int32_t m_vecSelectedTrinkets[5]; // 0xd0            
            // metadata: MNetworkEnable
            std::int32_t m_vecSelectedEnhancements[5]; // 0xe4            
            // metadata: MNetworkEnable
            std::int32_t m_vecTimesCrafted[5]; // 0xf8            
            uint8_t _pad010c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecTrinketChoices) == 0x8);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecEnhancementChoices) == 0x6c);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecSelectedTrinkets) == 0xd0);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecSelectedEnhancements) == 0xe4);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecTimesCrafted) == 0xf8);
        
        static_assert(sizeof(source2sdk::client::PlayerNeutralChoices_t) == 0x110);
    };
};
