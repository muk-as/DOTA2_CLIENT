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
        // Size: 0x4968
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x1888            
            std::int32_t m_nIndexInAbility; // 0x188c            
            bool m_bIsHidden; // 0x1890            
            bool m_bIsDebuff; // 0x1891            
            bool m_bIsPurgable; // 0x1892            
            bool m_bIsStunDebuff; // 0x1893            
            bool m_bAllowIllusionDuplicate; // 0x1894            
            bool m_bRemoveOnDeath; // 0x1895            
            uint8_t _pad1896[0x2]; // 0x1896
            char* m_pszAuraModifier; // 0x1898            
            std::int32_t m_nAuraModifierIndex; // 0x18a0            
            std::int32_t m_nAuraRadius; // 0x18a4            
            std::int32_t m_nAuraSearchTeam; // 0x18a8            
            std::int32_t m_nAuraSearchType; // 0x18ac            
            std::int32_t m_nAuraSearchFlags; // 0x18b0            
            bool m_bAuraApplyToCaster; // 0x18b4            
            bool m_bAuraApplyToParent; // 0x18b5            
            uint8_t _pad18b6[0x2]; // 0x18b6
            std::int32_t m_nAttributes; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            char* m_pszEffectName; // 0x18c0            
            std::int32_t m_nEffectAttachType; // 0x18c8            
            std::int32_t m_nModifierPriority; // 0x18cc            
            char* m_pszStatusEffectName; // 0x18d0            
            std::int32_t m_nStatusEffectPriority; // 0x18d8            
            std::int32_t m_nOverrideAnimation; // 0x18dc            
            std::int32_t m_nOrbPriority; // 0x18e0            
            std::int32_t m_nOrbLabel; // 0x18e4            
            bool m_bOrbIsCastAttack; // 0x18e8            
            bool m_bNeedsReParseIfRefreshed; // 0x18e9            
            uint8_t _pad18ea[0x6]; // 0x18ea
            char* m_pszModelName; // 0x18f0            
            char* m_pszOrbProjectileName; // 0x18f8            
            uint8_t _pad1900[0x2f60]; // 0x1900
            std::uint64_t m_nModifierStatesEnabled; // 0x4860            
            std::uint64_t m_nModifierStatesDisabled; // 0x4868            
            KeyValues* m_pOnCreated; // 0x4870            
            KeyValues* m_pOnIntervalThink; // 0x4878            
            KeyValues* m_pOnDestroy; // 0x4880            
            KeyValues* m_pOnAttackStart; // 0x4888            
            KeyValues* m_pOnAttack; // 0x4890            
            KeyValues* m_pOnAttackLanded; // 0x4898            
            KeyValues* m_pOnAttackFailed; // 0x48a0            
            KeyValues* m_pOnAttackAllied; // 0x48a8            
            KeyValues* m_pOnProjectileDodge; // 0x48b0            
            KeyValues* m_pOnOrder; // 0x48b8            
            KeyValues* m_pOnUnitMoved; // 0x48c0            
            KeyValues* m_pOnAbilityStart; // 0x48c8            
            KeyValues* m_pOnAbilityExecuted; // 0x48d0            
            KeyValues* m_pOnBreakInvisibility; // 0x48d8            
            KeyValues* m_pOnAbilityEndChannel; // 0x48e0            
            KeyValues* m_pOnTakeDamage; // 0x48e8            
            KeyValues* m_pOnDealDamage; // 0x48f0            
            KeyValues* m_pOnStateChanged; // 0x48f8            
            KeyValues* m_pOnAttacked; // 0x4900            
            KeyValues* m_pOnDeath; // 0x4908            
            KeyValues* m_pOnKill; // 0x4910            
            KeyValues* m_pOnRespawn; // 0x4918            
            KeyValues* m_pOnSpentMana; // 0x4920            
            KeyValues* m_pOnTeleporting; // 0x4928            
            KeyValues* m_pOnTeleported; // 0x4930            
            KeyValues* m_pOnHealthGained; // 0x4938            
            KeyValues* m_pOnManaGained; // 0x4940            
            KeyValues* m_pOnHeroKilled; // 0x4948            
            KeyValues* m_pOnHealReceived; // 0x4950            
            KeyValues* m_pOnAttackFinished; // 0x4958            
            KeyValues* m_pOnAttackCancelled; // 0x4960            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DataDriven) == 0x4968);
    };
};
