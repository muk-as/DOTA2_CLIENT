#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x9c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerMultiple : public source2sdk::server::CBaseTrigger
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnTrigger; // 0x998            
            
            // Datamap fields:
            // void CTriggerMultipleMultiTouch; // 0x0
            // void CTriggerMultipleMultiWaitOver; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerMultiple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerMultiple) == 0x9c0);
    };
};
