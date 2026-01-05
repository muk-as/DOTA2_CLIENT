#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ShopItemViewMode_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkUserGroupProxy "CDOTAPlayerController"
        // static metadata: MNetworkExcludeByName "m_angRotation"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flPlaybackRate"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_vecVelocity"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkExcludeByName "m_nTickBase"
        // static metadata: MNetworkUserGroupProxy "CDOTAPlayerController"
        // static metadata: MNetworkUserGroupProxy "CDOTAPlayerController"
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
        // static metadata: MNetworkVarNames "bool m_bInShowCaseMode"
        // static metadata: MNetworkVarNames "float m_flCameraZoomAmount"
        // static metadata: MNetworkVarNames "int m_iHighPriorityScore"
        // static metadata: MNetworkVarNames "float m_flUnfilteredFrameTime"
        // static metadata: MNetworkVarNames "bool m_bUsingAssistedCameraOperator"
        // static metadata: MNetworkVarNames "bool m_bUsingCameraMan"
        // static metadata: MNetworkVarNames "int m_nPlayerAssistFlags"
        // static metadata: MNetworkVarNames "int m_iMusicStatus"
        // static metadata: MNetworkVarNames "float m_flMusicOperatorVals"
        // static metadata: MNetworkVarNames "int m_iMusicOperatorVals"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hKillCamUnit"
        // static metadata: MNetworkVarNames "PlayerID_t m_nPlayerID"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAssignedHero"
        // static metadata: MNetworkVarNames "int m_nServerOrderSequenceNumber"
        // static metadata: MNetworkVarNames "int m_nCachedCoachedTeam"
        // static metadata: MNetworkUserGroupProxy "CDOTAPlayerController"
        #pragma pack(push, 1)
        class CDOTAPlayerController : public source2sdk::server::CBasePlayerController
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iMinimapMove; // 0x_            
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
            // CHandle<source2sdk::server::CBaseEntity> m_hSpectatorQueryUnit;
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
            // metadata: MNetworkEnable
            bool m_bUsingAssistedCameraOperator; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUsingCameraMan; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerAssistFlags; // 0x_            
            float m_flHighPriorityScoreTimeStamp; // 0x_            
            float m_flExecuteOrdersLagCompensation; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicStatus; // 0x_            
            // metadata: MNetworkEnable
            float m_flMusicOperatorVals[3]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicOperatorVals[4]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_MusicRestTime; // 0x_            
            // metadata: MNetworkEnable
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x_]; // 0x_            
            Vector m_vecCrosshairTracePos; // 0x_            
            CEntityIndex m_iCrosshairEntity; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x_            
            // metadata: MNetworkEnable
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bTeleportRequiresHalt; // 0x_            
            bool m_bChannelRequiresHalt; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bInteractionChannelsRequiresHalt; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_nServerOrderSequenceNumber; // 0x_            
            float m_flLastOrderTime; // 0x_            
            float m_flLastKnownActiveTime; // 0x_            
            std::uint32_t m_nLastOrderLatency; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastReconnectTime; // 0x_            
            source2sdk::entity2::GameTime_t m_fLastSuggestionTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bWantsRandomHero; // 0x_            
            bool m_bFullyJoinedServer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCheatDetectOrderReferenceCommandNumber; // 0x_            
            source2sdk::client::PlayerID_t m_iSwapPreferencePlayerID; // 0x_            
            std::uint32_t m_nCoachListenMask; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nCachedCoachedTeam; // 0x_            
            float m_flLastChatWheelTime[2]; // 0x_            
            float m_flLastChatWheelAudioTime[2]; // 0x_            
            float m_flLastChatWheelAllChatAudioTime[2]; // 0x_            
            float m_flLastChatWheelSprayTime; // 0x_            
            float m_flLastChatWheelLongCooldownTime; // 0x_            
            float m_flLastPingTime; // 0x_            
            float m_flPingAllowance; // 0x_            
            float m_flLastMapLineTime; // 0x_            
            float m_flMapLineAllowance; // 0x_            
            float m_flLastWaypointPathPingTime; // 0x_            
            float m_flWaypointPathPingAllowance; // 0x_            
            float m_flLastVersusBehaviorTime; // 0x_            
            float m_flVersusBehaviorAllowance; // 0x_            
            std::uint8_t m_pOrderRetirementHistory[10]; // 0x_            
            std::uint16_t m_nOrderRetirementSum; // 0x_            
            std::int32_t m_nOrderRetirementLastTick; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPlayerController) == 0x_);
    };
};
