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
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "CUtlString m_pathString"
    #pragma pack(push, 1)
    class CPathSimple : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x50]; // 0x4b8
        // metadata: MNetworkEnable
        CUtlString m_pathString; // 0x508        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
    static_assert(sizeof(CPathSimple) == 0x510);
};
