#pragma once
#include "source2sdk/client/CavernCrawlItemType_t.hpp"
#include "source2sdk/client/CavernCrawlRewardType_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
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
    // Size: 0x38
    #pragma pack(push, 1)
    struct CavernCrawlReward_t
    {
    public:
        uint32_t m_nActionID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_rewardName; // 0x8        
        client::CavernCrawlItemType_t m_nItemType; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x7]; // 0x11
        CUtlString m_locString; // 0x18        
        CUtlString m_tooltipString; // 0x20        
        CUtlString m_image; // 0x28        
        client::CavernCrawlRewardType_t m_nStyleUnlockRewardType; // 0x30        
        uint8_t m_nPriority; // 0x31        
        client::style_index_t m_nBundleItemDefStyle; // 0x32        
        bool m_bImageIsBundleItemDef; // 0x33        
        bool m_bCannotBeReplacedWithUltraRareReward; // 0x34        
        bool m_bIsUltraRareReward; // 0x35        
        [[maybe_unused]] std::uint8_t pad_0x36[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CavernCrawlReward_t, m_nActionID) == 0x0);
    static_assert(offsetof(CavernCrawlReward_t, m_rewardName) == 0x8);
    static_assert(offsetof(CavernCrawlReward_t, m_nItemType) == 0x10);
    static_assert(offsetof(CavernCrawlReward_t, m_locString) == 0x18);
    static_assert(offsetof(CavernCrawlReward_t, m_tooltipString) == 0x20);
    static_assert(offsetof(CavernCrawlReward_t, m_image) == 0x28);
    static_assert(offsetof(CavernCrawlReward_t, m_nStyleUnlockRewardType) == 0x30);
    static_assert(offsetof(CavernCrawlReward_t, m_nPriority) == 0x31);
    static_assert(offsetof(CavernCrawlReward_t, m_nBundleItemDefStyle) == 0x32);
    static_assert(offsetof(CavernCrawlReward_t, m_bImageIsBundleItemDef) == 0x33);
    static_assert(offsetof(CavernCrawlReward_t, m_bCannotBeReplacedWithUltraRareReward) == 0x34);
    static_assert(offsetof(CavernCrawlReward_t, m_bIsUltraRareReward) == 0x35);
    
    static_assert(sizeof(CavernCrawlReward_t) == 0x38);
};
