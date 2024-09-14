#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x4488
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DataDriven : public client::CDOTA_Buff
    {
    public:
        client::AbilityID_t m_nAbilityID; // 0x16e8        
        int32_t m_nIndexInAbility; // 0x16ec        
        bool m_bIsHidden; // 0x16f0        
        bool m_bIsDebuff; // 0x16f1        
        bool m_bIsPurgable; // 0x16f2        
        bool m_bIsStunDebuff; // 0x16f3        
        bool m_bAllowIllusionDuplicate; // 0x16f4        
        bool m_bRemoveOnDeath; // 0x16f5        
        [[maybe_unused]] std::uint8_t pad_0x16f6[0x2]; // 0x16f6
        char* m_pszAuraModifier; // 0x16f8        
        int32_t m_nAuraModifierIndex; // 0x1700        
        int32_t m_nAuraRadius; // 0x1704        
        int32_t m_nAuraSearchTeam; // 0x1708        
        int32_t m_nAuraSearchType; // 0x170c        
        int32_t m_nAuraSearchFlags; // 0x1710        
        bool m_bAuraApplyToCaster; // 0x1714        
        bool m_bAuraApplyToParent; // 0x1715        
        [[maybe_unused]] std::uint8_t pad_0x1716[0x2]; // 0x1716
        int32_t m_nAttributes; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        char* m_pszEffectName; // 0x1720        
        int32_t m_nEffectAttachType; // 0x1728        
        int32_t m_nModifierPriority; // 0x172c        
        char* m_pszStatusEffectName; // 0x1730        
        int32_t m_nStatusEffectPriority; // 0x1738        
        int32_t m_nOverrideAnimation; // 0x173c        
        int32_t m_nOrbPriority; // 0x1740        
        int32_t m_nOrbLabel; // 0x1744        
        bool m_bOrbIsCastAttack; // 0x1748        
        bool m_bNeedsReParseIfRefreshed; // 0x1749        
        [[maybe_unused]] std::uint8_t pad_0x174a[0x6]; // 0x174a
        char* m_pszModelName; // 0x1750        
        char* m_pszOrbProjectileName; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x1760[0x2c20]; // 0x1760
        uint64_t m_nModifierStatesEnabled; // 0x4380        
        uint64_t m_nModifierStatesDisabled; // 0x4388        
        KeyValues* m_pOnCreated; // 0x4390        
        KeyValues* m_pOnIntervalThink; // 0x4398        
        KeyValues* m_pOnDestroy; // 0x43a0        
        KeyValues* m_pOnAttackStart; // 0x43a8        
        KeyValues* m_pOnAttack; // 0x43b0        
        KeyValues* m_pOnAttackLanded; // 0x43b8        
        KeyValues* m_pOnAttackFailed; // 0x43c0        
        KeyValues* m_pOnAttackAllied; // 0x43c8        
        KeyValues* m_pOnProjectileDodge; // 0x43d0        
        KeyValues* m_pOnOrder; // 0x43d8        
        KeyValues* m_pOnUnitMoved; // 0x43e0        
        KeyValues* m_pOnAbilityStart; // 0x43e8        
        KeyValues* m_pOnAbilityExecuted; // 0x43f0        
        KeyValues* m_pOnBreakInvisibility; // 0x43f8        
        KeyValues* m_pOnAbilityEndChannel; // 0x4400        
        KeyValues* m_pOnTakeDamage; // 0x4408        
        KeyValues* m_pOnDealDamage; // 0x4410        
        KeyValues* m_pOnStateChanged; // 0x4418        
        KeyValues* m_pOnAttacked; // 0x4420        
        KeyValues* m_pOnDeath; // 0x4428        
        KeyValues* m_pOnKill; // 0x4430        
        KeyValues* m_pOnRespawn; // 0x4438        
        KeyValues* m_pOnSpentMana; // 0x4440        
        KeyValues* m_pOnTeleporting; // 0x4448        
        KeyValues* m_pOnTeleported; // 0x4450        
        KeyValues* m_pOnHealthGained; // 0x4458        
        KeyValues* m_pOnManaGained; // 0x4460        
        KeyValues* m_pOnHeroKilled; // 0x4468        
        KeyValues* m_pOnHealReceived; // 0x4470        
        KeyValues* m_pOnAttackFinished; // 0x4478        
        KeyValues* m_pOnAttackCancelled; // 0x4480        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DataDriven) == 0x4488);
};
