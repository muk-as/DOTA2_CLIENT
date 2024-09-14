#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
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
    class CLogicGameEvent : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_iszEventName; // 0x4b8        
        
        // Datamap fields:
        // void InputFireEvent; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicGameEvent because it is not a standard-layout class
    static_assert(sizeof(CLogicGameEvent) == 0x4c0);
};
