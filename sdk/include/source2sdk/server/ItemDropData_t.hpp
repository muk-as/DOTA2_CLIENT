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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    #pragma pack(push, 1)
    struct ItemDropData_t
    {
    public:
        // sItemNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> sItemNames;
        char sItemNames[0x18]; // 0x0        
        float flChance; // 0x18        
        int32_t nReqLevel; // 0x1c        
        bool bMustBeChampion; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ItemDropData_t, sItemNames) == 0x0);
    static_assert(offsetof(ItemDropData_t, flChance) == 0x18);
    static_assert(offsetof(ItemDropData_t, nReqLevel) == 0x1c);
    static_assert(offsetof(ItemDropData_t, bMustBeChampion) == 0x20);
    
    static_assert(sizeof(ItemDropData_t) == 0x28);
};
