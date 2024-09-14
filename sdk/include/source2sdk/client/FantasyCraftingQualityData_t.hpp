#pragma once
#include "source2sdk/client/FantasyGemQuality_t.hpp"
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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyCraftingQualityData_t
    {
    public:
        // metadata: MPropertyDescription "Unique Identifier for the Quality"
        client::FantasyGemQuality_t m_unQualityID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x7]; // 0x1
        // metadata: MPropertyDescription "Localization token for the name of the quality"
        CUtlString m_sLocName; // 0x8        
        // metadata: MPropertyDescription "How much does this quality improve the stat?"
        int32_t m_nBonus; // 0x10        
        // metadata: MPropertyDescription "How likely are we to roll this quality?"
        int32_t m_nRollWeight; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyCraftingQualityData_t, m_unQualityID) == 0x0);
    static_assert(offsetof(FantasyCraftingQualityData_t, m_sLocName) == 0x8);
    static_assert(offsetof(FantasyCraftingQualityData_t, m_nBonus) == 0x10);
    static_assert(offsetof(FantasyCraftingQualityData_t, m_nRollWeight) == 0x14);
    
    static_assert(sizeof(FantasyCraftingQualityData_t) == 0x18);
};
