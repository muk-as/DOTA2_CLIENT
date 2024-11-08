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
    // Size: 0xe00
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
    // static metadata: MNetworkVarNames "AbilityID_t m_quickBuyItems"
    // static metadata: MNetworkVarNames "bool m_quickBuyIsPurchasable"
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
        [[maybe_unused]] std::uint8_t pad_0x700[0xa0]; // 0x700
        int32_t m_iMinimapMove; // 0x7a0        
        [[maybe_unused]] std::uint8_t pad_0x7a4[0x4]; // 0x7a4
        KeyValues* m_pClickBehaviorKeys; // 0x7a8        
        entity2::GameTime_t m_flCenterTime; // 0x7b0        
        int32_t m_iConfirmationIndex; // 0x7b4        
        bool m_bCenterOnHero; // 0x7b8        
        bool m_bHeroAssigned; // 0x7b9        
        [[maybe_unused]] std::uint8_t pad_0x7ba[0x2]; // 0x7ba
        int32_t m_nKeyBindHeroID; // 0x7bc        
        // metadata: MNetworkEnable
        bool m_bUsingCameraMan; // 0x7c0        
        // metadata: MNetworkEnable
        bool m_bUsingAssistedCameraOperator; // 0x7c1        
        [[maybe_unused]] std::uint8_t pad_0x7c2[0x2]; // 0x7c2
        // metadata: MNetworkEnable
        int32_t m_nPlayerAssistFlags; // 0x7c4        
        Vector m_vLatestEvent; // 0x7c8        
        [[maybe_unused]] std::uint8_t pad_0x7d4[0x24]; // 0x7d4
        // m_hFreeDrawAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hFreeDrawAbility;
        char m_hFreeDrawAbility[0x4]; // 0x7f8        
        Vector m_vLastFreeDrawPosition; // 0x7fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerIDChanged"
        client::PlayerID_t m_nPlayerID; // 0x808        
        // metadata: MNetworkEnable
        // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAssignedHero;
        char m_hAssignedHero[0x4]; // 0x80c        
        // m_hLastAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAssignedHero;
        char m_hLastAssignedHero[0x4]; // 0x810        
        // metadata: MNetworkEnable
        // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hKillCamUnit;
        char m_hKillCamUnit[0x4]; // 0x814        
        // m_hPreviousKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreviousKillCamUnit;
        char m_hPreviousKillCamUnit[0x4]; // 0x818        
        float m_flKillCamUnitReceivedTime; // 0x81c        
        [[maybe_unused]] std::uint8_t pad_0x820[0x8]; // 0x820
        int32_t m_nRareLineClickCount; // 0x828        
        int32_t m_nRareLinesPlayed; // 0x82c        
        int32_t m_nRareLineGroup; // 0x830        
        float m_flLastRareLinePlayTime; // 0x834        
        float m_flLastUnitOrdersSendTime; // 0x838        
        bool m_bTeleportRequiresHalt; // 0x83c        
        bool m_bChannelRequiresHalt; // 0x83d        
        bool m_bAutoPurchaseItems; // 0x83e        
        bool m_bDisableHUDErrorMessages; // 0x83f        
        int32_t m_iMouseDragStartX; // 0x840        
        int32_t m_iMouseDragStartY; // 0x844        
        int32_t m_nWeatherType; // 0x848        
        bool m_bDynamicWeatherSystemActive; // 0x84c        
        bool m_bDynamicSoundHandled; // 0x84d        
        [[maybe_unused]] std::uint8_t pad_0x84e[0x2]; // 0x84e
        entity2::GameTime_t m_flDynamicWeatherNextSwitchTime; // 0x850        
        entity2::GameTime_t m_flDynamicWeatherScaleFinishedTime; // 0x854        
        float m_flDynamicWeatherIntensity; // 0x858        
        client::ParticleIndex_t m_nXPRangeFXIndex; // 0x85c        
        client::ParticleIndex_t m_nVisionRangeFXIndex; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x864[0x4]; // 0x864
        // m_hRangeHintAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hRangeHintAbility;
        char m_hRangeHintAbility[0x4]; // 0x868        
        client::ParticleIndex_t m_nRangeHintFXIndex; // 0x86c        
        float m_flRangeHintFXLastRadius; // 0x870        
        int32_t m_nSelectedControlGroup; // 0x874        
        // metadata: MNetworkEnable
        int32_t m_nCachedCoachedTeam; // 0x878        
        // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTABaseAbility> m_hActiveAbility;
        char m_hActiveAbility[0x4]; // 0x87c        
        // m_unitorders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CUnitOrders> m_unitorders;
        char m_unitorders[0x18]; // 0x880        
        int32_t m_nOutgoingOrderSequenceNumber; // 0x898        
        // metadata: MNetworkEnable
        int32_t m_nServerOrderSequenceNumber; // 0x89c        
        int32_t m_nLastSentOutgoingOrderSequenceNumber; // 0x8a0        
        [[maybe_unused]] std::uint8_t pad_0x8a4[0x4]; // 0x8a4
        // m_nSelectedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_nSelectedUnits;
        char m_nSelectedUnits[0x18]; // 0x8a8        
        // m_nWaypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_nWaypoints;
        char m_nWaypoints[0x18]; // 0x8c0        
        int32_t m_iActions; // 0x8d8        
        // m_hQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hQueryUnit;
        char m_hQueryUnit[0x4]; // 0x8dc        
        bool m_bInQuery; // 0x8e0        
        bool m_bSelectionChangedInDataUpdate; // 0x8e1        
        [[maybe_unused]] std::uint8_t pad_0x8e2[0x66]; // 0x8e2
        entity2::GameTime_t m_flQueryInhibitingActionTime; // 0x948        
        float m_flQueryInhibitDuration; // 0x94c        
        // m_RingedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_RingedEntities;
        char m_RingedEntities[0x18]; // 0x950        
        // m_ActiveRingOwners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_ActiveRingOwners;
        char m_ActiveRingOwners[0x18]; // 0x968        
        bool m_bOverridingQuery; // 0x980        
        [[maybe_unused]] std::uint8_t pad_0x981[0x7]; // 0x981
        float m_flLastAutoRepeatTime; // 0x988        
        float m_flConsumeDoubleclickTime; // 0x98c        
        CUtlString m_LightInfoWeatherEffect; // 0x990        
        bool m_bPreviousWasLightInfoWeather; // 0x998        
        [[maybe_unused]] std::uint8_t pad_0x999[0x7]; // 0x999
        CUtlString m_MapDefaultWeatherEffect; // 0x9a0        
        bool m_bMapUsesDynamicWeather; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9a9[0x27]; // 0x9a9
        int32_t m_nCastRangeEffectCreationRadius; // 0x9d0        
        [[maybe_unused]] std::uint8_t pad_0x9d4[0x1c]; // 0x9d4
        // m_vecSuggestedWardLocationEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecSuggestedWardLocationEffects;
        char m_vecSuggestedWardLocationEffects[0x18]; // 0x9f0        
        client::C_DOTA_BaseNPC* m_pSmartCastNPC; // 0xa08        
        client::ParticleIndex_t m_nTeamSprayParticleIndex; // 0xa10        
        bool m_bIsNextCastOrderFromMouseClick; // 0xa14        
        [[maybe_unused]] std::uint8_t pad_0xa15[0x33]; // 0xa15
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // metadata: MNetworkPriority "32"
        int32_t m_iCursor[2]; // 0xa48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iSpectatorClickBehavior; // 0xa50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flAspectRatio; // 0xa54        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSpectatorQueryUnit;
        char m_hSpectatorQueryUnit[0x4]; // 0xa58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsPanel; // 0xa5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iShopPanel; // 0xa60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        client::ShopItemViewMode_t m_iShopViewMode; // 0xa64        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsDropdownCategory; // 0xa68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iStatsDropdownSort; // 0xa6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        char m_szShopString[64]; // 0xa70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        // m_vecClientQuickBuyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::ClientQuickBuyItemState> m_vecClientQuickBuyState;
        char m_vecClientQuickBuyState[0x68]; // 0xab0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        bool m_bInShowCaseMode; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb19[0x3]; // 0xb19
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flCameraZoomAmount; // 0xb1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        int32_t m_iHighPriorityScore; // 0xb20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        client::AbilityID_t m_quickBuyItems[9]; // 0xb24        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        bool m_quickBuyIsPurchasable[9]; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb51[0x3]; // 0xb51
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "DOTACommentatorTable"
        float m_flUnfilteredFrameTime; // 0xb54        
        // m_NeutralCampAlarms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::NeutralCampStackPullAlarm_t> m_NeutralCampAlarms;
        char m_NeutralCampAlarms[0x18]; // 0xb58        
        int32_t m_iPrevCursor[2]; // 0xb70        
        [[maybe_unused]] std::uint8_t pad_0xb78[0xa0]; // 0xb78
        int32_t m_iPositionHistoryTail; // 0xc18        
        // metadata: MNetworkEnable
        int32_t m_iMusicStatus; // 0xc1c        
        int32_t m_iPreviousMusicStatus; // 0xc20        
        bool m_bRequestedInventory; // 0xc24        
        [[maybe_unused]] std::uint8_t pad_0xc25[0x3]; // 0xc25
        // metadata: MNetworkEnable
        float m_flMusicOperatorVals[3]; // 0xc28        
        // metadata: MNetworkEnable
        int32_t m_iMusicOperatorVals[4]; // 0xc34        
        [[maybe_unused]] std::uint8_t pad_0xc44[0x4]; // 0xc44
        // m_ControlGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sControlGroupElem> m_ControlGroups[10];
        char m_ControlGroups[0xf0]; // 0xc48        
        KeyValues* m_pkvControlGroupKV; // 0xd38        
        [[maybe_unused]] std::uint8_t pad_0xd40[0x58]; // 0xd40
        float m_flAltHeldStartTime; // 0xd98        
        [[maybe_unused]] std::uint8_t pad_0xd9c[0x64];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAPlayerController because it is not a standard-layout class
    static_assert(sizeof(C_DOTAPlayerController) == 0xe00);
};
