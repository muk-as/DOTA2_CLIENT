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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoSpawnGroupLoadUnload : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x508            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x530            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x558            
            CUtlSymbolLarge m_iszSpawnGroupName; // 0x580            
            CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x588            
            CUtlSymbolLarge m_iszLandmarkName; // 0x590            
            CUtlString m_sFixedSpawnGroupName; // 0x598            
            float m_flTimeoutInterval; // 0x5a0            
            bool m_bAutoActivate; // 0x5a4            
            bool m_bUnloadingStarted; // 0x5a5            
            bool m_bQueueActiveSpawnGroupChange; // 0x5a6            
            bool m_bQueueFinishLoading; // 0x5a7            
            uint8_t _pad05a8[0x50];
            
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
        
        static_assert(sizeof(source2sdk::server::CInfoSpawnGroupLoadUnload) == 0x5f8);
    };
};
