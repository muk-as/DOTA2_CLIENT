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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CModifierParams
        {
        public:
            // ability has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> ability;
            char ability[0x_]; // 0x_            
            float fDamage; // 0x_            
            float fOriginalDamage; // 0x_            
            std::int32_t nActivity; // 0x_            
            bool bTooltip; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t nTooltipParam; // 0x_            
            bool bIgnoreInvis; // 0x_            
            bool bNoCooldown; // 0x_            
            bool bIgnoreBaseArmor; // 0x_            
            bool bIgnoreBaseMagicArmor; // 0x_            
            bool bReincarnate; // 0x_            
            bool bDoNotConsume; // 0x_            
            bool bReportMax; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float fDistance; // 0x_            
            float fGain; // 0x_            
            float fAttackTimeRemaining; // 0x_            
            source2sdk::client::PlayerID_t m_nIssuerPlayerIndex; // 0x_            
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x_            
            std::int32_t nDamageType; // 0x_            
            std::int32_t nDamageflags; // 0x_            
            std::int32_t nDamageCategory; // 0x_            
            std::int32_t iFailType; // 0x_            
            std::int16_t iRecord; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t nCost; // 0x_            
            std::int32_t nHealthCost; // 0x_            
            std::int32_t nOrdertype; // 0x_            
            VectorWS vOldLoc; // 0x_            
            VectorWS vNewLoc; // 0x_            
            VectorWS vCastLocation; // 0x_            
            bool bCraniumBasherTested; // 0x_            
            bool bMKBTested; // 0x_            
            bool bSpecialistTested; // 0x_            
            bool bOctarineTested; // 0x_            
            bool bHeartRegenApplied; // 0x_            
            bool bSangeAmpApplied; // 0x_            
            bool bLocketAmpApplied; // 0x_            
            bool bPaladinAmpApplied; // 0x_            
            bool bBlademailApplied; // 0x_            
            bool bForceFieldApplied; // 0x_            
            bool bKayaApplied; // 0x_            
            bool bYashaAndKayaApplied; // 0x_            
            bool bStoutConsidered; // 0x_            
            bool bAegisUsed; // 0x_            
            bool bRaindropUsed; // 0x_            
            bool bInterrupted; // 0x_            
            bool bDiffusalApplied; // 0x_            
            bool bChainLightningConsidered; // 0x_            
            bool bSuppressDamage; // 0x_            
            bool bRangedAttack; // 0x_            
            bool bProcessProcs; // 0x_            
            bool bProjectileIsFromIllusion; // 0x_            
            bool bHasMagicComponent; // 0x_            
            bool bIsSpellLifesteal; // 0x_            
            bool bBloodstoneRegenApplied; // 0x_            
            bool bShroudManaRestoreApplied; // 0x_            
            bool bPhylacteryApplied; // 0x_            
            bool bAllowZeroDamageFromPostReductionBlock; // 0x_            
            bool bForceMagicStickProc; // 0x_            
            bool bIgnoreNegativeValuesIfDebuffImmune; // 0x_            
            bool bIgnorePositiveValuesIfDebuffImmune; // 0x_            
            bool bIgnoreAllIfDebuffImmune; // 0x_            
            bool bAlsoIgnoreBuffsIfDebuffImmune; // 0x_            
            bool bIgnoreLowerIfDebuffImmune; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float flIgnoreLowerIfDebuffImmune; // 0x_            
            bool bIgnoreHigherIfDebuffImmune; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float flIgnoreHigherIfDebuffImmune; // 0x_            
            bool bIgnoreTemporaryAttackSpeedModifiers; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* pszAbilitySpecialName; // 0x_            
            std::int32_t nAbilitySpecialLevel; // 0x_            
            bool bAllowCopy; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // hattacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hattacker;
            char hattacker[0x_]; // 0x_            
            // htarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> htarget;
            char htarget[0x_]; // 0x_            
            // hunit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hunit;
            char hunit[0x_]; // 0x_            
            // inflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> inflictor;
            char inflictor[0x_]; // 0x_            
            // inflictor2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> inflictor2;
            char inflictor2[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CDOTA_Buff* pAddedBuff; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModifierParams, ability) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, fDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, fOriginalDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nActivity) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bTooltip) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nTooltipParam) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreInvis) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bNoCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreBaseArmor) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreBaseMagicArmor) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bReincarnate) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bDoNotConsume) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bReportMax) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, fDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, fGain) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, fAttackTimeRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, m_nIssuerPlayerIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, m_nVictimPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nDamageType) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nDamageflags) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nDamageCategory) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, iFailType) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, iRecord) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nCost) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nHealthCost) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nOrdertype) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, vOldLoc) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, vNewLoc) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, vCastLocation) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bCraniumBasherTested) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bMKBTested) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bSpecialistTested) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bOctarineTested) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bHeartRegenApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bSangeAmpApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bLocketAmpApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bPaladinAmpApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bBlademailApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bForceFieldApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bKayaApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bYashaAndKayaApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bStoutConsidered) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bAegisUsed) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bRaindropUsed) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bInterrupted) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bDiffusalApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bChainLightningConsidered) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bSuppressDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bRangedAttack) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bProcessProcs) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bProjectileIsFromIllusion) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bHasMagicComponent) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIsSpellLifesteal) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bBloodstoneRegenApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bShroudManaRestoreApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bPhylacteryApplied) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bAllowZeroDamageFromPostReductionBlock) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bForceMagicStickProc) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreNegativeValuesIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnorePositiveValuesIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreAllIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bAlsoIgnoreBuffsIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreLowerIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, flIgnoreLowerIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreHigherIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, flIgnoreHigherIfDebuffImmune) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bIgnoreTemporaryAttackSpeedModifiers) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, pszAbilitySpecialName) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, nAbilitySpecialLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, bAllowCopy) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, hattacker) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, htarget) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, hunit) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, inflictor) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, inflictor2) == 0x_);
        static_assert(offsetof(source2sdk::client::CModifierParams, pAddedBuff) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CModifierParams) == 0x_);
    };
};
