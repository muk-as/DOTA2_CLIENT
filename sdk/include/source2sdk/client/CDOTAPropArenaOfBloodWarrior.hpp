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
    // Size: 0xab8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTAPropArenaOfBloodWarrior : public client::C_DynamicProp
    {
    public:
        bool m_bDying; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPropArenaOfBloodWarrior because it is not a standard-layout class
    static_assert(sizeof(CDOTAPropArenaOfBloodWarrior) == 0xab8);
};
