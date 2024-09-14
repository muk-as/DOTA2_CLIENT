#pragma once
#include "source2sdk/client/CDOTAFightingGameCancelOptionDefinition.hpp"
#include "source2sdk/client/EFightingGameActionID.hpp"
#include "source2sdk/client/EFightingGameInvulnerabilityFlags.hpp"
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x560
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAFightingGameActionDefinition
    {
    public:
        client::EFightingGameActionID m_nActionID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_strCustomActionName; // 0x8        
        CUtlString m_pszSequenceName; // 0x10        
        CUtlString m_pszIconFile; // 0x18        
        CUtlString m_pszSwingSound; // 0x20        
        CUtlString m_pszHitSound; // 0x28        
        int32_t m_nDuration; // 0x30        
        mathlib_extended::AABB_t m_HurtBox; // 0x34        
        mathlib_extended::AABB_t m_HitBox; // 0x4c        
        int32_t m_nHitBoxStart; // 0x64        
        int32_t m_nHitBoxDuration; // 0x68        
        int32_t m_nOnHitFrames; // 0x6c        
        int32_t m_nOnBlockFrames; // 0x70        
        float m_flGuardDamage; // 0x74        
        float m_flChipDamage; // 0x78        
        float m_flHitDamage; // 0x7c        
        float m_flHealOnDamage; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x84[0x4]; // 0x84
        // m_healOnDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_healOnDamageParticle;
        char m_healOnDamageParticle[0xe0]; // 0x88        
        int32_t m_nDashStart; // 0x168        
        int32_t m_nDashDuration; // 0x16c        
        int32_t m_nDamageAmpFrames; // 0x170        
        float m_fDamageAmpPercent; // 0x174        
        // m_damageAmpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_damageAmpParticle;
        char m_damageAmpParticle[0xe0]; // 0x178        
        float m_flPushbackOnHit; // 0x258        
        float m_flPushbackOnBlock; // 0x25c        
        // m_projectileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_projectileParticle;
        char m_projectileParticle[0xe0]; // 0x260        
        float m_flProjectileSpeed; // 0x340        
        float m_flProjectileRange; // 0x344        
        float m_flDashSpeedMultiplier; // 0x348        
        [[maybe_unused]] std::uint8_t pad_0x34c[0x4]; // 0x34c
        // m_installParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_installParticle;
        char m_installParticle[0xe0]; // 0x350        
        int32_t m_nInstallStart; // 0x430        
        int32_t m_nInstallFrames; // 0x434        
        // m_actionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_actionParticle;
        char m_actionParticle[0xe0]; // 0x438        
        Vector2D m_vActionParticleOffset; // 0x518        
        int32_t m_nActionParticleStart; // 0x520        
        int32_t m_nHitStop; // 0x524        
        int32_t m_nBlockStop; // 0x528        
        client::EFightingGameInvulnerabilityFlags m_nInvulnerabilityFlags; // 0x52c        
        int32_t m_nInvulnerabilityStart; // 0x530        
        int32_t m_nInvulnerabilityDuration; // 0x534        
        Vector2D m_vCameraShakeScale; // 0x538        
        bool m_bSingleUse; // 0x540        
        bool m_bNoAttackerPushback; // 0x541        
        bool m_bIsSpecialMove; // 0x542        
        [[maybe_unused]] std::uint8_t pad_0x543[0x5]; // 0x543
        // m_vecCancelOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAFightingGameCancelOptionDefinition> m_vecCancelOptions;
        char m_vecCancelOptions[0x18]; // 0x548        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nActionID) == 0x0);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_strCustomActionName) == 0x8);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_pszSequenceName) == 0x10);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_pszIconFile) == 0x18);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_pszSwingSound) == 0x20);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_pszHitSound) == 0x28);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nDuration) == 0x30);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_HurtBox) == 0x34);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_HitBox) == 0x4c);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nHitBoxStart) == 0x64);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nHitBoxDuration) == 0x68);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nOnHitFrames) == 0x6c);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nOnBlockFrames) == 0x70);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flGuardDamage) == 0x74);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flChipDamage) == 0x78);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flHitDamage) == 0x7c);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flHealOnDamage) == 0x80);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_healOnDamageParticle) == 0x88);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nDashStart) == 0x168);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nDashDuration) == 0x16c);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nDamageAmpFrames) == 0x170);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_fDamageAmpPercent) == 0x174);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_damageAmpParticle) == 0x178);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flPushbackOnHit) == 0x258);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flPushbackOnBlock) == 0x25c);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_projectileParticle) == 0x260);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flProjectileSpeed) == 0x340);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flProjectileRange) == 0x344);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_flDashSpeedMultiplier) == 0x348);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_installParticle) == 0x350);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nInstallStart) == 0x430);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nInstallFrames) == 0x434);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_actionParticle) == 0x438);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_vActionParticleOffset) == 0x518);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nActionParticleStart) == 0x520);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nHitStop) == 0x524);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nBlockStop) == 0x528);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nInvulnerabilityFlags) == 0x52c);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nInvulnerabilityStart) == 0x530);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_nInvulnerabilityDuration) == 0x534);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_vCameraShakeScale) == 0x538);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_bSingleUse) == 0x540);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_bNoAttackerPushback) == 0x541);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_bIsSpecialMove) == 0x542);
    static_assert(offsetof(CDOTAFightingGameActionDefinition, m_vecCancelOptions) == 0x548);
    
    static_assert(sizeof(CDOTAFightingGameActionDefinition) == 0x560);
};
