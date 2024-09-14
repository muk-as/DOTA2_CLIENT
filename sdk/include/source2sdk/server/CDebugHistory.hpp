#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x3e94a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDebugHistory : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x3e8040]; // 0x4b8
        int32_t m_nNpcEvents; // 0x3e84f8        
        [[maybe_unused]] std::uint8_t pad_0x3e84fc[0xfa4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDebugHistory because it is not a standard-layout class
    static_assert(sizeof(CDebugHistory) == 0x3e94a0);
};
