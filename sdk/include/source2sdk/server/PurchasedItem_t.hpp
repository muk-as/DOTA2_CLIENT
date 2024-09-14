#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct PurchasedItem_t
    {
    public:
        int32_t nItemID; // 0x0        
        float flPurchaseTime; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PurchasedItem_t, nItemID) == 0x0);
    static_assert(offsetof(PurchasedItem_t, flPurchaseTime) == 0x4);
    
    static_assert(sizeof(PurchasedItem_t) == 0x8);
};
