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
        // Size: 0x47b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x17f8            
            std::int32_t m_nIndexInAbility; // 0x17fc            
            bool m_bIsHidden; // 0x1800            
            bool m_bIsDebuff; // 0x1801            
            bool m_bIsPurgable; // 0x1802            
            bool m_bIsStunDebuff; // 0x1803            
            bool m_bAllowIllusionDuplicate; // 0x1804            
            bool m_bRemoveOnDeath; // 0x1805            
            uint8_t _pad1806[0x2]; // 0x1806
            char* m_pszAuraModifier; // 0x1808            
            std::int32_t m_nAuraModifierIndex; // 0x1810            
            std::int32_t m_nAuraRadius; // 0x1814            
            std::int32_t m_nAuraSearchTeam; // 0x1818            
            std::int32_t m_nAuraSearchType; // 0x181c            
            std::int32_t m_nAuraSearchFlags; // 0x1820            
            bool m_bAuraApplyToCaster; // 0x1824            
            bool m_bAuraApplyToParent; // 0x1825            
            uint8_t _pad1826[0x2]; // 0x1826
            std::int32_t m_nAttributes; // 0x1828            
            uint8_t _pad182c[0x4]; // 0x182c
            char* m_pszEffectName; // 0x1830            
            std::int32_t m_nEffectAttachType; // 0x1838            
            std::int32_t m_nModifierPriority; // 0x183c            
            char* m_pszStatusEffectName; // 0x1840            
            std::int32_t m_nStatusEffectPriority; // 0x1848            
            std::int32_t m_nOverrideAnimation; // 0x184c            
            std::int32_t m_nOrbPriority; // 0x1850            
            std::int32_t m_nOrbLabel; // 0x1854            
            bool m_bOrbIsCastAttack; // 0x1858            
            bool m_bNeedsReParseIfRefreshed; // 0x1859            
            uint8_t _pad185a[0x6]; // 0x185a
            char* m_pszModelName; // 0x1860            
            char* m_pszOrbProjectileName; // 0x1868            
            uint8_t _pad1870[0x2e40]; // 0x1870
            std::uint64_t m_nModifierStatesEnabled; // 0x46b0            
            std::uint64_t m_nModifierStatesDisabled; // 0x46b8            
            KeyValues* m_pOnCreated; // 0x46c0            
            KeyValues* m_pOnIntervalThink; // 0x46c8            
            KeyValues* m_pOnDestroy; // 0x46d0            
            KeyValues* m_pOnAttackStart; // 0x46d8            
            KeyValues* m_pOnAttack; // 0x46e0            
            KeyValues* m_pOnAttackLanded; // 0x46e8            
            KeyValues* m_pOnAttackFailed; // 0x46f0            
            KeyValues* m_pOnAttackAllied; // 0x46f8            
            KeyValues* m_pOnProjectileDodge; // 0x4700            
            KeyValues* m_pOnOrder; // 0x4708            
            KeyValues* m_pOnUnitMoved; // 0x4710            
            KeyValues* m_pOnAbilityStart; // 0x4718            
            KeyValues* m_pOnAbilityExecuted; // 0x4720            
            KeyValues* m_pOnBreakInvisibility; // 0x4728            
            KeyValues* m_pOnAbilityEndChannel; // 0x4730            
            KeyValues* m_pOnTakeDamage; // 0x4738            
            KeyValues* m_pOnDealDamage; // 0x4740            
            KeyValues* m_pOnStateChanged; // 0x4748            
            KeyValues* m_pOnAttacked; // 0x4750            
            KeyValues* m_pOnDeath; // 0x4758            
            KeyValues* m_pOnKill; // 0x4760            
            KeyValues* m_pOnRespawn; // 0x4768            
            KeyValues* m_pOnSpentMana; // 0x4770            
            KeyValues* m_pOnTeleporting; // 0x4778            
            KeyValues* m_pOnTeleported; // 0x4780            
            KeyValues* m_pOnHealthGained; // 0x4788            
            KeyValues* m_pOnManaGained; // 0x4790            
            KeyValues* m_pOnHeroKilled; // 0x4798            
            KeyValues* m_pOnHealReceived; // 0x47a0            
            KeyValues* m_pOnAttackFinished; // 0x47a8            
            KeyValues* m_pOnAttackCancelled; // 0x47b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DataDriven) == 0x47b8);
    };
};
