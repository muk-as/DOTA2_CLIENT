#pragma once
#include "source2sdk/client/CSurvivorsEnemyDefinition__Attack.hpp"
#include "source2sdk/client/CSurvivorsEnemyDefinition__PickupChance.hpp"
#include "source2sdk/client/CSurvivorsLootTable.hpp"
#include "source2sdk/client/ESurvivorsEnemyMovementBehavior.hpp"
#include "source2sdk/client/ESurvivorsEnemyMovementCapability.hpp"
#include "source2sdk/client/ESurvivorsEnemySeparationLayer.hpp"
#include "source2sdk/client/GameActivity_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/SurvivorsEnemyID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x288
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsEnemyDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::SurvivorsEnemyID_t m_unEnemyID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0xc]; // 0xc
        // m_vecModelNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>>> m_vecModelNames;
        char m_vecModelNames[0x18]; // 0x18        
        CUtlString m_sStatsName; // 0x30        
        CUtlString m_sDisplayName; // 0x38        
        CPanoramaImageName m_sImageThumbnail; // 0x40        
        bool m_bUseHeroModel; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        client::HeroID_t m_nDOTAHeroID; // 0x54        
        // m_vecEconItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::item_definition_index_t> m_vecEconItems;
        char m_vecEconItems[0x18]; // 0x58        
        client::style_index_t m_unStyleIndex; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x71[0x7]; // 0x71
        CUtlString m_sSkinName; // 0x78        
        // m_sSkinNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_sSkinNames;
        char m_sSkinNames[0x18]; // 0x80        
        float m_flTouchDamage; // 0x98        
        bool m_bDieOnTouch; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9d[0x3]; // 0x9d
        // m_vecAttacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsEnemyDefinition__Attack> m_vecAttacks;
        char m_vecAttacks[0x18]; // 0xa0        
        // m_vecPickupChances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsEnemyDefinition__PickupChance> m_vecPickupChances;
        char m_vecPickupChances[0x18]; // 0xb8        
        // m_vecLootTable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CSurvivorsEnemyDefinition__PickupChance> m_vecLootTable;
        char m_vecLootTable[0x18]; // 0xd0        
        client::CSurvivorsLootTable m_fullLootTable; // 0xe8        
        float m_flMaxHealth; // 0x100        
        float m_flMaxHealthPerPlayerLevel; // 0x104        
        float m_flMoveSpeed; // 0x108        
        float m_flModelScale; // 0x10c        
        float m_flMaxModelScaleVariance; // 0x110        
        float m_flCollisionRadius; // 0x114        
        bool m_bHasSolidBody; // 0x118        
        bool m_bUndespawnable; // 0x119        
        [[maybe_unused]] std::uint8_t pad_0x11a[0x2]; // 0x11a
        float m_flOverrideDespawnRadiusBuffer; // 0x11c        
        bool m_bHasDeathAnimation; // 0x120        
        bool m_bDissolveOnDeath; // 0x121        
        [[maybe_unused]] std::uint8_t pad_0x122[0x2]; // 0x122
        float m_flDeathDuration; // 0x124        
        float m_flDeathEffect_DissolveEdgeWidth; // 0x128        
        float m_flDeathEffect_DissolveScale; // 0x12c        
        Vector m_flDeathEffect_DissolveColor; // 0x130        
        bool m_bRandomFacing; // 0x13c        
        bool m_bPlayerFacing; // 0x13d        
        [[maybe_unused]] std::uint8_t pad_0x13e[0x2]; // 0x13e
        Vector2D m_vFixedFacing; // 0x140        
        // m_sDeathEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDeathEffectParticle;
        char m_sDeathEffectParticle[0xe0]; // 0x148        
        float m_flMoveAnimPlaybackRate; // 0x228        
        float m_flIdleAnimPlaybackRate; // 0x22c        
        float m_flTurnRate; // 0x230        
        float m_flSinMovementAngle; // 0x234        
        float m_flSinMovementPeriodMultiplier; // 0x238        
        float m_flMass; // 0x23c        
        float m_flKnockbackResistance; // 0x240        
        float m_flStatusResistance; // 0x244        
        bool m_bIsElite; // 0x248        
        bool m_bIsMiniboss; // 0x249        
        bool m_bIsDestructible; // 0x24a        
        bool m_bHasGlowOutline; // 0x24b        
        bool m_bOverrideGlowColor; // 0x24c        
        Color m_cOverriddenGlowColor; // 0x24d        
        bool m_bShowHealthBar; // 0x251        
        bool m_bCenterRooted; // 0x252        
        bool m_bRotates; // 0x253        
        bool m_bRandomizeSinTurnTimerOnSpawn; // 0x254        
        bool m_bInvulnerable; // 0x255        
        bool m_bPlayerFriendly; // 0x256        
        [[maybe_unused]] std::uint8_t pad_0x257[0x1]; // 0x257
        int32_t m_nSplitOnDeathNumUnits; // 0x258        
        client::SurvivorsEnemyID_t m_unSplitOnDeathEnemyID; // 0x25c        
        float m_flSplitOnDeathKnockbackDistance; // 0x260        
        client::ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // 0x264        
        client::ESurvivorsEnemyMovementCapability m_eMovementCapability; // 0x268        
        client::GameActivity_t m_activityIdle; // 0x26c        
        client::GameActivity_t m_activityMove; // 0x270        
        client::GameActivity_t m_activityDie; // 0x274        
        client::GameActivity_t m_activityDisabled; // 0x278        
        bool m_bPlayDeathSound; // 0x27c        
        [[maybe_unused]] std::uint8_t pad_0x27d[0x3]; // 0x27d
        client::ESurvivorsEnemySeparationLayer m_eSeparationLayer; // 0x280        
        [[maybe_unused]] std::uint8_t pad_0x284[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_unEnemyID) == 0x8);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_vecModelNames) == 0x18);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_sStatsName) == 0x30);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_sDisplayName) == 0x38);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_sImageThumbnail) == 0x40);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bUseHeroModel) == 0x50);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_nDOTAHeroID) == 0x54);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_vecEconItems) == 0x58);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_unStyleIndex) == 0x70);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_sSkinName) == 0x78);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_sSkinNames) == 0x80);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flTouchDamage) == 0x98);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bDieOnTouch) == 0x9c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_vecAttacks) == 0xa0);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_vecPickupChances) == 0xb8);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_vecLootTable) == 0xd0);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_fullLootTable) == 0xe8);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flMaxHealth) == 0x100);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flMaxHealthPerPlayerLevel) == 0x104);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flMoveSpeed) == 0x108);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flModelScale) == 0x10c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flMaxModelScaleVariance) == 0x110);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flCollisionRadius) == 0x114);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bHasSolidBody) == 0x118);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bUndespawnable) == 0x119);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flOverrideDespawnRadiusBuffer) == 0x11c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bHasDeathAnimation) == 0x120);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bDissolveOnDeath) == 0x121);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flDeathDuration) == 0x124);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flDeathEffect_DissolveEdgeWidth) == 0x128);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flDeathEffect_DissolveScale) == 0x12c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flDeathEffect_DissolveColor) == 0x130);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bRandomFacing) == 0x13c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bPlayerFacing) == 0x13d);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_vFixedFacing) == 0x140);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_sDeathEffectParticle) == 0x148);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flMoveAnimPlaybackRate) == 0x228);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flIdleAnimPlaybackRate) == 0x22c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flTurnRate) == 0x230);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flSinMovementAngle) == 0x234);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flSinMovementPeriodMultiplier) == 0x238);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flMass) == 0x23c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flKnockbackResistance) == 0x240);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flStatusResistance) == 0x244);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bIsElite) == 0x248);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bIsMiniboss) == 0x249);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bIsDestructible) == 0x24a);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bHasGlowOutline) == 0x24b);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bOverrideGlowColor) == 0x24c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_cOverriddenGlowColor) == 0x24d);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bShowHealthBar) == 0x251);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bCenterRooted) == 0x252);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bRotates) == 0x253);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bRandomizeSinTurnTimerOnSpawn) == 0x254);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bInvulnerable) == 0x255);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bPlayerFriendly) == 0x256);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_nSplitOnDeathNumUnits) == 0x258);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_unSplitOnDeathEnemyID) == 0x25c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_flSplitOnDeathKnockbackDistance) == 0x260);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_eMovementBehavior) == 0x264);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_eMovementCapability) == 0x268);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_activityIdle) == 0x26c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_activityMove) == 0x270);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_activityDie) == 0x274);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_activityDisabled) == 0x278);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_bPlayDeathSound) == 0x27c);
    static_assert(offsetof(CSurvivorsEnemyDefinition, m_eSeparationLayer) == 0x280);
    
    static_assert(sizeof(CSurvivorsEnemyDefinition) == 0x288);
};
