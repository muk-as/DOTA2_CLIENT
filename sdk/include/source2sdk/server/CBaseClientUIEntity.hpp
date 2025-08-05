#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9a0
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
        // static metadata: MNetworkVarNames "string_t m_PanelClassName"
        // static metadata: MNetworkVarNames "string_t m_PanelID"
        #pragma pack(push, 1)
        class CBaseClientUIEntity : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x7f0            
            uint8_t _pad07f1[0x7]; // 0x7f1
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_DialogXMLName; // 0x7f8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelClassName; // 0x800            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelID; // 0x808            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput0; // 0x810            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput1; // 0x838            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput2; // 0x860            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput3; // 0x888            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput4; // 0x8b0            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput5; // 0x8d8            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput6; // 0x900            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput7; // 0x928            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput8; // 0x950            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput9; // 0x978            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseClientUIEntity) == 0x9a0);
    };
};
