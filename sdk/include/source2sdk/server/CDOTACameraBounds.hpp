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
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecBoundsMin"
    // static metadata: MNetworkVarNames "Vector m_vecBoundsMax"
    #pragma pack(push, 1)
    class CDOTACameraBounds : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vecBoundsMin; // 0x4b8        
        // metadata: MNetworkEnable
        Vector m_vecBoundsMax; // 0x4c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTACameraBounds because it is not a standard-layout class
    static_assert(sizeof(CDOTACameraBounds) == 0x4d0);
};
