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
        // Size: 0xf08
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
            uint8_t _pad07d0[0xc0]; // 0x7d0
            std::int32_t m_iMinimapMove; // 0x890            
            uint8_t _pad0894[0x4]; // 0x894
            KeyValues* m_pClickBehaviorKeys; // 0x898            
            source2sdk::entity2::GameTime_t m_flCenterTime; // 0x8a0            
            std::int32_t m_iConfirmationIndex; // 0x8a4            
            bool m_bCenterOnHero; // 0x8a8            
            bool m_bHeroAssigned; // 0x8a9            
            uint8_t _pad08aa[0x2]; // 0x8aa
            std::int32_t m_nKeyBindHeroID; // 0x8ac            
            // metadata: MNetworkEnable
            bool m_bUsingCameraMan; // 0x8b0            
            // metadata: MNetworkEnable
            bool m_bUsingAssistedCameraOperator; // 0x8b1            
            uint8_t _pad08b2[0x2]; // 0x8b2
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerAssistFlags; // 0x8b4            
            Vector m_vLatestEvent; // 0x8b8            
            uint8_t _pad08c4[0x24]; // 0x8c4
            // m_hFreeDrawAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hFreeDrawAbility;
            char m_hFreeDrawAbility[0x4]; // 0x8e8            
            Vector m_vLastFreeDrawPosition; // 0x8ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerIDChanged"
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x8f8            
            // metadata: MNetworkEnable
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x4]; // 0x8fc            
            // m_hLastAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAssignedHero;
            char m_hLastAssignedHero[0x4]; // 0x900            
            // metadata: MNetworkEnable
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x4]; // 0x904            
            // m_hPreviousKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousKillCamUnit;
            char m_hPreviousKillCamUnit[0x4]; // 0x908            
            float m_flKillCamUnitReceivedTime; // 0x90c            
            uint8_t _pad0910[0x8]; // 0x910
            std::int32_t m_nRareLineClickCount; // 0x918            
            std::int32_t m_nRareLinesPlayed; // 0x91c            
            std::int32_t m_nRareLineGroup; // 0x920            
            float m_flLastRareLinePlayTime; // 0x924            
            float m_flUnitOrdersSendTime; // 0x928            
            float m_flLastUnitOrdersSendTime; // 0x92c            
            float m_flLastUnitOrdersTotalLatency; // 0x930            
            float m_flLastPingTime; // 0x934            
            float m_flPingAllowance; // 0x938            
            bool m_bTeleportRequiresHalt; // 0x93c            
            bool m_bChannelRequiresHalt; // 0x93d            
            bool m_bInteractionChannelsRequireHalt; // 0x93e            
            bool m_bAutoPurchaseItems; // 0x93f            
            bool m_bDisableHUDErrorMessages; // 0x940            
            uint8_t _pad0941[0x3]; // 0x941
            std::int32_t m_iMouseDragStartX; // 0x944            
            std::int32_t m_iMouseDragStartY; // 0x948            
            std::int32_t m_nWeatherType; // 0x94c            
            bool m_bDynamicWeatherSystemActive; // 0x950            
            bool m_bDynamicSoundHandled; // 0x951            
            uint8_t _pad0952[0x2]; // 0x952
            source2sdk::entity2::GameTime_t m_flDynamicWeatherNextSwitchTime; // 0x954            
            source2sdk::entity2::GameTime_t m_flDynamicWeatherScaleFinishedTime; // 0x958            
            float m_flDynamicWeatherIntensity; // 0x95c            
            source2sdk::client::ParticleIndex_t m_nXPRangeFXIndex; // 0x960            
            source2sdk::client::ParticleIndex_t m_nVisionRangeFXIndex; // 0x964            
            uint8_t _pad0968[0x4]; // 0x968
            // m_hRangeHintAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hRangeHintAbility;
            char m_hRangeHintAbility[0x4]; // 0x96c            
            source2sdk::client::ParticleIndex_t m_nRangeHintFXIndex; // 0x970            
            float m_flRangeHintFXLastRadius; // 0x974            
            std::int32_t m_nSelectedControlGroup; // 0x978            
            // metadata: MNetworkEnable
            std::int32_t m_nCachedCoachedTeam; // 0x97c            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0x980            
            uint8_t _pad0984[0x4]; // 0x984
            // m_unitorders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CUnitOrders> m_unitorders;
            char m_unitorders[0x18]; // 0x988            
            std::int32_t m_nNextOutgoingOrderSequenceNumber; // 0x9a0            
            // metadata: MNetworkEnable
            std::int32_t m_nServerOrderSequenceNumber; // 0x9a4            
            std::int32_t m_nMaxSentOutgoingOrderSequenceNumber; // 0x9a8            
            uint8_t _pad09ac[0x4]; // 0x9ac
            // m_nSelectedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_nSelectedUnits;
            char m_nSelectedUnits[0x18]; // 0x9b0            
            // m_nWaypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_nWaypoints;
            char m_nWaypoints[0x18]; // 0x9c8            
            std::int32_t m_iActions; // 0x9e0            
            // m_hQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hQueryUnit;
            char m_hQueryUnit[0x4]; // 0x9e4            
            bool m_bInQuery; // 0x9e8            
            bool m_bSelectionChangedInDataUpdate; // 0x9e9            
            uint8_t _pad09ea[0x66]; // 0x9ea
            source2sdk::entity2::GameTime_t m_flQueryInhibitingActionTime; // 0xa50            
            float m_flQueryInhibitDuration; // 0xa54            
            // m_RingedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_RingedEntities;
            char m_RingedEntities[0x18]; // 0xa58            
            // m_ActiveRingOwners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_ActiveRingOwners;
            char m_ActiveRingOwners[0x18]; // 0xa70            
            bool m_bOverridingQuery; // 0xa88            
            uint8_t _pad0a89[0x7]; // 0xa89
            float m_flLastAutoRepeatTime; // 0xa90            
            bool m_bNextDoubleclickIsOnlyAClick; // 0xa94            
            uint8_t _pad0a95[0x3]; // 0xa95
            float m_flConsumeDoubleclickTime; // 0xa98            
            uint8_t _pad0a9c[0x4]; // 0xa9c
            CUtlString m_LightInfoWeatherEffect; // 0xaa0            
            bool m_bPreviousWasLightInfoWeather; // 0xaa8            
            uint8_t _pad0aa9[0x7]; // 0xaa9
            CUtlString m_MapDefaultWeatherEffect; // 0xab0            
            bool m_bMapUsesDynamicWeather; // 0xab8            
            uint8_t _pad0ab9[0x27]; // 0xab9
            std::int32_t m_nCastRangeEffectCreationRadius; // 0xae0            
            uint8_t _pad0ae4[0x1c]; // 0xae4
            // m_vecSuggestedWardLocationEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecSuggestedWardLocationEffects;
            char m_vecSuggestedWardLocationEffects[0x18]; // 0xb00            
            source2sdk::client::C_DOTA_BaseNPC* m_pSmartCastNPC; // 0xb18            
            source2sdk::client::ParticleIndex_t m_nTeamSprayParticleIndex; // 0xb20            
            source2sdk::client::ParticleIndex_t m_nScanCastIndicatorParticleIndex; // 0xb24            
            bool m_bIsNextCastOrderFromMouseClick; // 0xb28            
            uint8_t _pad0b29[0x57]; // 0xb29
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCursor[2]; // 0xb80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iSpectatorClickBehavior; // 0xb88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flAspectRatio; // 0xb8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSpectatorQueryUnit;
            char m_hSpectatorQueryUnit[0x4]; // 0xb90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsPanel; // 0xb94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iShopPanel; // 0xb98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            source2sdk::client::ShopItemViewMode_t m_iShopViewMode; // 0xb9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownCategory; // 0xba0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownSort; // 0xba4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            char m_szShopString[64]; // 0xba8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_vecClientQuickBuyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ClientQuickBuyItemState> m_vecClientQuickBuyState;
            char m_vecClientQuickBuyState[0x68]; // 0xbe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            bool m_bInShowCaseMode; // 0xc50            
            uint8_t _pad0c51[0x3]; // 0xc51
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flCameraZoomAmount; // 0xc54            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iHighPriorityScore; // 0xc58            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flUnfilteredFrameTime; // 0xc5c            
            // m_NeutralCampAlarms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NeutralCampStackPullAlarm_t> m_NeutralCampAlarms;
            char m_NeutralCampAlarms[0x18]; // 0xc60            
            std::int32_t m_iPrevCursor[2]; // 0xc78            
            uint8_t _pad0c80[0xa0]; // 0xc80
            std::int32_t m_iPositionHistoryTail; // 0xd20            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicStatus; // 0xd24            
            std::int32_t m_iPreviousMusicStatus; // 0xd28            
            bool m_bRequestedInventory; // 0xd2c            
            uint8_t _pad0d2d[0x3]; // 0xd2d
            // metadata: MNetworkEnable
            float m_flMusicOperatorVals[3]; // 0xd30            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicOperatorVals[4]; // 0xd3c            
            uint8_t _pad0d4c[0x4]; // 0xd4c
            // m_ControlGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sControlGroupElem> m_ControlGroups[10];
            char m_ControlGroups[0xf0]; // 0xd50            
            KeyValues* m_pkvControlGroupKV; // 0xe40            
            uint8_t _pad0e48[0x58]; // 0xe48
            float m_flAltHeldStartTime; // 0xea0            
            uint8_t _pad0ea4[0x64];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPlayerController) == 0xf08);
    };
};
