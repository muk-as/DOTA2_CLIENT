#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/CUnitOrders.hpp"
#include "source2sdk/client/ClientQuickBuyItemState.hpp"
#include "source2sdk/client/NeutralCampStackPullAlarm_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ShopItemViewMode_t.hpp"
#include "source2sdk/client/sControlGroupElem.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_DOTABaseAbility;
};

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdc8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
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
    // static metadata: MNetworkVarNames "AbilityID_t m_quickBuyItems"
    // static metadata: MNetworkVarNames "bool m_quickBuyIsPurchasable"
    // static metadata: MNetworkVarNames "float m_flFrameTime"
    // static metadata: MNetworkVarNames "float m_flFrameTimeStdDev"
    // static metadata: MNetworkVarNames "float m_flUnfilteredFrameTime"
    // static metadata: MNetworkVarNames "int m_iMusicStatus"
    // static metadata: MNetworkVarNames "float m_flMusicOperatorVals"
    // static metadata: MNetworkVarNames "int m_iMusicOperatorVals"
    // static metadata: MNetworkReplayCompatField "m_iPlayerID"
    // static metadata: MNetworkReplayCompatField "m_audio\..*"
    #pragma pack(push, 1)
    class C_DOTAPlayerController : public client::CBasePlayerController
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x6d8[0xa0]; // 0x6d8
        int32_t m_iMinimapMove; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x77c[0x4]; // 0x77c
        KeyValues* m_pClickBehaviorKeys; // 0x780        
        entity2::GameTime_t m_flCenterTime; // 0x788        
        int32_t m_iConfirmationIndex; // 0x78c        
        bool m_bCenterOnHero; // 0x790        
        bool m_bHeroAssigned; // 0x791        
        [[maybe_unused]] std::uint8_t pad_0x792[0x2]; // 0x792
        int32_t m_nKeyBindHeroID; // 0x794        
        // metadata: MNetworkEnable
        bool m_bUsingCameraMan; // 0x798        
        // metadata: MNetworkEnable
        bool m_bUsingAssistedCameraOperator; // 0x799        
        [[maybe_unused]] std::uint8_t pad_0x79a[0x2]; // 0x79a
        // metadata: MNetworkEnable
        int32_t m_nPlayerAssistFlags; // 0x79c        
        Vector m_vLatestEvent; // 0x7a0        
        [[maybe_unused]] std::uint8_t pad_0x7ac[0x24]; // 0x7ac
        // m_hFreeDrawAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hFreeDrawAbility;
        char m_hFreeDrawAbility[0x4]; // 0x7d0        
        Vector m_vLastFreeDrawPosition; // 0x7d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerIDChanged"
        client::PlayerID_t m_nPlayerID; // 0x7e0        
        // metadata: MNetworkEnable
        // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAssignedHero;
        char m_hAssignedHero[0x4]; // 0x7e4        
        // m_hLastAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAssignedHero;
        char m_hLastAssignedHero[0x4]; // 0x7e8        
        // metadata: MNetworkEnable
        // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hKillCamUnit;
        char m_hKillCamUnit[0x4]; // 0x7ec        
        // m_hPreviousKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreviousKillCamUnit;
        char m_hPreviousKillCamUnit[0x4]; // 0x7f0        
        float m_flKillCamUnitReceivedTime; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x7f8[0x8]; // 0x7f8
        int32_t m_nRareLineClickCount; // 0x800        
        int32_t m_nRareLinesPlayed; // 0x804        
        int32_t m_nRareLineGroup; // 0x808        
        float m_flLastRareLinePlayTime; // 0x80c        
        float m_flLastUnitOrdersSendTime; // 0x810        
        bool m_bTeleportRequiresHalt; // 0x814        
        bool m_bChannelRequiresHalt; // 0x815        
        bool m_bAutoPurchaseItems; // 0x816        
        bool m_bDisableHUDErrorMessages; // 0x817        
        int32_t m_iMouseDragStartX; // 0x818        
        int32_t m_iMouseDragStartY; // 0x81c        
        int32_t m_nWeatherType; // 0x820        
        bool m_bDynamicWeatherSystemActive; // 0x824        
        bool m_bDynamicSoundHandled; // 0x825        
        [[maybe_unused]] std::uint8_t pad_0x826[0x2]; // 0x826
        entity2::GameTime_t m_flDynamicWeatherNextSwitchTime; // 0x828        
        entity2::GameTime_t m_flDynamicWeatherScaleFinishedTime; // 0x82c        
        float m_flDynamicWeatherIntensity; // 0x830        
        client::ParticleIndex_t m_nXPRangeFXIndex; // 0x834        
        client::ParticleIndex_t m_nVisionRangeFXIndex; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4]; // 0x83c
        // m_hRangeHintAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hRangeHintAbility;
        char m_hRangeHintAbility[0x4]; // 0x840        
        client::ParticleIndex_t m_nRangeHintFXIndex; // 0x844        
        float m_flRangeHintFXLastRadius; // 0x848        
        int32_t m_nSelectedControlGroup; // 0x84c        
        // metadata: MNetworkEnable
        int32_t m_nCachedCoachedTeam; // 0x850        
        // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hActiveAbility;
        char m_hActiveAbility[0x4]; // 0x854        
        // m_unitorders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CUnitOrders> m_unitorders;
        char m_unitorders[0x18]; // 0x858        
        int32_t m_nOutgoingOrderSequenceNumber; // 0x870        
        // metadata: MNetworkEnable
        int32_t m_nServerOrderSequenceNumber; // 0x874        
        int32_t m_nLastSentOutgoingOrderSequenceNumber; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0x4]; // 0x87c
        // m_nSelectedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_nSelectedUnits;
        char m_nSelectedUnits[0x18]; // 0x880        
        // m_nWaypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_nWaypoints;
        char m_nWaypoints[0x18]; // 0x898        
        int32_t m_iActions; // 0x8b0        
        // m_hQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hQueryUnit;
        char m_hQueryUnit[0x4]; // 0x8b4        
        bool m_bInQuery; // 0x8b8        
        bool m_bSelectionChangedInDataUpdate; // 0x8b9        
        [[maybe_unused]] std::uint8_t pad_0x8ba[0x66]; // 0x8ba
        entity2::GameTime_t m_flQueryInhibitingActionTime; // 0x920        
        float m_flQueryInhibitDuration; // 0x924        
        // m_RingedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_RingedEntities;
        char m_RingedEntities[0x18]; // 0x928        
        // m_ActiveRingOwners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_ActiveRingOwners;
        char m_ActiveRingOwners[0x18]; // 0x940        
        bool m_bOverridingQuery; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x959[0x7]; // 0x959
        float m_flLastAutoRepeatTime; // 0x960        
        float m_flConsumeDoubleclickTime; // 0x964        
        CUtlString m_LightInfoWeatherEffect; // 0x968        
        bool m_bPreviousWasLightInfoWeather; // 0x970        
        [[maybe_unused]] std::uint8_t pad_0x971[0x7]; // 0x971
        CUtlString m_MapDefaultWeatherEffect; // 0x978        
        bool m_bMapUsesDynamicWeather; // 0x980        
        [[maybe_unused]] std::uint8_t pad_0x981[0x27]; // 0x981
        int32_t m_nCastRangeEffectCreationRadius; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x1c]; // 0x9ac
        // m_vecSuggestedWardLocationEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecSuggestedWardLocationEffects;
        char m_vecSuggestedWardLocationEffects[0x18]; // 0x9c8        
        client::C_DOTA_BaseNPC* m_pSmartCastNPC; // 0x9e0        
        client::ParticleIndex_t m_nTeamSprayParticleIndex; // 0x9e8        
        bool m_bIsNextCastOrderFromMouseClick; // 0x9ec        
        [[maybe_unused]] std::uint8_t pad_0x9ed[0x33]; // 0x9ed
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // metadata: MNetworkPriority "32"
        int32_t m_iCursor[2]; // 0xa20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iSpectatorClickBehavior; // 0xa28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flAspectRatio; // 0xa2c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSpectatorQueryUnit;
        char m_hSpectatorQueryUnit[0x4]; // 0xa30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsPanel; // 0xa34        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iShopPanel; // 0xa38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        client::ShopItemViewMode_t m_iShopViewMode; // 0xa3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsDropdownCategory; // 0xa40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsDropdownSort; // 0xa44        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        char m_szShopString[64]; // 0xa48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // m_vecClientQuickBuyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::ClientQuickBuyItemState> m_vecClientQuickBuyState;
        char m_vecClientQuickBuyState[0x50]; // 0xa88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        bool m_bInShowCaseMode; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xad9[0x3]; // 0xad9
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flCameraZoomAmount; // 0xadc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iHighPriorityScore; // 0xae0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        client::AbilityID_t m_quickBuyItems[9]; // 0xae4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        bool m_quickBuyIsPurchasable[9]; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb11[0x3]; // 0xb11
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flFrameTime; // 0xb14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flFrameTimeStdDev; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flUnfilteredFrameTime; // 0xb1c        
        // m_NeutralCampAlarms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::NeutralCampStackPullAlarm_t> m_NeutralCampAlarms;
        char m_NeutralCampAlarms[0x18]; // 0xb20        
        int32_t m_iPrevCursor[2]; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb40[0xa0]; // 0xb40
        int32_t m_iPositionHistoryTail; // 0xbe0        
        // metadata: MNetworkEnable
        int32_t m_iMusicStatus; // 0xbe4        
        int32_t m_iPreviousMusicStatus; // 0xbe8        
        bool m_bRequestedInventory; // 0xbec        
        [[maybe_unused]] std::uint8_t pad_0xbed[0x3]; // 0xbed
        // metadata: MNetworkEnable
        float m_flMusicOperatorVals[3]; // 0xbf0        
        // metadata: MNetworkEnable
        int32_t m_iMusicOperatorVals[4]; // 0xbfc        
        [[maybe_unused]] std::uint8_t pad_0xc0c[0x4]; // 0xc0c
        // m_ControlGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sControlGroupElem> m_ControlGroups[10];
        char m_ControlGroups[0xf0]; // 0xc10        
        KeyValues* m_pkvControlGroupKV; // 0xd00        
        [[maybe_unused]] std::uint8_t pad_0xd08[0x58]; // 0xd08
        float m_flAltHeldStartTime; // 0xd60        
        [[maybe_unused]] std::uint8_t pad_0xd64[0x64];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAPlayerController because it is not a standard-layout class
    static_assert(sizeof(C_DOTAPlayerController) == 0xdc8);
};
