#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strStartTouchEventName"
        // static metadata: MNetworkVarNames "CUtlString m_strEndTouchEventName"
        // static metadata: MNetworkVarNames "CUtlString m_strTriggerID"
        #pragma pack(push, 1)
        class CTriggerGameEvent : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            CUtlString m_strStartTouchEventName; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_strEndTouchEventName; // 0x_            
            // metadata: MNetworkEnable
            CUtlString m_strTriggerID; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetStartTouchEvent; // 0x_
            // CUtlSymbolLarge InputSetEndTouchEvent; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerGameEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerGameEvent) == 0x_);
    };
};
