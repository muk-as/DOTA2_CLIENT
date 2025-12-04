#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTAProjectileAttachment_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CDOTA_AttackRecord
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_hSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSource;
            char m_hSource[0x_]; // 0x_            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hInflictor;
            char m_hInflictor[0x_]; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            // m_hProjectileSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hProjectileSource;
            char m_hProjectileSource[0x_]; // 0x_            
            // m_hKillCreditOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hKillCreditOverride;
            char m_hKillCreditOverride[0x_]; // 0x_            
            float m_flDamage; // 0x_            
            float m_flOriginalDamage; // 0x_            
            float m_flDamagePhysical; // 0x_            
            float m_flDamagePhysical_IllusionDisplay; // 0x_            
            float m_flDamageMagical; // 0x_            
            float m_flDamageComposite; // 0x_            
            float m_flDamagePure; // 0x_            
            std::int16_t m_iRecord; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iDamageCategory; // 0x_            
            std::int32_t m_iFailType; // 0x_            
            std::int32_t m_iDamageType; // 0x_            
            std::int32_t m_iFlags; // 0x_            
            std::int32_t m_animation; // 0x_            
            // start of bitfield block
            uint32_t m_bAttack: 1;
            uint32_t m_bRangedAttack: 1;
            uint32_t m_bDirectionalRangedAttack: 1;
            uint32_t m_bSkipRangeCheck: 1;
            uint32_t m_bFakeAttack: 1;
            uint32_t m_bNeverMiss: 1;
            uint32_t m_bLethalAttack: 1;
            uint32_t m_bTriggeredAttack: 1;
            uint32_t m_bNoCooldown: 1;
            uint32_t m_bProcessProcs: 1;
            uint32_t m_bUseProjectile: 1;
            uint32_t m_bUseCastAttackOrb: 1;
            uint32_t m_bAutoCastAttack: 1;
            uint32_t m_bIgnoreBaseArmor: 1;
            uint32_t m_bIgnoreObstructions: 1;
            uint32_t m_bSuppressAttackSounds: 1;
            uint32_t m_bForceAttackMissSound: 1;
            uint32_t m_bSuppressDamageSounds: 1;
            uint32_t m_bSuppressDamageEffects: 1;
            // end of bitfield block// 19 bits
            std::int32_t m_nBashSource; // 0x_            
            std::int32_t m_nCritSource; // 0x_            
            float m_flAttackHeight; // 0x_            
            float m_flCombatLogCreditFactor; // 0x_            
            float m_flCriticalBonus; // 0x_            
            float m_flCriticalDamage; // 0x_            
            float m_flCriticalDisplay; // 0x_            
            float m_flDeadlyBlowBonus; // 0x_            
            float m_flDeadlyBlowDamage; // 0x_            
            float m_flDeadlyBlowDisplay; // 0x_            
            std::int32_t m_iProjectileSpeed; // 0x_            
            Vector m_vForceDirectionOverride; // 0x_            
            Vector m_vTargetLoc; // 0x_            
            Vector m_vBlockLoc; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x_            
            CUtlSymbolLarge m_iszAutoAttackRangedParticleAdditionalEffect; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_iCustomFXIndex; // 0x_            
            source2sdk::client::DOTAProjectileAttachment_t m_iCustomProjectileAttachment; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            KeyValues3 m_kvExtraData; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hSource) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hInflictor) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hTarget) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hProjectileSource) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hKillCreditOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flOriginalDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamagePhysical) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamagePhysical_IllusionDisplay) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamageMagical) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamageComposite) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamagePure) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iRecord) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iDamageCategory) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iFailType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iDamageType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_animation) == 0x_);
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bAttack
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bRangedAttack
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bDirectionalRangedAttack
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bSkipRangeCheck
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bFakeAttack
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bNeverMiss
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bLethalAttack
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bTriggeredAttack
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bNoCooldown
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bProcessProcs
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bUseProjectile
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bUseCastAttackOrb
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bAutoCastAttack
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bIgnoreBaseArmor
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bIgnoreObstructions
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bSuppressAttackSounds
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bForceAttackMissSound
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bSuppressDamageSounds
        // Cannot assert offset of bitfield CDOTA_AttackRecord::m_bSuppressDamageEffects
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_nBashSource) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_nCritSource) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flAttackHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCombatLogCreditFactor) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCriticalBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCriticalDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCriticalDisplay) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDeadlyBlowBonus) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDeadlyBlowDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDeadlyBlowDisplay) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iProjectileSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_vForceDirectionOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_vTargetLoc) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_vBlockLoc) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iszAutoAttackRangedParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iszAutoAttackRangedParticleAdditionalEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iCustomFXIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iCustomProjectileAttachment) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_kvExtraData) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTA_AttackRecord) == 0x_);
    };
};
