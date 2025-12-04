#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAFightingGameCancelOptionDefinition.hpp"
#include "source2sdk/client/EFightingGameActionID.hpp"
#include "source2sdk/client/EFightingGameInvulnerabilityFlags.hpp"
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFightingGameActionDefinition
        {
        public:
            source2sdk::client::EFightingGameActionID m_nActionID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strCustomActionName; // 0x_            
            CUtlString m_pszSequenceName; // 0x_            
            CUtlString m_pszIconFile; // 0x_            
            CUtlString m_pszSwingSound; // 0x_            
            CUtlString m_pszHitSound; // 0x_            
            std::int32_t m_nDuration; // 0x_            
            source2sdk::mathlib_extended::AABB_t m_HurtBox; // 0x_            
            source2sdk::mathlib_extended::AABB_t m_HitBox; // 0x_            
            std::int32_t m_nHitBoxStart; // 0x_            
            std::int32_t m_nHitBoxDuration; // 0x_            
            std::int32_t m_nOnHitFrames; // 0x_            
            std::int32_t m_nOnBlockFrames; // 0x_            
            float m_flGuardDamage; // 0x_            
            float m_flChipDamage; // 0x_            
            float m_flHitDamage; // 0x_            
            float m_flHealOnDamage; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_healOnDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_healOnDamageParticle;
            char m_healOnDamageParticle[0x_]; // 0x_            
            std::int32_t m_nDashStart; // 0x_            
            std::int32_t m_nDashDuration; // 0x_            
            std::int32_t m_nDamageAmpFrames; // 0x_            
            float m_fDamageAmpPercent; // 0x_            
            // m_damageAmpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_damageAmpParticle;
            char m_damageAmpParticle[0x_]; // 0x_            
            float m_flPushbackOnHit; // 0x_            
            float m_flPushbackOnBlock; // 0x_            
            // m_projectileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_projectileParticle;
            char m_projectileParticle[0x_]; // 0x_            
            float m_flProjectileSpeed; // 0x_            
            float m_flProjectileRange; // 0x_            
            float m_flDashSpeedMultiplier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_installParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_installParticle;
            char m_installParticle[0x_]; // 0x_            
            std::int32_t m_nInstallStart; // 0x_            
            std::int32_t m_nInstallFrames; // 0x_            
            // m_actionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_actionParticle;
            char m_actionParticle[0x_]; // 0x_            
            Vector2D m_vActionParticleOffset; // 0x_            
            std::int32_t m_nActionParticleStart; // 0x_            
            std::int32_t m_nHitStop; // 0x_            
            std::int32_t m_nBlockStop; // 0x_            
            source2sdk::client::EFightingGameInvulnerabilityFlags m_nInvulnerabilityFlags; // 0x_            
            std::int32_t m_nInvulnerabilityStart; // 0x_            
            std::int32_t m_nInvulnerabilityDuration; // 0x_            
            Vector2D m_vCameraShakeScale; // 0x_            
            bool m_bSingleUse; // 0x_            
            bool m_bNoAttackerPushback; // 0x_            
            bool m_bIsSpecialMove; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecCancelOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFightingGameCancelOptionDefinition> m_vecCancelOptions;
            char m_vecCancelOptions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_strCustomActionName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_pszSequenceName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_pszIconFile) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_pszSwingSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_pszHitSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_HurtBox) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_HitBox) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nHitBoxStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nHitBoxDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nOnHitFrames) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nOnBlockFrames) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flGuardDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flChipDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flHitDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flHealOnDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_healOnDamageParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nDashStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nDashDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nDamageAmpFrames) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_fDamageAmpPercent) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_damageAmpParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flPushbackOnHit) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flPushbackOnBlock) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_projectileParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flProjectileSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flProjectileRange) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_flDashSpeedMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_installParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nInstallStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nInstallFrames) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_actionParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_vActionParticleOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nActionParticleStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nHitStop) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nBlockStop) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nInvulnerabilityFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nInvulnerabilityStart) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_nInvulnerabilityDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_vCameraShakeScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_bSingleUse) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_bNoAttackerPushback) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_bIsSpecialMove) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameActionDefinition, m_vecCancelOptions) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFightingGameActionDefinition) == 0x_);
    };
};
