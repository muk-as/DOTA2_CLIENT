#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_Buff;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTABaseAbility;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xd0
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CModifierParams
        {
        public:
            // ability has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> ability;
            char ability[0x4]; // 0x0            
            float fDamage; // 0x4            
            float fOriginalDamage; // 0x8            
            std::int32_t nActivity; // 0xc            
            bool bTooltip; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            std::int32_t nTooltipParam; // 0x14            
            bool bIgnoreInvis; // 0x18            
            bool bNoCooldown; // 0x19            
            bool bIgnoreBaseArmor; // 0x1a            
            bool bIgnoreBaseMagicArmor; // 0x1b            
            bool bReincarnate; // 0x1c            
            bool bDoNotConsume; // 0x1d            
            bool bReportMax; // 0x1e            
            uint8_t _pad001f[0x1]; // 0x1f
            float fDistance; // 0x20            
            float fGain; // 0x24            
            float fAttackTimeRemaining; // 0x28            
            source2sdk::client::PlayerID_t m_nIssuerPlayerIndex; // 0x2c            
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x30            
            std::int32_t nDamageType; // 0x34            
            std::int32_t nDamageflags; // 0x38            
            std::int32_t nDamageCategory; // 0x3c            
            std::int32_t iFailType; // 0x40            
            std::int16_t iRecord; // 0x44            
            uint8_t _pad0046[0x2]; // 0x46
            std::int32_t nCost; // 0x48            
            std::int32_t nHealthCost; // 0x4c            
            std::int32_t nOrdertype; // 0x50            
            Vector vOldLoc; // 0x54            
            Vector vNewLoc; // 0x60            
            Vector vCastLocation; // 0x6c            
            bool bCraniumBasherTested; // 0x78            
            bool bMKBTested; // 0x79            
            bool bOctarineTested; // 0x7a            
            bool bHeartRegenApplied; // 0x7b            
            bool bSangeAmpApplied; // 0x7c            
            bool bLocketAmpApplied; // 0x7d            
            bool bPaladinAmpApplied; // 0x7e            
            bool bBlademailApplied; // 0x7f            
            bool bForceFieldApplied; // 0x80            
            bool bKayaApplied; // 0x81            
            bool bYashaAndKayaApplied; // 0x82            
            bool bStoutConsidered; // 0x83            
            bool bAegisUsed; // 0x84            
            bool bInterrupted; // 0x85            
            bool bDiffusalApplied; // 0x86            
            bool bChainLightningConsidered; // 0x87            
            bool bSuppressDamage; // 0x88            
            bool bRangedAttack; // 0x89            
            bool bProcessProcs; // 0x8a            
            bool bProjectileIsFromIllusion; // 0x8b            
            bool bHasMagicComponent; // 0x8c            
            bool bIsSpellLifesteal; // 0x8d            
            bool bBloodstoneRegenApplied; // 0x8e            
            bool bShroudManaRestoreApplied; // 0x8f            
            bool bPhylacteryApplied; // 0x90            
            bool bAllowZeroDamageFromPostReductionBlock; // 0x91            
            bool bForceMagicStickProc; // 0x92            
            bool bIgnoreNegativeValuesIfDebuffImmune; // 0x93            
            bool bIgnorePositiveValuesIfDebuffImmune; // 0x94            
            bool bIgnoreAllIfDebuffImmune; // 0x95            
            bool bAlsoIgnoreBuffsIfDebuffImmune; // 0x96            
            bool bIgnoreLowerIfDebuffImmune; // 0x97            
            float flIgnoreLowerIfDebuffImmune; // 0x98            
            bool bIgnoreHigherIfDebuffImmune; // 0x9c            
            uint8_t _pad009d[0x3]; // 0x9d
            float flIgnoreHigherIfDebuffImmune; // 0xa0            
            bool bIgnoreTemporaryAttackSpeedModifiers; // 0xa4            
            uint8_t _pad00a5[0x3]; // 0xa5
            char* pszAbilitySpecialName; // 0xa8            
            std::int32_t nAbilitySpecialLevel; // 0xb0            
            bool bIsRegen; // 0xb4            
            uint8_t _pad00b5[0x3]; // 0xb5
            // hattacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hattacker;
            char hattacker[0x4]; // 0xb8            
            // htarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> htarget;
            char htarget[0x4]; // 0xbc            
            // hunit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hunit;
            char hunit[0x4]; // 0xc0            
            // inflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> inflictor;
            char inflictor[0x4]; // 0xc4            
            source2sdk::client::CDOTA_Buff* pAddedBuff; // 0xc8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModifierParams, ability) == 0x0);
        static_assert(offsetof(source2sdk::client::CModifierParams, fDamage) == 0x4);
        static_assert(offsetof(source2sdk::client::CModifierParams, fOriginalDamage) == 0x8);
        static_assert(offsetof(source2sdk::client::CModifierParams, nActivity) == 0xc);
        static_assert(offsetof(source2sdk::client::CModifierParams, bTooltip) == 0x10);
        static_assert(offsetof(source2sdk::client::CModifierParams, nTooltipParam) == 0x14);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreInvis) == 0x18);
        static_assert(offsetof(source2sdk::client::CModifierParams, bNoCooldown) == 0x19);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreBaseArmor) == 0x1a);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreBaseMagicArmor) == 0x1b);
        static_assert(offsetof(source2sdk::client::CModifierParams, bReincarnate) == 0x1c);
        static_assert(offsetof(source2sdk::client::CModifierParams, bDoNotConsume) == 0x1d);
        static_assert(offsetof(source2sdk::client::CModifierParams, bReportMax) == 0x1e);
        static_assert(offsetof(source2sdk::client::CModifierParams, fDistance) == 0x20);
        static_assert(offsetof(source2sdk::client::CModifierParams, fGain) == 0x24);
        static_assert(offsetof(source2sdk::client::CModifierParams, fAttackTimeRemaining) == 0x28);
        static_assert(offsetof(source2sdk::client::CModifierParams, m_nIssuerPlayerIndex) == 0x2c);
        static_assert(offsetof(source2sdk::client::CModifierParams, m_nVictimPlayerID) == 0x30);
        static_assert(offsetof(source2sdk::client::CModifierParams, nDamageType) == 0x34);
        static_assert(offsetof(source2sdk::client::CModifierParams, nDamageflags) == 0x38);
        static_assert(offsetof(source2sdk::client::CModifierParams, nDamageCategory) == 0x3c);
        static_assert(offsetof(source2sdk::client::CModifierParams, iFailType) == 0x40);
        static_assert(offsetof(source2sdk::client::CModifierParams, iRecord) == 0x44);
        static_assert(offsetof(source2sdk::client::CModifierParams, nCost) == 0x48);
        static_assert(offsetof(source2sdk::client::CModifierParams, nHealthCost) == 0x4c);
        static_assert(offsetof(source2sdk::client::CModifierParams, nOrdertype) == 0x50);
        static_assert(offsetof(source2sdk::client::CModifierParams, vOldLoc) == 0x54);
        static_assert(offsetof(source2sdk::client::CModifierParams, vNewLoc) == 0x60);
        static_assert(offsetof(source2sdk::client::CModifierParams, vCastLocation) == 0x6c);
        static_assert(offsetof(source2sdk::client::CModifierParams, bCraniumBasherTested) == 0x78);
        static_assert(offsetof(source2sdk::client::CModifierParams, bMKBTested) == 0x79);
        static_assert(offsetof(source2sdk::client::CModifierParams, bOctarineTested) == 0x7a);
        static_assert(offsetof(source2sdk::client::CModifierParams, bHeartRegenApplied) == 0x7b);
        static_assert(offsetof(source2sdk::client::CModifierParams, bSangeAmpApplied) == 0x7c);
        static_assert(offsetof(source2sdk::client::CModifierParams, bLocketAmpApplied) == 0x7d);
        static_assert(offsetof(source2sdk::client::CModifierParams, bPaladinAmpApplied) == 0x7e);
        static_assert(offsetof(source2sdk::client::CModifierParams, bBlademailApplied) == 0x7f);
        static_assert(offsetof(source2sdk::client::CModifierParams, bForceFieldApplied) == 0x80);
        static_assert(offsetof(source2sdk::client::CModifierParams, bKayaApplied) == 0x81);
        static_assert(offsetof(source2sdk::client::CModifierParams, bYashaAndKayaApplied) == 0x82);
        static_assert(offsetof(source2sdk::client::CModifierParams, bStoutConsidered) == 0x83);
        static_assert(offsetof(source2sdk::client::CModifierParams, bAegisUsed) == 0x84);
        static_assert(offsetof(source2sdk::client::CModifierParams, bInterrupted) == 0x85);
        static_assert(offsetof(source2sdk::client::CModifierParams, bDiffusalApplied) == 0x86);
        static_assert(offsetof(source2sdk::client::CModifierParams, bChainLightningConsidered) == 0x87);
        static_assert(offsetof(source2sdk::client::CModifierParams, bSuppressDamage) == 0x88);
        static_assert(offsetof(source2sdk::client::CModifierParams, bRangedAttack) == 0x89);
        static_assert(offsetof(source2sdk::client::CModifierParams, bProcessProcs) == 0x8a);
        static_assert(offsetof(source2sdk::client::CModifierParams, bProjectileIsFromIllusion) == 0x8b);
        static_assert(offsetof(source2sdk::client::CModifierParams, bHasMagicComponent) == 0x8c);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIsSpellLifesteal) == 0x8d);
        static_assert(offsetof(source2sdk::client::CModifierParams, bBloodstoneRegenApplied) == 0x8e);
        static_assert(offsetof(source2sdk::client::CModifierParams, bShroudManaRestoreApplied) == 0x8f);
        static_assert(offsetof(source2sdk::client::CModifierParams, bPhylacteryApplied) == 0x90);
        static_assert(offsetof(source2sdk::client::CModifierParams, bAllowZeroDamageFromPostReductionBlock) == 0x91);
        static_assert(offsetof(source2sdk::client::CModifierParams, bForceMagicStickProc) == 0x92);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreNegativeValuesIfDebuffImmune) == 0x93);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnorePositiveValuesIfDebuffImmune) == 0x94);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreAllIfDebuffImmune) == 0x95);
        static_assert(offsetof(source2sdk::client::CModifierParams, bAlsoIgnoreBuffsIfDebuffImmune) == 0x96);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreLowerIfDebuffImmune) == 0x97);
        static_assert(offsetof(source2sdk::client::CModifierParams, flIgnoreLowerIfDebuffImmune) == 0x98);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreHigherIfDebuffImmune) == 0x9c);
        static_assert(offsetof(source2sdk::client::CModifierParams, flIgnoreHigherIfDebuffImmune) == 0xa0);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreTemporaryAttackSpeedModifiers) == 0xa4);
        static_assert(offsetof(source2sdk::client::CModifierParams, pszAbilitySpecialName) == 0xa8);
        static_assert(offsetof(source2sdk::client::CModifierParams, nAbilitySpecialLevel) == 0xb0);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIsRegen) == 0xb4);
        static_assert(offsetof(source2sdk::client::CModifierParams, hattacker) == 0xb8);
        static_assert(offsetof(source2sdk::client::CModifierParams, htarget) == 0xbc);
        static_assert(offsetof(source2sdk::client::CModifierParams, hunit) == 0xc0);
        static_assert(offsetof(source2sdk::client::CModifierParams, inflictor) == 0xc4);
        static_assert(offsetof(source2sdk::client::CModifierParams, pAddedBuff) == 0xc8);
        
        static_assert(sizeof(source2sdk::client::CModifierParams) == 0xd0);
    };
};
