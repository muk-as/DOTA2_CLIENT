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
    // Size: 0x44e8
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DataDriven : public client::CDOTA_Buff
    {
    public:
        client::AbilityID_t m_nAbilityID; // 0x1708        
        int32_t m_nIndexInAbility; // 0x170c        
        bool m_bIsHidden; // 0x1710        
        bool m_bIsDebuff; // 0x1711        
        bool m_bIsPurgable; // 0x1712        
        bool m_bIsStunDebuff; // 0x1713        
        bool m_bAllowIllusionDuplicate; // 0x1714        
        bool m_bRemoveOnDeath; // 0x1715        
        [[maybe_unused]] std::uint8_t pad_0x1716[0x2]; // 0x1716
        char* m_pszAuraModifier; // 0x1718        
        int32_t m_nAuraModifierIndex; // 0x1720        
        int32_t m_nAuraRadius; // 0x1724        
        int32_t m_nAuraSearchTeam; // 0x1728        
        int32_t m_nAuraSearchType; // 0x172c        
        int32_t m_nAuraSearchFlags; // 0x1730        
        bool m_bAuraApplyToCaster; // 0x1734        
        bool m_bAuraApplyToParent; // 0x1735        
        [[maybe_unused]] std::uint8_t pad_0x1736[0x2]; // 0x1736
        int32_t m_nAttributes; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4]; // 0x173c
        char* m_pszEffectName; // 0x1740        
        int32_t m_nEffectAttachType; // 0x1748        
        int32_t m_nModifierPriority; // 0x174c        
        char* m_pszStatusEffectName; // 0x1750        
        int32_t m_nStatusEffectPriority; // 0x1758        
        int32_t m_nOverrideAnimation; // 0x175c        
        int32_t m_nOrbPriority; // 0x1760        
        int32_t m_nOrbLabel; // 0x1764        
        bool m_bOrbIsCastAttack; // 0x1768        
        bool m_bNeedsReParseIfRefreshed; // 0x1769        
        [[maybe_unused]] std::uint8_t pad_0x176a[0x6]; // 0x176a
        char* m_pszModelName; // 0x1770        
        char* m_pszOrbProjectileName; // 0x1778        
        [[maybe_unused]] std::uint8_t pad_0x1780[0x2c60]; // 0x1780
        uint64_t m_nModifierStatesEnabled; // 0x43e0        
        uint64_t m_nModifierStatesDisabled; // 0x43e8        
        KeyValues* m_pOnCreated; // 0x43f0        
        KeyValues* m_pOnIntervalThink; // 0x43f8        
        KeyValues* m_pOnDestroy; // 0x4400        
        KeyValues* m_pOnAttackStart; // 0x4408        
        KeyValues* m_pOnAttack; // 0x4410        
        KeyValues* m_pOnAttackLanded; // 0x4418        
        KeyValues* m_pOnAttackFailed; // 0x4420        
        KeyValues* m_pOnAttackAllied; // 0x4428        
        KeyValues* m_pOnProjectileDodge; // 0x4430        
        KeyValues* m_pOnOrder; // 0x4438        
        KeyValues* m_pOnUnitMoved; // 0x4440        
        KeyValues* m_pOnAbilityStart; // 0x4448        
        KeyValues* m_pOnAbilityExecuted; // 0x4450        
        KeyValues* m_pOnBreakInvisibility; // 0x4458        
        KeyValues* m_pOnAbilityEndChannel; // 0x4460        
        KeyValues* m_pOnTakeDamage; // 0x4468        
        KeyValues* m_pOnDealDamage; // 0x4470        
        KeyValues* m_pOnStateChanged; // 0x4478        
        KeyValues* m_pOnAttacked; // 0x4480        
        KeyValues* m_pOnDeath; // 0x4488        
        KeyValues* m_pOnKill; // 0x4490        
        KeyValues* m_pOnRespawn; // 0x4498        
        KeyValues* m_pOnSpentMana; // 0x44a0        
        KeyValues* m_pOnTeleporting; // 0x44a8        
        KeyValues* m_pOnTeleported; // 0x44b0        
        KeyValues* m_pOnHealthGained; // 0x44b8        
        KeyValues* m_pOnManaGained; // 0x44c0        
        KeyValues* m_pOnHeroKilled; // 0x44c8        
        KeyValues* m_pOnHealReceived; // 0x44d0        
        KeyValues* m_pOnAttackFinished; // 0x44d8        
        KeyValues* m_pOnAttackCancelled; // 0x44e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DataDriven) == 0x44e8);
};
