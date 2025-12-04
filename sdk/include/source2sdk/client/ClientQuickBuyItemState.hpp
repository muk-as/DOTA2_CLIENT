#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "short nItemType"
        // static metadata: MNetworkVarNames "bool bPurchasable"
        #pragma pack(push, 1)
        class ClientQuickBuyItemState
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int16_t nItemType; // 0x_            
            // metadata: MNetworkEnable
            bool bPurchasable; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ClientQuickBuyItemState, nItemType) == 0x_);
        static_assert(offsetof(source2sdk::client::ClientQuickBuyItemState, bPurchasable) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ClientQuickBuyItemState) == 0x_);
    };
};
