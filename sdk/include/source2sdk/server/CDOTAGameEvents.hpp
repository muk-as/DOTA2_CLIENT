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
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTAGameEvents : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnDayStarted; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_OnNightStarted; // 0x508            
            source2sdk::entity2::CEntityIOOutput m_OnRadiantFortDestroyed; // 0x530            
            source2sdk::entity2::CEntityIOOutput m_OnDireFortDestroyed; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_OnGameEnded; // 0x580            
            source2sdk::entity2::CEntityIOOutput m_OnGameStarted; // 0x5a8            
            
            // Datamap fields:
            // float SetTimeOfDay; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAGameEvents because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAGameEvents) == 0x5d0);
    };
};
