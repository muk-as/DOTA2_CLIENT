#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyCraftSetupData_t.hpp"
#include "source2sdk/client/FantasyLeagueData_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFantasyDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_vecCraftingSetups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftSetupData_t> m_vecCraftingSetups;
            char m_vecCraftingSetups[0x_]; // 0x_            
            // m_vecLeagues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyLeagueData_t> m_vecLeagues;
            char m_vecLeagues[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFantasyDefinition, m_vecCraftingSetups) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFantasyDefinition, m_vecLeagues) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFantasyDefinition) == 0x_);
    };
};
