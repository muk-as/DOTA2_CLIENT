#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsUnit.hpp"
#include "source2sdk/client/ESurvivorsEnemyMovementBehavior.hpp"
#include "source2sdk/client/ESurvivorsEnemyMovementCapability.hpp"
#include "source2sdk/client/GameActivity_t.hpp"
#include "source2sdk/client/SurvivorsEnemyID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CSurvivorsSpawner;
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x338
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsEnemy : public source2sdk::client::CSurvivorsUnit
        {
        public:
            source2sdk::client::GameActivity_t m_activity; // 0x180            
            uint8_t _pad0184[0x4]; // 0x184
            source2sdk::client::CSurvivorsSpawner* m_pSpawner; // 0x188            
            source2sdk::client::SurvivorsEnemyID_t m_enemyID; // 0x190            
            bool m_bIsDying; // 0x194            
            uint8_t _pad0195[0x3]; // 0x195
            // m_sDeathEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDeathEffectParticle;
            char m_sDeathEffectParticle[0xe0]; // 0x198            
            bool m_bSpawnPickupsOnDeath; // 0x278            
            uint8_t _pad0279[0x3]; // 0x279
            float m_flRunPlaybackRate; // 0x27c            
            float m_flIdlePlaybackRate; // 0x280            
            float m_flTurnRate; // 0x284            
            float m_flCollisionRadius; // 0x288            
            std::int32_t m_nSeperationTickCounter; // 0x28c            
            uint8_t _pad0290[0x30]; // 0x290
            std::int32_t m_nCurrentAttackIndex; // 0x2c0            
            float m_flTouchDamage; // 0x2c4            
            float m_flTouchTimeout; // 0x2c8            
            float m_flTouchCooldown; // 0x2cc            
            bool m_bDieOnTouch; // 0x2d0            
            uint8_t _pad02d1[0x3]; // 0x2d1
            float m_flDespawnTimer; // 0x2d4            
            bool m_bTryDespawn; // 0x2d8            
            uint8_t _pad02d9[0x3]; // 0x2d9
            source2sdk::client::ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // 0x2dc            
            source2sdk::client::ESurvivorsEnemyMovementCapability m_eMovementCapability; // 0x2e0            
            Vector2D m_vOriginalFacing; // 0x2e4            
            float m_flSinTurnTimer; // 0x2ec            
            float m_flDeathEffectTimer; // 0x2f0            
            Vector m_vDeathAnimationDirection; // 0x2f4            
            uint8_t _pad0300[0x8]; // 0x300
            Vector m_vCurrentSeparationVelocity; // 0x308            
            uint8_t _pad0314[0xc]; // 0x314
            bool m_bCenterRooted; // 0x320            
            bool m_bRotates; // 0x321            
            bool m_bIsElite; // 0x322            
            bool m_bIsMiniboss; // 0x323            
            float m_flSpawnerExpirationTime; // 0x324            
            float m_flOverrideDespawnRadiusBuffer; // 0x328            
            Vector m_vSeparationVector; // 0x32c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemy) == 0x338);
    };
};
