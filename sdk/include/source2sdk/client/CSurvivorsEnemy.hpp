#pragma once
#include "source2sdk/client/CSurvivorsUnit.hpp"
#include "source2sdk/client/ESurvivorsEnemyMovementBehavior.hpp"
#include "source2sdk/client/ESurvivorsEnemyMovementCapability.hpp"
#include "source2sdk/client/GameActivity_t.hpp"
#include "source2sdk/client/SurvivorsEnemyID_t.hpp"
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
    class CSurvivorsSpawner;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x328
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsEnemy : public client::CSurvivorsUnit
    {
    public:
        client::GameActivity_t m_activity; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x174[0x4]; // 0x174
        client::CSurvivorsSpawner* m_pSpawner; // 0x178        
        client::SurvivorsEnemyID_t m_enemyID; // 0x180        
        bool m_bIsDying; // 0x184        
        [[maybe_unused]] std::uint8_t pad_0x185[0x3]; // 0x185
        // m_sDeathEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDeathEffectParticle;
        char m_sDeathEffectParticle[0xe0]; // 0x188        
        bool m_bSpawnPickupsOnDeath; // 0x268        
        [[maybe_unused]] std::uint8_t pad_0x269[0x3]; // 0x269
        float m_flRunPlaybackRate; // 0x26c        
        float m_flIdlePlaybackRate; // 0x270        
        float m_flTurnRate; // 0x274        
        float m_flCollisionRadius; // 0x278        
        int32_t m_nSeperationTickCounter; // 0x27c        
        [[maybe_unused]] std::uint8_t pad_0x280[0x30]; // 0x280
        int32_t m_nCurrentAttackIndex; // 0x2b0        
        float m_flTouchDamage; // 0x2b4        
        float m_flTouchTimeout; // 0x2b8        
        float m_flTouchCooldown; // 0x2bc        
        bool m_bDieOnTouch; // 0x2c0        
        [[maybe_unused]] std::uint8_t pad_0x2c1[0x3]; // 0x2c1
        float m_flDespawnTimer; // 0x2c4        
        bool m_bTryDespawn; // 0x2c8        
        [[maybe_unused]] std::uint8_t pad_0x2c9[0x3]; // 0x2c9
        client::ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // 0x2cc        
        client::ESurvivorsEnemyMovementCapability m_eMovementCapability; // 0x2d0        
        Vector2D m_vOriginalFacing; // 0x2d4        
        float m_flSinTurnTimer; // 0x2dc        
        float m_flDeathEffectTimer; // 0x2e0        
        Vector m_vDeathAnimationDirection; // 0x2e4        
        [[maybe_unused]] std::uint8_t pad_0x2f0[0x8]; // 0x2f0
        Vector m_vCurrentSeparationVelocity; // 0x2f8        
        [[maybe_unused]] std::uint8_t pad_0x304[0xc]; // 0x304
        bool m_bCenterRooted; // 0x310        
        bool m_bRotates; // 0x311        
        bool m_bIsElite; // 0x312        
        bool m_bIsMiniboss; // 0x313        
        float m_flSpawnerExpirationTime; // 0x314        
        float m_flOverrideDespawnRadiusBuffer; // 0x318        
        Vector m_vSeparationVector; // 0x31c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemy because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemy) == 0x328);
};
