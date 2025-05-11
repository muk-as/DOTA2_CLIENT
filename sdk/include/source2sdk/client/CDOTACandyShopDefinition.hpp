#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CandyShopCandyType_t.hpp"
#include "source2sdk/client/CandyShopRewardOption_t.hpp"
#include "source2sdk/client/CandyShopRewardSlot_t.hpp"
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
        // Size: 0xe8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTACandyShopDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "unique integer ID of this candy shop"
            // game bug: prop with no declared class info (CandyShopID_t)
            char m_unCandyShopID[0x1]; // 0x8            
            uint8_t _pad0009[0x7]; // 0x9
            // metadata: MPropertyDescription "localization name of the candy shop"
            CUtlString m_sLocName; // 0x10            
            // metadata: MPropertyDescription "default inventory size"
            std::uint32_t m_unDefaultInventorySize; // 0x18            
            // metadata: MPropertyDescription "maximum inventory size after all expansions are unlocked"
            std::uint32_t m_unMaximumInventorySize; // 0x1c            
            // metadata: MPropertyDescription "default reroll charges"
            std::uint32_t m_unDefaultRerollCharges; // 0x20            
            // metadata: MPropertyDescription "default maximum reroll charges allowed to save up (0 = unlimited)"
            std::uint32_t m_unDefaultMaxRerollCharges; // 0x24            
            // metadata: MPropertyDescription "candy bag item def"
            source2sdk::client::item_definition_index_t m_unCandyBagItemDef; // 0x28            
            // metadata: MPropertyDescription "Maximum number of input or output candies for fixed exchange recipes."
            std::uint8_t m_unFixedExchangeRecipeMaxCandies; // 0x2c            
            uint8_t _pad002d[0x3]; // 0x2d
            // metadata: MPropertyDescription "Start date for the fixed exchange recipes."
            std::uint32_t m_unFixedExchangeRecipeStartDate; // 0x30            
            // metadata: MPropertyDescription "Frequency of updating fixed exchange recipes in seconds."
            std::uint32_t m_unFixedExchangeRecipeUpdateRateInSeconds; // 0x34            
            // metadata: MPropertyDescription "Default number of fixed exchange recipes."
            std::uint8_t m_unFixedExchangeRecipeDefaultCount; // 0x38            
            // metadata: MPropertyDescription "Maximum number of fixed exchange recipes."
            std::uint8_t m_unFixedExchangeRecipeMaximumCount; // 0x39            
            // metadata: MPropertyDescription "Input candy count for variable exchange recipe"
            std::uint8_t m_unVariableExchangeInputCandyCount; // 0x3a            
            // metadata: MPropertyDescription "Output candy count for variable exchange recipe"
            std::uint8_t m_unVariableExchangeOutputCandyCount; // 0x3b            
            // metadata: MPropertyDescription "After this event expires, you can no longer interact with this candy shop."
            source2sdk::client::EEvent m_eExpireEvent; // 0x3c            
            // metadata: MPropertyDescription "Number of reward slots that are available by default"
            std::uint8_t m_unRewardSlotsDefaultCount; // 0x40            
            uint8_t _pad0041[0x7]; // 0x41
            // metadata: MPropertyDescription "Loot list which contains attributes to add to all items received from this shop."
            CUtlString m_sAttrLootList; // 0x48            
            // metadata: MPropertyDescription "Event to fire to view the page for this candy shop."
            CUtlString m_sViewPageEvent; // 0x50            
            // m_vecCandyTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CandyShopCandyType_t> m_vecCandyTypes;
            char m_vecCandyTypes[0x18]; // 0x58            
            // m_vecRewardSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CandyShopRewardSlot_t> m_vecRewardSlots;
            char m_vecRewardSlots[0x18]; // 0x70            
            // m_vecDefaultRewardOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CandyShopRewardOption_t> m_vecDefaultRewardOptions;
            char m_vecDefaultRewardOptions[0x18]; // 0x88            
            uint8_t _pad00a0[0x48];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unCandyShopID) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_sLocName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unDefaultInventorySize) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unMaximumInventorySize) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unDefaultRerollCharges) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unDefaultMaxRerollCharges) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unCandyBagItemDef) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unFixedExchangeRecipeMaxCandies) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unFixedExchangeRecipeStartDate) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unFixedExchangeRecipeUpdateRateInSeconds) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unFixedExchangeRecipeDefaultCount) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unFixedExchangeRecipeMaximumCount) == 0x39);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unVariableExchangeInputCandyCount) == 0x3a);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unVariableExchangeOutputCandyCount) == 0x3b);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_eExpireEvent) == 0x3c);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_unRewardSlotsDefaultCount) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_sAttrLootList) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_sViewPageEvent) == 0x50);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_vecCandyTypes) == 0x58);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_vecRewardSlots) == 0x70);
        static_assert(offsetof(source2sdk::client::CDOTACandyShopDefinition, m_vecDefaultRewardOptions) == 0x88);
        
        static_assert(sizeof(source2sdk::client::CDOTACandyShopDefinition) == 0xe8);
    };
};
