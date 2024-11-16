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
    // Size: 0x6a0
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
        bool m_bIsShardUpgradeable; // 0x74        
        bool m_bIsScepterUpgradeable; // 0x75        
        [[maybe_unused]] std::uint8_t pad_0x76[0x2]; // 0x76
        CPanoramaImageName m_sImage; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x88[0x8]; // 0x88
        CUtlString m_sSource; // 0x90        
        CPanoramaImageName m_sHeroImage; // 0x98        
        CUtlString m_sLocAbilityName; // 0xa8        
        CUtlString m_sLocAbilityDesc; // 0xb0        
        CUtlString m_sLocShardAbilityDesc; // 0xb8        
        CUtlString m_sLocScepterAbilityDesc; // 0xc0        
        CUtlString m_sLocHeroName; // 0xc8        
        // m_vecMinorUpgradeChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsUpgradeDefinition> m_vecMinorUpgradeChoices;
        char m_vecMinorUpgradeChoices[0x18]; // 0xd0        
        // m_vecAuthoredUpgradeChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsUpgradeDefinition> m_vecAuthoredUpgradeChoices;
        char m_vecAuthoredUpgradeChoices[0x18]; // 0xe8        
        client::CSurvivorsUpgradeDefinition m_scepterUpgradeDefinition; // 0x100        
        bool m_bModifierParticleUsesOverheadOffset; // 0x140        
        [[maybe_unused]] std::uint8_t pad_0x141[0x7]; // 0x141
        // m_sModifierParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sModifierParticle;
        char m_sModifierParticle[0xe0]; // 0x148        
        // m_sStunParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sStunParticle;
        char m_sStunParticle[0xe0]; // 0x228        
        // m_sVulnerableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sVulnerableParticle;
        char m_sVulnerableParticle[0xe0]; // 0x308        
        // m_sFreezeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFreezeParticle;
        char m_sFreezeParticle[0xe0]; // 0x3e8        
        // m_sHitStatusEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHitStatusEffectParticle;
        char m_sHitStatusEffectParticle[0xe0]; // 0x4c8        
        // m_sWarmupEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sWarmupEffectParticle;
        char m_sWarmupEffectParticle[0xe0]; // 0x5a8        
        Vector m_vWarmupEffectColor; // 0x688        
        float m_flWarmupEffectTime; // 0x694        
        float m_flSpawnPickupOnKillPercent; // 0x698        
        client::SurvivorsPickupID_t m_unSpawnPickupOnKillID; // 0x69c        
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
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bIsShardUpgradeable) == 0x74);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bIsScepterUpgradeable) == 0x75);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sImage) == 0x78);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sSource) == 0x90);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sHeroImage) == 0x98);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocAbilityName) == 0xa8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocAbilityDesc) == 0xb0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocShardAbilityDesc) == 0xb8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocScepterAbilityDesc) == 0xc0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sLocHeroName) == 0xc8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecMinorUpgradeChoices) == 0xd0);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vecAuthoredUpgradeChoices) == 0xe8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_scepterUpgradeDefinition) == 0x100);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_bModifierParticleUsesOverheadOffset) == 0x140);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sModifierParticle) == 0x148);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sStunParticle) == 0x228);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sVulnerableParticle) == 0x308);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sFreezeParticle) == 0x3e8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sHitStatusEffectParticle) == 0x4c8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_sWarmupEffectParticle) == 0x5a8);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_vWarmupEffectColor) == 0x688);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_flWarmupEffectTime) == 0x694);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_flSpawnPickupOnKillPercent) == 0x698);
    static_assert(offsetof(CSurvivorsPowerUpDefinition, m_unSpawnPickupOnKillID) == 0x69c);
    
    static_assert(sizeof(CSurvivorsPowerUpDefinition) == 0x6a0);
};
