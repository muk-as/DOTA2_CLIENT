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
    // Size: 0x1868
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
        CUtlSymbolLarge m_iszAbilityList[40]; // 0xcb0        
        int32_t m_iAttackDamageType; // 0xdf0        
        bool m_bIsIdle; // 0xdf4        
        bool m_bHold; // 0xdf5        
        bool m_bWasKilledPassively; // 0xdf6        
        [[maybe_unused]] std::uint8_t pad_0xdf7[0x1]; // 0xdf7
        server::CountdownTimer m_AngerTimer; // 0xdf8        
        server::CountdownTimer m_AlertTimer; // 0xe10        
        // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAngerTarget;
        char m_hAngerTarget[0x4]; // 0xe28        
        // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAlertTarget;
        char m_hAlertTarget[0x4]; // 0xe2c        
        // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hForceAttackTarget;
        char m_hForceAttackTarget[0x4]; // 0xe30        
        bool m_bAllowAllyForceAttack; // 0xe34        
        [[maybe_unused]] std::uint8_t pad_0xe35[0x3]; // 0xe35
        Vector m_vTargetLastKnownPosition; // 0xe38        
        [[maybe_unused]] std::uint8_t pad_0xe44[0x1c]; // 0xe44
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDamageTime; // 0xe60        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastAttackTime; // 0xe64        
        entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0xe68        
        entity2::GameTime_t m_flLastTeleportTime; // 0xe6c        
        // metadata: MNetworkEnable
        uint64_t m_nUnitState64; // 0xe70        
        entity2::GameTime_t m_vLastVisibilityChange[15]; // 0xe78        
        [[maybe_unused]] std::uint8_t pad_0xeb4[0x1c]; // 0xeb4
        bool m_bFirstSpawn; // 0xed0        
        [[maybe_unused]] std::uint8_t pad_0xed1[0x3]; // 0xed1
        // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttackTarget;
        char m_hAttackTarget[0x4]; // 0xed4        
        // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAggroTarget;
        char m_hAggroTarget[0x4]; // 0xed8        
        // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCommandAttackTarget;
        char m_hCommandAttackTarget[0x4]; // 0xedc        
        CUtlSymbolLarge m_iszOriginalModel; // 0xee0        
        // metadata: MNetworkEnable
        int8_t m_nUnitModelVariant; // 0xee8        
        int8_t m_nUnitModelVariantCount; // 0xee9        
        bool m_bPseudoQueueOrders; // 0xeea        
        bool m_bCastLocked; // 0xeeb        
        [[maybe_unused]] std::uint8_t pad_0xeec[0x1c]; // 0xeec
        entity2::GameTime_t m_flAttackRegulator; // 0xf08        
        float m_flTimeDisparityTolerance; // 0xf0c        
        entity2::GameTime_t m_fAttackPhaseEndTime; // 0xf10        
        entity2::GameTime_t m_flPositionUpdateTime; // 0xf14        
        Vector m_vLastPositionSent; // 0xf18        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iTaggedAsVisibleByTeam; // 0xf24        
        // metadata: MNetworkEnable
        uint64_t m_iIsControllableByPlayer64; // 0xf28        
        client::PlayerID_t m_nControllingPlayerID; // 0xf30        
        bool m_bRunAIWhenControllableByPlayer; // 0xf34        
        [[maybe_unused]] std::uint8_t pad_0xf35[0x3]; // 0xf35
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_hAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbilities[40];
        char m_hAbilities[0xa0]; // 0xf38        
        // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_associatedEmptyAbilities;
        char m_associatedEmptyAbilities[0x18]; // 0xfd8        
        // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActiveAbility;
        char m_hActiveAbility[0x4]; // 0xff0        
        Vector m_vCursorLocation; // 0xff4        
        // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCursorTarget;
        char m_hCursorTarget[0x4]; // 0x1000        
        // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOriginalCursorTarget;
        char m_hOriginalCursorTarget[0x4]; // 0x1004        
        bool m_bCursorTargetingNothing; // 0x1008        
        [[maybe_unused]] std::uint8_t pad_0x1009[0x7]; // 0x1009
        // metadata: MNetworkEnable
        server::CDOTA_ModifierManager m_ModifierManager; // 0x1010        
        [[maybe_unused]] std::uint8_t pad_0x1330[0x8]; // 0x1330
        float m_flInvisibilityLevel; // 0x1338        
        [[maybe_unused]] std::uint8_t pad_0x133c[0x4]; // 0x133c
        CUtlSymbolLarge m_iszMapUnitName; // 0x1340        
        CUtlSymbolLarge m_iszUnitName; // 0x1348        
        // metadata: MNetworkEnable
        int32_t m_iUnitNameIndex; // 0x1350        
        // metadata: MNetworkEnable
        int32_t m_iDamageMin; // 0x1354        
        // metadata: MNetworkEnable
        int32_t m_iDamageMax; // 0x1358        
        // metadata: MNetworkEnable
        int32_t m_iDamageBonus; // 0x135c        
        // metadata: MNetworkEnable
        bool m_bIsWaitingToSpawn; // 0x1360        
        [[maybe_unused]] std::uint8_t pad_0x1361[0x3]; // 0x1361
        int32_t m_iLeashType; // 0x1364        
        int32_t m_iAggroType; // 0x1368        
        bool m_bCreepIgnoreAggro; // 0x136c        
        bool m_bCreepFirstWave; // 0x136d        
        // metadata: MNetworkEnable
        bool m_bIsIllusion; // 0x136e        
        // metadata: MNetworkEnable
        uint8_t m_nUnitLabelIndex; // 0x136f        
        // metadata: MNetworkEnable
        CUtlString m_szScaleset; // 0x1370        
        // metadata: MNetworkEnable
        CUtlString m_szUnitLabel; // 0x1378        
        CUtlString m_strAnimationModifier; // 0x1380        
        [[maybe_unused]] std::uint8_t pad_0x1388[0x8]; // 0x1388
        // metadata: MNetworkEnable
        // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwnerNPC;
        char m_hOwnerNPC[0x4]; // 0x1390        
        [[maybe_unused]] std::uint8_t pad_0x1394[0x4]; // 0x1394
        server::CLocomotionBase* m_locomotor; // 0x1398        
        server::IBody* m_body; // 0x13a0        
        bool m_bNeverMoveToClearSpace; // 0x13a8        
        [[maybe_unused]] std::uint8_t pad_0x13a9[0x3]; // 0x13a9
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SpectatorsOnly"
        // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalEntity;
        char m_hGoalEntity[0x4]; // 0x13ac        
        bool m_bMustReachEachGoalEntity; // 0x13b0        
        [[maybe_unused]] std::uint8_t pad_0x13b1[0x3]; // 0x13b1
        Vector m_vInitialGoalPosition; // 0x13b4        
        [[maybe_unused]] std::uint8_t pad_0x13c0[0x18]; // 0x13c0
        client::CUnitOrders m_CurrentQueuedOrder; // 0x13d8        
        [[maybe_unused]] std::uint8_t pad_0x1418[0x18]; // 0x1418
        // metadata: MNetworkEnable
        server::CDOTA_UnitInventory m_Inventory; // 0x1430        
        // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hItemToDrop;
        char m_hItemToDrop[0x4]; // 0x1508        
        // metadata: MNetworkEnable
        client::DOTA_SHOP_TYPE m_iCurShop; // 0x150c        
        // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastNearShop;
        char m_hLastNearShop[0x4]; // 0x1510        
        [[maybe_unused]] std::uint8_t pad_0x1514[0x4]; // 0x1514
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szCurShopEntName; // 0x1518        
        bool m_bHasInventory; // 0x1520        
        [[maybe_unused]] std::uint8_t pad_0x1521[0x3]; // 0x1521
        float m_flBaselineModelScale; // 0x1524        
        float m_fModelScaleMultiplier; // 0x1528        
        float m_fModelScaleMultiplierChangeStart; // 0x152c        
        entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x1530        
        float m_flPreviousModelScale; // 0x1534        
        float m_fMaxModelScaleMultiplier; // 0x1538        
        bool m_bIsCamped; // 0x153c        
        bool m_bIsReturningHome; // 0x153d        
        bool m_bWantsToFlee; // 0x153e        
        bool m_bWakesNeutrals; // 0x153f        
        bool m_bNeutralIgnore; // 0x1540        
        bool m_bIdleAcquire; // 0x1541        
        bool m_bCanFollowUnseenUnits; // 0x1542        
        bool m_bExpired; // 0x1543        
        Vector m_vCurrentMovementOrderDestination; // 0x1544        
        Vector m_vPreviousMovementOrderDestination; // 0x1550        
        Vector m_vResumePreviousMovementRequestLocation; // 0x155c        
        bool m_bCurrentOrderIsMovement; // 0x1568        
        bool m_bPreviousOrderIsMovement; // 0x1569        
        bool m_bResumePreviousMovement; // 0x156a        
        bool m_bIsPatrolling; // 0x156b        
        entity2::GameTime_t m_flCreationTime; // 0x156c        
        bool m_bTargetMovedOutOfRange; // 0x1570        
        bool m_bChaseTargetMoves; // 0x1571        
        [[maybe_unused]] std::uint8_t pad_0x1572[0x2]; // 0x1572
        float m_flChaseDistance; // 0x1574        
        // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hChaseEntity;
        char m_hChaseEntity[0x4]; // 0x1578        
        [[maybe_unused]] std::uint8_t pad_0x157c[0x4]; // 0x157c
        // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiers;
        char m_ActivityModifiers[0x18]; // 0x1580        
        bool m_bActivityModifiersDirty; // 0x1598        
        [[maybe_unused]] std::uint8_t pad_0x1599[0x7]; // 0x1599
        // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
        char m_ActivityModifiersFromScript[0x18]; // 0x15a0        
        entity2::GameTime_t m_flBlinkDaggerTime; // 0x15b8        
        float m_flAdditionalBattleMusicWeight; // 0x15bc        
        // metadata: MNetworkEnable
        bool m_bStolenScepter; // 0x15c0        
        bool m_bHasScepterCached; // 0x15c1        
        bool m_bHasShardCached; // 0x15c2        
        [[maybe_unused]] std::uint8_t pad_0x15c3[0x5]; // 0x15c3
        server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x15c8        
        [[maybe_unused]] std::uint8_t pad_0x15e8[0x20]; // 0x15e8
        entity2::GameTime_t m_flCritBashFailUntil; // 0x1608        
        float m_flAttackTimeLostToLastTick; // 0x160c        
        float m_flAttackTimeAtLastTick; // 0x1610        
        float m_flCompanionDistance; // 0x1614        
        bool m_bIsPartyCompanion; // 0x1618        
        bool m_bCanPartyCompanionAttack; // 0x1619        
        [[maybe_unused]] std::uint8_t pad_0x161a[0x2]; // 0x161a
        // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_CompanionEntity;
        char m_CompanionEntity[0x4]; // 0x161c        
        bool m_bFacePlayer; // 0x1620        
        [[maybe_unused]] std::uint8_t pad_0x1621[0x3]; // 0x1621
        entity2::GameTime_t m_flLastIdleChangeTime; // 0x1624        
        bool m_bUseNeutralCreepBehavior; // 0x1628        
        [[maybe_unused]] std::uint8_t pad_0x1629[0x27]; // 0x1629
        bool m_bHasBuiltWearableSpawnList; // 0x1650        
        [[maybe_unused]] std::uint8_t pad_0x1651[0x3]; // 0x1651
        entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x1654        
        int32_t m_nFOWVisibilityRadius; // 0x1690        
        Vector m_vFOWOriginOverride; // 0x1694        
        CUtlString m_strLastKillerAbility; // 0x16a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_anglediff; // 0x16a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkActivity; // 0x16ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_NetworkSequenceIndex; // 0x16b0        
        // metadata: MNetworkEnable
        bool m_bShouldDoFlyHeightVisual; // 0x16b4        
        [[maybe_unused]] std::uint8_t pad_0x16b5[0x3]; // 0x16b5
        // metadata: MNetworkEnable
        float m_flStartSequenceCycle; // 0x16b8        
        bool m_bMidLoading; // 0x16bc        
        [[maybe_unused]] std::uint8_t pad_0x16bd[0x3]; // 0x16bd
        // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
        char m_hTutorialSpawner[0x4]; // 0x16c0        
        [[maybe_unused]] std::uint8_t pad_0x16c4[0x4]; // 0x16c4
        server::CountdownTimer m_AngerCooldownTimer; // 0x16c8        
        int32_t m_iProjectileMoveSpeed; // 0x16e0        
        [[maybe_unused]] std::uint8_t pad_0x16e4[0x4]; // 0x16e4
        CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x16e8        
        int32_t m_nPoseParameterTurn; // 0x16f0        
        int32_t m_nPoseParameterRun; // 0x16f4        
        float m_flLean; // 0x16f8        
        float m_flRun; // 0x16fc        
        // metadata: MNetworkEnable
        char m_CustomHealthLabel[256]; // 0x1700        
        // metadata: MNetworkEnable
        Color m_CustomHealthLabelColor; // 0x1800        
        client::item_definition_index_t m_nWearableDefIndex; // 0x1804        
        int8_t m_nArcanaLevel; // 0x1808        
        int8_t m_nDefaultArcanaLevel; // 0x1809        
        Color m_defaultColorGemColor; // 0x180a        
        bool m_bDisableDamageDisplay; // 0x180e        
        [[maybe_unused]] std::uint8_t pad_0x180f[0x1]; // 0x180f
        Color m_gibTintColor; // 0x1810        
        float m_flPathfindingSearchDepthScale; // 0x1814        
        // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_ActivitiesStarted;
        char m_ActivitiesStarted[0x18]; // 0x1818        
        // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hIllusionOriginal;
        char m_hIllusionOriginal[0x4]; // 0x1830        
        // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
        char m_hDirectionalRangedFakeTarget[0x4]; // 0x1834        
        [[maybe_unused]] std::uint8_t pad_0x1838[0x28]; // 0x1838
        bool m_bShouldComputeRemainingPathLength; // 0x1860        
        [[maybe_unused]] std::uint8_t pad_0x1861[0x3]; // 0x1861
        float m_flRemainingPathLength; // 0x1864        
        
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
    static_assert(sizeof(CDOTA_BaseNPC) == 0x1868);
};
