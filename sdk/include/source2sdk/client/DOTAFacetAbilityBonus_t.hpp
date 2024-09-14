#pragma once
#include "source2sdk/client/EDOTASpecialBonusOperation.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    #pragma pack(push, 1)
    struct DOTAFacetAbilityBonus_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_vecValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecValues;
        char m_vecValues[0x18]; // 0x8        
        client::EDOTASpecialBonusOperation m_eOperation; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTAFacetAbilityBonus_t, m_vecValues) == 0x8);
    static_assert(offsetof(DOTAFacetAbilityBonus_t, m_eOperation) == 0x20);
    
    static_assert(sizeof(DOTAFacetAbilityBonus_t) == 0x28);
};
