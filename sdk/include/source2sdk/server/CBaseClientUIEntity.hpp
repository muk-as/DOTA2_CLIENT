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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_DialogXMLName; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelClassName; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelID; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput0; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput1; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput2; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput3; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput4; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput5; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput6; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput7; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput8; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput9; // 0x_            
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseClientUIEntity) == 0x_);
    };
};
