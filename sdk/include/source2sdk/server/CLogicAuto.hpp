#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicAuto : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnMapSpawn; // 0x4b8        
        entity2::CEntityIOOutput m_OnDemoMapSpawn; // 0x4e0        
        entity2::CEntityIOOutput m_OnNewGame; // 0x508        
        entity2::CEntityIOOutput m_OnLoadGame; // 0x530        
        entity2::CEntityIOOutput m_OnMapTransition; // 0x558        
        entity2::CEntityIOOutput m_OnBackgroundMap; // 0x580        
        entity2::CEntityIOOutput m_OnMultiNewMap; // 0x5a8        
        entity2::CEntityIOOutput m_OnMultiNewRound; // 0x5d0        
        entity2::CEntityIOOutput m_OnVREnabled; // 0x5f8        
        entity2::CEntityIOOutput m_OnVRNotEnabled; // 0x620        
        CUtlSymbolLarge m_globalstate; // 0x648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicAuto because it is not a standard-layout class
    static_assert(sizeof(CLogicAuto) == 0x650);
};
