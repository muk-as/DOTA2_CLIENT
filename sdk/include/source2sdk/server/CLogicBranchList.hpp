#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicBranchList_LogicBranchListenerLastState_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicBranchList : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4d8            
            // m_LogicBranchList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_LogicBranchList;
            char m_LogicBranchList[0x18]; // 0x558            
            source2sdk::server::CLogicBranchList_LogicBranchListenerLastState_t m_eLastState; // 0x570            
            uint8_t _pad0574[0x4]; // 0x574
            source2sdk::entity2::CEntityIOOutput m_OnAllTrue; // 0x578            
            source2sdk::entity2::CEntityIOOutput m_OnAllFalse; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_OnMixed; // 0x5c8            
            
            // Datamap fields:
            // void InputTest; // 0x0
            // void Input_OnLogicBranchChanged; // 0x0
            // void Input_OnLogicBranchRemoved; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicBranchList because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicBranchList) == 0x5f0);
    };
};
