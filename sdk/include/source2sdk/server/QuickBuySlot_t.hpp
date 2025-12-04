#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/QuickBuyPurchasable_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTopLevelItem; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t m_nTopLevelItemAbilityID; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuySlotPurchasableChanged"
            source2sdk::client::QuickBuyPurchasable_t m_ePurchasableState; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::QuickBuyPurchasable_t m_ePurchasableAccumState; // 0x_            
            // metadata: MNetworkEnable
            bool m_bMarkedForBuy; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQuickBuySlotParityChanged"
            std::int32_t m_nParity; // 0x_            
            bool m_bSticky; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nItemIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_nAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_nTopLevelItem) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_nTopLevelItemAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_ePurchasableState) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_ePurchasableAccumState) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_bMarkedForBuy) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_nParity) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_bSticky) == 0x_);
        static_assert(offsetof(source2sdk::server::QuickBuySlot_t, m_nItemIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::server::QuickBuySlot_t) == 0x_);
    };
};
