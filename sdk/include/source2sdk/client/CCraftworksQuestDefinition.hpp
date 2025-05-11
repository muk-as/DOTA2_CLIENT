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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksQuestDefinition
        {
        public:
            source2sdk::client::CraftworksQuestID_t m_unQuestID; // 0x0            
            uint8_t _pad0002[0x2]; // 0x2
            source2sdk::client::CraftworksQuestType_t m_type; // 0x4            
            CUtlString m_strLocName; // 0x8            
            CUtlString m_strLocProgress; // 0x10            
            float m_flTurboMultiplier; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            // m_vecRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCraftworksQuestComponentReward> m_vecRewards;
            char m_vecRewards[0x18]; // 0x20            
            CUtlString m_strTrackedStatName; // 0x38            
            std::uint32_t m_unStatMaximum; // 0x40            
            bool m_bShowInGameProgressToasts; // 0x44            
            uint8_t _pad0045[0xb];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_unQuestID) == 0x0);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_type) == 0x4);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_strLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_strLocProgress) == 0x10);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_flTurboMultiplier) == 0x18);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_vecRewards) == 0x20);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_strTrackedStatName) == 0x38);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_unStatMaximum) == 0x40);
        static_assert(offsetof(source2sdk::client::CCraftworksQuestDefinition, m_bShowInGameProgressToasts) == 0x44);
        
        static_assert(sizeof(source2sdk::client::CCraftworksQuestDefinition) == 0x50);
    };
};
