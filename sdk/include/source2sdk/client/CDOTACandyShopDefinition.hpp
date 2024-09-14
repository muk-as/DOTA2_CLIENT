#pragma once
#include "source2sdk/client/CandyShopCandyType_t.hpp"
#include "source2sdk/client/CandyShopRewardOption_t.hpp"
#include "source2sdk/client/CandyShopRewardSlot_t.hpp"
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
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
    // Size: 0xe8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTACandyShopDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "unique integer ID of this candy shop"
        // game bug: prop with no declared class info (CandyShopID_t)
        std::uint8_t m_unCandyShopID[1]; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7]; // 0x9
        // metadata: MPropertyDescription "localization name of the candy shop"
        CUtlString m_sLocName; // 0x10        
        // metadata: MPropertyDescription "default inventory size"
        uint32_t m_unDefaultInventorySize; // 0x18        
        // metadata: MPropertyDescription "maximum inventory size after all expansions are unlocked"
        uint32_t m_unMaximumInventorySize; // 0x1c        
        // metadata: MPropertyDescription "default reroll charges"
        uint32_t m_unDefaultRerollCharges; // 0x20        
        // metadata: MPropertyDescription "default maximum reroll charges allowed to save up (0 = unlimited)"
        uint32_t m_unDefaultMaxRerollCharges; // 0x24        
        // metadata: MPropertyDescription "candy bag item def"
        client::item_definition_index_t m_unCandyBagItemDef; // 0x28        
        // metadata: MPropertyDescription "Maximum number of input or output candies for fixed exchange recipes."
        uint8_t m_unFixedExchangeRecipeMaxCandies; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3]; // 0x2d
        // metadata: MPropertyDescription "Start date for the fixed exchange recipes."
        uint32_t m_unFixedExchangeRecipeStartDate; // 0x30        
        // metadata: MPropertyDescription "Frequency of updating fixed exchange recipes in seconds."
        uint32_t m_unFixedExchangeRecipeUpdateRateInSeconds; // 0x34        
        // metadata: MPropertyDescription "Default number of fixed exchange recipes."
        uint8_t m_unFixedExchangeRecipeDefaultCount; // 0x38        
        // metadata: MPropertyDescription "Maximum number of fixed exchange recipes."
        uint8_t m_unFixedExchangeRecipeMaximumCount; // 0x39        
        // metadata: MPropertyDescription "Input candy count for variable exchange recipe"
        uint8_t m_unVariableExchangeInputCandyCount; // 0x3a        
        // metadata: MPropertyDescription "Output candy count for variable exchange recipe"
        uint8_t m_unVariableExchangeOutputCandyCount; // 0x3b        
        // metadata: MPropertyDescription "After this event expires, you can no longer interact with this candy shop."
        client::EEvent m_eExpireEvent; // 0x3c        
        // metadata: MPropertyDescription "Number of reward slots that are available by default"
        uint8_t m_unRewardSlotsDefaultCount; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x7]; // 0x41
        // metadata: MPropertyDescription "Loot list which contains attributes to add to all items received from this shop."
        CUtlString m_sAttrLootList; // 0x48        
        // metadata: MPropertyDescription "Event to fire to view the page for this candy shop."
        CUtlString m_sViewPageEvent; // 0x50        
        // m_vecCandyTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CandyShopCandyType_t> m_vecCandyTypes;
        char m_vecCandyTypes[0x18]; // 0x58        
        // m_vecRewardSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CandyShopRewardSlot_t> m_vecRewardSlots;
        char m_vecRewardSlots[0x18]; // 0x70        
        // m_vecDefaultRewardOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CandyShopRewardOption_t> m_vecDefaultRewardOptions;
        char m_vecDefaultRewardOptions[0x18]; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0xa0[0x48];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTACandyShopDefinition, m_unCandyShopID) == 0x8);
    static_assert(offsetof(CDOTACandyShopDefinition, m_sLocName) == 0x10);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unDefaultInventorySize) == 0x18);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unMaximumInventorySize) == 0x1c);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unDefaultRerollCharges) == 0x20);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unDefaultMaxRerollCharges) == 0x24);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unCandyBagItemDef) == 0x28);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unFixedExchangeRecipeMaxCandies) == 0x2c);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unFixedExchangeRecipeStartDate) == 0x30);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unFixedExchangeRecipeUpdateRateInSeconds) == 0x34);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unFixedExchangeRecipeDefaultCount) == 0x38);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unFixedExchangeRecipeMaximumCount) == 0x39);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unVariableExchangeInputCandyCount) == 0x3a);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unVariableExchangeOutputCandyCount) == 0x3b);
    static_assert(offsetof(CDOTACandyShopDefinition, m_eExpireEvent) == 0x3c);
    static_assert(offsetof(CDOTACandyShopDefinition, m_unRewardSlotsDefaultCount) == 0x40);
    static_assert(offsetof(CDOTACandyShopDefinition, m_sAttrLootList) == 0x48);
    static_assert(offsetof(CDOTACandyShopDefinition, m_sViewPageEvent) == 0x50);
    static_assert(offsetof(CDOTACandyShopDefinition, m_vecCandyTypes) == 0x58);
    static_assert(offsetof(CDOTACandyShopDefinition, m_vecRewardSlots) == 0x70);
    static_assert(offsetof(CDOTACandyShopDefinition, m_vecDefaultRewardOptions) == 0x88);
    
    static_assert(sizeof(CDOTACandyShopDefinition) == 0xe8);
};
