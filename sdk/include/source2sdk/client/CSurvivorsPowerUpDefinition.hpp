#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsAttributeValue.hpp"
#include "source2sdk/client/CSurvivorsUpgradeDefinition.hpp"
#include "source2sdk/client/SurvivorsAttributeType_t.hpp"
#include "source2sdk/client/SurvivorsPickupID_t.hpp"
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"
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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPowerUpDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::SurvivorsPowerUpID_t m_unPowerUpID; // 0x_            
            std::int32_t m_nMaxLevel; // 0x_            
            // m_vecTooltipAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsAttributeType_t> m_vecTooltipAttributes;
            char m_vecTooltipAttributes[0x_]; // 0x_            
            // m_vecScepterTooltipAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsAttributeType_t> m_vecScepterTooltipAttributes;
            char m_vecScepterTooltipAttributes[0x_]; // 0x_            
            // m_vecBaseAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttributeValue> m_vecBaseAttributes;
            char m_vecBaseAttributes[0x_]; // 0x_            
            // m_vecRecipeItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsPowerUpID_t> m_vecRecipeItems;
            char m_vecRecipeItems[0x_]; // 0x_            
            bool m_bIsPassive; // 0x_            
            bool m_bIsInnate; // 0x_            
            bool m_bIsGold; // 0x_            
            bool m_bRollable; // 0x_            
            bool m_bIsShardUpgradeable; // 0x_            
            bool m_bIsScepterUpgradeable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPanoramaImageName m_sImage; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sSource; // 0x_            
            CPanoramaImageName m_sHeroImage; // 0x_            
            CUtlString m_sLocAbilityName; // 0x_            
            CUtlString m_sLocAbilityDesc; // 0x_            
            CUtlString m_sLocShardAbilityDesc; // 0x_            
            CUtlString m_sLocScepterAbilityDesc; // 0x_            
            CUtlString m_sLocHeroName; // 0x_            
            // m_vecMinorUpgradeChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsUpgradeDefinition> m_vecMinorUpgradeChoices;
            char m_vecMinorUpgradeChoices[0x_]; // 0x_            
            // m_vecAuthoredUpgradeChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsUpgradeDefinition> m_vecAuthoredUpgradeChoices;
            char m_vecAuthoredUpgradeChoices[0x_]; // 0x_            
            source2sdk::client::CSurvivorsUpgradeDefinition m_scepterUpgradeDefinition; // 0x_            
            bool m_bModifierParticleUsesOverheadOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sModifierParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sModifierParticle;
            char m_sModifierParticle[0x_]; // 0x_            
            // m_sStunParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sStunParticle;
            char m_sStunParticle[0x_]; // 0x_            
            // m_sVulnerableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sVulnerableParticle;
            char m_sVulnerableParticle[0x_]; // 0x_            
            // m_sFreezeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFreezeParticle;
            char m_sFreezeParticle[0x_]; // 0x_            
            // m_sHitStatusEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHitStatusEffectParticle;
            char m_sHitStatusEffectParticle[0x_]; // 0x_            
            // m_sWarmupEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sWarmupEffectParticle;
            char m_sWarmupEffectParticle[0x_]; // 0x_            
            Vector m_vWarmupEffectColor; // 0x_            
            float m_flWarmupEffectTime; // 0x_            
            float m_flSpawnPickupOnKillPercent; // 0x_            
            source2sdk::client::SurvivorsPickupID_t m_unSpawnPickupOnKillID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_unPowerUpID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_nMaxLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_vecTooltipAttributes) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_vecScepterTooltipAttributes) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_vecBaseAttributes) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_vecRecipeItems) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_bIsPassive) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_bIsInnate) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_bIsGold) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_bRollable) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_bIsShardUpgradeable) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_bIsScepterUpgradeable) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sSource) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sHeroImage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sLocAbilityName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sLocAbilityDesc) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sLocShardAbilityDesc) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sLocScepterAbilityDesc) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sLocHeroName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_vecMinorUpgradeChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_vecAuthoredUpgradeChoices) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_scepterUpgradeDefinition) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_bModifierParticleUsesOverheadOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sModifierParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sStunParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sVulnerableParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sFreezeParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sHitStatusEffectParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_sWarmupEffectParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_vWarmupEffectColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_flWarmupEffectTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_flSpawnPickupOnKillPercent) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUpDefinition, m_unSpawnPickupOnKillID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUpDefinition) == 0x_);
    };
};
