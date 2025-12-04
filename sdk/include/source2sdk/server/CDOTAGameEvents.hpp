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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTAGameEvents : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnDayStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnNightStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnRadiantFortDestroyed; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnDireFortDestroyed; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnGameEnded; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnGameStarted; // 0x_            
            
            // Datamap fields:
            // float SetTimeOfDay; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAGameEvents because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAGameEvents) == 0x_);
    };
};
