#pragma once
#include "source2sdk/server/CDotaEntityFilterFlags.hpp"
#include "source2sdk/server/CTriggerMultiple.hpp"
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
    // Size: 0x9a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerDota : public server::CTriggerMultiple
    {
    public:
        server::CDotaEntityFilterFlags m_FilterFlags; // 0x980        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerDota because it is not a standard-layout class
    static_assert(sizeof(CTriggerDota) == 0x9a0);
};
