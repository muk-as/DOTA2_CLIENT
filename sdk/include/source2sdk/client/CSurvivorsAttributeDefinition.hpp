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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsAttributeDefinition
        {
        public:
            CUtlString m_sLocName; // 0x_            
            CUtlString m_sLocTooltip; // 0x_            
            CUtlString m_sLocDescription; // 0x_            
            CUtlString m_sLocMetaUpgradesTooltip; // 0x_            
            CPanoramaImageName m_sImage; // 0x_            
            bool m_bPrimary; // 0x_            
            bool m_bPercentage; // 0x_            
            bool m_bShouldUpgradeProgressionText; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecMetaProgressionTiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttributeDefinition_MetaProgressionTier_t> m_vecMetaProgressionTiers;
            char m_vecMetaProgressionTiers[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocTooltip) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sLocMetaUpgradesTooltip) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_sImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_bPrimary) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_bPercentage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_bShouldUpgradeProgressionText) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttributeDefinition, m_vecMetaProgressionTiers) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsAttributeDefinition) == 0x_);
    };
};
