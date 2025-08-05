#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DAMAGE_TYPES.hpp"
#include "source2sdk/client/DOTAFacetAbilityBonus_t.hpp"
#include "source2sdk/client/DOTALevelingAbilityBonus_t.hpp"
#include "source2sdk/client/DOTASpecialAbilityBonus_t.hpp"

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
        // Size: 0x100
        #pragma pack(push, 1)
        struct DOTASpecialAbility_t
        {
        public:
            char* m_pszName; // 0x0            
            char* m_pszValue; // 0x8            
            char* m_pszLevelKey; // 0x10            
            std::int32_t m_nCount; // 0x18            
            float m_Values[11]; // 0x1c            
            std::uint8_t m_eDisplayType; // 0x48            
            uint8_t _pad0049[0x3]; // 0x49
            std::int32_t m_nBonusesCount; // 0x4c            
            source2sdk::client::DOTASpecialAbilityBonus_t m_Bonuses[1]; // 0x50            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ScepterBonus; // 0x60            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ShardBonus; // 0x88            
            source2sdk::client::DOTAFacetAbilityBonus_t m_FacetBonus; // 0xb0            
            CUtlStringToken m_strRequiredFacet; // 0xf0            
            source2sdk::client::DAMAGE_TYPES m_nDamageTypeField; // 0xf4            
            bool m_bSpellDamageField; // 0xf8            
            bool m_bRequiresScepterField; // 0xf9            
            bool m_bRequiresShardField; // 0xfa            
            bool m_bAffectedByAoEIncrease; // 0xfb            
            bool m_bDynamicValue; // 0xfc            
            bool m_bAffectedByCurio; // 0xfd            
            uint8_t _pad00fe[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszValue) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszLevelKey) == 0x10);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nCount) == 0x18);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Values) == 0x1c);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_eDisplayType) == 0x48);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nBonusesCount) == 0x4c);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Bonuses) == 0x50);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ScepterBonus) == 0x60);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ShardBonus) == 0x88);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_FacetBonus) == 0xb0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_strRequiredFacet) == 0xf0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nDamageTypeField) == 0xf4);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bSpellDamageField) == 0xf8);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresScepterField) == 0xf9);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresShardField) == 0xfa);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bAffectedByAoEIncrease) == 0xfb);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bDynamicValue) == 0xfc);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bAffectedByCurio) == 0xfd);
        
        static_assert(sizeof(source2sdk::client::DOTASpecialAbility_t) == 0x100);
    };
};
