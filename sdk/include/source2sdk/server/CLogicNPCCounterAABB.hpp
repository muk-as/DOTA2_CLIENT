#pragma once
#include "source2sdk/server/CLogicNPCCounter.hpp"
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
    // Size: 0x828
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicNPCCounterAABB : public server::CLogicNPCCounter
    {
    public:
        Vector m_vDistanceOuterMins; // 0x7f8        
        Vector m_vDistanceOuterMaxs; // 0x804        
        Vector m_vOuterMins; // 0x810        
        Vector m_vOuterMaxs; // 0x81c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicNPCCounterAABB because it is not a standard-layout class
    static_assert(sizeof(CLogicNPCCounterAABB) == 0x828);
};
