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
    // Size: 0x44a0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DataDriven : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x18]; // 0x16e8
        client::AbilityID_t m_nAbilityID; // 0x1700        
        int32_t m_nIndexInAbility; // 0x1704        
        bool m_bIsHidden; // 0x1708        
        bool m_bIsDebuff; // 0x1709        
        bool m_bIsPurgable; // 0x170a        
        bool m_bIsStunDebuff; // 0x170b        
        bool m_bAllowIllusionDuplicate; // 0x170c        
        bool m_bRemoveOnDeath; // 0x170d        
        [[maybe_unused]] std::uint8_t pad_0x170e[0x2]; // 0x170e
        char* m_pszAuraModifier; // 0x1710        
        int32_t m_nAuraModifierIndex; // 0x1718        
        int32_t m_nAuraRadius; // 0x171c        
        int32_t m_nAuraSearchTeam; // 0x1720        
        int32_t m_nAuraSearchType; // 0x1724        
        int32_t m_nAuraSearchFlags; // 0x1728        
        bool m_bAuraApplyToCaster; // 0x172c        
        bool m_bAuraApplyToParent; // 0x172d        
        [[maybe_unused]] std::uint8_t pad_0x172e[0x2]; // 0x172e
        int32_t m_nAttributes; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        char* m_pszEffectName; // 0x1738        
        int32_t m_nEffectAttachType; // 0x1740        
        int32_t m_nModifierPriority; // 0x1744        
        char* m_pszStatusEffectName; // 0x1748        
        int32_t m_nStatusEffectPriority; // 0x1750        
        int32_t m_nOverrideAnimation; // 0x1754        
        int32_t m_nOrbPriority; // 0x1758        
        int32_t m_nOrbLabel; // 0x175c        
        bool m_bOrbIsCastAttack; // 0x1760        
        bool m_bNeedsReParseIfRefreshed; // 0x1761        
        [[maybe_unused]] std::uint8_t pad_0x1762[0x6]; // 0x1762
        char* m_pszModelName; // 0x1768        
        char* m_pszOrbProjectileName; // 0x1770        
        [[maybe_unused]] std::uint8_t pad_0x1778[0x2c20]; // 0x1778
        uint64_t m_nModifierStatesEnabled; // 0x4398        
        uint64_t m_nModifierStatesDisabled; // 0x43a0        
        KeyValues* m_pOnCreated; // 0x43a8        
        KeyValues* m_pOnIntervalThink; // 0x43b0        
        KeyValues* m_pOnDestroy; // 0x43b8        
        KeyValues* m_pOnAttackStart; // 0x43c0        
        KeyValues* m_pOnAttack; // 0x43c8        
        KeyValues* m_pOnAttackLanded; // 0x43d0        
        KeyValues* m_pOnAttackFailed; // 0x43d8        
        KeyValues* m_pOnAttackAllied; // 0x43e0        
        KeyValues* m_pOnProjectileDodge; // 0x43e8        
        KeyValues* m_pOnOrder; // 0x43f0        
        KeyValues* m_pOnUnitMoved; // 0x43f8        
        KeyValues* m_pOnAbilityStart; // 0x4400        
        KeyValues* m_pOnAbilityExecuted; // 0x4408        
        KeyValues* m_pOnBreakInvisibility; // 0x4410        
        KeyValues* m_pOnAbilityEndChannel; // 0x4418        
        KeyValues* m_pOnTakeDamage; // 0x4420        
        KeyValues* m_pOnDealDamage; // 0x4428        
        KeyValues* m_pOnStateChanged; // 0x4430        
        KeyValues* m_pOnAttacked; // 0x4438        
        KeyValues* m_pOnDeath; // 0x4440        
        KeyValues* m_pOnKill; // 0x4448        
        KeyValues* m_pOnRespawn; // 0x4450        
        KeyValues* m_pOnSpentMana; // 0x4458        
        KeyValues* m_pOnTeleporting; // 0x4460        
        KeyValues* m_pOnTeleported; // 0x4468        
        KeyValues* m_pOnHealthGained; // 0x4470        
        KeyValues* m_pOnManaGained; // 0x4478        
        KeyValues* m_pOnHeroKilled; // 0x4480        
        KeyValues* m_pOnHealReceived; // 0x4488        
        KeyValues* m_pOnAttackFinished; // 0x4490        
        KeyValues* m_pOnAttackCancelled; // 0x4498        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DataDriven) == 0x44a0);
};
