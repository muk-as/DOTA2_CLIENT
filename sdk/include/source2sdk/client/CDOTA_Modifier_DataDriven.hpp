#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x_            
            std::int32_t m_nIndexInAbility; // 0x_            
            bool m_bIsHidden; // 0x_            
            bool m_bIsDebuff; // 0x_            
            bool m_bIsPurgable; // 0x_            
            bool m_bIsStunDebuff; // 0x_            
            bool m_bAllowIllusionDuplicate; // 0x_            
            bool m_bRemoveOnDeath; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_pszAuraModifier; // 0x_            
            std::int32_t m_nAuraModifierIndex; // 0x_            
            std::int32_t m_nAuraRadius; // 0x_            
            std::int32_t m_nAuraSearchTeam; // 0x_            
            std::int32_t m_nAuraSearchType; // 0x_            
            std::int32_t m_nAuraSearchFlags; // 0x_            
            bool m_bAuraApplyToCaster; // 0x_            
            bool m_bAuraApplyToParent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nAttributes; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_pszEffectName; // 0x_            
            std::int32_t m_nEffectAttachType; // 0x_            
            std::int32_t m_nModifierPriority; // 0x_            
            char* m_pszStatusEffectName; // 0x_            
            std::int32_t m_nStatusEffectPriority; // 0x_            
            std::int32_t m_nOverrideAnimation; // 0x_            
            std::int32_t m_nOrbPriority; // 0x_            
            std::int32_t m_nOrbLabel; // 0x_            
            bool m_bOrbIsCastAttack; // 0x_            
            bool m_bNeedsReParseIfRefreshed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_pszModelName; // 0x_            
            char* m_pszOrbProjectileName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint64_t m_nModifierStatesEnabled; // 0x_            
            std::uint64_t m_nModifierStatesDisabled; // 0x_            
            KeyValues* m_pOnCreated; // 0x_            
            KeyValues* m_pOnIntervalThink; // 0x_            
            KeyValues* m_pOnDestroy; // 0x_            
            KeyValues* m_pOnAttackStart; // 0x_            
            KeyValues* m_pOnAttack; // 0x_            
            KeyValues* m_pOnAttackLanded; // 0x_            
            KeyValues* m_pOnAttackFailed; // 0x_            
            KeyValues* m_pOnAttackAllied; // 0x_            
            KeyValues* m_pOnProjectileDodge; // 0x_            
            KeyValues* m_pOnOrder; // 0x_            
            KeyValues* m_pOnUnitMoved; // 0x_            
            KeyValues* m_pOnAbilityStart; // 0x_            
            KeyValues* m_pOnAbilityExecuted; // 0x_            
            KeyValues* m_pOnBreakInvisibility; // 0x_            
            KeyValues* m_pOnAbilityEndChannel; // 0x_            
            KeyValues* m_pOnTakeDamage; // 0x_            
            KeyValues* m_pOnDealDamage; // 0x_            
            KeyValues* m_pOnStateChanged; // 0x_            
            KeyValues* m_pOnAttacked; // 0x_            
            KeyValues* m_pOnDeath; // 0x_            
            KeyValues* m_pOnKill; // 0x_            
            KeyValues* m_pOnRespawn; // 0x_            
            KeyValues* m_pOnSpentMana; // 0x_            
            KeyValues* m_pOnTeleporting; // 0x_            
            KeyValues* m_pOnTeleported; // 0x_            
            KeyValues* m_pOnHealthGained; // 0x_            
            KeyValues* m_pOnManaGained; // 0x_            
            KeyValues* m_pOnHeroKilled; // 0x_            
            KeyValues* m_pOnHealReceived; // 0x_            
            KeyValues* m_pOnAttackFinished; // 0x_            
            KeyValues* m_pOnAttackCancelled; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DataDriven) == 0x_);
    };
};
