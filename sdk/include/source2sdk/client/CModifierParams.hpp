#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CDOTA_Buff;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_DOTABaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1d8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CModifierParams
    {
    public:
        // ability has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> ability;
        char ability[0x4]; // 0x0        
        float fDamage; // 0x4        
        float fOriginalDamage; // 0x8        
        int32_t nActivity; // 0xc        
        bool bTooltip; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x3]; // 0x11
        int32_t nTooltipParam; // 0x14        
        bool bIgnoreInvis; // 0x18        
        bool bNoCooldown; // 0x19        
        bool bIgnoreBaseArmor; // 0x1a        
        bool bIgnoreBaseMagicArmor; // 0x1b        
        bool bReincarnate; // 0x1c        
        bool bDoNotConsume; // 0x1d        
        bool bReportMax; // 0x1e        
        [[maybe_unused]] std::uint8_t pad_0x1f[0x1]; // 0x1f
        float fDistance; // 0x20        
        float fGain; // 0x24        
        float fAttackTimeRemaining; // 0x28        
        client::PlayerID_t m_nIssuerPlayerIndex; // 0x2c        
        client::PlayerID_t m_nVictimPlayerID; // 0x30        
        int32_t nDamageType; // 0x34        
        int32_t nDamageflags; // 0x38        
        int32_t nDamageCategory; // 0x3c        
        int32_t iFailType; // 0x40        
        int16_t iRecord; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x46[0x2]; // 0x46
        int32_t nCost; // 0x48        
        int32_t nHealthCost; // 0x4c        
        int32_t nOrdertype; // 0x50        
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
        [[maybe_unused]] std::uint8_t pad_0x8e[0x2]; // 0x8e
        CEntityIndex pnMagicStickProcEntityIndices[64]; // 0x90        
        bool bBloodstoneRegenApplied; // 0x190        
        bool bShroudManaRestoreApplied; // 0x191        
        bool bPhylacteryApplied; // 0x192        
        bool bAllowZeroDamageFromPostReductionBlock; // 0x193        
        bool bForceMagicStickProc; // 0x194        
        bool bIgnoreNegativeValuesIfDebuffImmune; // 0x195        
        bool bIgnorePositiveValuesIfDebuffImmune; // 0x196        
        bool bIgnoreAllIfDebuffImmune; // 0x197        
        bool bAlsoIgnoreBuffsIfDebuffImmune; // 0x198        
        bool bIgnoreLowerIfDebuffImmune; // 0x199        
        [[maybe_unused]] std::uint8_t pad_0x19a[0x2]; // 0x19a
        float flIgnoreLowerIfDebuffImmune; // 0x19c        
        bool bIgnoreHigherIfDebuffImmune; // 0x1a0        
        [[maybe_unused]] std::uint8_t pad_0x1a1[0x3]; // 0x1a1
        float flIgnoreHigherIfDebuffImmune; // 0x1a4        
        bool bIgnoreTemporaryAttackSpeedModifiers; // 0x1a8        
        [[maybe_unused]] std::uint8_t pad_0x1a9[0x7]; // 0x1a9
        char* pszAbilitySpecialName; // 0x1b0        
        int32_t nAbilitySpecialLevel; // 0x1b8        
        bool bIsRegen; // 0x1bc        
        [[maybe_unused]] std::uint8_t pad_0x1bd[0x3]; // 0x1bd
        // hattacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hattacker;
        char hattacker[0x4]; // 0x1c0        
        // htarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> htarget;
        char htarget[0x4]; // 0x1c4        
        // hunit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hunit;
        char hunit[0x4]; // 0x1c8        
        // inflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> inflictor;
        char inflictor[0x4]; // 0x1cc        
        client::CDOTA_Buff* pAddedBuff; // 0x1d0        
        
        // Static fields:
        static client::CModifierParams &Get_s_Default() {return *reinterpret_cast<client::CModifierParams*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CModifierParams")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModifierParams, ability) == 0x0);
    static_assert(offsetof(CModifierParams, fDamage) == 0x4);
    static_assert(offsetof(CModifierParams, fOriginalDamage) == 0x8);
    static_assert(offsetof(CModifierParams, nActivity) == 0xc);
    static_assert(offsetof(CModifierParams, bTooltip) == 0x10);
    static_assert(offsetof(CModifierParams, nTooltipParam) == 0x14);
    static_assert(offsetof(CModifierParams, bIgnoreInvis) == 0x18);
    static_assert(offsetof(CModifierParams, bNoCooldown) == 0x19);
    static_assert(offsetof(CModifierParams, bIgnoreBaseArmor) == 0x1a);
    static_assert(offsetof(CModifierParams, bIgnoreBaseMagicArmor) == 0x1b);
    static_assert(offsetof(CModifierParams, bReincarnate) == 0x1c);
    static_assert(offsetof(CModifierParams, bDoNotConsume) == 0x1d);
    static_assert(offsetof(CModifierParams, bReportMax) == 0x1e);
    static_assert(offsetof(CModifierParams, fDistance) == 0x20);
    static_assert(offsetof(CModifierParams, fGain) == 0x24);
    static_assert(offsetof(CModifierParams, fAttackTimeRemaining) == 0x28);
    static_assert(offsetof(CModifierParams, m_nIssuerPlayerIndex) == 0x2c);
    static_assert(offsetof(CModifierParams, m_nVictimPlayerID) == 0x30);
    static_assert(offsetof(CModifierParams, nDamageType) == 0x34);
    static_assert(offsetof(CModifierParams, nDamageflags) == 0x38);
    static_assert(offsetof(CModifierParams, nDamageCategory) == 0x3c);
    static_assert(offsetof(CModifierParams, iFailType) == 0x40);
    static_assert(offsetof(CModifierParams, iRecord) == 0x44);
    static_assert(offsetof(CModifierParams, nCost) == 0x48);
    static_assert(offsetof(CModifierParams, nHealthCost) == 0x4c);
    static_assert(offsetof(CModifierParams, nOrdertype) == 0x50);
    static_assert(offsetof(CModifierParams, vOldLoc) == 0x54);
    static_assert(offsetof(CModifierParams, vNewLoc) == 0x60);
    static_assert(offsetof(CModifierParams, vCastLocation) == 0x6c);
    static_assert(offsetof(CModifierParams, bCraniumBasherTested) == 0x78);
    static_assert(offsetof(CModifierParams, bMKBTested) == 0x79);
    static_assert(offsetof(CModifierParams, bOctarineTested) == 0x7a);
    static_assert(offsetof(CModifierParams, bHeartRegenApplied) == 0x7b);
    static_assert(offsetof(CModifierParams, bSangeAmpApplied) == 0x7c);
    static_assert(offsetof(CModifierParams, bLocketAmpApplied) == 0x7d);
    static_assert(offsetof(CModifierParams, bPaladinAmpApplied) == 0x7e);
    static_assert(offsetof(CModifierParams, bBlademailApplied) == 0x7f);
    static_assert(offsetof(CModifierParams, bForceFieldApplied) == 0x80);
    static_assert(offsetof(CModifierParams, bKayaApplied) == 0x81);
    static_assert(offsetof(CModifierParams, bYashaAndKayaApplied) == 0x82);
    static_assert(offsetof(CModifierParams, bStoutConsidered) == 0x83);
    static_assert(offsetof(CModifierParams, bAegisUsed) == 0x84);
    static_assert(offsetof(CModifierParams, bInterrupted) == 0x85);
    static_assert(offsetof(CModifierParams, bDiffusalApplied) == 0x86);
    static_assert(offsetof(CModifierParams, bChainLightningConsidered) == 0x87);
    static_assert(offsetof(CModifierParams, bSuppressDamage) == 0x88);
    static_assert(offsetof(CModifierParams, bRangedAttack) == 0x89);
    static_assert(offsetof(CModifierParams, bProcessProcs) == 0x8a);
    static_assert(offsetof(CModifierParams, bProjectileIsFromIllusion) == 0x8b);
    static_assert(offsetof(CModifierParams, bHasMagicComponent) == 0x8c);
    static_assert(offsetof(CModifierParams, bIsSpellLifesteal) == 0x8d);
    static_assert(offsetof(CModifierParams, pnMagicStickProcEntityIndices) == 0x90);
    static_assert(offsetof(CModifierParams, bBloodstoneRegenApplied) == 0x190);
    static_assert(offsetof(CModifierParams, bShroudManaRestoreApplied) == 0x191);
    static_assert(offsetof(CModifierParams, bPhylacteryApplied) == 0x192);
    static_assert(offsetof(CModifierParams, bAllowZeroDamageFromPostReductionBlock) == 0x193);
    static_assert(offsetof(CModifierParams, bForceMagicStickProc) == 0x194);
    static_assert(offsetof(CModifierParams, bIgnoreNegativeValuesIfDebuffImmune) == 0x195);
    static_assert(offsetof(CModifierParams, bIgnorePositiveValuesIfDebuffImmune) == 0x196);
    static_assert(offsetof(CModifierParams, bIgnoreAllIfDebuffImmune) == 0x197);
    static_assert(offsetof(CModifierParams, bAlsoIgnoreBuffsIfDebuffImmune) == 0x198);
    static_assert(offsetof(CModifierParams, bIgnoreLowerIfDebuffImmune) == 0x199);
    static_assert(offsetof(CModifierParams, flIgnoreLowerIfDebuffImmune) == 0x19c);
    static_assert(offsetof(CModifierParams, bIgnoreHigherIfDebuffImmune) == 0x1a0);
    static_assert(offsetof(CModifierParams, flIgnoreHigherIfDebuffImmune) == 0x1a4);
    static_assert(offsetof(CModifierParams, bIgnoreTemporaryAttackSpeedModifiers) == 0x1a8);
    static_assert(offsetof(CModifierParams, pszAbilitySpecialName) == 0x1b0);
    static_assert(offsetof(CModifierParams, nAbilitySpecialLevel) == 0x1b8);
    static_assert(offsetof(CModifierParams, bIsRegen) == 0x1bc);
    static_assert(offsetof(CModifierParams, hattacker) == 0x1c0);
    static_assert(offsetof(CModifierParams, htarget) == 0x1c4);
    static_assert(offsetof(CModifierParams, hunit) == 0x1c8);
    static_assert(offsetof(CModifierParams, inflictor) == 0x1cc);
    static_assert(offsetof(CModifierParams, pAddedBuff) == 0x1d0);
    
    static_assert(sizeof(CModifierParams) == 0x1d8);
};
