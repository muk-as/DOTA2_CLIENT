#pragma once
#include "source2sdk/networksystem/ChangeAccessorFieldPathIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x28
    #pragma pack(push, 1)
    class CNetworkVarChainer
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x20]; // 0x0
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        networksystem::ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNetworkVarChainer, m_PathIndex) == 0x20);
    
    static_assert(sizeof(CNetworkVarChainer) == 0x28);
};
