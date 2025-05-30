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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x608
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            source2sdk::client::SurvivorsPowerUpID_t m_unPowerUpID; // 0x18            
            std::int32_t m_nLevel; // 0x1c            
            std::int32_t m_nMaxLevel; // 0x20            
            std::int32_t m_nNumAuthoredLevels; // 0x24            
            // m_vecMinorUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsUpgradeDefinition> m_vecMinorUpgrades;
            char m_vecMinorUpgrades[0x18]; // 0x28            
            bool m_bHasShardUpgrade; // 0x40            
            bool m_bHasScepterUpgrade; // 0x41            
            uint8_t _pad0042[0x2]; // 0x42
            float m_flElapsedTime; // 0x44            
            float m_flTimeUntilNextTrigger; // 0x48            
            bool m_bHasTriggered; // 0x4c            
            bool m_bIsPassive; // 0x4d            
            bool m_bIsProjectile; // 0x4e            
            bool m_bIsInnate; // 0x4f            
            bool m_bModifierParticleUsesOverheadOffset; // 0x50            
            uint8_t _pad0051[0x7]; // 0x51
            // m_sModifierParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sModifierParticle;
            char m_sModifierParticle[0xe0]; // 0x58            
            // m_sStunParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sStunParticle;
            char m_sStunParticle[0xe0]; // 0x138            
            // m_sVulnerableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sVulnerableParticle;
            char m_sVulnerableParticle[0xe0]; // 0x218            
            // m_sFreezeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFreezeParticle;
            char m_sFreezeParticle[0xe0]; // 0x2f8            
            // m_sHitStatusEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHitStatusEffectParticle;
            char m_sHitStatusEffectParticle[0xe0]; // 0x3d8            
            // m_sWarmupEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sWarmupEffectParticle;
            char m_sWarmupEffectParticle[0xe0]; // 0x4b8            
            float m_flWarmupEffectTime; // 0x598            
            float m_flSpawnPickupOnKillPercent; // 0x59c            
            source2sdk::client::SurvivorsPickupID_t m_unSpawnPickupOnKillID; // 0x5a0            
            uint8_t _pad05a4[0x64];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_unPowerUpID) == 0x18);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_nLevel) == 0x1c);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_nMaxLevel) == 0x20);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_nNumAuthoredLevels) == 0x24);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_vecMinorUpgrades) == 0x28);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bHasShardUpgrade) == 0x40);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bHasScepterUpgrade) == 0x41);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flElapsedTime) == 0x44);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flTimeUntilNextTrigger) == 0x48);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bHasTriggered) == 0x4c);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bIsPassive) == 0x4d);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bIsProjectile) == 0x4e);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bIsInnate) == 0x4f);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_bModifierParticleUsesOverheadOffset) == 0x50);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sModifierParticle) == 0x58);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sStunParticle) == 0x138);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sVulnerableParticle) == 0x218);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sFreezeParticle) == 0x2f8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sHitStatusEffectParticle) == 0x3d8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_sWarmupEffectParticle) == 0x4b8);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flWarmupEffectTime) == 0x598);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_flSpawnPickupOnKillPercent) == 0x59c);
        static_assert(offsetof(source2sdk::client::CSurvivorsPowerUp, m_unSpawnPickupOnKillID) == 0x5a0);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp) == 0x608);
    };
};
