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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iMinimapMove; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            KeyValues* m_pClickBehaviorKeys; // 0x_            
            source2sdk::entity2::GameTime_t m_flCenterTime; // 0x_            
            std::int32_t m_iConfirmationIndex; // 0x_            
            bool m_bCenterOnHero; // 0x_            
            bool m_bHeroAssigned; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nKeyBindHeroID; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUsingCameraMan; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUsingAssistedCameraOperator; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerAssistFlags; // 0x_            
            Vector m_vLatestEvent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hFreeDrawAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hFreeDrawAbility;
            char m_hFreeDrawAbility[0x_]; // 0x_            
            Vector m_vLastFreeDrawPosition; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerIDChanged"
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            // metadata: MNetworkEnable
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x_]; // 0x_            
            // m_hLastAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAssignedHero;
            char m_hLastAssignedHero[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x_]; // 0x_            
            // m_hPreviousKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousKillCamUnit;
            char m_hPreviousKillCamUnit[0x_]; // 0x_            
            float m_flKillCamUnitReceivedTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nRareLineClickCount; // 0x_            
            std::int32_t m_nRareLinesPlayed; // 0x_            
            std::int32_t m_nRareLineGroup; // 0x_            
            float m_flLastRareLinePlayTime; // 0x_            
            float m_flUnitOrdersSendTime; // 0x_            
            float m_flLastUnitOrdersSendTime; // 0x_            
            float m_flLastUnitOrdersTotalLatency; // 0x_            
            float m_flLastPingTime; // 0x_            
            float m_flPingAllowance; // 0x_            
            bool m_bTeleportRequiresHalt; // 0x_            
            bool m_bChannelRequiresHalt; // 0x_            
            bool m_bInteractionChannelsRequireHalt; // 0x_            
            bool m_bAutoPurchaseItems; // 0x_            
            bool m_bDisableHUDErrorMessages; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iMouseDragStartX; // 0x_            
            std::int32_t m_iMouseDragStartY; // 0x_            
            std::int32_t m_nWeatherType; // 0x_            
            bool m_bDynamicWeatherSystemActive; // 0x_            
            bool m_bDynamicSoundHandled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flDynamicWeatherNextSwitchTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flDynamicWeatherScaleFinishedTime; // 0x_            
            float m_flDynamicWeatherIntensity; // 0x_            
            source2sdk::client::ParticleIndex_t m_nXPRangeFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nVisionRangeFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hRangeHintAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hRangeHintAbility;
            char m_hRangeHintAbility[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nRangeHintFXIndex; // 0x_            
            float m_flRangeHintFXLastRadius; // 0x_            
            std::int32_t m_nSelectedControlGroup; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nCachedCoachedTeam; // 0x_            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hActiveAbility;
            char m_hActiveAbility[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_unitorders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CUnitOrders> m_unitorders;
            char m_unitorders[0x_]; // 0x_            
            std::int32_t m_nNextOutgoingOrderSequenceNumber; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nServerOrderSequenceNumber; // 0x_            
            std::int32_t m_nMaxSentOutgoingOrderSequenceNumber; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_nSelectedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_nSelectedUnits;
            char m_nSelectedUnits[0x_]; // 0x_            
            // m_nWaypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_nWaypoints;
            char m_nWaypoints[0x_]; // 0x_            
            std::int32_t m_iActions; // 0x_            
            // m_hQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hQueryUnit;
            char m_hQueryUnit[0x_]; // 0x_            
            bool m_bInQuery; // 0x_            
            bool m_bSelectionChangedInDataUpdate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flQueryInhibitingActionTime; // 0x_            
            float m_flQueryInhibitDuration; // 0x_            
            // m_RingedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_RingedEntities;
            char m_RingedEntities[0x_]; // 0x_            
            // m_ActiveRingOwners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_ActiveRingOwners;
            char m_ActiveRingOwners[0x_]; // 0x_            
            bool m_bOverridingQuery; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLastAutoRepeatTime; // 0x_            
            bool m_bNextDoubleclickIsOnlyAClick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flConsumeDoubleclickTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_LightInfoWeatherEffect; // 0x_            
            bool m_bPreviousWasLightInfoWeather; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_MapDefaultWeatherEffect; // 0x_            
            bool m_bMapUsesDynamicWeather; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCastRangeEffectCreationRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecSuggestedWardLocationEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecSuggestedWardLocationEffects;
            char m_vecSuggestedWardLocationEffects[0x_]; // 0x_            
            source2sdk::client::C_DOTA_BaseNPC* m_pSmartCastNPC; // 0x_            
            source2sdk::client::ParticleIndex_t m_nTeamSprayParticleIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nScanCastIndicatorParticleIndex; // 0x_            
            bool m_bIsNextCastOrderFromMouseClick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCursor[2]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iSpectatorClickBehavior; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flAspectRatio; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSpectatorQueryUnit;
            char m_hSpectatorQueryUnit[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsPanel; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iShopPanel; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            source2sdk::client::ShopItemViewMode_t m_iShopViewMode; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownCategory; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownSort; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            char m_szShopString[64]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_vecClientQuickBuyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ClientQuickBuyItemState> m_vecClientQuickBuyState;
            char m_vecClientQuickBuyState[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            bool m_bInShowCaseMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flCameraZoomAmount; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iHighPriorityScore; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flUnfilteredFrameTime; // 0x_            
            // m_NeutralCampAlarms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NeutralCampStackPullAlarm_t> m_NeutralCampAlarms;
            char m_NeutralCampAlarms[0x_]; // 0x_            
            std::int32_t m_iPrevCursor[2]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iPositionHistoryTail; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicStatus; // 0x_            
            std::int32_t m_iPreviousMusicStatus; // 0x_            
            bool m_bRequestedInventory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flMusicOperatorVals[3]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicOperatorVals[4]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ControlGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sControlGroupElem> m_ControlGroups[10];
            char m_ControlGroups[0x_]; // 0x_            
            KeyValues* m_pkvControlGroupKV; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flAltHeldStartTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPlayerController) == 0x_);
    };
};
