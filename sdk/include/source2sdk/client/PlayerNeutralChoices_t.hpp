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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_vecTrinketChoices[25]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_vecEnhancementChoices[25]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_vecSelectedTrinkets[5]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_vecSelectedEnhancements[5]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_vecTimesCrafted[5]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecTrinketChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecEnhancementChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecSelectedTrinkets) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecSelectedEnhancements) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerNeutralChoices_t, m_vecTimesCrafted) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PlayerNeutralChoices_t) == 0x_);
    };
};
