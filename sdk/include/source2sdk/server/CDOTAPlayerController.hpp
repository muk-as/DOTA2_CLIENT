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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x970
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkUserGroupProxy "CDOTAPlayerController"
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
            uint8_t _pad07d8[0x8]; // 0x7d8
            std::int32_t m_iMinimapMove; // 0x7e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCursor[2]; // 0x7e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iSpectatorClickBehavior; // 0x7ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flAspectRatio; // 0x7f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpectatorQueryUnit;
            char m_hSpectatorQueryUnit[0x4]; // 0x7f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsPanel; // 0x7f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iShopPanel; // 0x7fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            source2sdk::client::ShopItemViewMode_t m_iShopViewMode; // 0x800            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownCategory; // 0x804            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownSort; // 0x808            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            char m_szShopString[64]; // 0x80c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            bool m_bInShowCaseMode; // 0x84c            
            uint8_t _pad084d[0x3]; // 0x84d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flCameraZoomAmount; // 0x850            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iHighPriorityScore; // 0x854            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flUnfilteredFrameTime; // 0x858            
            // metadata: MNetworkEnable
            bool m_bUsingAssistedCameraOperator; // 0x85c            
            // metadata: MNetworkEnable
            bool m_bUsingCameraMan; // 0x85d            
            uint8_t _pad085e[0x2]; // 0x85e
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerAssistFlags; // 0x860            
            float m_flHighPriorityScoreTimeStamp; // 0x864            
            float m_flExecuteOrdersLagCompensation; // 0x868            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicStatus; // 0x86c            
            // metadata: MNetworkEnable
            float m_flMusicOperatorVals[3]; // 0x870            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicOperatorVals[4]; // 0x87c            
            uint8_t _pad088c[0x4]; // 0x88c
            source2sdk::server::CountdownTimer m_MusicRestTime; // 0x890            
            // metadata: MNetworkEnable
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x4]; // 0x8a8            
            Vector m_vecCrosshairTracePos; // 0x8ac            
            CEntityIndex m_iCrosshairEntity; // 0x8b8            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x8bc            
            // metadata: MNetworkEnable
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x4]; // 0x8c0            
            uint8_t _pad08c4[0xc]; // 0x8c4
            bool m_bTeleportRequiresHalt; // 0x8d0            
            bool m_bChannelRequiresHalt; // 0x8d1            
            bool m_bInteractionChannelsRequiresHalt; // 0x8d2            
            uint8_t _pad08d3[0x1]; // 0x8d3
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_nServerOrderSequenceNumber; // 0x8d4            
            float m_flLastOrderTime; // 0x8d8            
            float m_flLastKnownActiveTime; // 0x8dc            
            std::uint32_t m_nLastOrderLatency; // 0x8e0            
            source2sdk::entity2::GameTime_t m_flLastReconnectTime; // 0x8e4            
            source2sdk::entity2::GameTime_t m_fLastSuggestionTime; // 0x8e8            
            uint8_t _pad08ec[0x1c]; // 0x8ec
            bool m_bWantsRandomHero; // 0x908            
            bool m_bFullyJoinedServer; // 0x909            
            uint8_t _pad090a[0x2]; // 0x90a
            std::int32_t m_nCheatDetectOrderReferenceCommandNumber; // 0x90c            
            source2sdk::client::PlayerID_t m_iSwapPreferencePlayerID; // 0x910            
            std::uint32_t m_nCoachListenMask; // 0x914            
            // metadata: MNetworkEnable
            std::int32_t m_nCachedCoachedTeam; // 0x918            
            float m_flLastChatWheelTime[2]; // 0x91c            
            float m_flLastChatWheelAudioTime[2]; // 0x924            
            float m_flLastChatWheelAllChatAudioTime[2]; // 0x92c            
            float m_flLastChatWheelSprayTime; // 0x934            
            float m_flLastChatWheelLongCooldownTime; // 0x938            
            float m_flLastPingTime; // 0x93c            
            float m_flPingAllowance; // 0x940            
            float m_flLastMapLineTime; // 0x944            
            float m_flMapLineAllowance; // 0x948            
            float m_flLastWaypointPathPingTime; // 0x94c            
            float m_flWaypointPathPingAllowance; // 0x950            
            float m_flLastVersusBehaviorTime; // 0x954            
            float m_flVersusBehaviorAllowance; // 0x958            
            std::uint8_t m_pOrderRetirementHistory[10]; // 0x95c            
            std::uint16_t m_nOrderRetirementSum; // 0x966            
            std::int32_t m_nOrderRetirementLastTick; // 0x968            
            uint8_t _pad096c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPlayerController) == 0x970);
    };
};
