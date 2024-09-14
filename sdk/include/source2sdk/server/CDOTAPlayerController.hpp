#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ShopItemViewMode_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x910
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
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
    // static metadata: MNetworkVarNames "AbilityID_t m_quickBuyItems"
    // static metadata: MNetworkVarNames "bool m_quickBuyIsPurchasable"
    // static metadata: MNetworkVarNames "float m_flFrameTime"
    // static metadata: MNetworkVarNames "float m_flFrameTimeStdDev"
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
    class CDOTAPlayerController : public server::CBasePlayerController
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x748[0x8]; // 0x748
        int32_t m_iMinimapMove; // 0x750        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // metadata: MNetworkPriority "32"
        int32_t m_iCursor[2]; // 0x754        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iSpectatorClickBehavior; // 0x75c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flAspectRatio; // 0x760        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpectatorQueryUnit;
        char m_hSpectatorQueryUnit[0x4]; // 0x764        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsPanel; // 0x768        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iShopPanel; // 0x76c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        client::ShopItemViewMode_t m_iShopViewMode; // 0x770        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsDropdownCategory; // 0x774        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsDropdownSort; // 0x778        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        char m_szShopString[64]; // 0x77c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        bool m_bInShowCaseMode; // 0x7bc        
        [[maybe_unused]] std::uint8_t pad_0x7bd[0x3]; // 0x7bd
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flCameraZoomAmount; // 0x7c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iHighPriorityScore; // 0x7c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTATeamMatesAndCommentatorTable"
        client::AbilityID_t m_quickBuyItems[9]; // 0x7c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTATeamMatesAndCommentatorTable"
        bool m_quickBuyIsPurchasable[9]; // 0x7ec        
        [[maybe_unused]] std::uint8_t pad_0x7f5[0x3]; // 0x7f5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flFrameTime; // 0x7f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flFrameTimeStdDev; // 0x7fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flUnfilteredFrameTime; // 0x800        
        // metadata: MNetworkEnable
        bool m_bUsingAssistedCameraOperator; // 0x804        
        // metadata: MNetworkEnable
        bool m_bUsingCameraMan; // 0x805        
        [[maybe_unused]] std::uint8_t pad_0x806[0x2]; // 0x806
        // metadata: MNetworkEnable
        int32_t m_nPlayerAssistFlags; // 0x808        
        float m_flHighPriorityScoreTimeStamp; // 0x80c        
        float m_flExecuteOrdersLagCompensation; // 0x810        
        // metadata: MNetworkEnable
        int32_t m_iMusicStatus; // 0x814        
        // metadata: MNetworkEnable
        float m_flMusicOperatorVals[3]; // 0x818        
        // metadata: MNetworkEnable
        int32_t m_iMusicOperatorVals[4]; // 0x824        
        [[maybe_unused]] std::uint8_t pad_0x834[0x4]; // 0x834
        server::CountdownTimer m_MusicRestTime; // 0x838        
        // metadata: MNetworkEnable
        // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hKillCamUnit;
        char m_hKillCamUnit[0x4]; // 0x850        
        Vector m_vecCrosshairTracePos; // 0x854        
        CEntityIndex m_iCrosshairEntity; // 0x860        
        // metadata: MNetworkEnable
        client::PlayerID_t m_nPlayerID; // 0x864        
        // metadata: MNetworkEnable
        // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAssignedHero;
        char m_hAssignedHero[0x4]; // 0x868        
        [[maybe_unused]] std::uint8_t pad_0x86c[0xc]; // 0x86c
        bool m_bTeleportRequiresHalt; // 0x878        
        bool m_bChannelRequiresHalt; // 0x879        
        [[maybe_unused]] std::uint8_t pad_0x87a[0x2]; // 0x87a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_nServerOrderSequenceNumber; // 0x87c        
        float m_flLastOrderTime; // 0x880        
        float m_flLastKnownActiveTime; // 0x884        
        entity2::GameTime_t m_flLastReconnectTime; // 0x888        
        entity2::GameTime_t m_fLastSuggestionTime; // 0x88c        
        [[maybe_unused]] std::uint8_t pad_0x890[0x20]; // 0x890
        bool m_bWantsRandomHero; // 0x8b0        
        bool m_bFullyJoinedServer; // 0x8b1        
        [[maybe_unused]] std::uint8_t pad_0x8b2[0x2]; // 0x8b2
        int32_t m_nCheatDetectOrderReferenceCommandNumber; // 0x8b4        
        client::PlayerID_t m_iSwapPreferencePlayerID; // 0x8b8        
        uint32_t m_nCoachListenMask; // 0x8bc        
        // metadata: MNetworkEnable
        int32_t m_nCachedCoachedTeam; // 0x8c0        
        float m_flLastChatWheelTime[2]; // 0x8c4        
        float m_flLastChatWheelAudioTime[2]; // 0x8cc        
        float m_flLastChatWheelAllChatAudioTime[2]; // 0x8d4        
        float m_flLastChatWheelSprayTime; // 0x8dc        
        float m_flLastChatWheelLongCooldownTime; // 0x8e0        
        float m_flLastPingTime; // 0x8e4        
        float m_flPingAllowance; // 0x8e8        
        float m_flLastMapLineTime; // 0x8ec        
        float m_flMapLineAllowance; // 0x8f0        
        float m_flLastVersusBehaviorTime; // 0x8f4        
        float m_flVersusBehaviorAllowance; // 0x8f8        
        uint8_t m_pOrderRetirementHistory[10]; // 0x8fc        
        uint16_t m_nOrderRetirementSum; // 0x906        
        int32_t m_nOrderRetirementLastTick; // 0x908        
        [[maybe_unused]] std::uint8_t pad_0x90c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAPlayerController because it is not a standard-layout class
    static_assert(sizeof(CDOTAPlayerController) == 0x910);
};
