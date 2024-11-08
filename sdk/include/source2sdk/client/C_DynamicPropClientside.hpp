#pragma once
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb08
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class C_DynamicPropClientside : public client::C_DynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x8]; // 0xaf8
        bool m_bSetupMaterialProxy; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb01[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DynamicPropClientside because it is not a standard-layout class
    static_assert(sizeof(C_DynamicPropClientside) == 0xb08);
};
