#pragma once
#include "source2sdk/client/CUnitOrders.hpp"
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_ModifierManager.hpp"
#include "source2sdk/server/CDOTA_UnitInventory.hpp"
#include "source2sdk/server/CLocalNPCObstructionsCache.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/NextBotCombatCharacter.hpp"
#include "source2sdk/server/ObstructionRelationshipClass_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTA_NeutralSpawner;
};

namespace source2sdk::server
{
    class CDOTA_ScriptedSpawner;
};

namespace source2sdk::server
{
    class CLocomotionBase;
};

namespace source2sdk::server
{
    class IBody;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1810
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_bIsIllusion"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_flSimulationTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_nForceBone"
    // static metadata: MNetworkExcludeByName "m_nHitboxSet"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_vecForce"
    // static metadata: MNetworkExcludeByName "m_vecMaxs"
    // static metadata: MNetworkExcludeByName "m_vecMins"
    // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
    // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
    // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_bTakesDamage"
    // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
    // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
    // static metadata: MNetworkUserGroupProxy "CDOTA_BaseNPC"
    // static metadata: MNetworkUserGroupProxy "CDOTA_BaseNPC"
    // static metadata: MNetworkVarNames "bool m_bSelectionRingVisible"
    // static metadata: MNetworkVarNames "int m_iCurrentLevel"
    // static metadata: MNetworkVarNames "float m_flMana"
    // static metadata: MNetworkVarNames "float m_flMaxMana"
    // static metadata: MNetworkVarNames "float m_flManaThinkRegen"
    // static metadata: MNetworkVarNames "float m_flHealthThinkRegen"
    // static metadata: MNetworkVarNames "int m_nHealthBarOffsetOverride"
    // static metadata: MNetworkVarNames "bool m_bIsPhantom"
    // static metadata: MNetworkVarNames "bool m_bIsAncient"
    // static metadata: MNetworkVarNames "bool m_bIsBossCreature"
    // static metadata: MNetworkVarNames "bool m_bIsNeutralUnitType"
    // static metadata: MNetworkVarNames "bool m_bIsSummoned"
    // static metadata: MNetworkVarNames "bool m_bCanBeDominated"
    // static metadata: MNetworkVarNames "bool m_bCanRespawn"
    // static metadata: MNetworkVarNames "bool m_bIsClone"
    // static metadata: MNetworkVarNames "bool m_bHasUpgradeableAbilities"
    // static metadata: MNetworkVarNames "int m_iBKBChargesUsed"
    // static metadata: MNetworkVarNames "int m_iAeonChargesUsed"
    // static metadata: MNetworkVarNames "GameTime_t m_flRefresherUseTime"
    // static metadata: MNetworkVarNames "float m_flRefresherLastCooldown"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastDealtDamageTime"
    // static metadata: MNetworkVarNames "int m_iBotDebugData"
    // static metadata: MNetworkVarNames "bool m_bIsMoving"
    // static metadata: MNetworkVarNames "bool m_bCanUseWards"
    // static metadata: MNetworkVarNames "bool m_bCanUseAllItems"
    // static metadata: MNetworkVarNames "CHandle< CDOTA_NeutralSpawner> m_hNeutralSpawner"
    // static metadata: MNetworkVarNames "float m_flManaRegen"
    // static metadata: MNetworkVarNames "float m_flHealthRegen"
    // static metadata: MNetworkVarNames "int64 m_nTotalDamageTaken"
    // static metadata: MNetworkVarNames "int m_iAttackRange"
    // static metadata: MNetworkVarNames "int m_iMoveSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flTauntCooldown"
    // static metadata: MNetworkVarNames "GameTime_t m_flTauntCooldown2"
    // static metadata: MNetworkVarNames "float m_fRevealRadius"
    // static metadata: MNetworkVarNames "float m_flBaseAttackTime"
    // static metadata: MNetworkVarNames "int m_iDayTimeVisionRange"
    // static metadata: MNetworkVarNames "int m_iNightTimeVisionRange"
    // static metadata: MNetworkVarNames "float m_flPhysicalArmorValue"
    // static metadata: MNetworkVarNames "float m_flMagicalResistanceValue"
    // static metadata: MNetworkVarNames "int m_iAttackCapabilities"
    // static metadata: MNetworkVarNames "int m_iSpecialAbility"
    // static metadata: MNetworkVarNames "int m_iXPBounty"
    // static metadata: MNetworkVarNames "int m_iXPBountyExtra"
    // static metadata: MNetworkVarNames "int m_iGoldBountyMin"
    // static metadata: MNetworkVarNames "int m_iGoldBountyMax"
    // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerOwnerID"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastAttackTime"
    // static metadata: MNetworkVarNames "uint64 m_nUnitState64"
    // static metadata: MNetworkVarNames "int8 m_nUnitModelVariant"
    // static metadata: MNetworkVarNames "int m_iTaggedAsVisibleByTeam"
    // static metadata: MNetworkVarNames "uint64 m_iIsControllableByPlayer64"
    // static metadata: MNetworkVarNames "EHANDLE m_hAbilities"
    // static metadata: MNetworkVarNames "CDOTA_ModifierManager m_ModifierManager"
    // static metadata: MNetworkVarNames "string_t m_iszUnitName"
    // static metadata: MNetworkVarNames "int m_iUnitNameIndex"
    // static metadata: MNetworkVarNames "int m_iDamageMin"
    // static metadata: MNetworkVarNames "int m_iDamageMax"
    // static metadata: MNetworkVarNames "int m_iDamageBonus"
    // static metadata: MNetworkVarNames "bool m_bIsWaitingToSpawn"
    // static metadata: MNetworkVarNames "bool m_bIsIllusion"
    // static metadata: MNetworkVarNames "uint8 m_nUnitLabelIndex"
    // static metadata: MNetworkVarNames "CUtlString m_szScaleset"
    // static metadata: MNetworkVarNames "CUtlString m_szUnitLabel"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerNPC"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGoalEntity"
    // static metadata: MNetworkVarNames "CDOTA_UnitInventory m_Inventory"
    // static metadata: MNetworkVarNames "DOTA_SHOP_TYPE m_iCurShop"
    // static metadata: MNetworkVarNames "string_t m_szCurShopEntName"
    // static metadata: MNetworkVarNames "bool m_bStolenScepter"
    // static metadata: MNetworkVarNames "int m_anglediff"
    // static metadata: MNetworkVarNames "int m_NetworkActivity"
    // static metadata: MNetworkVarNames "int m_NetworkSequenceIndex"
    // static metadata: MNetworkVarNames "bool m_bShouldDoFlyHeightVisual"
    // static metadata: MNetworkVarNames "float m_flStartSequenceCycle"
    // static metadata: MNetworkVarNames "char m_CustomHealthLabel"
    // static metadata: MNetworkVarNames "Color m_CustomHealthLabelColor"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC : public server::NextBotCombatCharacter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x948[0x20]; // 0x948
        bool m_bPledgedOfrenda; // 0x968        
        [[maybe_unused]] std::uint8_t pad_0x969[0x3]; // 0x969
        uint32_t m_iUnitType; // 0x96c        
        Color m_colorGemColor; // 0x970        
        bool m_bHasColorGem; // 0x974        
        // metadata: MNetworkEnable
        bool m_bSelectionRingVisible; // 0x975        
        [[maybe_unused]] std::uint8_t pad_0x976[0xa]; // 0x976
        CUtlSymbolLarge m_iszBaseClass; // 0x980        
        int32_t m_iStartingMaxHealth; // 0x988        
        int32_t m_iStartingMaxMana; // 0x98c        
        int32_t m_iStartingMana; // 0x990        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentLevel; // 0x994        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMana; // 0x998        
        float m_flBaseMaxMana; // 0x99c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMaxMana; // 0x9a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "14"
        // metadata: MNetworkMinValue "-50,000000"
        // metadata: MNetworkMaxValue "500,000000"
        float m_flManaThinkRegen; // 0x9a4        
        float m_flBaseMaxHealth; // 0x9a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flHealthThinkRegen; // 0x9ac        
        // metadata: MNetworkEnable
        int32_t m_nHealthBarOffsetOverride; // 0x9b0        
        int32_t m_nHealthBarOffset; // 0x9b4        
        // metadata: MNetworkEnable
        bool m_bIsPhantom; // 0x9b8        
        // metadata: MNetworkEnable
        bool m_bIsAncient; // 0x9b9        
        // metadata: MNetworkEnable
        bool m_bIsBossCreature; // 0x9ba        
        // metadata: MNetworkEnable
        bool m_bIsNeutralUnitType; // 0x9bb        
        bool m_bAutoAttacksByDefault; // 0x9bc        
        // metadata: MNetworkEnable
        bool m_bIsSummoned; // 0x9bd        
        // metadata: MNetworkEnable
        bool m_bCanBeDominated; // 0x9be        
        // metadata: MNetworkEnable
        bool m_bCanRespawn; // 0x9bf        
        // metadata: MNetworkEnable
        bool m_bIsClone; // 0x9c0        
        bool m_bConsideredHero; // 0x9c1        
        bool m_bUsesConstantGesture; // 0x9c2        
        bool m_bIsPlayingSingleForcedActivity; // 0x9c3        
        // metadata: MNetworkEnable
        bool m_bHasUpgradeableAbilities; // 0x9c4        
        [[maybe_unused]] std::uint8_t pad_0x9c5[0x3]; // 0x9c5
        // metadata: MNetworkEnable
        int32_t m_iBKBChargesUsed; // 0x9c8        
        // metadata: MNetworkEnable
        int32_t m_iAeonChargesUsed; // 0x9cc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRefresherUseTime; // 0x9d0        
        // metadata: MNetworkEnable
        float m_flRefresherLastCooldown; // 0x9d4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDealtDamageTime; // 0x9d8        
        // metadata: MNetworkEnable
        int32_t m_iBotDebugData; // 0x9dc        
        // metadata: MNetworkEnable
        bool m_bIsMoving; // 0x9e0        
        [[maybe_unused]] std::uint8_t pad_0x9e1[0x19f]; // 0x9e1
        float m_flChannelMultiplier; // 0xb80        
        // metadata: MNetworkEnable
        bool m_bCanUseWards; // 0xb84        
        // metadata: MNetworkEnable
        bool m_bCanUseAllItems; // 0xb85        
        [[maybe_unused]] std::uint8_t pad_0xb86[0x2]; // 0xb86
        client::PlayerID_t m_iLastAbilityPlayer; // 0xb88        
        bool m_bIsPhantomBlocker; // 0xb8c        
        bool m_bBlocksCreepSpawn; // 0xb8d        
        bool m_bCanSellItems; // 0xb8e        
        [[maybe_unused]] std::uint8_t pad_0xb8f[0x1]; // 0xb8f
        // metadata: MNetworkEnable
        // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_NeutralSpawner> m_hNeutralSpawner;
        char m_hNeutralSpawner[0x4]; // 0xb90        
        bool m_bTrackDamageTaken; // 0xb94        
        [[maybe_unused]] std::uint8_t pad_0xb95[0x3]; // 0xb95
        entity2::GameTick_t m_nNextRegenThink; // 0xb98        
        entity2::GameTick_t m_nNextModifierThink; // 0xb9c        
        entity2::GameTick_t m_nNextModelScaleThink; // 0xba0        
        entity2::GameTick_t m_nNextUnitThink; // 0xba4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flManaRegen; // 0xba8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flHealthRegen; // 0xbac        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int64_t m_nTotalDamageTaken; // 0xbb0        
        float m_flHealthRegenCounter; // 0xbb8        
        float m_flManaRegenCounter; // 0xbbc        
        float m_flAccumulatedHeal; // 0xbc0        
        int32_t m_iBaseAttackSpeed; // 0xbc4        
        int32_t m_iBaseDamageMin; // 0xbc8        
        int32_t m_iBaseDamageMax; // 0xbcc        
        // metadata: MNetworkEnable
        int32_t m_iAttackRange; // 0xbd0        
        int32_t m_iAttackRangeBuffer; // 0xbd4        
        // metadata: MNetworkEnable
        int32_t m_iMoveSpeed; // 0xbd8        
        float m_flTurnRate; // 0xbdc        
        int32_t m_iHasAggressiveStance; // 0xbe0        
        bool m_bInAggressiveStance; // 0xbe4        
        bool m_bInInjuredAggressiveStance; // 0xbe5        
        [[maybe_unused]] std::uint8_t pad_0xbe6[0x2]; // 0xbe6
        float m_flFollowRange; // 0xbe8        
        int32_t m_iAcquisitionRange; // 0xbec        
        float m_flAttackAnimationPoint; // 0xbf0        
        float m_flHullRadius; // 0xbf4        
        float m_flCollisionPadding; // 0xbf8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown; // 0xbfc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown2; // 0xc00        
        // metadata: MNetworkEnable
        float m_fRevealRadius; // 0xc04        
        float m_flProjectileCollisionSize; // 0xc08        
        server::ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // 0xc0c        
        CUtlSymbolLarge m_iszParticleFolder; // 0xc10        
        CUtlSymbolLarge m_iszGameSoundsFile; // 0xc18        
        CUtlSymbolLarge m_iszVoiceFile; // 0xc20        
        CUtlSymbolLarge m_iszSoundSet; // 0xc28        
        CUtlSymbolLarge m_iszSelectionGroup; // 0xc30        
        CUtlSymbolLarge m_iszAnimationModifier; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc40[0x8]; // 0xc40
        // metadata: MNetworkEnable
        float m_flBaseAttackTime; // 0xc48        
        // metadata: MNetworkEnable
        int32_t m_iDayTimeVisionRange; // 0xc4c        
        // metadata: MNetworkEnable
        int32_t m_iNightTimeVisionRange; // 0xc50        
        float m_fBotAttackDesire; // 0xc54        
        int32_t m_iUnitRelationshipClass; // 0xc58        
        // metadata: MNetworkEnable
        float m_flPhysicalArmorValue; // 0xc5c        
        // metadata: MNetworkEnable
        float m_flMagicalResistanceValue; // 0xc60        
        int32_t m_iTeamName; // 0xc64        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iAttackCapabilities; // 0xc68        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iSpecialAbility; // 0xc6c        
        int32_t m_iMoveCapabilities; // 0xc70        
        int32_t m_iOriginalAttackCapabilities; // 0xc74        
        // metadata: MNetworkEnable
        int32_t m_iXPBounty; // 0xc78        
        // metadata: MNetworkEnable
        int32_t m_iXPBountyExtra; // 0xc7c        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMin; // 0xc80        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMax; // 0xc84        
        client::PlayerID_t m_nFarmClaimPlayerID; // 0xc88        
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerOwnerID; // 0xc8c        
        CUtlSymbolLarge m_iszAbilityList[35]; // 0xc90        
        int32_t m_iAttackDamageType; // 0xda8        
        bool m_bIsIdle; // 0xdac        
        bool m_bHold; // 0xdad        
        bool m_bWasKilledPassively; // 0xdae        
        [[maybe_unused]] std::uint8_t pad_0xdaf[0x1]; // 0xdaf
        server::CountdownTimer m_AngerTimer; // 0xdb0        
        server::CountdownTimer m_AlertTimer; // 0xdc8        
        // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAngerTarget;
        char m_hAngerTarget[0x4]; // 0xde0        
        // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAlertTarget;
        char m_hAlertTarget[0x4]; // 0xde4        
        // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hForceAttackTarget;
        char m_hForceAttackTarget[0x4]; // 0xde8        
        bool m_bAllowAllyForceAttack; // 0xdec        
        [[maybe_unused]] std::uint8_t pad_0xded[0x3]; // 0xded
        Vector m_vTargetLastKnownPosition; // 0xdf0        
        [[maybe_unused]] std::uint8_t pad_0xdfc[0x1c]; // 0xdfc
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDamageTime; // 0xe18        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastAttackTime; // 0xe1c        
        entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0xe20        
        entity2::GameTime_t m_flLastTeleportTime; // 0xe24        
        // metadata: MNetworkEnable
        uint64_t m_nUnitState64; // 0xe28        
        entity2::GameTime_t m_vLastVisibilityChange[15]; // 0xe30        
        [[maybe_unused]] std::uint8_t pad_0xe6c[0x1c]; // 0xe6c
        bool m_bFirstSpawn; // 0xe88        
        [[maybe_unused]] std::uint8_t pad_0xe89[0x3]; // 0xe89
        // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttackTarget;
        char m_hAttackTarget[0x4]; // 0xe8c        
        // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAggroTarget;
        char m_hAggroTarget[0x4]; // 0xe90        
        // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCommandAttackTarget;
        char m_hCommandAttackTarget[0x4]; // 0xe94        
        CUtlSymbolLarge m_iszOriginalModel; // 0xe98        
        // metadata: MNetworkEnable
        int8_t m_nUnitModelVariant; // 0xea0        
        int8_t m_nUnitModelVariantCount; // 0xea1        
        bool m_bPseudoQueueOrders; // 0xea2        
        bool m_bCastLocked; // 0xea3        
        [[maybe_unused]] std::uint8_t pad_0xea4[0x1c]; // 0xea4
        entity2::GameTime_t m_flAttackRegulator; // 0xec0        
        float m_flTimeDisparityTolerance; // 0xec4        
        entity2::GameTime_t m_fAttackPhaseEndTime; // 0xec8        
        entity2::GameTime_t m_flPositionUpdateTime; // 0xecc        
        Vector m_vLastPositionSent; // 0xed0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iTaggedAsVisibleByTeam; // 0xedc        
        // metadata: MNetworkEnable
        uint64_t m_iIsControllableByPlayer64; // 0xee0        
        client::PlayerID_t m_nControllingPlayerID; // 0xee8        
        bool m_bRunAIWhenControllableByPlayer; // 0xeec        
        [[maybe_unused]] std::uint8_t pad_0xeed[0x3]; // 0xeed
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbilities[35];
        char m_hAbilities[0x8c]; // 0xef0        
        [[maybe_unused]] std::uint8_t pad_0xf7c[0x4]; // 0xf7c
        // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_associatedEmptyAbilities;
        char m_associatedEmptyAbilities[0x18]; // 0xf80        
        // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActiveAbility;
        char m_hActiveAbility[0x4]; // 0xf98        
        Vector m_vCursorLocation; // 0xf9c        
        // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCursorTarget;
        char m_hCursorTarget[0x4]; // 0xfa8        
        // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOriginalCursorTarget;
        char m_hOriginalCursorTarget[0x4]; // 0xfac        
        bool m_bCursorTargetingNothing; // 0xfb0        
        [[maybe_unused]] std::uint8_t pad_0xfb1[0x7]; // 0xfb1
        // metadata: MNetworkEnable
        server::CDOTA_ModifierManager m_ModifierManager; // 0xfb8        
        [[maybe_unused]] std::uint8_t pad_0x12d8[0x8]; // 0x12d8
        float m_flInvisibilityLevel; // 0x12e0        
        [[maybe_unused]] std::uint8_t pad_0x12e4[0x4]; // 0x12e4
        CUtlSymbolLarge m_iszMapUnitName; // 0x12e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkDisable
        CUtlSymbolLarge m_iszUnitName; // 0x12f0        
        // metadata: MNetworkEnable
        int32_t m_iUnitNameIndex; // 0x12f8        
        // metadata: MNetworkEnable
        int32_t m_iDamageMin; // 0x12fc        
        // metadata: MNetworkEnable
        int32_t m_iDamageMax; // 0x1300        
        // metadata: MNetworkEnable
        int32_t m_iDamageBonus; // 0x1304        
        // metadata: MNetworkEnable
        bool m_bIsWaitingToSpawn; // 0x1308        
        [[maybe_unused]] std::uint8_t pad_0x1309[0x3]; // 0x1309
        int32_t m_iLeashType; // 0x130c        
        int32_t m_iAggroType; // 0x1310        
        bool m_bCreepIgnoreAggro; // 0x1314        
        bool m_bCreepFirstWave; // 0x1315        
        // metadata: MNetworkEnable
        bool m_bIsIllusion; // 0x1316        
        // metadata: MNetworkEnable
        uint8_t m_nUnitLabelIndex; // 0x1317        
        // metadata: MNetworkEnable
        CUtlString m_szScaleset; // 0x1318        
        // metadata: MNetworkEnable
        CUtlString m_szUnitLabel; // 0x1320        
        CUtlString m_strAnimationModifier; // 0x1328        
        [[maybe_unused]] std::uint8_t pad_0x1330[0x8]; // 0x1330
        // metadata: MNetworkEnable
        // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwnerNPC;
        char m_hOwnerNPC[0x4]; // 0x1338        
        [[maybe_unused]] std::uint8_t pad_0x133c[0x4]; // 0x133c
        server::CLocomotionBase* m_locomotor; // 0x1340        
        server::IBody* m_body; // 0x1348        
        bool m_bNeverMoveToClearSpace; // 0x1350        
        [[maybe_unused]] std::uint8_t pad_0x1351[0x3]; // 0x1351
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SpectatorsOnly"
        // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalEntity;
        char m_hGoalEntity[0x4]; // 0x1354        
        bool m_bMustReachEachGoalEntity; // 0x1358        
        [[maybe_unused]] std::uint8_t pad_0x1359[0x3]; // 0x1359
        Vector m_vInitialGoalPosition; // 0x135c        
        [[maybe_unused]] std::uint8_t pad_0x1368[0x18]; // 0x1368
        client::CUnitOrders m_CurrentQueuedOrder; // 0x1380        
        [[maybe_unused]] std::uint8_t pad_0x13c0[0x18]; // 0x13c0
        // metadata: MNetworkEnable
        server::CDOTA_UnitInventory m_Inventory; // 0x13d8        
        // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hItemToDrop;
        char m_hItemToDrop[0x4]; // 0x14b0        
        // metadata: MNetworkEnable
        client::DOTA_SHOP_TYPE m_iCurShop; // 0x14b4        
        // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastNearShop;
        char m_hLastNearShop[0x4]; // 0x14b8        
        [[maybe_unused]] std::uint8_t pad_0x14bc[0x4]; // 0x14bc
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCurShopEntName; // 0x14c0        
        bool m_bHasInventory; // 0x14c8        
        [[maybe_unused]] std::uint8_t pad_0x14c9[0x3]; // 0x14c9
        float m_flBaselineModelScale; // 0x14cc        
        float m_fModelScaleMultiplier; // 0x14d0        
        float m_fModelScaleMultiplierChangeStart; // 0x14d4        
        entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x14d8        
        float m_flPreviousModelScale; // 0x14dc        
        float m_fMaxModelScaleMultiplier; // 0x14e0        
        bool m_bIsCamped; // 0x14e4        
        bool m_bIsReturningHome; // 0x14e5        
        bool m_bWantsToFlee; // 0x14e6        
        bool m_bWakesNeutrals; // 0x14e7        
        bool m_bNeutralIgnore; // 0x14e8        
        bool m_bIdleAcquire; // 0x14e9        
        bool m_bCanFollowUnseenUnits; // 0x14ea        
        bool m_bExpired; // 0x14eb        
        Vector m_vCurrentMovementOrderDestination; // 0x14ec        
        Vector m_vPreviousMovementOrderDestination; // 0x14f8        
        Vector m_vResumePreviousMovementRequestLocation; // 0x1504        
        bool m_bCurrentOrderIsMovement; // 0x1510        
        bool m_bPreviousOrderIsMovement; // 0x1511        
        bool m_bResumePreviousMovement; // 0x1512        
        bool m_bIsPatrolling; // 0x1513        
        entity2::GameTime_t m_flCreationTime; // 0x1514        
        bool m_bTargetMovedOutOfRange; // 0x1518        
        bool m_bChaseTargetMoves; // 0x1519        
        [[maybe_unused]] std::uint8_t pad_0x151a[0x2]; // 0x151a
        float m_flChaseDistance; // 0x151c        
        // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hChaseEntity;
        char m_hChaseEntity[0x4]; // 0x1520        
        [[maybe_unused]] std::uint8_t pad_0x1524[0x4]; // 0x1524
        // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiers;
        char m_ActivityModifiers[0x18]; // 0x1528        
        bool m_bActivityModifiersDirty; // 0x1540        
        [[maybe_unused]] std::uint8_t pad_0x1541[0x7]; // 0x1541
        // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
        char m_ActivityModifiersFromScript[0x18]; // 0x1548        
        entity2::GameTime_t m_flBlinkDaggerTime; // 0x1560        
        float m_flAdditionalBattleMusicWeight; // 0x1564        
        // metadata: MNetworkEnable
        bool m_bStolenScepter; // 0x1568        
        bool m_bHasScepterCached; // 0x1569        
        bool m_bHasShardCached; // 0x156a        
        [[maybe_unused]] std::uint8_t pad_0x156b[0x5]; // 0x156b
        server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1590[0x20]; // 0x1590
        entity2::GameTime_t m_flCritBashFailUntil; // 0x15b0        
        float m_flAttackTimeLostToLastTick; // 0x15b4        
        float m_flAttackTimeAtLastTick; // 0x15b8        
        float m_flCompanionDistance; // 0x15bc        
        bool m_bIsPartyCompanion; // 0x15c0        
        bool m_bCanPartyCompanionAttack; // 0x15c1        
        [[maybe_unused]] std::uint8_t pad_0x15c2[0x2]; // 0x15c2
        // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_CompanionEntity;
        char m_CompanionEntity[0x4]; // 0x15c4        
        bool m_bFacePlayer; // 0x15c8        
        [[maybe_unused]] std::uint8_t pad_0x15c9[0x3]; // 0x15c9
        entity2::GameTime_t m_flLastIdleChangeTime; // 0x15cc        
        bool m_bUseNeutralCreepBehavior; // 0x15d0        
        [[maybe_unused]] std::uint8_t pad_0x15d1[0x27]; // 0x15d1
        bool m_bHasBuiltWearableSpawnList; // 0x15f8        
        [[maybe_unused]] std::uint8_t pad_0x15f9[0x3]; // 0x15f9
        entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x15fc        
        int32_t m_nFOWVisibilityRadius; // 0x1638        
        Vector m_vFOWOriginOverride; // 0x163c        
        CUtlString m_strLastKillerAbility; // 0x1648        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_anglediff; // 0x1650        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkActivity; // 0x1654        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkSequenceIndex; // 0x1658        
        // metadata: MNetworkEnable
        bool m_bShouldDoFlyHeightVisual; // 0x165c        
        [[maybe_unused]] std::uint8_t pad_0x165d[0x3]; // 0x165d
        // metadata: MNetworkEnable
        float m_flStartSequenceCycle; // 0x1660        
        bool m_bMidLoading; // 0x1664        
        [[maybe_unused]] std::uint8_t pad_0x1665[0x3]; // 0x1665
        // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
        char m_hTutorialSpawner[0x4]; // 0x1668        
        [[maybe_unused]] std::uint8_t pad_0x166c[0x4]; // 0x166c
        server::CountdownTimer m_AngerCooldownTimer; // 0x1670        
        int32_t m_iProjectileMoveSpeed; // 0x1688        
        [[maybe_unused]] std::uint8_t pad_0x168c[0x4]; // 0x168c
        CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x1690        
        int32_t m_nPoseParameterTurn; // 0x1698        
        int32_t m_nPoseParameterRun; // 0x169c        
        float m_flLean; // 0x16a0        
        float m_flRun; // 0x16a4        
        // metadata: MNetworkEnable
        char m_CustomHealthLabel[256]; // 0x16a8        
        // metadata: MNetworkEnable
        Color m_CustomHealthLabelColor; // 0x17a8        
        client::item_definition_index_t m_nWearableDefIndex; // 0x17ac        
        int8_t m_nArcanaLevel; // 0x17b0        
        int8_t m_nDefaultArcanaLevel; // 0x17b1        
        Color m_defaultColorGemColor; // 0x17b2        
        bool m_bDisableDamageDisplay; // 0x17b6        
        [[maybe_unused]] std::uint8_t pad_0x17b7[0x1]; // 0x17b7
        Color m_gibTintColor; // 0x17b8        
        float m_flPathfindingSearchDepthScale; // 0x17bc        
        // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_ActivitiesStarted;
        char m_ActivitiesStarted[0x18]; // 0x17c0        
        // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hIllusionOriginal;
        char m_hIllusionOriginal[0x4]; // 0x17d8        
        // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
        char m_hDirectionalRangedFakeTarget[0x4]; // 0x17dc        
        [[maybe_unused]] std::uint8_t pad_0x17e0[0x28]; // 0x17e0
        bool m_bShouldComputeRemainingPathLength; // 0x1808        
        [[maybe_unused]] std::uint8_t pad_0x1809[0x3]; // 0x1809
        float m_flRemainingPathLength; // 0x180c        
        
        // Datamap fields:
        // CUtlSymbolLarge Input_MoveTo; // 0x0
        // CUtlSymbolLarge Input_MoveToAttack; // 0x0
        // CUtlSymbolLarge Input_MoveToPositionAggressive; // 0x0
        // CUtlSymbolLarge Input_SpeechBubble; // 0x0
        // CUtlSymbolLarge Input_PlayVCD; // 0x0
        // CUtlSymbolLarge Input_ForcePlayActivityOnce; // 0x0
        // void Input_DestroyAllSpeechBubbles; // 0x0
        // float Input_SetFOWRevealRadius; // 0x0
        // CUtlSymbolLarge m_target; // 0x2d0
        // int32_t m_iMaxHealth; // 0x2ac
        // int32_t m_iHealth; // 0x2a8
        // uint8_t m_iTeamNum; // 0x314
        // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
        // int32_t EconItemCount; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC) == 0x1810);
};
