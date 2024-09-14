#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMatch3OpponentActionInstanceDefinition
    {
    public:
        CUtlString m_sActionName; // 0x0        
        float m_flCooldown; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        KeyValues3 m_kvActionParams; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMatch3OpponentActionInstanceDefinition, m_sActionName) == 0x0);
    static_assert(offsetof(CMatch3OpponentActionInstanceDefinition, m_flCooldown) == 0x8);
    static_assert(offsetof(CMatch3OpponentActionInstanceDefinition, m_kvActionParams) == 0x10);
    
    static_assert(sizeof(CMatch3OpponentActionInstanceDefinition) == 0x20);
};
