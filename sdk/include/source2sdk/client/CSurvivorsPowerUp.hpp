#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsUpgradeDefinition.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::SurvivorsPowerUpID_t m_unPowerUpID; // 0x_            
            std::int32_t m_nLevel; // 0x_            
            std::int32_t m_nMaxLevel; // 0x_            
            std::int32_t m_nNumAuthoredLevels; // 0x_            
            // m_vecMinorUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsUpgradeDefinition> m_vecMinorUpgrades;
            char m_vecMinorUpgrades[0x_]; // 0x_            
            bool m_bHasShardUpgrade; // 0x_            
            bool m_bHasScepterUpgrade; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flElapsedTime; // 0x_            
            float m_flTimeUntilNextTrigger; // 0x_            
            bool m_bHasTriggered; // 0x_            
            bool m_bIsPassive; // 0x_            
            bool m_bIsProjectile; // 0x_            
            bool m_bIsInnate; // 0x_            
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
            float m_flWarmupEffectTime; // 0x_            
            float m_flSpawnPickupOnKillPercent; // 0x_            
            source2sdk::client::SurvivorsPickupID_t m_unSpawnPickupOnKillID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_unPowerUpID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_nLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_nMaxLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_nNumAuthoredLevels) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_vecMinorUpgrades) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bHasShardUpgrade) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bHasScepterUpgrade) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flElapsedTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flTimeUntilNextTrigger) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bHasTriggered) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bIsPassive) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bIsProjectile) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bIsInnate) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bModifierParticleUsesOverheadOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sModifierParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sStunParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sVulnerableParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sFreezeParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sHitStatusEffectParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sWarmupEffectParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flWarmupEffectTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flSpawnPickupOnKillPercent) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_unSpawnPickupOnKillID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp) == 0x_);
    };
};
