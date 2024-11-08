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
    // Size: 0xb00
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTAPropArenaOfBloodWarrior : public client::C_DynamicProp
    {
    public:
        bool m_bDying; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPropArenaOfBloodWarrior because it is not a standard-layout class
    static_assert(sizeof(CDOTAPropArenaOfBloodWarrior) == 0xb00);
};
