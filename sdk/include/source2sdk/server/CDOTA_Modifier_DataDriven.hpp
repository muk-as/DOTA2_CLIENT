#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x47d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x18]; // 0x17f8
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x1810            
            std::int32_t m_nIndexInAbility; // 0x1814            
            bool m_bIsHidden; // 0x1818            
            bool m_bIsDebuff; // 0x1819            
            bool m_bIsPurgable; // 0x181a            
            bool m_bIsStunDebuff; // 0x181b            
            bool m_bAllowIllusionDuplicate; // 0x181c            
            bool m_bRemoveOnDeath; // 0x181d            
            uint8_t _pad181e[0x2]; // 0x181e
            char* m_pszAuraModifier; // 0x1820            
            std::int32_t m_nAuraModifierIndex; // 0x1828            
            std::int32_t m_nAuraRadius; // 0x182c            
            std::int32_t m_nAuraSearchTeam; // 0x1830            
            std::int32_t m_nAuraSearchType; // 0x1834            
            std::int32_t m_nAuraSearchFlags; // 0x1838            
            bool m_bAuraApplyToCaster; // 0x183c            
            bool m_bAuraApplyToParent; // 0x183d            
            uint8_t _pad183e[0x2]; // 0x183e
            std::int32_t m_nAttributes; // 0x1840            
            uint8_t _pad1844[0x4]; // 0x1844
            char* m_pszEffectName; // 0x1848            
            std::int32_t m_nEffectAttachType; // 0x1850            
            std::int32_t m_nModifierPriority; // 0x1854            
            char* m_pszStatusEffectName; // 0x1858            
            std::int32_t m_nStatusEffectPriority; // 0x1860            
            std::int32_t m_nOverrideAnimation; // 0x1864            
            std::int32_t m_nOrbPriority; // 0x1868            
            std::int32_t m_nOrbLabel; // 0x186c            
            bool m_bOrbIsCastAttack; // 0x1870            
            bool m_bNeedsReParseIfRefreshed; // 0x1871            
            uint8_t _pad1872[0x6]; // 0x1872
            char* m_pszModelName; // 0x1878            
            char* m_pszOrbProjectileName; // 0x1880            
            uint8_t _pad1888[0x2e40]; // 0x1888
            std::uint64_t m_nModifierStatesEnabled; // 0x46c8            
            std::uint64_t m_nModifierStatesDisabled; // 0x46d0            
            KeyValues* m_pOnCreated; // 0x46d8            
            KeyValues* m_pOnIntervalThink; // 0x46e0            
            KeyValues* m_pOnDestroy; // 0x46e8            
            KeyValues* m_pOnAttackStart; // 0x46f0            
            KeyValues* m_pOnAttack; // 0x46f8            
            KeyValues* m_pOnAttackLanded; // 0x4700            
            KeyValues* m_pOnAttackFailed; // 0x4708            
            KeyValues* m_pOnAttackAllied; // 0x4710            
            KeyValues* m_pOnProjectileDodge; // 0x4718            
            KeyValues* m_pOnOrder; // 0x4720            
            KeyValues* m_pOnUnitMoved; // 0x4728            
            KeyValues* m_pOnAbilityStart; // 0x4730            
            KeyValues* m_pOnAbilityExecuted; // 0x4738            
            KeyValues* m_pOnBreakInvisibility; // 0x4740            
            KeyValues* m_pOnAbilityEndChannel; // 0x4748            
            KeyValues* m_pOnTakeDamage; // 0x4750            
            KeyValues* m_pOnDealDamage; // 0x4758            
            KeyValues* m_pOnStateChanged; // 0x4760            
            KeyValues* m_pOnAttacked; // 0x4768            
            KeyValues* m_pOnDeath; // 0x4770            
            KeyValues* m_pOnKill; // 0x4778            
            KeyValues* m_pOnRespawn; // 0x4780            
            KeyValues* m_pOnSpentMana; // 0x4788            
            KeyValues* m_pOnTeleporting; // 0x4790            
            KeyValues* m_pOnTeleported; // 0x4798            
            KeyValues* m_pOnHealthGained; // 0x47a0            
            KeyValues* m_pOnManaGained; // 0x47a8            
            KeyValues* m_pOnHeroKilled; // 0x47b0            
            KeyValues* m_pOnHealReceived; // 0x47b8            
            KeyValues* m_pOnAttackFinished; // 0x47c0            
            KeyValues* m_pOnAttackCancelled; // 0x47c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DataDriven) == 0x47d0);
    };
};
