#pragma once
#include "source2sdk/client/CCraftworksQuestComponentReward.hpp"
#include "source2sdk/client/CraftworksQuestID_t.hpp"
#include "source2sdk/client/CraftworksQuestType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        client::CraftworksQuestID_t m_unQuestID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x02[0x2]; // 0x2
        client::CraftworksQuestType_t m_type; // 0x4        
        CUtlString m_strLocName; // 0x8        
        CUtlString m_strLocProgress; // 0x10        
        float m_flTurboMultiplier; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        // m_vecRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CCraftworksQuestComponentReward> m_vecRewards;
        char m_vecRewards[0x18]; // 0x20        
        CUtlString m_strTrackedStatName; // 0x38        
        uint32_t m_unStatMaximum; // 0x40        
        bool m_bShowInGameProgressToasts; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0xb];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCraftworksQuestDefinition, m_unQuestID) == 0x0);
    static_assert(offsetof(CCraftworksQuestDefinition, m_type) == 0x4);
    static_assert(offsetof(CCraftworksQuestDefinition, m_strLocName) == 0x8);
    static_assert(offsetof(CCraftworksQuestDefinition, m_strLocProgress) == 0x10);
    static_assert(offsetof(CCraftworksQuestDefinition, m_flTurboMultiplier) == 0x18);
    static_assert(offsetof(CCraftworksQuestDefinition, m_vecRewards) == 0x20);
    static_assert(offsetof(CCraftworksQuestDefinition, m_strTrackedStatName) == 0x38);
    static_assert(offsetof(CCraftworksQuestDefinition, m_unStatMaximum) == 0x40);
    static_assert(offsetof(CCraftworksQuestDefinition, m_bShowInGameProgressToasts) == 0x44);
    
    static_assert(sizeof(CCraftworksQuestDefinition) == 0x50);
};
