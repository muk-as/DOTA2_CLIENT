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
    // Size: 0x10
    #pragma pack(push, 1)
    struct DOTASpecialAbilityBonus_t
    {
    public:
        char* m_pszName; // 0x0        
        float m_fValue; // 0x8        
        client::EDOTASpecialBonusOperation m_eOperation; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x0d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTASpecialAbilityBonus_t, m_pszName) == 0x0);
    static_assert(offsetof(DOTASpecialAbilityBonus_t, m_fValue) == 0x8);
    static_assert(offsetof(DOTASpecialAbilityBonus_t, m_eOperation) == 0xc);
    
    static_assert(sizeof(DOTASpecialAbilityBonus_t) == 0x10);
};
