#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x4e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPathCorner : public server::CPointEntity
    {
    public:
        float m_flWait; // 0x4b8        
        float m_flRadius; // 0x4bc        
        entity2::CEntityIOOutput m_OnPass; // 0x4c0        
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetNextPathCorner; // 0x0
        // void InputInPass; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathCorner because it is not a standard-layout class
    static_assert(sizeof(CPathCorner) == 0x4e8);
};
