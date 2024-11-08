#pragma once
#include "source2sdk/client/CSurvivorsAttributeValue.hpp"
#include "source2sdk/client/CSurvivorsUpgradeDefinition.hpp"
#include "source2sdk/client/SurvivorsAttributeType_t.hpp"
#include "source2sdk/client/SurvivorsPickupID_t.hpp"
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"
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
    // Size: 0x6a8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::SurvivorsPowerUpID_t m_unPowerUpID; // 0x8        
        int32_t m_nMaxLevel; // 0xc        
        // m_vecTooltipAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SurvivorsAttributeType_t> m_vecTooltipAttributes;
        char m_vecTooltipAttributes[0x18]; // 0x10        
        // m_vecScepterTooltipAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SurvivorsAttributeType_t> m_vecScepterTooltipAttributes;
        char m_vecScepterTooltipAttributes[0x18]; // 0x28        
        // m_vecBaseAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsAttributeValue> m_vecBaseAttributes;
        char m_vecBaseAttributes[0x18]; // 0x40        
        // m_vecRecipeItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SurvivorsPowerUpID_t> m_vecRecipeItems;
        char m_vecRecipeItems[0x18]; // 0x58        
        bool m_bIsPassive; // 0x70        
        bool m_bIsInnate; // 0x71        
        bool m_bIsGold; // 0x72        
        bool m_bRollable; // 0x73        
        [[maybe_unused]] std::uint8_t pad_0x74[0x4]; // 0x74
        // m_vecMinorUpgradeChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsUpgradeDefinition> m_vecMinorUpgradeChoices;
        char m_vecMinorUpgradeChoices[0x18]; // 0x78        
        bool m_bIsShardUpgradeable; // 0x90        
        bool m_bIsScepterUpgradeable; // 0x91        
        [[maybe_unused]] std::uint8_t pad_0x92[0x6]; // 0x92
        // m_vecAuthoredUpgradeChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsUpgradeDefinition> m_vecAuthoredUpgradeChoices;
        char m_vecAuthoredUpgradeChoices[0x18]; // 0x98        
        client::CSurvivorsUpgradeDefinition m_scepterUpgradeDefinition; // 0xb0        
        CPanoramaImageName m_sImage; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0x100[0x8]; // 0x100
        CUtlString m_sSource; // 0x108        
        CPanoramaImageName m_sHeroImage; // 0x110        
        CUtlString m_sLocAbilityName; // 0x120        
        CUtlString m_sLocAbilityDesc; // 0x128        
        CUtlString m_sLocShardAbilityDesc; // 0x130        
        CUtlString m_sLocScepterAbilityDesc; // 0x138        
        CUtlString m_sLocHeroName; // 0x140        
        bool m_bModifierParticleUsesOverheadOffset; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x149[0x7]; // 0x149
        // m_sModifierParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sModifierParticle;
        char m_sModifierParticle[0xe0]; // 0x150        
        // m_sStunParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sStunParticle;
        char m_sStunParticle[0xe0]; // 0x230        
        // m_sVulnerableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sVulnerableParticle;
        char m_sVulnerableParticle[0xe0]; // 0x310        
        // m_sFreezeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFreezeParticle;
        char m_sFreezeParticle[0xe0]; // 0x3f0        
        // m_sHitStatusEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHitStatusEffectParticle;
        char m_sHitStatusEffectParticle[0xe0]; // 0x4d0        
        // m_sWarmupEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sWarmupEffectParticle;
        char m_sWarmupEffectParticle[0xe0]; // 0x5b0        
        Vector m_vWarmupEffectColor; // 0x690        
        float m_flWarmupEffectTime; // 0x69c        
        float m_flSpawnPickupOnKillPercent; // 0x6a0        
        client::SurvivorsPickupID_t m_unSpawnPickupOnKillID; // 0x6a4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_unPowerUpID) == 0x8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_nMaxLevel) == 0xc);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecTooltipAttributes) == 0x10);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecScepterTooltipAttributes) == 0x28);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecBaseAttributes) == 0x40);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecRecipeItems) == 0x58);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bIsPassive) == 0x70);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bIsInnate) == 0x71);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bIsGold) == 0x72);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bRollable) == 0x73);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecMinorUpgradeChoices) == 0x78);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bIsShardUpgradeable) == 0x90);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bIsScepterUpgradeable) == 0x91);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecAuthoredUpgradeChoices) == 0x98);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_scepterUpgradeDefinition) == 0xb0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sImage) == 0xf0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sSource) == 0x108);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sHeroImage) == 0x110);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocAbilityName) == 0x120);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocAbilityDesc) == 0x128);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocShardAbilityDesc) == 0x130);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocScepterAbilityDesc) == 0x138);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocHeroName) == 0x140);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bModifierParticleUsesOverheadOffset) == 0x148);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sModifierParticle) == 0x150);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sStunParticle) == 0x230);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sVulnerableParticle) == 0x310);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sFreezeParticle) == 0x3f0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sHitStatusEffectParticle) == 0x4d0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sWarmupEffectParticle) == 0x5b0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vWarmupEffectColor) == 0x690);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_flWarmupEffectTime) == 0x69c);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_flSpawnPickupOnKillPercent) == 0x6a0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_unSpawnPickupOnKillID) == 0x6a4);
    
    static_assert(sizeof(CSurvivorsPowerUpDefinition) == 0x6a8);
};
