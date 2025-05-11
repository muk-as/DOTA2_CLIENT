#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/OverworldTokenID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CSurvivorsAttributeDefinition_MetaProgressionTierCost_t
        {
        public:
            std::int32_t m_nMinigameCurrency; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_vecOverworldTokens has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OverworldTokenID_t> m_vecOverworldTokens;
            char m_vecOverworldTokens[0x18]; // 0x8            
            uint8_t _pad0020[0x30];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTierCost_t, m_nMinigameCurrency) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTierCost_t, m_vecOverworldTokens) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTierCost_t) == 0x50);
    };
};
