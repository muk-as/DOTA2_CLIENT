#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoSpawnGroupLoadUnload : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4d8            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x550            
            CUtlSymbolLarge m_iszSpawnGroupName; // 0x578            
            CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x580            
            CUtlSymbolLarge m_iszLandmarkName; // 0x588            
            CUtlString m_sFixedSpawnGroupName; // 0x590            
            float m_flTimeoutInterval; // 0x598            
            bool m_bStreamingStarted; // 0x59c            
            bool m_bUnloadingStarted; // 0x59d            
            uint8_t _pad059e[0x3a];
            
            // Datamap fields:
            // void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
            // void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
            // void InputStartSpawnGroupLoad; // 0x0
            // void InputActivateSpawnGroup; // 0x0
            // void InputStartSpawnGroupUnload; // 0x0
            // CUtlSymbolLarge InputSetSpawnGroup; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoSpawnGroupLoadUnload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoSpawnGroupLoadUnload) == 0x5d8);
    };
};
