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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsEnemy : public source2sdk::client::CSurvivorsUnit
        {
        public:
            source2sdk::client::GameActivity_t m_activity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CSurvivorsSpawner* m_pSpawner; // 0x_            
            source2sdk::client::SurvivorsEnemyID_t m_enemyID; // 0x_            
            bool m_bIsDying; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sDeathEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDeathEffectParticle;
            char m_sDeathEffectParticle[0x_]; // 0x_            
            bool m_bSpawnPickupsOnDeath; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRunPlaybackRate; // 0x_            
            float m_flIdlePlaybackRate; // 0x_            
            float m_flTurnRate; // 0x_            
            float m_flCollisionRadius; // 0x_            
            std::int32_t m_nSeperationTickCounter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCurrentAttackIndex; // 0x_            
            float m_flTouchDamage; // 0x_            
            float m_flTouchTimeout; // 0x_            
            float m_flTouchCooldown; // 0x_            
            bool m_bDieOnTouch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDespawnTimer; // 0x_            
            bool m_bTryDespawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // 0x_            
            source2sdk::client::ESurvivorsEnemyMovementCapability m_eMovementCapability; // 0x_            
            Vector2D m_vOriginalFacing; // 0x_            
            float m_flSinTurnTimer; // 0x_            
            float m_flDeathEffectTimer; // 0x_            
            Vector m_vDeathAnimationDirection; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vCurrentSeparationVelocity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bCenterRooted; // 0x_            
            bool m_bRotates; // 0x_            
            bool m_bIsElite; // 0x_            
            bool m_bIsMiniboss; // 0x_            
            float m_flSpawnerExpirationTime; // 0x_            
            float m_flOverrideDespawnRadiusBuffer; // 0x_            
            Vector m_vSeparationVector; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemy) == 0x_);
    };
};
