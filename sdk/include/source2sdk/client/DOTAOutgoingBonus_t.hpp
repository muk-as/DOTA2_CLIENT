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
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct DOTAOutgoingBonus_t
    {
    public:
        char* m_pszAbilityName; // 0x0        
        char* m_pszSpecialName; // 0x8        
        float m_fValue; // 0x10        
        client::EDOTASpecialBonusOperation m_eOperation; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x15[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTAOutgoingBonus_t, m_pszAbilityName) == 0x0);
    static_assert(offsetof(DOTAOutgoingBonus_t, m_pszSpecialName) == 0x8);
    static_assert(offsetof(DOTAOutgoingBonus_t, m_fValue) == 0x10);
    static_assert(offsetof(DOTAOutgoingBonus_t, m_eOperation) == 0x14);
    
    static_assert(sizeof(DOTAOutgoingBonus_t) == 0x18);
};
