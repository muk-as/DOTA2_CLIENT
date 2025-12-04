#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEnemyDefinition_Attack.hpp"
#include "source2sdk/client/CSurvivorsEnemyDefinition_PickupChance.hpp"
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
        class CSurvivorsEnemyDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::SurvivorsEnemyID_t m_unEnemyID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecModelNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>>> m_vecModelNames;
            char m_vecModelNames[0x_]; // 0x_            
            CUtlString m_sStatsName; // 0x_            
            CUtlString m_sDisplayName; // 0x_            
            CPanoramaImageName m_sImageThumbnail; // 0x_            
            bool m_bUseHeroModel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::HeroID_t m_nDOTAHeroID; // 0x_            
            // m_vecEconItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::item_definition_index_t> m_vecEconItems;
            char m_vecEconItems[0x_]; // 0x_            
            source2sdk::client::style_index_t m_unStyleIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sSkinName; // 0x_            
            // m_sSkinNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_sSkinNames;
            char m_sSkinNames[0x_]; // 0x_            
            float m_flTouchDamage; // 0x_            
            bool m_bDieOnTouch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecAttacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyDefinition_Attack> m_vecAttacks;
            char m_vecAttacks[0x_]; // 0x_            
            // m_vecPickupChances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyDefinition_PickupChance> m_vecPickupChances;
            char m_vecPickupChances[0x_]; // 0x_            
            // m_vecLootTable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsEnemyDefinition_PickupChance> m_vecLootTable;
            char m_vecLootTable[0x_]; // 0x_            
            source2sdk::client::CSurvivorsLootTable m_fullLootTable; // 0x_            
            float m_flMaxHealth; // 0x_            
            float m_flMaxHealthPerPlayerLevel; // 0x_            
            float m_flMoveSpeed; // 0x_            
            float m_flModelScale; // 0x_            
            float m_flMaxModelScaleVariance; // 0x_            
            float m_flCollisionRadius; // 0x_            
            bool m_bHasSolidBody; // 0x_            
            bool m_bUndespawnable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flOverrideDespawnRadiusBuffer; // 0x_            
            bool m_bHasDeathAnimation; // 0x_            
            bool m_bDissolveOnDeath; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDeathDuration; // 0x_            
            float m_flDeathEffect_DissolveEdgeWidth; // 0x_            
            float m_flDeathEffect_DissolveScale; // 0x_            
            Vector m_flDeathEffect_DissolveColor; // 0x_            
            bool m_bRandomFacing; // 0x_            
            bool m_bPlayerFacing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vFixedFacing; // 0x_            
            // m_sDeathEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sDeathEffectParticle;
            char m_sDeathEffectParticle[0x_]; // 0x_            
            float m_flMoveAnimPlaybackRate; // 0x_            
            float m_flIdleAnimPlaybackRate; // 0x_            
            float m_flTurnRate; // 0x_            
            float m_flSinMovementAngle; // 0x_            
            float m_flSinMovementPeriodMultiplier; // 0x_            
            float m_flMass; // 0x_            
            float m_flKnockbackResistance; // 0x_            
            float m_flStatusResistance; // 0x_            
            bool m_bIsElite; // 0x_            
            bool m_bIsMiniboss; // 0x_            
            bool m_bIsDestructible; // 0x_            
            bool m_bHasGlowOutline; // 0x_            
            bool m_bOverrideGlowColor; // 0x_            
            Color m_cOverriddenGlowColor; // 0x_            
            bool m_bShowHealthBar; // 0x_            
            bool m_bCenterRooted; // 0x_            
            bool m_bRotates; // 0x_            
            bool m_bRandomizeSinTurnTimerOnSpawn; // 0x_            
            bool m_bInvulnerable; // 0x_            
            bool m_bPlayerFriendly; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nSplitOnDeathNumUnits; // 0x_            
            source2sdk::client::SurvivorsEnemyID_t m_unSplitOnDeathEnemyID; // 0x_            
            float m_flSplitOnDeathKnockbackDistance; // 0x_            
            source2sdk::client::ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // 0x_            
            source2sdk::client::ESurvivorsEnemyMovementCapability m_eMovementCapability; // 0x_            
            source2sdk::client::GameActivity_t m_activityIdle; // 0x_            
            source2sdk::client::GameActivity_t m_activityMove; // 0x_            
            source2sdk::client::GameActivity_t m_activityDie; // 0x_            
            source2sdk::client::GameActivity_t m_activityDisabled; // 0x_            
            bool m_bPlayDeathSound; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ESurvivorsEnemySeparationLayer m_eSeparationLayer; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_unEnemyID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_vecModelNames) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_sStatsName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_sDisplayName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_sImageThumbnail) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bUseHeroModel) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_nDOTAHeroID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_vecEconItems) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_unStyleIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_sSkinName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_sSkinNames) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flTouchDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bDieOnTouch) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_vecAttacks) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_vecPickupChances) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_vecLootTable) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_fullLootTable) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flMaxHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flMaxHealthPerPlayerLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flMoveSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flModelScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flMaxModelScaleVariance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flCollisionRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bHasSolidBody) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bUndespawnable) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flOverrideDespawnRadiusBuffer) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bHasDeathAnimation) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bDissolveOnDeath) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flDeathDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flDeathEffect_DissolveEdgeWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flDeathEffect_DissolveScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flDeathEffect_DissolveColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bRandomFacing) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bPlayerFacing) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_vFixedFacing) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_sDeathEffectParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flMoveAnimPlaybackRate) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flIdleAnimPlaybackRate) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flTurnRate) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flSinMovementAngle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flSinMovementPeriodMultiplier) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flMass) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flKnockbackResistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flStatusResistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bIsElite) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bIsMiniboss) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bIsDestructible) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bHasGlowOutline) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bOverrideGlowColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_cOverriddenGlowColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bShowHealthBar) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bCenterRooted) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bRotates) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bRandomizeSinTurnTimerOnSpawn) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bInvulnerable) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bPlayerFriendly) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_nSplitOnDeathNumUnits) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_unSplitOnDeathEnemyID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_flSplitOnDeathKnockbackDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_eMovementBehavior) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_eMovementCapability) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_activityIdle) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_activityMove) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_activityDie) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_activityDisabled) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_bPlayDeathSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition, m_eSeparationLayer) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemyDefinition) == 0x_);
    };
};
