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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoSpawnGroupLoadUnload : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x_            
            CUtlSymbolLarge m_iszSpawnGroupName; // 0x_            
            CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x_            
            CUtlSymbolLarge m_iszLandmarkName; // 0x_            
            CUtlString m_sFixedSpawnGroupName; // 0x_            
            float m_flTimeoutInterval; // 0x_            
            bool m_bAutoActivate; // 0x_            
            bool m_bUnloadingStarted; // 0x_            
            bool m_bQueueActiveSpawnGroupChange; // 0x_            
            bool m_bQueueFinishLoading; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x_
            // void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x_
            // void InputStartSpawnGroupLoad; // 0x_
            // void InputActivateSpawnGroup; // 0x_
            // void InputStartSpawnGroupUnload; // 0x_
            // CUtlSymbolLarge InputSetSpawnGroup; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoSpawnGroupLoadUnload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoSpawnGroupLoadUnload) == 0x_);
    };
};
