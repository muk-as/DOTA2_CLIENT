#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsAttributeDefinition_MetaProgressionTierCost_t.hpp"

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
        // Size: 0x58
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CSurvivorsAttributeDefinition_MetaProgressionTier_t
        {
        public:
            source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTierCost_t m_cost; // 0x0            
            float m_flValue; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTier_t, m_cost) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTier_t, m_flValue) == 0x50);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTier_t) == 0x58);
    };
};
