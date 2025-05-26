#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DAMAGE_TYPES.hpp"
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
        // Size: 0x110
        #pragma pack(push, 1)
        struct DOTASpecialAbility_t
        {
        public:
            char* m_pszName; // 0x0            
            char* m_pszValue; // 0x8            
            char* m_pszLevelKey; // 0x10            
            char* m_pszSpecialBonusAbility; // 0x18            
            char* m_pszSpecialBonusField; // 0x20            
            std::int32_t m_nCount; // 0x28            
            float m_Values[11]; // 0x2c            
            std::int32_t m_nBonusesCount; // 0x58            
            uint8_t _pad005c[0x4]; // 0x5c
            source2sdk::client::DOTASpecialAbilityBonus_t m_Bonuses[1]; // 0x60            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ScepterBonus; // 0x70            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ShardBonus; // 0x98            
            source2sdk::client::DOTAFacetAbilityBonus_t m_FacetBonus; // 0xc0            
            CUtlStringToken m_strRequiredFacet; // 0x100            
            source2sdk::client::DAMAGE_TYPES m_nDamageTypeField; // 0x104            
            bool m_bSpellDamageField; // 0x108            
            bool m_bRequiresScepterField; // 0x109            
            bool m_bRequiresShardField; // 0x10a            
            bool m_bAffectedByAoEIncrease; // 0x10b            
            bool m_bDynamicValue; // 0x10c            
            bool m_bAffectedByCurio; // 0x10d            
            source2sdk::client::EDOTASpecialBonusOperation m_eSpecialBonusOperation; // 0x10e            
            uint8_t _pad010f[0x1];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszValue) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszLevelKey) == 0x10);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszSpecialBonusAbility) == 0x18);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszSpecialBonusField) == 0x20);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nCount) == 0x28);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Values) == 0x2c);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nBonusesCount) == 0x58);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Bonuses) == 0x60);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ScepterBonus) == 0x70);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ShardBonus) == 0x98);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_FacetBonus) == 0xc0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_strRequiredFacet) == 0x100);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nDamageTypeField) == 0x104);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bSpellDamageField) == 0x108);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresScepterField) == 0x109);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresShardField) == 0x10a);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bAffectedByAoEIncrease) == 0x10b);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bDynamicValue) == 0x10c);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bAffectedByCurio) == 0x10d);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_eSpecialBonusOperation) == 0x10e);
        
        static_assert(sizeof(source2sdk::client::DOTASpecialAbility_t) == 0x110);
    };
};
