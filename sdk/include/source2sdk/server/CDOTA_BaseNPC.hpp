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
    // Size: 0x1830
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
    // static metadata: MNetworkVarNames "int m_iBaseDamageMin"
    // static metadata: MNetworkVarNames "int m_iBaseDamageMax"
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
        [[maybe_unused]] std::uint8_t pad_0x968[0x20]; // 0x968
        bool m_bPledgedOfrenda; // 0x988        
        [[maybe_unused]] std::uint8_t pad_0x989[0x3]; // 0x989
        uint32_t m_iUnitType; // 0x98c        
        Color m_colorGemColor; // 0x990        
        bool m_bHasColorGem; // 0x994        
        // metadata: MNetworkEnable
        bool m_bSelectionRingVisible; // 0x995        
        [[maybe_unused]] std::uint8_t pad_0x996[0xa]; // 0x996
        CUtlSymbolLarge m_iszBaseClass; // 0x9a0        
        int32_t m_iStartingMaxHealth; // 0x9a8        
        int32_t m_iStartingMaxMana; // 0x9ac        
        int32_t m_iStartingMana; // 0x9b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentLevel; // 0x9b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMana; // 0x9b8        
        float m_flBaseMaxMana; // 0x9bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "65536,000000"
        float m_flMaxMana; // 0x9c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "14"
        // metadata: MNetworkMinValue "-50,000000"
        // metadata: MNetworkMaxValue "500,000000"
        float m_flManaThinkRegen; // 0x9c4        
        float m_flBaseMaxHealth; // 0x9c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flHealthThinkRegen; // 0x9cc        
        // metadata: MNetworkEnable
        int32_t m_nHealthBarOffsetOverride; // 0x9d0        
        int32_t m_nHealthBarOffset; // 0x9d4        
        // metadata: MNetworkEnable
        bool m_bIsPhantom; // 0x9d8        
        // metadata: MNetworkEnable
        bool m_bIsAncient; // 0x9d9        
        // metadata: MNetworkEnable
        bool m_bIsBossCreature; // 0x9da        
        // metadata: MNetworkEnable
        bool m_bIsNeutralUnitType; // 0x9db        
        bool m_bAutoAttacksByDefault; // 0x9dc        
        // metadata: MNetworkEnable
        bool m_bIsSummoned; // 0x9dd        
        // metadata: MNetworkEnable
        bool m_bCanBeDominated; // 0x9de        
        // metadata: MNetworkEnable
        bool m_bCanRespawn; // 0x9df        
        // metadata: MNetworkEnable
        bool m_bIsClone; // 0x9e0        
        bool m_bConsideredHero; // 0x9e1        
        bool m_bUsesConstantGesture; // 0x9e2        
        bool m_bIsPlayingSingleForcedActivity; // 0x9e3        
        // metadata: MNetworkEnable
        bool m_bHasUpgradeableAbilities; // 0x9e4        
        [[maybe_unused]] std::uint8_t pad_0x9e5[0x3]; // 0x9e5
        // metadata: MNetworkEnable
        int32_t m_iBKBChargesUsed; // 0x9e8        
        // metadata: MNetworkEnable
        int32_t m_iAeonChargesUsed; // 0x9ec        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRefresherUseTime; // 0x9f0        
        // metadata: MNetworkEnable
        float m_flRefresherLastCooldown; // 0x9f4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDealtDamageTime; // 0x9f8        
        // metadata: MNetworkEnable
        int32_t m_iBotDebugData; // 0x9fc        
        // metadata: MNetworkEnable
        bool m_bIsMoving; // 0xa00        
        [[maybe_unused]] std::uint8_t pad_0xa01[0x19f]; // 0xa01
        float m_flChannelMultiplier; // 0xba0        
        // metadata: MNetworkEnable
        bool m_bCanUseWards; // 0xba4        
        // metadata: MNetworkEnable
        bool m_bCanUseAllItems; // 0xba5        
        [[maybe_unused]] std::uint8_t pad_0xba6[0x2]; // 0xba6
        client::PlayerID_t m_iLastAbilityPlayer; // 0xba8        
        bool m_bIsPhantomBlocker; // 0xbac        
        bool m_bBlocksCreepSpawn; // 0xbad        
        bool m_bCanSellItems; // 0xbae        
        [[maybe_unused]] std::uint8_t pad_0xbaf[0x1]; // 0xbaf
        // metadata: MNetworkEnable
        // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_NeutralSpawner> m_hNeutralSpawner;
        char m_hNeutralSpawner[0x4]; // 0xbb0        
        bool m_bTrackDamageTaken; // 0xbb4        
        [[maybe_unused]] std::uint8_t pad_0xbb5[0x3]; // 0xbb5
        entity2::GameTick_t m_nNextRegenThink; // 0xbb8        
        entity2::GameTick_t m_nNextModifierThink; // 0xbbc        
        entity2::GameTick_t m_nNextModelScaleThink; // 0xbc0        
        entity2::GameTick_t m_nNextUnitThink; // 0xbc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flManaRegen; // 0xbc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "18"
        // metadata: MNetworkMinValue "-100,000000"
        // metadata: MNetworkMaxValue "1000,000000"
        float m_flHealthRegen; // 0xbcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int64_t m_nTotalDamageTaken; // 0xbd0        
        float m_flHealthRegenCounter; // 0xbd8        
        float m_flManaRegenCounter; // 0xbdc        
        float m_flAccumulatedHeal; // 0xbe0        
        int32_t m_iBaseAttackSpeed; // 0xbe4        
        // metadata: MNetworkEnable
        int32_t m_iBaseDamageMin; // 0xbe8        
        // metadata: MNetworkEnable
        int32_t m_iBaseDamageMax; // 0xbec        
        // metadata: MNetworkEnable
        int32_t m_iAttackRange; // 0xbf0        
        int32_t m_iAttackRangeBuffer; // 0xbf4        
        // metadata: MNetworkEnable
        int32_t m_iMoveSpeed; // 0xbf8        
        float m_flTurnRate; // 0xbfc        
        int32_t m_iHasAggressiveStance; // 0xc00        
        bool m_bInAggressiveStance; // 0xc04        
        bool m_bInInjuredAggressiveStance; // 0xc05        
        [[maybe_unused]] std::uint8_t pad_0xc06[0x2]; // 0xc06
        float m_flFollowRange; // 0xc08        
        int32_t m_iAcquisitionRange; // 0xc0c        
        float m_flAttackAnimationPoint; // 0xc10        
        float m_flHullRadius; // 0xc14        
        float m_flCollisionPadding; // 0xc18        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown; // 0xc1c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTauntCooldown2; // 0xc20        
        // metadata: MNetworkEnable
        float m_fRevealRadius; // 0xc24        
        float m_flProjectileCollisionSize; // 0xc28        
        server::ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // 0xc2c        
        CUtlSymbolLarge m_iszParticleFolder; // 0xc30        
        CUtlSymbolLarge m_iszGameSoundsFile; // 0xc38        
        CUtlSymbolLarge m_iszVoiceFile; // 0xc40        
        CUtlSymbolLarge m_iszSoundSet; // 0xc48        
        CUtlSymbolLarge m_iszSelectionGroup; // 0xc50        
        CUtlSymbolLarge m_iszAnimationModifier; // 0xc58        
        [[maybe_unused]] std::uint8_t pad_0xc60[0x8]; // 0xc60
        // metadata: MNetworkEnable
        float m_flBaseAttackTime; // 0xc68        
        // metadata: MNetworkEnable
        int32_t m_iDayTimeVisionRange; // 0xc6c        
        // metadata: MNetworkEnable
        int32_t m_iNightTimeVisionRange; // 0xc70        
        float m_fBotAttackDesire; // 0xc74        
        int32_t m_iUnitRelationshipClass; // 0xc78        
        // metadata: MNetworkEnable
        float m_flPhysicalArmorValue; // 0xc7c        
        // metadata: MNetworkEnable
        float m_flMagicalResistanceValue; // 0xc80        
        int32_t m_iTeamName; // 0xc84        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iAttackCapabilities; // 0xc88        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iSpecialAbility; // 0xc8c        
        int32_t m_iMoveCapabilities; // 0xc90        
        int32_t m_iOriginalAttackCapabilities; // 0xc94        
        // metadata: MNetworkEnable
        int32_t m_iXPBounty; // 0xc98        
        // metadata: MNetworkEnable
        int32_t m_iXPBountyExtra; // 0xc9c        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMin; // 0xca0        
        // metadata: MNetworkEnable
        int32_t m_iGoldBountyMax; // 0xca4        
        client::PlayerID_t m_nFarmClaimPlayerID; // 0xca8        
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerOwnerID; // 0xcac        
        CUtlSymbolLarge m_iszAbilityList[35]; // 0xcb0        
        int32_t m_iAttackDamageType; // 0xdc8        
        bool m_bIsIdle; // 0xdcc        
        bool m_bHold; // 0xdcd        
        bool m_bWasKilledPassively; // 0xdce        
        [[maybe_unused]] std::uint8_t pad_0xdcf[0x1]; // 0xdcf
        server::CountdownTimer m_AngerTimer; // 0xdd0        
        server::CountdownTimer m_AlertTimer; // 0xde8        
        // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAngerTarget;
        char m_hAngerTarget[0x4]; // 0xe00        
        // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAlertTarget;
        char m_hAlertTarget[0x4]; // 0xe04        
        // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hForceAttackTarget;
        char m_hForceAttackTarget[0x4]; // 0xe08        
        bool m_bAllowAllyForceAttack; // 0xe0c        
        [[maybe_unused]] std::uint8_t pad_0xe0d[0x3]; // 0xe0d
        Vector m_vTargetLastKnownPosition; // 0xe10        
        [[maybe_unused]] std::uint8_t pad_0xe1c[0x1c]; // 0xe1c
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDamageTime; // 0xe38        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastAttackTime; // 0xe3c        
        entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0xe40        
        entity2::GameTime_t m_flLastTeleportTime; // 0xe44        
        // metadata: MNetworkEnable
        uint64_t m_nUnitState64; // 0xe48        
        entity2::GameTime_t m_vLastVisibilityChange[15]; // 0xe50        
        [[maybe_unused]] std::uint8_t pad_0xe8c[0x1c]; // 0xe8c
        bool m_bFirstSpawn; // 0xea8        
        [[maybe_unused]] std::uint8_t pad_0xea9[0x3]; // 0xea9
        // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttackTarget;
        char m_hAttackTarget[0x4]; // 0xeac        
        // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAggroTarget;
        char m_hAggroTarget[0x4]; // 0xeb0        
        // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCommandAttackTarget;
        char m_hCommandAttackTarget[0x4]; // 0xeb4        
        CUtlSymbolLarge m_iszOriginalModel; // 0xeb8        
        // metadata: MNetworkEnable
        int8_t m_nUnitModelVariant; // 0xec0        
        int8_t m_nUnitModelVariantCount; // 0xec1        
        bool m_bPseudoQueueOrders; // 0xec2        
        bool m_bCastLocked; // 0xec3        
        [[maybe_unused]] std::uint8_t pad_0xec4[0x1c]; // 0xec4
        entity2::GameTime_t m_flAttackRegulator; // 0xee0        
        float m_flTimeDisparityTolerance; // 0xee4        
        entity2::GameTime_t m_fAttackPhaseEndTime; // 0xee8        
        entity2::GameTime_t m_flPositionUpdateTime; // 0xeec        
        Vector m_vLastPositionSent; // 0xef0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iTaggedAsVisibleByTeam; // 0xefc        
        // metadata: MNetworkEnable
        uint64_t m_iIsControllableByPlayer64; // 0xf00        
        client::PlayerID_t m_nControllingPlayerID; // 0xf08        
        bool m_bRunAIWhenControllableByPlayer; // 0xf0c        
        [[maybe_unused]] std::uint8_t pad_0xf0d[0x3]; // 0xf0d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbilities[35];
        char m_hAbilities[0x8c]; // 0xf10        
        [[maybe_unused]] std::uint8_t pad_0xf9c[0x4]; // 0xf9c
        // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_associatedEmptyAbilities;
        char m_associatedEmptyAbilities[0x18]; // 0xfa0        
        // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActiveAbility;
        char m_hActiveAbility[0x4]; // 0xfb8        
        Vector m_vCursorLocation; // 0xfbc        
        // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCursorTarget;
        char m_hCursorTarget[0x4]; // 0xfc8        
        // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOriginalCursorTarget;
        char m_hOriginalCursorTarget[0x4]; // 0xfcc        
        bool m_bCursorTargetingNothing; // 0xfd0        
        [[maybe_unused]] std::uint8_t pad_0xfd1[0x7]; // 0xfd1
        // metadata: MNetworkEnable
        server::CDOTA_ModifierManager m_ModifierManager; // 0xfd8        
        [[maybe_unused]] std::uint8_t pad_0x12f8[0x8]; // 0x12f8
        float m_flInvisibilityLevel; // 0x1300        
        [[maybe_unused]] std::uint8_t pad_0x1304[0x4]; // 0x1304
        CUtlSymbolLarge m_iszMapUnitName; // 0x1308        
        CUtlSymbolLarge m_iszUnitName; // 0x1310        
        // metadata: MNetworkEnable
        int32_t m_iUnitNameIndex; // 0x1318        
        // metadata: MNetworkEnable
        int32_t m_iDamageMin; // 0x131c        
        // metadata: MNetworkEnable
        int32_t m_iDamageMax; // 0x1320        
        // metadata: MNetworkEnable
        int32_t m_iDamageBonus; // 0x1324        
        // metadata: MNetworkEnable
        bool m_bIsWaitingToSpawn; // 0x1328        
        [[maybe_unused]] std::uint8_t pad_0x1329[0x3]; // 0x1329
        int32_t m_iLeashType; // 0x132c        
        int32_t m_iAggroType; // 0x1330        
        bool m_bCreepIgnoreAggro; // 0x1334        
        bool m_bCreepFirstWave; // 0x1335        
        // metadata: MNetworkEnable
        bool m_bIsIllusion; // 0x1336        
        // metadata: MNetworkEnable
        uint8_t m_nUnitLabelIndex; // 0x1337        
        // metadata: MNetworkEnable
        CUtlString m_szScaleset; // 0x1338        
        // metadata: MNetworkEnable
        CUtlString m_szUnitLabel; // 0x1340        
        CUtlString m_strAnimationModifier; // 0x1348        
        [[maybe_unused]] std::uint8_t pad_0x1350[0x8]; // 0x1350
        // metadata: MNetworkEnable
        // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwnerNPC;
        char m_hOwnerNPC[0x4]; // 0x1358        
        [[maybe_unused]] std::uint8_t pad_0x135c[0x4]; // 0x135c
        server::CLocomotionBase* m_locomotor; // 0x1360        
        server::IBody* m_body; // 0x1368        
        bool m_bNeverMoveToClearSpace; // 0x1370        
        [[maybe_unused]] std::uint8_t pad_0x1371[0x3]; // 0x1371
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SpectatorsOnly"
        // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalEntity;
        char m_hGoalEntity[0x4]; // 0x1374        
        bool m_bMustReachEachGoalEntity; // 0x1378        
        [[maybe_unused]] std::uint8_t pad_0x1379[0x3]; // 0x1379
        Vector m_vInitialGoalPosition; // 0x137c        
        [[maybe_unused]] std::uint8_t pad_0x1388[0x18]; // 0x1388
        client::CUnitOrders m_CurrentQueuedOrder; // 0x13a0        
        [[maybe_unused]] std::uint8_t pad_0x13e0[0x18]; // 0x13e0
        // metadata: MNetworkEnable
        server::CDOTA_UnitInventory m_Inventory; // 0x13f8        
        // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hItemToDrop;
        char m_hItemToDrop[0x4]; // 0x14d0        
        // metadata: MNetworkEnable
        client::DOTA_SHOP_TYPE m_iCurShop; // 0x14d4        
        // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastNearShop;
        char m_hLastNearShop[0x4]; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14dc[0x4]; // 0x14dc
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCurShopEntName; // 0x14e0        
        bool m_bHasInventory; // 0x14e8        
        [[maybe_unused]] std::uint8_t pad_0x14e9[0x3]; // 0x14e9
        float m_flBaselineModelScale; // 0x14ec        
        float m_fModelScaleMultiplier; // 0x14f0        
        float m_fModelScaleMultiplierChangeStart; // 0x14f4        
        entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x14f8        
        float m_flPreviousModelScale; // 0x14fc        
        float m_fMaxModelScaleMultiplier; // 0x1500        
        bool m_bIsCamped; // 0x1504        
        bool m_bIsReturningHome; // 0x1505        
        bool m_bWantsToFlee; // 0x1506        
        bool m_bWakesNeutrals; // 0x1507        
        bool m_bNeutralIgnore; // 0x1508        
        bool m_bIdleAcquire; // 0x1509        
        bool m_bCanFollowUnseenUnits; // 0x150a        
        bool m_bExpired; // 0x150b        
        Vector m_vCurrentMovementOrderDestination; // 0x150c        
        Vector m_vPreviousMovementOrderDestination; // 0x1518        
        Vector m_vResumePreviousMovementRequestLocation; // 0x1524        
        bool m_bCurrentOrderIsMovement; // 0x1530        
        bool m_bPreviousOrderIsMovement; // 0x1531        
        bool m_bResumePreviousMovement; // 0x1532        
        bool m_bIsPatrolling; // 0x1533        
        entity2::GameTime_t m_flCreationTime; // 0x1534        
        bool m_bTargetMovedOutOfRange; // 0x1538        
        bool m_bChaseTargetMoves; // 0x1539        
        [[maybe_unused]] std::uint8_t pad_0x153a[0x2]; // 0x153a
        float m_flChaseDistance; // 0x153c        
        // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hChaseEntity;
        char m_hChaseEntity[0x4]; // 0x1540        
        [[maybe_unused]] std::uint8_t pad_0x1544[0x4]; // 0x1544
        // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiers;
        char m_ActivityModifiers[0x18]; // 0x1548        
        bool m_bActivityModifiersDirty; // 0x1560        
        [[maybe_unused]] std::uint8_t pad_0x1561[0x7]; // 0x1561
        // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
        char m_ActivityModifiersFromScript[0x18]; // 0x1568        
        entity2::GameTime_t m_flBlinkDaggerTime; // 0x1580        
        float m_flAdditionalBattleMusicWeight; // 0x1584        
        // metadata: MNetworkEnable
        bool m_bStolenScepter; // 0x1588        
        bool m_bHasScepterCached; // 0x1589        
        bool m_bHasShardCached; // 0x158a        
        [[maybe_unused]] std::uint8_t pad_0x158b[0x5]; // 0x158b
        server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x1590        
        [[maybe_unused]] std::uint8_t pad_0x15b0[0x20]; // 0x15b0
        entity2::GameTime_t m_flCritBashFailUntil; // 0x15d0        
        float m_flAttackTimeLostToLastTick; // 0x15d4        
        float m_flAttackTimeAtLastTick; // 0x15d8        
        float m_flCompanionDistance; // 0x15dc        
        bool m_bIsPartyCompanion; // 0x15e0        
        bool m_bCanPartyCompanionAttack; // 0x15e1        
        [[maybe_unused]] std::uint8_t pad_0x15e2[0x2]; // 0x15e2
        // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_CompanionEntity;
        char m_CompanionEntity[0x4]; // 0x15e4        
        bool m_bFacePlayer; // 0x15e8        
        [[maybe_unused]] std::uint8_t pad_0x15e9[0x3]; // 0x15e9
        entity2::GameTime_t m_flLastIdleChangeTime; // 0x15ec        
        bool m_bUseNeutralCreepBehavior; // 0x15f0        
        [[maybe_unused]] std::uint8_t pad_0x15f1[0x27]; // 0x15f1
        bool m_bHasBuiltWearableSpawnList; // 0x1618        
        [[maybe_unused]] std::uint8_t pad_0x1619[0x3]; // 0x1619
        entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x161c        
        int32_t m_nFOWVisibilityRadius; // 0x1658        
        Vector m_vFOWOriginOverride; // 0x165c        
        CUtlString m_strLastKillerAbility; // 0x1668        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_anglediff; // 0x1670        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkActivity; // 0x1674        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkSequenceIndex; // 0x1678        
        // metadata: MNetworkEnable
        bool m_bShouldDoFlyHeightVisual; // 0x167c        
        [[maybe_unused]] std::uint8_t pad_0x167d[0x3]; // 0x167d
        // metadata: MNetworkEnable
        float m_flStartSequenceCycle; // 0x1680        
        bool m_bMidLoading; // 0x1684        
        [[maybe_unused]] std::uint8_t pad_0x1685[0x3]; // 0x1685
        // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
        char m_hTutorialSpawner[0x4]; // 0x1688        
        [[maybe_unused]] std::uint8_t pad_0x168c[0x4]; // 0x168c
        server::CountdownTimer m_AngerCooldownTimer; // 0x1690        
        int32_t m_iProjectileMoveSpeed; // 0x16a8        
        [[maybe_unused]] std::uint8_t pad_0x16ac[0x4]; // 0x16ac
        CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x16b0        
        int32_t m_nPoseParameterTurn; // 0x16b8        
        int32_t m_nPoseParameterRun; // 0x16bc        
        float m_flLean; // 0x16c0        
        float m_flRun; // 0x16c4        
        // metadata: MNetworkEnable
        char m_CustomHealthLabel[256]; // 0x16c8        
        // metadata: MNetworkEnable
        Color m_CustomHealthLabelColor; // 0x17c8        
        client::item_definition_index_t m_nWearableDefIndex; // 0x17cc        
        int8_t m_nArcanaLevel; // 0x17d0        
        int8_t m_nDefaultArcanaLevel; // 0x17d1        
        Color m_defaultColorGemColor; // 0x17d2        
        bool m_bDisableDamageDisplay; // 0x17d6        
        [[maybe_unused]] std::uint8_t pad_0x17d7[0x1]; // 0x17d7
        Color m_gibTintColor; // 0x17d8        
        float m_flPathfindingSearchDepthScale; // 0x17dc        
        // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_ActivitiesStarted;
        char m_ActivitiesStarted[0x18]; // 0x17e0        
        // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hIllusionOriginal;
        char m_hIllusionOriginal[0x4]; // 0x17f8        
        // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
        char m_hDirectionalRangedFakeTarget[0x4]; // 0x17fc        
        [[maybe_unused]] std::uint8_t pad_0x1800[0x28]; // 0x1800
        bool m_bShouldComputeRemainingPathLength; // 0x1828        
        [[maybe_unused]] std::uint8_t pad_0x1829[0x3]; // 0x1829
        float m_flRemainingPathLength; // 0x182c        
        
        // Datamap fields:
        // CUtlSymbolLarge Input_MoveTo; // 0x0
        // CUtlSymbolLarge Input_MoveToAttack; // 0x0
        // CUtlSymbolLarge Input_MoveToPositionAggressive; // 0x0
        // CUtlSymbolLarge Input_SpeechBubble; // 0x0
        // CUtlSymbolLarge Input_PlayVCD; // 0x0
        // CUtlSymbolLarge Input_ForcePlayActivityOnce; // 0x0
        // void Input_DestroyAllSpeechBubbles; // 0x0
        // float Input_SetFOWRevealRadius; // 0x0
        // CUtlSymbolLarge m_target; // 0x2f8
        // int32_t m_iMaxHealth; // 0x2d4
        // int32_t m_iHealth; // 0x2d0
        // uint8_t m_iTeamNum; // 0x33c
        // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
        // int32_t EconItemCount; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC) == 0x1830);
};
