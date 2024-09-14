#pragma once
#include "source2sdk/server/CServerOnlyEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CInfoData : public server::CServerOnlyEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x398];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CInfoData) == 0x850);
};
