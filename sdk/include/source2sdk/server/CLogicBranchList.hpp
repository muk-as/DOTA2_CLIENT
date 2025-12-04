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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicBranchList : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x_            
            // m_LogicBranchList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_LogicBranchList;
            char m_LogicBranchList[0x_]; // 0x_            
            source2sdk::server::CLogicBranchList_LogicBranchListenerLastState_t m_eLastState; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnAllTrue; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAllFalse; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMixed; // 0x_            
            
            // Datamap fields:
            // void InputTest; // 0x_
            // void Input_OnLogicBranchChanged; // 0x_
            // void Input_OnLogicBranchRemoved; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicBranchList because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicBranchList) == 0x_);
    };
};
