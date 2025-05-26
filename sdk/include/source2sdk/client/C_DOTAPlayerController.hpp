#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/CUnitOrders.hpp"
#include "source2sdk/client/ClientQuickBuyItemState.hpp"
#include "source2sdk/client/NeutralCampStackPullAlarm_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ShopItemViewMode_t.hpp"
#include "source2sdk/client/sControlGroupElem.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTABaseAbility;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xef0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByName "m_angRotation"
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flPlaybackRate"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_vecVelocity"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkExcludeByName "m_nTickBase"
        // static metadata: MNetworkVarNames "bool m_bUsingCameraMan"
        // static metadata: MNetworkVarNames "bool m_bUsingAssistedCameraOperator"
        // static metadata: MNetworkVarNames "int m_nPlayerAssistFlags"
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAssignedHero"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hKillCamUnit"
        // static metadata: MNetworkVarNames "int m_nCachedCoachedTeam"
        // static metadata: MNetworkVarNames "int m_nServerOrderSequenceNumber"
        // static metadata: MNetworkVarNames "int m_iCursor"
        // static metadata: MNetworkVarNames "int m_iSpectatorClickBehavior"
        // static metadata: MNetworkVarNames "float m_flAspectRatio"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSpectatorQueryUnit"
        // static metadata: MNetworkVarNames "int m_iStatsPanel"
        // static metadata: MNetworkVarNames "int m_iShopPanel"
        // static metadata: MNetworkVarNames "ShopItemViewMode_t m_iShopViewMode"
        // static metadata: MNetworkVarNames "int m_iStatsDropdownCategory"
        // static metadata: MNetworkVarNames "int m_iStatsDropdownSort"
        // static metadata: MNetworkVarNames "char m_szShopString"
        // static metadata: MNetworkVarNames "ClientQuickBuyItemState m_vecClientQuickBuyState"
        // static metadata: MNetworkVarNames "bool m_bInShowCaseMode"
        // static metadata: MNetworkVarNames "float m_flCameraZoomAmount"
        // static metadata: MNetworkVarNames "int m_iHighPriorityScore"
        // static metadata: MNetworkVarNames "float m_flUnfilteredFrameTime"
        // static metadata: MNetworkVarNames "int m_iMusicStatus"
        // static metadata: MNetworkVarNames "float m_flMusicOperatorVals"
        // static metadata: MNetworkVarNames "int m_iMusicOperatorVals"
        // static metadata: MNetworkReplayCompatField "m_iPlayerID"
        // static metadata: MNetworkReplayCompatField "m_audio\..*"
        #pragma pack(push, 1)
        class C_DOTAPlayerController : public source2sdk::client::CBasePlayerController
        {
        public:
            uint8_t _pad07c8[0xb0]; // 0x7c8
            std::int32_t m_iMinimapMove; // 0x878            
            uint8_t _pad087c[0x4]; // 0x87c
            KeyValues* m_pClickBehaviorKeys; // 0x880            
            source2sdk::entity2::GameTime_t m_flCenterTime; // 0x888            
            std::int32_t m_iConfirmationIndex; // 0x88c            
            bool m_bCenterOnHero; // 0x890            
            bool m_bHeroAssigned; // 0x891            
            uint8_t _pad0892[0x2]; // 0x892
            std::int32_t m_nKeyBindHeroID; // 0x894            
            // metadata: MNetworkEnable
            bool m_bUsingCameraMan; // 0x898            
            // metadata: MNetworkEnable
            bool m_bUsingAssistedCameraOperator; // 0x899            
            uint8_t _pad089a[0x2]; // 0x89a
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerAssistFlags; // 0x89c            
            Vector m_vLatestEvent; // 0x8a0            
            uint8_t _pad08ac[0x24]; // 0x8ac
            // m_hFreeDrawAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hFreeDrawAbility;
            char m_hFreeDrawAbility[0x4]; // 0x8d0            
            Vector m_vLastFreeDrawPosition; // 0x8d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerIDChanged"
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x8e0            
            // metadata: MNetworkEnable
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x4]; // 0x8e4            
            // m_hLastAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAssignedHero;
            char m_hLastAssignedHero[0x4]; // 0x8e8            
            // metadata: MNetworkEnable
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x4]; // 0x8ec            
            // m_hPreviousKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousKillCamUnit;
            char m_hPreviousKillCamUnit[0x4]; // 0x8f0            
            float m_flKillCamUnitReceivedTime; // 0x8f4            
            uint8_t _pad08f8[0x8]; // 0x8f8
            std::int32_t m_nRareLineClickCount; // 0x900            
            std::int32_t m_nRareLinesPlayed; // 0x904            
            std::int32_t m_nRareLineGroup; // 0x908            
            float m_flLastRareLinePlayTime; // 0x90c            
            float m_flUnitOrdersSendTime; // 0x910            
            float m_flLastUnitOrdersSendTime; // 0x914            
            float m_flLastUnitOrdersTotalLatency; // 0x918            
            float m_flLastPingTime; // 0x91c            
            float m_flPingAllowance; // 0x920            
            bool m_bTeleportRequiresHalt; // 0x924            
            bool m_bChannelRequiresHalt; // 0x925            
            bool m_bInteractionChannelsRequireHalt; // 0x926            
            bool m_bAutoPurchaseItems; // 0x927            
            bool m_bDisableHUDErrorMessages; // 0x928            
            uint8_t _pad0929[0x3]; // 0x929
            std::int32_t m_iMouseDragStartX; // 0x92c            
            std::int32_t m_iMouseDragStartY; // 0x930            
            std::int32_t m_nWeatherType; // 0x934            
            bool m_bDynamicWeatherSystemActive; // 0x938            
            bool m_bDynamicSoundHandled; // 0x939            
            uint8_t _pad093a[0x2]; // 0x93a
            source2sdk::entity2::GameTime_t m_flDynamicWeatherNextSwitchTime; // 0x93c            
            source2sdk::entity2::GameTime_t m_flDynamicWeatherScaleFinishedTime; // 0x940            
            float m_flDynamicWeatherIntensity; // 0x944            
            source2sdk::client::ParticleIndex_t m_nXPRangeFXIndex; // 0x948            
            source2sdk::client::ParticleIndex_t m_nVisionRangeFXIndex; // 0x94c            
            uint8_t _pad0950[0x4]; // 0x950
            // m_hRangeHintAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hRangeHintAbility;
            char m_hRangeHintAbility[0x4]; // 0x954            
            source2sdk::client::ParticleIndex_t m_nRangeHintFXIndex; // 0x958            
            float m_flRangeHintFXLastRadius; // 0x95c            
            std::int32_t m_nSelectedControlGroup; // 0x960            
            // metadata: MNetworkEnable
            std::int32_t m_nCachedCoachedTeam; // 0x964            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0x968            
            uint8_t _pad096c[0x4]; // 0x96c
            // m_unitorders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CUnitOrders> m_unitorders;
            char m_unitorders[0x18]; // 0x970            
            std::int32_t m_nNextOutgoingOrderSequenceNumber; // 0x988            
            // metadata: MNetworkEnable
            std::int32_t m_nServerOrderSequenceNumber; // 0x98c            
            std::int32_t m_nMaxSentOutgoingOrderSequenceNumber; // 0x990            
            uint8_t _pad0994[0x4]; // 0x994
            // m_nSelectedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_nSelectedUnits;
            char m_nSelectedUnits[0x18]; // 0x998            
            // m_nWaypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_nWaypoints;
            char m_nWaypoints[0x18]; // 0x9b0            
            std::int32_t m_iActions; // 0x9c8            
            // m_hQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hQueryUnit;
            char m_hQueryUnit[0x4]; // 0x9cc            
            bool m_bInQuery; // 0x9d0            
            bool m_bSelectionChangedInDataUpdate; // 0x9d1            
            uint8_t _pad09d2[0x66]; // 0x9d2
            source2sdk::entity2::GameTime_t m_flQueryInhibitingActionTime; // 0xa38            
            float m_flQueryInhibitDuration; // 0xa3c            
            // m_RingedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_RingedEntities;
            char m_RingedEntities[0x18]; // 0xa40            
            // m_ActiveRingOwners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_ActiveRingOwners;
            char m_ActiveRingOwners[0x18]; // 0xa58            
            bool m_bOverridingQuery; // 0xa70            
            uint8_t _pad0a71[0x7]; // 0xa71
            float m_flLastAutoRepeatTime; // 0xa78            
            bool m_bNextDoubleclickIsOnlyAClick; // 0xa7c            
            uint8_t _pad0a7d[0x3]; // 0xa7d
            float m_flConsumeDoubleclickTime; // 0xa80            
            uint8_t _pad0a84[0x4]; // 0xa84
            CUtlString m_LightInfoWeatherEffect; // 0xa88            
            bool m_bPreviousWasLightInfoWeather; // 0xa90            
            uint8_t _pad0a91[0x7]; // 0xa91
            CUtlString m_MapDefaultWeatherEffect; // 0xa98            
            bool m_bMapUsesDynamicWeather; // 0xaa0            
            uint8_t _pad0aa1[0x27]; // 0xaa1
            std::int32_t m_nCastRangeEffectCreationRadius; // 0xac8            
            uint8_t _pad0acc[0x1c]; // 0xacc
            // m_vecSuggestedWardLocationEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecSuggestedWardLocationEffects;
            char m_vecSuggestedWardLocationEffects[0x18]; // 0xae8            
            source2sdk::client::C_DOTA_BaseNPC* m_pSmartCastNPC; // 0xb00            
            source2sdk::client::ParticleIndex_t m_nTeamSprayParticleIndex; // 0xb08            
            source2sdk::client::ParticleIndex_t m_nScanCastIndicatorParticleIndex; // 0xb0c            
            bool m_bIsNextCastOrderFromMouseClick; // 0xb10            
            uint8_t _pad0b11[0x57]; // 0xb11
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCursor[2]; // 0xb68            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iSpectatorClickBehavior; // 0xb70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flAspectRatio; // 0xb74            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSpectatorQueryUnit;
            char m_hSpectatorQueryUnit[0x4]; // 0xb78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsPanel; // 0xb7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iShopPanel; // 0xb80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            source2sdk::client::ShopItemViewMode_t m_iShopViewMode; // 0xb84            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownCategory; // 0xb88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownSort; // 0xb8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            char m_szShopString[64]; // 0xb90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_vecClientQuickBuyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ClientQuickBuyItemState> m_vecClientQuickBuyState;
            char m_vecClientQuickBuyState[0x68]; // 0xbd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            bool m_bInShowCaseMode; // 0xc38            
            uint8_t _pad0c39[0x3]; // 0xc39
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flCameraZoomAmount; // 0xc3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iHighPriorityScore; // 0xc40            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flUnfilteredFrameTime; // 0xc44            
            // m_NeutralCampAlarms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NeutralCampStackPullAlarm_t> m_NeutralCampAlarms;
            char m_NeutralCampAlarms[0x18]; // 0xc48            
            std::int32_t m_iPrevCursor[2]; // 0xc60            
            uint8_t _pad0c68[0xa0]; // 0xc68
            std::int32_t m_iPositionHistoryTail; // 0xd08            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicStatus; // 0xd0c            
            std::int32_t m_iPreviousMusicStatus; // 0xd10            
            bool m_bRequestedInventory; // 0xd14            
            uint8_t _pad0d15[0x3]; // 0xd15
            // metadata: MNetworkEnable
            float m_flMusicOperatorVals[3]; // 0xd18            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicOperatorVals[4]; // 0xd24            
            uint8_t _pad0d34[0x4]; // 0xd34
            // m_ControlGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sControlGroupElem> m_ControlGroups[10];
            char m_ControlGroups[0xf0]; // 0xd38            
            KeyValues* m_pkvControlGroupKV; // 0xe28            
            uint8_t _pad0e30[0x58]; // 0xe30
            float m_flAltHeldStartTime; // 0xe88            
            uint8_t _pad0e8c[0x64];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPlayerController) == 0xef0);
    };
};
