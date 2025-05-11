#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsAttributeDefinition_MetaProgressionTier_t.hpp"

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
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsAttributeDefinition
        {
        public:
            CUtlString m_sLocName; // 0x0            
            CUtlString m_sLocTooltip; // 0x8            
            CUtlString m_sLocDescription; // 0x10            
            CUtlString m_sLocMetaUpgradesTooltip; // 0x18            
            CPanoramaImageName m_sImage; // 0x20            
            bool m_bPrimary; // 0x30            
            bool m_bPercentage; // 0x31            
            bool m_bShouldUpgradeProgressionText; // 0x32            
            uint8_t _pad0033[0x5]; // 0x33
            // m_vecMetaProgressionTiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTier_t> m_vecMetaProgressionTiers;
            char m_vecMetaProgressionTiers[0x18]; // 0x38            
            uint8_t _pad0050[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocName) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocTooltip) == 0x8);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocDescription) == 0x10);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocMetaUpgradesTooltip) == 0x18);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sImage) == 0x20);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_bPrimary) == 0x30);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_bPercentage) == 0x31);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_bShouldUpgradeProgressionText) == 0x32);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_vecMetaProgressionTiers) == 0x38);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsAttributeDefinition) == 0x58);
    };
};
