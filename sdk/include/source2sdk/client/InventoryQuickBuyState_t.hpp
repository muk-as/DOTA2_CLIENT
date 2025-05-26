#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/QuickBuySlot_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xd8
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "QuickBuySlot_t m_vecItemSlots"
        // static metadata: MNetworkVarNames "int m_nTotalSlotCountIncludingOverflow"
        #pragma pack(push, 1)
        struct InventoryQuickBuyState_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // m_vecItemSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::QuickBuySlot_t> m_vecItemSlots;
            char m_vecItemSlots[0x68]; // 0x8            
            // metadata: MNetworkEnable
            std::int32_t m_nTotalSlotCountIncludingOverflow; // 0x70            
            uint8_t _pad0074[0x4]; // 0x74
            source2sdk::client::QuickBuySlot_t m_stickyItemSlot; // 0x78            
            std::int32_t m_nPrevPurchasable; // 0xd0            
            uint8_t _pad00d4[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::InventoryQuickBuyState_t, m_vecItemSlots) == 0x8);
        static_assert(offsetof(source2sdk::client::InventoryQuickBuyState_t, m_nTotalSlotCountIncludingOverflow) == 0x70);
        static_assert(offsetof(source2sdk::client::InventoryQuickBuyState_t, m_stickyItemSlot) == 0x78);
        static_assert(offsetof(source2sdk::client::InventoryQuickBuyState_t, m_nPrevPurchasable) == 0xd0);
        
        static_assert(sizeof(source2sdk::client::InventoryQuickBuyState_t) == 0xd8);
    };
};
