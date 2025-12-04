#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/QuickBuySlot_t.hpp"

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
        // static metadata: MNetworkVarNames "QuickBuySlot_t m_vecItemSlots"
        // static metadata: MNetworkVarNames "int m_nTotalSlotCountIncludingOverflow"
        #pragma pack(push, 1)
        struct InventoryQuickBuyState_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecItemSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::QuickBuySlot_t> m_vecItemSlots;
            char m_vecItemSlots[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nTotalSlotCountIncludingOverflow; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::QuickBuySlot_t m_stickyItemSlot; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::InventoryQuickBuyState_t, m_vecItemSlots) == 0x_);
        static_assert(offsetof(source2sdk::server::InventoryQuickBuyState_t, m_nTotalSlotCountIncludingOverflow) == 0x_);
        static_assert(offsetof(source2sdk::server::InventoryQuickBuyState_t, m_stickyItemSlot) == 0x_);
        
        static_assert(sizeof(source2sdk::server::InventoryQuickBuyState_t) == 0x_);
    };
};
