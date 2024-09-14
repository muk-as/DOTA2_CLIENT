#pragma once
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
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "short nItemType"
    // static metadata: MNetworkVarNames "bool bPurchasable"
    #pragma pack(push, 1)
    class ClientQuickBuyItemState
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        int16_t nItemType; // 0x30        
        // metadata: MNetworkEnable
        bool bPurchasable; // 0x32        
        [[maybe_unused]] std::uint8_t pad_0x33[0x5];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ClientQuickBuyItemState, nItemType) == 0x30);
    static_assert(offsetof(ClientQuickBuyItemState, bPurchasable) == 0x32);
    
    static_assert(sizeof(ClientQuickBuyItemState) == 0x38);
};
