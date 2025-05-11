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
        // Size: 0x528
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        #pragma pack(push, 1)
        class CLogicGameEventListener : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04d8[0x10]; // 0x4d8
            source2sdk::entity2::CEntityIOOutput m_OnEventFired; // 0x4e8            
            CUtlSymbolLarge m_iszGameEventName; // 0x510            
            CUtlSymbolLarge m_iszGameEventItem; // 0x518            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x520            
            bool m_bStartDisabled; // 0x521            
            uint8_t _pad0522[0x6];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicGameEventListener because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicGameEventListener) == 0x528);
    };
};
