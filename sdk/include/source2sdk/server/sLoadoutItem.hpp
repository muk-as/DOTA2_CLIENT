#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class sLoadoutItem
    {
    public:
        CUtlSymbolLarge name; // 0x0        
        int32_t iFlags; // 0x8        
        client::AbilityID_t iAbilityID; // 0xc        
        bool bPurchased; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sLoadoutItem, name) == 0x0);
    static_assert(offsetof(sLoadoutItem, iFlags) == 0x8);
    static_assert(offsetof(sLoadoutItem, iAbilityID) == 0xc);
    static_assert(offsetof(sLoadoutItem, bPurchased) == 0x10);
    
    static_assert(sizeof(sLoadoutItem) == 0x18);
};
