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
        // Size: 0xf0
        #pragma pack(push, 1)
        class CDOTA_AttackRecord
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_hSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSource;
            char m_hSource[0x4]; // 0x8            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hInflictor;
            char m_hInflictor[0x4]; // 0xc            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x10            
            // m_hProjectileSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hProjectileSource;
            char m_hProjectileSource[0x4]; // 0x14            
            // m_hKillCreditOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hKillCreditOverride;
            char m_hKillCreditOverride[0x4]; // 0x18            
            float m_flDamage; // 0x1c            
            float m_flOriginalDamage; // 0x20            
            float m_flDamagePhysical; // 0x24            
            float m_flDamagePhysical_IllusionDisplay; // 0x28            
            float m_flDamageMagical; // 0x2c            
            float m_flDamageComposite; // 0x30            
            float m_flDamagePure; // 0x34            
            std::int16_t m_iRecord; // 0x38            
            uint8_t _pad003a[0x2]; // 0x3a
            std::int32_t m_iDamageCategory; // 0x3c            
            std::int32_t m_iFailType; // 0x40            
            std::int32_t m_iDamageType; // 0x44            
            std::int32_t m_iFlags; // 0x48            
            std::int32_t m_animation; // 0x4c            
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
            std::int32_t m_nBashSource; // 0x54            
            std::int32_t m_nCritSource; // 0x58            
            float m_flAttackHeight; // 0x5c            
            float m_flCombatLogCreditFactor; // 0x60            
            float m_flCriticalBonus; // 0x64            
            float m_flCriticalDamage; // 0x68            
            float m_flCriticalDisplay; // 0x6c            
            float m_flDeadlyBlowBonus; // 0x70            
            float m_flDeadlyBlowDamage; // 0x74            
            float m_flDeadlyBlowDisplay; // 0x78            
            std::int32_t m_iProjectileSpeed; // 0x7c            
            Vector m_vForceDirectionOverride; // 0x80            
            Vector m_vTargetLoc; // 0x8c            
            Vector m_vBlockLoc; // 0x98            
            uint8_t _pad00a4[0x4]; // 0xa4
            CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0xa8            
            CUtlSymbolLarge m_iszAutoAttackRangedParticleAdditionalEffect; // 0xb0            
            uint8_t _pad00b8[0x8]; // 0xb8
            source2sdk::client::ParticleIndex_t m_iCustomFXIndex; // 0xc0            
            source2sdk::client::DOTAProjectileAttachment_t m_iCustomProjectileAttachment; // 0xc4            
            uint8_t _pad00c8[0x18]; // 0xc8
            KeyValues3 m_kvExtraData; // 0xe0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hSource) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hInflictor) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hTarget) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hProjectileSource) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_hKillCreditOverride) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamage) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flOriginalDamage) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamagePhysical) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamagePhysical_IllusionDisplay) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamageMagical) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamageComposite) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDamagePure) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iRecord) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iDamageCategory) == 0x3c);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iFailType) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iDamageType) == 0x44);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iFlags) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_animation) == 0x4c);
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
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_nBashSource) == 0x54);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_nCritSource) == 0x58);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flAttackHeight) == 0x5c);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCombatLogCreditFactor) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCriticalBonus) == 0x64);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCriticalDamage) == 0x68);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flCriticalDisplay) == 0x6c);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDeadlyBlowBonus) == 0x70);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDeadlyBlowDamage) == 0x74);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_flDeadlyBlowDisplay) == 0x78);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iProjectileSpeed) == 0x7c);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_vForceDirectionOverride) == 0x80);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_vTargetLoc) == 0x8c);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_vBlockLoc) == 0x98);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iszAutoAttackRangedParticle) == 0xa8);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iszAutoAttackRangedParticleAdditionalEffect) == 0xb0);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iCustomFXIndex) == 0xc0);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_iCustomProjectileAttachment) == 0xc4);
        static_assert(offsetof(source2sdk::client::CDOTA_AttackRecord, m_kvExtraData) == 0xe0);
        
        static_assert(sizeof(source2sdk::client::CDOTA_AttackRecord) == 0xf0);
    };
};
