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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct DOTASpecialAbility_t
        {
        public:
            char* m_pszName; // 0x_            
            char* m_pszValue; // 0x_            
            char* m_pszLevelKey; // 0x_            
            std::int32_t m_nCount; // 0x_            
            float m_Values[11]; // 0x_            
            std::uint8_t m_eDisplayType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nBonusesCount; // 0x_            
            source2sdk::client::DOTASpecialAbilityBonus_t m_Bonuses[1]; // 0x_            
            source2sdk::client::DOTASpecialAbilityBonus_t m_PerLevelUpBonus; // 0x_            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ScepterBonus; // 0x_            
            source2sdk::client::DOTALevelingAbilityBonus_t m_ShardBonus; // 0x_            
            source2sdk::client::DOTAFacetAbilityBonus_t m_FacetBonus; // 0x_            
            CUtlStringToken m_strRequiredFacet; // 0x_            
            source2sdk::client::DAMAGE_TYPES m_nDamageTypeField; // 0x_            
            std::uint8_t m_unLevelUpInterval; // 0x_            
            bool m_bSpellDamageField; // 0x_            
            bool m_bRequiresScepterField; // 0x_            
            bool m_bRequiresShardField; // 0x_            
            bool m_bAffectedByAoEIncrease; // 0x_            
            bool m_bDynamicValue; // 0x_            
            bool m_bAffectedByCurio; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszValue) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_pszLevelKey) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Values) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_eDisplayType) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nBonusesCount) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_Bonuses) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_PerLevelUpBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ScepterBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_ShardBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_FacetBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_strRequiredFacet) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_nDamageTypeField) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_unLevelUpInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bSpellDamageField) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresScepterField) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bRequiresShardField) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bAffectedByAoEIncrease) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bDynamicValue) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbility_t, m_bAffectedByCurio) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DOTASpecialAbility_t) == 0x_);
    };
};
