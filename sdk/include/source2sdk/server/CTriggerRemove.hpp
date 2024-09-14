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
    class CTriggerRemove : public server::CBaseTrigger
    {
    public:
        entity2::CEntityIOOutput m_OnRemove; // 0x958        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerRemove because it is not a standard-layout class
    static_assert(sizeof(CTriggerRemove) == 0x980);
};
