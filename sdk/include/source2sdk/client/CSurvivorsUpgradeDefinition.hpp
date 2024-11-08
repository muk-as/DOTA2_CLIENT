#pragma once
#include "source2sdk/client/CSurvivorsAttributeValue.hpp"
#include "source2sdk/client/ESurvivorsUpgradeRarity.hpp"
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
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsUpgradeDefinition
    {
    public:
        client::ESurvivorsUpgradeRarity m_unRarity; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_vecUpgradeAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsAttributeValue> m_vecUpgradeAttributes;
        char m_vecUpgradeAttributes[0x18]; // 0x8        
        // m_vecGlobalUpgradeAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsAttributeValue> m_vecGlobalUpgradeAttributes;
        char m_vecGlobalUpgradeAttributes[0x18]; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x38[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsUpgradeDefinition, m_unRarity) == 0x0);
    static_assert(offsetof(CSurvivorsUpgradeDefinition, m_vecUpgradeAttributes) == 0x8);
    static_assert(offsetof(CSurvivorsUpgradeDefinition, m_vecGlobalUpgradeAttributes) == 0x20);
    
    static_assert(sizeof(CSurvivorsUpgradeDefinition) == 0x40);
};
