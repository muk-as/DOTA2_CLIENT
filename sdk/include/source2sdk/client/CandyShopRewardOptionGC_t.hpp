#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECandyShopRewardOptionType.hpp"
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"

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
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct CandyShopRewardOptionGC_t
        {
        public:
            // metadata: MPropertyDescription "A unique ID for this reward option.  Must match the ID in CandyShopRewardOption_t"
            // game bug: prop with no declared class info (CandyShopRewardOptionID_t)
            char m_unRewardOptionID[0x1]; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyDescription "The maximum number of this reward option to grant. 0 means infinite"
            std::uint32_t m_unRewardOptionMaxCount; // 0x4            
            // metadata: MPropertyDescription "How many candy does it cost for one of these rewards"
            std::uint32_t m_unCandyPrice; // 0x8            
            // metadata: MPropertyDescription "what are the odds that this option will be picked compared to other options"
            std::uint32_t m_unWeight; // 0xc            
            // metadata: MPropertyDescription "how should rewards for this option be generated?"
            source2sdk::client::ECandyShopRewardOptionType m_eOptionType; // 0x10            
            // metadata: MPropertyDescription "For k_eCandyShopRewardOptionType_SingleItem, what is the item def."
            // metadata: MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_SingleItem"
            source2sdk::client::item_definition_index_t m_unSingleItemDef; // 0x14            
            // metadata: MPropertyDescription "For k_eCandyShopRewardOptionType_LootList, what is the loot list to get the reward from."
            // metadata: MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_LootList"
            CUtlString m_sLootList; // 0x18            
            // metadata: MPropertyDescription "For k_eCandyShopRewardOptionType_SingleEventAction, what is the event id for the action."
            // metadata: MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_SingleEventAction && m_eOptionType != k_eCandyShopRewardOptionType_EventPoints"
            source2sdk::client::EEvent m_eEvent; // 0x20            
            // metadata: MPropertyDescription "For k_eCandyShopRewardOptionType_SingleEventAction, what is the action id for the action."
            // metadata: MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_SingleEventAction"
            std::uint32_t m_unEventActionID; // 0x24            
            // metadata: MPropertyDescription "For k_eCandyShopRewardOptionType_EventPoints, what is the amount of event points."
            // metadata: MPropertySuppressExpr "m_eOptionType != k_eCandyShopRewardOptionType_EventPoints"
            std::uint32_t m_unEventPoints; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_unRewardOptionID) == 0x0);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_unRewardOptionMaxCount) == 0x4);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_unCandyPrice) == 0x8);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_unWeight) == 0xc);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_eOptionType) == 0x10);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_unSingleItemDef) == 0x14);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_sLootList) == 0x18);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_eEvent) == 0x20);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_unEventActionID) == 0x24);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOptionGC_t, m_unEventPoints) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CandyShopRewardOptionGC_t) == 0x30);
    };
};
