#pragma once
#include "source2sdk/client/C_DOTA_BinaryObject.hpp"
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
    // Size: 0x920
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_DOTA_MapTree : public client::C_DOTA_BinaryObject
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x808[0x30]; // 0x808
        bool m_bInitialized; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x839[0xe7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_MapTree because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_MapTree) == 0x920);
};
