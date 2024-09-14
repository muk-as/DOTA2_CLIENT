#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBaseDMStart : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_Master; // 0x4b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseDMStart because it is not a standard-layout class
    static_assert(sizeof(CBaseDMStart) == 0x4c0);
};
