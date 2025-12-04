#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsAttributeValue.hpp"
#include "source2sdk/client/ESurvivorsUpgradeRarity.hpp"

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
        class CSurvivorsUpgradeDefinition
        {
        public:
            source2sdk::client::ESurvivorsUpgradeRarity m_unRarity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecUpgradeAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttributeValue> m_vecUpgradeAttributes;
            char m_vecUpgradeAttributes[0x_]; // 0x_            
            // m_vecGlobalUpgradeAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttributeValue> m_vecGlobalUpgradeAttributes;
            char m_vecGlobalUpgradeAttributes[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsUpgradeDefinition, m_unRarity) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsUpgradeDefinition, m_vecUpgradeAttributes) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsUpgradeDefinition, m_vecGlobalUpgradeAttributes) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsUpgradeDefinition) == 0x_);
    };
};
