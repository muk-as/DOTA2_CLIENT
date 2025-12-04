#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CavernCrawlItemType_t.hpp"
#include "source2sdk/client/CavernCrawlRewardType_t.hpp"
#include "source2sdk/client/style_index_t.hpp"

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
        #pragma pack(push, 1)
        struct CavernCrawlReward_t
        {
        public:
            std::uint32_t m_nActionID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_rewardName; // 0x_            
            source2sdk::client::CavernCrawlItemType_t m_nItemType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_locString; // 0x_            
            CUtlString m_tooltipString; // 0x_            
            CUtlString m_image; // 0x_            
            source2sdk::client::CavernCrawlRewardType_t m_nStyleUnlockRewardType; // 0x_            
            std::uint8_t m_nPriority; // 0x_            
            source2sdk::client::style_index_t m_nBundleItemDefStyle; // 0x_            
            bool m_bImageIsBundleItemDef; // 0x_            
            bool m_bCannotBeReplacedWithUltraRareReward; // 0x_            
            bool m_bIsUltraRareReward; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_nActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_rewardName) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_nItemType) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_locString) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_tooltipString) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_image) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_nStyleUnlockRewardType) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_nPriority) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_nBundleItemDefStyle) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_bImageIsBundleItemDef) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_bCannotBeReplacedWithUltraRareReward) == 0x_);
        static_assert(offsetof(source2sdk::client::CavernCrawlReward_t, m_bIsUltraRareReward) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CavernCrawlReward_t) == 0x_);
    };
};
