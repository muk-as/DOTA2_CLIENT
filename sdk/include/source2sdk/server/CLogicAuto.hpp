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
        class CLogicAuto : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMapSpawn; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnDemoMapSpawn; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnNewGame; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnLoadGame; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMapTransition; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnBackgroundMap; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewMap; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewRound; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVREnabled; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnVRNotEnabled; // 0x_            
            CUtlSymbolLarge m_globalstate; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicAuto because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicAuto) == 0x_);
    };
};
