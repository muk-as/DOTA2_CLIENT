#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTAGameEvents : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnDayStarted; // 0x4d8            
            source2sdk::entity2::CEntityIOOutput m_OnNightStarted; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnRadiantFortDestroyed; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnDireFortDestroyed; // 0x550            
            source2sdk::entity2::CEntityIOOutput m_OnGameEnded; // 0x578            
            source2sdk::entity2::CEntityIOOutput m_OnGameStarted; // 0x5a0            
            
            // Datamap fields:
            // float SetTimeOfDay; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAGameEvents because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAGameEvents) == 0x5c8);
    };
};
