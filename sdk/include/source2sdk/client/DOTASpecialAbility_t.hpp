#pragma once
#include "source2sdk/client/DOTAFacetAbilityBonus_t.hpp"
#include "source2sdk/client/DOTALevelingAbilityBonus_t.hpp"
#include "source2sdk/client/DOTASpecialAbilityBonus_t.hpp"
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
    // Size: 0x150
    #pragma pack(push, 1)
    struct DOTASpecialAbility_t
    {
    public:
        char* m_pszName; // 0x0        
        char* m_pszValue; // 0x8        
        char* m_pszLevelKey; // 0x10        
        char* m_pszSpecialBonusAbility; // 0x18        
        char* m_pszSpecialBonusField; // 0x20        
        char* m_pszSpecialBonusADLinkedAbilities; // 0x28        
        int32_t m_nCount; // 0x30        
        float m_Values[20]; // 0x34        
        int32_t m_nBonusesCount; // 0x84        
        client::DOTASpecialAbilityBonus_t m_Bonuses[4]; // 0x88        
        client::DOTALevelingAbilityBonus_t m_ScepterBonus; // 0xc8        
        client::DOTALevelingAbilityBonus_t m_ShardBonus; // 0xf0        
        client::DOTAFacetAbilityBonus_t m_FacetBonus; // 0x118        
        CUtlStringToken m_strRequiredFacet; // 0x140        
        int32_t m_nDamageTypeField; // 0x144        
        bool m_bSpellDamageField; // 0x148        
        bool m_bScepterField; // 0x149        
        bool m_bShardField; // 0x14a        
        bool m_bAffectedByAoEIncrease; // 0x14b        
        bool m_bDynamicValue; // 0x14c        
        client::EDOTASpecialBonusOperation m_eSpecialBonusOperation; // 0x14d        
        [[maybe_unused]] std::uint8_t pad_0x14e[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DOTASpecialAbility_t, m_pszName) == 0x0);
    static_assert(offsetof(DOTASpecialAbility_t, m_pszValue) == 0x8);
    static_assert(offsetof(DOTASpecialAbility_t, m_pszLevelKey) == 0x10);
    static_assert(offsetof(DOTASpecialAbility_t, m_pszSpecialBonusAbility) == 0x18);
    static_assert(offsetof(DOTASpecialAbility_t, m_pszSpecialBonusField) == 0x20);
    static_assert(offsetof(DOTASpecialAbility_t, m_pszSpecialBonusADLinkedAbilities) == 0x28);
    static_assert(offsetof(DOTASpecialAbility_t, m_nCount) == 0x30);
    static_assert(offsetof(DOTASpecialAbility_t, m_Values) == 0x34);
    static_assert(offsetof(DOTASpecialAbility_t, m_nBonusesCount) == 0x84);
    static_assert(offsetof(DOTASpecialAbility_t, m_Bonuses) == 0x88);
    static_assert(offsetof(DOTASpecialAbility_t, m_ScepterBonus) == 0xc8);
    static_assert(offsetof(DOTASpecialAbility_t, m_ShardBonus) == 0xf0);
    static_assert(offsetof(DOTASpecialAbility_t, m_FacetBonus) == 0x118);
    static_assert(offsetof(DOTASpecialAbility_t, m_strRequiredFacet) == 0x140);
    static_assert(offsetof(DOTASpecialAbility_t, m_nDamageTypeField) == 0x144);
    static_assert(offsetof(DOTASpecialAbility_t, m_bSpellDamageField) == 0x148);
    static_assert(offsetof(DOTASpecialAbility_t, m_bScepterField) == 0x149);
    static_assert(offsetof(DOTASpecialAbility_t, m_bShardField) == 0x14a);
    static_assert(offsetof(DOTASpecialAbility_t, m_bAffectedByAoEIncrease) == 0x14b);
    static_assert(offsetof(DOTASpecialAbility_t, m_bDynamicValue) == 0x14c);
    static_assert(offsetof(DOTASpecialAbility_t, m_eSpecialBonusOperation) == 0x14d);
    
    static_assert(sizeof(DOTASpecialAbility_t) == 0x150);
};
