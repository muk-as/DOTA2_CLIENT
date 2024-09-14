#pragma once
#include "source2sdk/client/Fantasy_Gem_Type.hpp"
#include "source2sdk/client/Fantasy_Scoring.hpp"
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
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyCraftingGemData_t
    {
    public:
        // metadata: MPropertyDescription "Unique Identifier for the Gem Type"
        client::Fantasy_Gem_Type m_eType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // metadata: MPropertyDescription "Localization name of the gem"
        CUtlString m_sLocName; // 0x8        
        // metadata: MPropertyDescription "Which stats can this gem roll"
        // m_eStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::Fantasy_Scoring> m_eStats;
        char m_eStats[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyCraftingGemData_t, m_eType) == 0x0);
    static_assert(offsetof(FantasyCraftingGemData_t, m_sLocName) == 0x8);
    static_assert(offsetof(FantasyCraftingGemData_t, m_eStats) == 0x10);
    
    static_assert(sizeof(FantasyCraftingGemData_t) == 0x28);
};
