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
        // Size: 0x670
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicAuto : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMapSpawn; // 0x4d8            
            source2sdk::entity2::CEntityIOOutput m_OnDemoMapSpawn; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnNewGame; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnLoadGame; // 0x550            
            source2sdk::entity2::CEntityIOOutput m_OnMapTransition; // 0x578            
            source2sdk::entity2::CEntityIOOutput m_OnBackgroundMap; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewMap; // 0x5c8            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewRound; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_OnVREnabled; // 0x618            
            source2sdk::entity2::CEntityIOOutput m_OnVRNotEnabled; // 0x640            
            CUtlSymbolLarge m_globalstate; // 0x668            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicAuto because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicAuto) == 0x670);
    };
};
