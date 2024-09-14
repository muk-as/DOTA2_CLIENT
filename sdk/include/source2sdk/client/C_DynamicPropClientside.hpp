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
    // Size: 0xac0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DynamicPropClientside : public client::C_DynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xab0[0x8]; // 0xab0
        bool m_bSetupMaterialProxy; // 0xab8        
        [[maybe_unused]] std::uint8_t pad_0xab9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DynamicPropClientside because it is not a standard-layout class
    static_assert(sizeof(C_DynamicPropClientside) == 0xac0);
};
