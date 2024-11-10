#pragma once
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa88
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTAPropCustomTexture : public server::CDynamicProp
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_unTeamID; // 0xa80        
        [[maybe_unused]] std::uint8_t pad_0xa84[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPropCustomTexture because it is not a standard-layout class
    static_assert(sizeof(CDOTAPropCustomTexture) == 0xa88);
};
