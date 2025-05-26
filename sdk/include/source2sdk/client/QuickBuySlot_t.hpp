#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/QuickBuyPurchasable_t.hpp"

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
        // Size: 0x58
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "AbilityID_t m_nAbilityID"
        // static metadata: MNetworkVarNames "int m_nTopLevelItem"
        // static metadata: MNetworkVarNames "AbilityID_t m_nTopLevelItemAbilityID"
        // static metadata: MNetworkVarNames "QuickBuyPurchasable_t m_ePurchasableState"
        // static metadata: MNetworkVarNames "QuickBuyPurchasable_t m_ePurchasableAccumState"
        // static metadata: MNetworkVarNames "bool m_bMarkedForBuy"
        // static metadata: MNetworkVarNames "int m_nParity"
        #pragma pack(push, 1)
        struct QuickBuySlot_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x30            
            // metadata: MNetworkEnable
            std::int32_t m_nTopLevelItem; // 0x34            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_nTopLevelItemAbilityID; // 0x38            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuySlotPurchasableChanged"
            source2sdk::client::QuickBuyPurchasable_t m_ePurchasableState; // 0x3c            
            // metadata: MNetworkEnable
            source2sdk::client::QuickBuyPurchasable_t m_ePurchasableAccumState; // 0x40            
            // metadata: MNetworkEnable
            bool m_bMarkedForBuy; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuySlotParityChanged"
            std::int32_t m_nParity; // 0x48            
            bool m_bSticky; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            source2sdk::client::QuickBuyPurchasable_t m_ePrevPurchasableState; // 0x50            
            bool m_bNewlyActionable; // 0x54            
            bool m_bPurchaseInFlight; // 0x55            
            uint8_t _pad0056[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nAbilityID) == 0x30);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nTopLevelItem) == 0x34);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nTopLevelItemAbilityID) == 0x38);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_ePurchasableState) == 0x3c);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_ePurchasableAccumState) == 0x40);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bMarkedForBuy) == 0x44);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nParity) == 0x48);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bSticky) == 0x4c);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_ePrevPurchasableState) == 0x50);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bNewlyActionable) == 0x54);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bPurchaseInFlight) == 0x55);
        
        static_assert(sizeof(source2sdk::client::QuickBuySlot_t) == 0x58);
    };
};
