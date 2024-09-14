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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CAttributeManager__cached_attribute_float_t
    {
    public:
        float flIn; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlSymbolLarge iAttribHook; // 0x8        
        float flOut; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAttributeManager__cached_attribute_float_t, flIn) == 0x0);
    static_assert(offsetof(CAttributeManager__cached_attribute_float_t, iAttribHook) == 0x8);
    static_assert(offsetof(CAttributeManager__cached_attribute_float_t, flOut) == 0x10);
    
    static_assert(sizeof(CAttributeManager__cached_attribute_float_t) == 0x18);
};
