#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTAFacetAbilityBonus_t.hpp"
#include "source2sdk/client/DOTALevelingAbilityBonus_t.hpp"
#include "source2sdk/client/DOTASpecialAbilityBonus_t.hpp"
#include "source2sdk/client/EDOTASpecialBonusOperation.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x168
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
            std::int32_t m_nCount; // 0x30            
            float m_Values[20]; // 0x34            
            std::int32_t m_nBonusesCount; // 0x84            
            source2sdk::client::DOTASpecialAbilityBonus_t m_Bonuses[4]; // 0x88            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ScepterBonus; // 0xc8            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ShardBonus; // 0xf0            
            source2sdk::client::DOTAFacetAbilityBonus_t m_FacetBonus; // 0x118            
            CUtlStringToken m_strRequiredFacet; // 0x158            
            std::int32_t m_nDamageTypeField; // 0x15c            
            bool m_bSpellDamageField; // 0x160            
            bool m_bRequiresScepterField; // 0x161            
            bool m_bRequiresShardField; // 0x162            
            bool m_bAffectedByAoEIncrease; // 0x163            
            bool m_bDynamicValue; // 0x164            
            source2sdk::client::EDOTASpecialBonusOperation m_eSpecialBonusOperation; // 0x165            
            uint8_t _pad0166[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszValue) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszLevelKey) == 0x10);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszSpecialBonusAbility) == 0x18);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszSpecialBonusField) == 0x20);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszSpecialBonusADLinkedAbilities) == 0x28);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nCount) == 0x30);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Values) == 0x34);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nBonusesCount) == 0x84);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Bonuses) == 0x88);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ScepterBonus) == 0xc8);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ShardBonus) == 0xf0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_FacetBonus) == 0x118);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_strRequiredFacet) == 0x158);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nDamageTypeField) == 0x15c);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bSpellDamageField) == 0x160);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresScepterField) == 0x161);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresShardField) == 0x162);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bAffectedByAoEIncrease) == 0x163);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bDynamicValue) == 0x164);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_eSpecialBonusOperation) == 0x165);
        
        static_assert(sizeof(source2sdk::client::DOTASpecialAbility_t) == 0x168);
    };
};
