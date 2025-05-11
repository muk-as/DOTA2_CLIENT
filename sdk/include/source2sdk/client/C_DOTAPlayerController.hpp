#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xe10
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
        class C_DOTAPlayerController : public source2sdk::client::CBasePlayerController
        {
        public:
            uint8_t _pad0700[0xa0]; // 0x700
            std::int32_t m_iMinimapMove; // 0x7a0            
            uint8_t _pad07a4[0x4]; // 0x7a4
            KeyValues* m_pClickBehaviorKeys; // 0x7a8            
            source2sdk::entity2::GameTime_t m_flCenterTime; // 0x7b0            
            std::int32_t m_iConfirmationIndex; // 0x7b4            
            bool m_bCenterOnHero; // 0x7b8            
            bool m_bHeroAssigned; // 0x7b9            
            uint8_t _pad07ba[0x2]; // 0x7ba
            std::int32_t m_nKeyBindHeroID; // 0x7bc            
            // metadata: MNetworkEnable
            bool m_bUsingCameraMan; // 0x7c0            
            // metadata: MNetworkEnable
            bool m_bUsingAssistedCameraOperator; // 0x7c1            
            uint8_t _pad07c2[0x2]; // 0x7c2
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerAssistFlags; // 0x7c4            
            Vector m_vLatestEvent; // 0x7c8            
            uint8_t _pad07d4[0x24]; // 0x7d4
            // m_hFreeDrawAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hFreeDrawAbility;
            char m_hFreeDrawAbility[0x4]; // 0x7f8            
            Vector m_vLastFreeDrawPosition; // 0x7fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerIDChanged"
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x808            
            // metadata: MNetworkEnable
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x4]; // 0x80c            
            // m_hLastAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAssignedHero;
            char m_hLastAssignedHero[0x4]; // 0x810            
            // metadata: MNetworkEnable
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x4]; // 0x814            
            // m_hPreviousKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousKillCamUnit;
            char m_hPreviousKillCamUnit[0x4]; // 0x818            
            float m_flKillCamUnitReceivedTime; // 0x81c            
            uint8_t _pad0820[0x8]; // 0x820
            std::int32_t m_nRareLineClickCount; // 0x828            
            std::int32_t m_nRareLinesPlayed; // 0x82c            
            std::int32_t m_nRareLineGroup; // 0x830            
            float m_flLastRareLinePlayTime; // 0x834            
            float m_flUnitOrdersSendTime; // 0x838            
            float m_flLastUnitOrdersSendTime; // 0x83c            
            float m_flLastUnitOrdersTotalLatency; // 0x840            
            bool m_bTeleportRequiresHalt; // 0x844            
            bool m_bChannelRequiresHalt; // 0x845            
            bool m_bAutoPurchaseItems; // 0x846            
            bool m_bDisableHUDErrorMessages; // 0x847            
            std::int32_t m_iMouseDragStartX; // 0x848            
            std::int32_t m_iMouseDragStartY; // 0x84c            
            std::int32_t m_nWeatherType; // 0x850            
            bool m_bDynamicWeatherSystemActive; // 0x854            
            bool m_bDynamicSoundHandled; // 0x855            
            uint8_t _pad0856[0x2]; // 0x856
            source2sdk::entity2::GameTime_t m_flDynamicWeatherNextSwitchTime; // 0x858            
            source2sdk::entity2::GameTime_t m_flDynamicWeatherScaleFinishedTime; // 0x85c            
            float m_flDynamicWeatherIntensity; // 0x860            
            source2sdk::client::ParticleIndex_t m_nXPRangeFXIndex; // 0x864            
            source2sdk::client::ParticleIndex_t m_nVisionRangeFXIndex; // 0x868            
            uint8_t _pad086c[0x4]; // 0x86c
            // m_hRangeHintAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hRangeHintAbility;
            char m_hRangeHintAbility[0x4]; // 0x870            
            source2sdk::client::ParticleIndex_t m_nRangeHintFXIndex; // 0x874            
            float m_flRangeHintFXLastRadius; // 0x878            
            std::int32_t m_nSelectedControlGroup; // 0x87c            
            // metadata: MNetworkEnable
            std::int32_t m_nCachedCoachedTeam; // 0x880            
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTABaseAbility> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0x884            
            // m_unitorders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CUnitOrders> m_unitorders;
            char m_unitorders[0x18]; // 0x888            
            std::int32_t m_nNextOutgoingOrderSequenceNumber; // 0x8a0            
            // metadata: MNetworkEnable
            std::int32_t m_nServerOrderSequenceNumber; // 0x8a4            
            std::int32_t m_nMaxSentOutgoingOrderSequenceNumber; // 0x8a8            
            uint8_t _pad08ac[0x4]; // 0x8ac
            // m_nSelectedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_nSelectedUnits;
            char m_nSelectedUnits[0x18]; // 0x8b0            
            // m_nWaypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_nWaypoints;
            char m_nWaypoints[0x18]; // 0x8c8            
            std::int32_t m_iActions; // 0x8e0            
            // m_hQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hQueryUnit;
            char m_hQueryUnit[0x4]; // 0x8e4            
            bool m_bInQuery; // 0x8e8            
            bool m_bSelectionChangedInDataUpdate; // 0x8e9            
            uint8_t _pad08ea[0x66]; // 0x8ea
            source2sdk::entity2::GameTime_t m_flQueryInhibitingActionTime; // 0x950            
            float m_flQueryInhibitDuration; // 0x954            
            // m_RingedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_RingedEntities;
            char m_RingedEntities[0x18]; // 0x958            
            // m_ActiveRingOwners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_ActiveRingOwners;
            char m_ActiveRingOwners[0x18]; // 0x970            
            bool m_bOverridingQuery; // 0x988            
            uint8_t _pad0989[0x7]; // 0x989
            float m_flLastAutoRepeatTime; // 0x990            
            float m_flConsumeDoubleclickTime; // 0x994            
            CUtlString m_LightInfoWeatherEffect; // 0x998            
            bool m_bPreviousWasLightInfoWeather; // 0x9a0            
            uint8_t _pad09a1[0x7]; // 0x9a1
            CUtlString m_MapDefaultWeatherEffect; // 0x9a8            
            bool m_bMapUsesDynamicWeather; // 0x9b0            
            uint8_t _pad09b1[0x27]; // 0x9b1
            std::int32_t m_nCastRangeEffectCreationRadius; // 0x9d8            
            uint8_t _pad09dc[0x1c]; // 0x9dc
            // m_vecSuggestedWardLocationEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecSuggestedWardLocationEffects;
            char m_vecSuggestedWardLocationEffects[0x18]; // 0x9f8            
            source2sdk::client::C_DOTA_BaseNPC* m_pSmartCastNPC; // 0xa10            
            source2sdk::client::ParticleIndex_t m_nTeamSprayParticleIndex; // 0xa18            
            source2sdk::client::ParticleIndex_t m_nScanCastIndicatorParticleIndex; // 0xa1c            
            bool m_bIsNextCastOrderFromMouseClick; // 0xa20            
            uint8_t _pad0a21[0x37]; // 0xa21
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCursor[2]; // 0xa58            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iSpectatorClickBehavior; // 0xa60            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flAspectRatio; // 0xa64            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSpectatorQueryUnit;
            char m_hSpectatorQueryUnit[0x4]; // 0xa68            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsPanel; // 0xa6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iShopPanel; // 0xa70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            source2sdk::client::ShopItemViewMode_t m_iShopViewMode; // 0xa74            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownCategory; // 0xa78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iStatsDropdownSort; // 0xa7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            char m_szShopString[64]; // 0xa80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            // m_vecClientQuickBuyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ClientQuickBuyItemState> m_vecClientQuickBuyState;
            char m_vecClientQuickBuyState[0x68]; // 0xac0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            bool m_bInShowCaseMode; // 0xb28            
            uint8_t _pad0b29[0x3]; // 0xb29
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flCameraZoomAmount; // 0xb2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            std::int32_t m_iHighPriorityScore; // 0xb30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            source2sdk::client::AbilityID_t m_quickBuyItems[9]; // 0xb34            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            bool m_quickBuyIsPurchasable[9]; // 0xb58            
            uint8_t _pad0b61[0x3]; // 0xb61
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "DOTACommentatorTable"
            float m_flUnfilteredFrameTime; // 0xb64            
            // m_NeutralCampAlarms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NeutralCampStackPullAlarm_t> m_NeutralCampAlarms;
            char m_NeutralCampAlarms[0x18]; // 0xb68            
            std::int32_t m_iPrevCursor[2]; // 0xb80            
            uint8_t _pad0b88[0xa0]; // 0xb88
            std::int32_t m_iPositionHistoryTail; // 0xc28            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicStatus; // 0xc2c            
            std::int32_t m_iPreviousMusicStatus; // 0xc30            
            bool m_bRequestedInventory; // 0xc34            
            uint8_t _pad0c35[0x3]; // 0xc35
            // metadata: MNetworkEnable
            float m_flMusicOperatorVals[3]; // 0xc38            
            // metadata: MNetworkEnable
            std::int32_t m_iMusicOperatorVals[4]; // 0xc44            
            uint8_t _pad0c54[0x4]; // 0xc54
            // m_ControlGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sControlGroupElem> m_ControlGroups[10];
            char m_ControlGroups[0xf0]; // 0xc58            
            KeyValues* m_pkvControlGroupKV; // 0xd48            
            uint8_t _pad0d50[0x58]; // 0xd50
            float m_flAltHeldStartTime; // 0xda8            
            uint8_t _pad0dac[0x64];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAPlayerController) == 0xe10);
    };
};
