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
        // Size: 0x4980
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DataDriven : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x18]; // 0x1888
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x18a0            
            std::int32_t m_nIndexInAbility; // 0x18a4            
            bool m_bIsHidden; // 0x18a8            
            bool m_bIsDebuff; // 0x18a9            
            bool m_bIsPurgable; // 0x18aa            
            bool m_bIsStunDebuff; // 0x18ab            
            bool m_bAllowIllusionDuplicate; // 0x18ac            
            bool m_bRemoveOnDeath; // 0x18ad            
            uint8_t _pad18ae[0x2]; // 0x18ae
            char* m_pszAuraModifier; // 0x18b0            
            std::int32_t m_nAuraModifierIndex; // 0x18b8            
            std::int32_t m_nAuraRadius; // 0x18bc            
            std::int32_t m_nAuraSearchTeam; // 0x18c0            
            std::int32_t m_nAuraSearchType; // 0x18c4            
            std::int32_t m_nAuraSearchFlags; // 0x18c8            
            bool m_bAuraApplyToCaster; // 0x18cc            
            bool m_bAuraApplyToParent; // 0x18cd            
            uint8_t _pad18ce[0x2]; // 0x18ce
            std::int32_t m_nAttributes; // 0x18d0            
            uint8_t _pad18d4[0x4]; // 0x18d4
            char* m_pszEffectName; // 0x18d8            
            std::int32_t m_nEffectAttachType; // 0x18e0            
            std::int32_t m_nModifierPriority; // 0x18e4            
            char* m_pszStatusEffectName; // 0x18e8            
            std::int32_t m_nStatusEffectPriority; // 0x18f0            
            std::int32_t m_nOverrideAnimation; // 0x18f4            
            std::int32_t m_nOrbPriority; // 0x18f8            
            std::int32_t m_nOrbLabel; // 0x18fc            
            bool m_bOrbIsCastAttack; // 0x1900            
            bool m_bNeedsReParseIfRefreshed; // 0x1901            
            uint8_t _pad1902[0x6]; // 0x1902
            char* m_pszModelName; // 0x1908            
            char* m_pszOrbProjectileName; // 0x1910            
            uint8_t _pad1918[0x2f60]; // 0x1918
            std::uint64_t m_nModifierStatesEnabled; // 0x4878            
            std::uint64_t m_nModifierStatesDisabled; // 0x4880            
            KeyValues* m_pOnCreated; // 0x4888            
            KeyValues* m_pOnIntervalThink; // 0x4890            
            KeyValues* m_pOnDestroy; // 0x4898            
            KeyValues* m_pOnAttackStart; // 0x48a0            
            KeyValues* m_pOnAttack; // 0x48a8            
            KeyValues* m_pOnAttackLanded; // 0x48b0            
            KeyValues* m_pOnAttackFailed; // 0x48b8            
            KeyValues* m_pOnAttackAllied; // 0x48c0            
            KeyValues* m_pOnProjectileDodge; // 0x48c8            
            KeyValues* m_pOnOrder; // 0x48d0            
            KeyValues* m_pOnUnitMoved; // 0x48d8            
            KeyValues* m_pOnAbilityStart; // 0x48e0            
            KeyValues* m_pOnAbilityExecuted; // 0x48e8            
            KeyValues* m_pOnBreakInvisibility; // 0x48f0            
            KeyValues* m_pOnAbilityEndChannel; // 0x48f8            
            KeyValues* m_pOnTakeDamage; // 0x4900            
            KeyValues* m_pOnDealDamage; // 0x4908            
            KeyValues* m_pOnStateChanged; // 0x4910            
            KeyValues* m_pOnAttacked; // 0x4918            
            KeyValues* m_pOnDeath; // 0x4920            
            KeyValues* m_pOnKill; // 0x4928            
            KeyValues* m_pOnRespawn; // 0x4930            
            KeyValues* m_pOnSpentMana; // 0x4938            
            KeyValues* m_pOnTeleporting; // 0x4940            
            KeyValues* m_pOnTeleported; // 0x4948            
            KeyValues* m_pOnHealthGained; // 0x4950            
            KeyValues* m_pOnManaGained; // 0x4958            
            KeyValues* m_pOnHeroKilled; // 0x4960            
            KeyValues* m_pOnHealReceived; // 0x4968            
            KeyValues* m_pOnAttackFinished; // 0x4970            
            KeyValues* m_pOnAttackCancelled; // 0x4978            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DataDriven because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DataDriven) == 0x4980);
    };
};
