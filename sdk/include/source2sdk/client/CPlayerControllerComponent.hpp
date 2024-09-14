#pragma once
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    #pragma pack(push, 1)
    class CPlayerControllerComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x30[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPlayerControllerComponent, __m_pChainEntity) == 0x8);
    
    static_assert(sizeof(CPlayerControllerComponent) == 0x40);
};
