#pragma once
#include "source2sdk/client/C_ModelPointEntity.hpp"
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
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_EnvProjectedTexture : public client::C_ModelPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x2e8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_EnvProjectedTexture) == 0xac0);
};
