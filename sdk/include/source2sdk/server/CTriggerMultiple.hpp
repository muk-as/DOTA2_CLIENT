#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x980
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerMultiple : public server::CBaseTrigger
    {
    public:
        entity2::CEntityIOOutput m_OnTrigger; // 0x958        
        
        // Datamap fields:
        // void CTriggerMultipleMultiTouch; // 0x0
        // void CTriggerMultipleMultiWaitOver; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerMultiple because it is not a standard-layout class
    static_assert(sizeof(CTriggerMultiple) == 0x980);
};
