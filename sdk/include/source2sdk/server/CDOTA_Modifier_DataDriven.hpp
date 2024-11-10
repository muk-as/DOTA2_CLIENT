#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x4500
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DataDriven : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x18]; // 0x1708
        client::AbilityID_t m_nAbilityID; // 0x1720        
        int32_t m_nIndexInAbility; // 0x1724        
        bool m_bIsHidden; // 0x1728        
        bool m_bIsDebuff; // 0x1729        
        bool m_bIsPurgable; // 0x172a        
        bool m_bIsStunDebuff; // 0x172b        
        bool m_bAllowIllusionDuplicate; // 0x172c        
        bool m_bRemoveOnDeath; // 0x172d        
        [[maybe_unused]] std::uint8_t pad_0x172e[0x2]; // 0x172e
        char* m_pszAuraModifier; // 0x1730        
        int32_t m_nAuraModifierIndex; // 0x1738        
        int32_t m_nAuraRadius; // 0x173c        
        int32_t m_nAuraSearchTeam; // 0x1740        
        int32_t m_nAuraSearchType; // 0x1744        
        int32_t m_nAuraSearchFlags; // 0x1748        
        bool m_bAuraApplyToCaster; // 0x174c        
        bool m_bAuraApplyToParent; // 0x174d        
        [[maybe_unused]] std::uint8_t pad_0x174e[0x2]; // 0x174e
        int32_t m_nAttributes; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4]; // 0x1754
        char* m_pszEffectName; // 0x1758        
        int32_t m_nEffectAttachType; // 0x1760        
        int32_t m_nModifierPriority; // 0x1764        
        char* m_pszStatusEffectName; // 0x1768        
        int32_t m_nStatusEffectPriority; // 0x1770        
        int32_t m_nOverrideAnimation; // 0x1774        
        int32_t m_nOrbPriority; // 0x1778        
        int32_t m_nOrbLabel; // 0x177c        
        bool m_bOrbIsCastAttack; // 0x1780        
        bool m_bNeedsReParseIfRefreshed; // 0x1781        
        [[maybe_unused]] std::uint8_t pad_0x1782[0x6]; // 0x1782
        char* m_pszModelName; // 0x1788        
        char* m_pszOrbProjectileName; // 0x1790        
        [[maybe_unused]] std::uint8_t pad_0x1798[0x2c60]; // 0x1798
        uint64_t m_nModifierStatesEnabled; // 0x43f8        
        uint64_t m_nModifierStatesDisabled; // 0x4400        
        KeyValues* m_pOnCreated; // 0x4408        
        KeyValues* m_pOnIntervalThink; // 0x4410        
        KeyValues* m_pOnDestroy; // 0x4418        
        KeyValues* m_pOnAttackStart; // 0x4420        
        KeyValues* m_pOnAttack; // 0x4428        
        KeyValues* m_pOnAttackLanded; // 0x4430        
        KeyValues* m_pOnAttackFailed; // 0x4438        
        KeyValues* m_pOnAttackAllied; // 0x4440        
        KeyValues* m_pOnProjectileDodge; // 0x4448        
        KeyValues* m_pOnOrder; // 0x4450        
        KeyValues* m_pOnUnitMoved; // 0x4458        
        KeyValues* m_pOnAbilityStart; // 0x4460        
        KeyValues* m_pOnAbilityExecuted; // 0x4468        
        KeyValues* m_pOnBreakInvisibility; // 0x4470        
        KeyValues* m_pOnAbilityEndChannel; // 0x4478        
        KeyValues* m_pOnTakeDamage; // 0x4480        
        KeyValues* m_pOnDealDamage; // 0x4488        
        KeyValues* m_pOnStateChanged; // 0x4490        
        KeyValues* m_pOnAttacked; // 0x4498        
        KeyValues* m_pOnDeath; // 0x44a0        
        KeyValues* m_pOnKill; // 0x44a8        
        KeyValues* m_pOnRespawn; // 0x44b0        
        KeyValues* m_pOnSpentMana; // 0x44b8        
        KeyValues* m_pOnTeleporting; // 0x44c0        
        KeyValues* m_pOnTeleported; // 0x44c8        
        KeyValues* m_pOnHealthGained; // 0x44d0        
        KeyValues* m_pOnManaGained; // 0x44d8        
        KeyValues* m_pOnHeroKilled; // 0x44e0        
        KeyValues* m_pOnHealReceived; // 0x44e8        
        KeyValues* m_pOnAttackFinished; // 0x44f0        
        KeyValues* m_pOnAttackCancelled; // 0x44f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DataDriven) == 0x4500);
};
