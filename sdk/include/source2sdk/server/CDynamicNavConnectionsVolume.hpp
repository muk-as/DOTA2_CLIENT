#pragma once
#include "source2sdk/server/CTriggerMultiple.hpp"
#include "source2sdk/server/DynamicVolumeDef_t.hpp"
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
    // Size: 0x9d0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CDynamicNavConnectionsVolume : public server::CTriggerMultiple
    {
    public:
        CUtlSymbolLarge m_iszConnectionTarget; // 0x9a8        
        // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::DynamicVolumeDef_t> m_vecConnections;
        char m_vecConnections[0x18]; // 0x9b0        
        bool m_bConnectionsEnabled; // 0x9c8        
        [[maybe_unused]] std::uint8_t pad_0x9c9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDynamicNavConnectionsVolume because it is not a standard-layout class
    static_assert(sizeof(CDynamicNavConnectionsVolume) == 0x9d0);
};
