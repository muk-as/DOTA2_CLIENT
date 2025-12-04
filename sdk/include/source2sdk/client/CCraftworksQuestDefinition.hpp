#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCraftworksQuestComponentReward.hpp"
#include "source2sdk/client/CraftworksQuestID_t.hpp"
#include "source2sdk/client/CraftworksQuestType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksQuestDefinition
        {
        public:
            source2sdk::client::CraftworksQuestID_t m_unQuestID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CraftworksQuestType_t m_type; // 0x_            
            CUtlString m_strLocName; // 0x_            
            CUtlString m_strLocProgress; // 0x_            
            float m_flTurboMultiplier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksQuestComponentReward> m_vecRewards;
            char m_vecRewards[0x_]; // 0x_            
            CUtlString m_strTrackedStatName; // 0x_            
            std::uint32_t m_unStatMaximum; // 0x_            
            bool m_bShowInGameProgressToasts; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_unQuestID) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_type) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_strLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_strLocProgress) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_flTurboMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_vecRewards) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_strTrackedStatName) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_unStatMaximum) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_bShowInGameProgressToasts) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCraftworksQuestDefinition) == 0x_);
    };
};
