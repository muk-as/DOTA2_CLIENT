#pragma once
#include "source2sdk/client/FantasyCraftSetupData_t.hpp"
#include "source2sdk/client/FantasyLeagueData_t.hpp"
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
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAFantasyDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_vecCraftingSetups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyCraftSetupData_t> m_vecCraftingSetups;
        char m_vecCraftingSetups[0x18]; // 0x8        
        // m_vecLeagues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::FantasyLeagueData_t> m_vecLeagues;
        char m_vecLeagues[0x18]; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAFantasyDefinition, m_vecCraftingSetups) == 0x8);
    static_assert(offsetof(CDOTAFantasyDefinition, m_vecLeagues) == 0x20);
    
    static_assert(sizeof(CDOTAFantasyDefinition) == 0x38);
};
