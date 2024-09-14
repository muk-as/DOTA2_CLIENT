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
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTAGameEvents : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnDayStarted; // 0x4b8        
        entity2::CEntityIOOutput m_OnNightStarted; // 0x4e0        
        entity2::CEntityIOOutput m_OnRadiantFortDestroyed; // 0x508        
        entity2::CEntityIOOutput m_OnDireFortDestroyed; // 0x530        
        entity2::CEntityIOOutput m_OnGameEnded; // 0x558        
        entity2::CEntityIOOutput m_OnGameStarted; // 0x580        
        
        // Datamap fields:
        // float SetTimeOfDay; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAGameEvents because it is not a standard-layout class
    static_assert(sizeof(CDOTAGameEvents) == 0x5a8);
};
