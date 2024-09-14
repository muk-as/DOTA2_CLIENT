#pragma once
#include "source2sdk/server/CEconEntity.hpp"
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
    // Size: 0x970
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CEconWearable : public server::CEconEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x968[0x8];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CEconWearable) == 0x970);
};
