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
    // Size: 0xa60
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bUseAvatar"
    #pragma pack(push, 1)
    class CDOTAPropConsumableBanner : public server::CDynamicProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bUseAvatar; // 0xa58        
        [[maybe_unused]] std::uint8_t pad_0xa59[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPropConsumableBanner because it is not a standard-layout class
    static_assert(sizeof(CDOTAPropConsumableBanner) == 0xa60);
};
