#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_AbilityDraftAbilityState.hpp"
#include "source2sdk/client/CDOTA_AbilityDraftHeroState.hpp"
#include "source2sdk/client/CDOTA_ItemStockInfo.hpp"
#include "source2sdk/client/CHeroStatueLiked.hpp"
#include "source2sdk/client/CHeroesPerPlayer.hpp"
#include "source2sdk/client/CTormentorSpawnPhase.hpp"
#include "source2sdk/client/C_MultiplayRules.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/DOTA_AssassinMinigameNetworkState.hpp"
#include "source2sdk/client/DOTA_HeroPickState.hpp"
#include "source2sdk/client/DOTA_PlayerDraftState.hpp"
#include "source2sdk/client/ERoshanSpawnPhase.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/client/NeutralSpawnBoxes_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/RegionTriggerBoxes_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
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
        struct C_DOTA_BaseNPC;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_IngameEvent_Base;
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nRuneCycle"
        // static metadata: MNetworkReplayCompatField "m_fGameTime"
        // static metadata: MNetworkVarNames "int m_iMiscHeroPickCounter"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEndGameCinematicEntity"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hOverlayHealthBarUnit"
        // static metadata: MNetworkVarNames "int m_nOverlayHealthBarType"
        // static metadata: MNetworkVarNames "bool m_bIsInCinematicMode"
        // static metadata: MNetworkVarNames "bool m_bFreeCourierMode"
        // static metadata: MNetworkVarNames "uint32 m_unFanfareGoodGuys"
        // static metadata: MNetworkVarNames "uint32 m_unFanfareBadGuys"
        // static metadata: MNetworkVarNames "int m_nServerGameState"
        // static metadata: MNetworkVarNames "DOTA_HeroPickState m_nServerHeroPickState"
        // static metadata: MNetworkVarNames "bool m_bAlternateHeroGridsEnabled"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateTransitionTime"
        // static metadata: MNetworkVarNames "float m_flOverride_dota_hero_selection_time"
        // static metadata: MNetworkVarNames "float m_flOverride_dota_pregame_time"
        // static metadata: MNetworkVarNames "float m_flOverride_dota_postgame_time"
        // static metadata: MNetworkVarNames "float m_flOverride_dota_strategy_time"
        // static metadata: MNetworkVarNames "float m_flOverride_dota_team_showcase_duration"
        // static metadata: MNetworkVarNames "float m_flOverride_dota_rune_spawn_time"
        // static metadata: MNetworkVarNames "float m_flShowcaseTime"
        // static metadata: MNetworkVarNames "float m_flNeutralInitialSpawnOffset"
        // static metadata: MNetworkVarNames "int m_iGameMode"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGameModeEntity"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCustomHeroPickRulesEntity"
        // static metadata: MNetworkVarNames "GameTime_t m_flHeroPickStateTransitionTime"
        // static metadata: MNetworkVarNames "uint64 m_iPlayerIDsInControl"
        // static metadata: MNetworkVarNames "bool m_bSameHeroSelectionEnabled"
        // static metadata: MNetworkVarNames "bool m_bUseCustomHeroXPValue"
        // static metadata: MNetworkVarNames "bool m_bUseBaseGoldBountyOnHeroes"
        // static metadata: MNetworkVarNames "bool m_bUseUniversalShopMode"
        // static metadata: MNetworkVarNames "bool m_bHideKillMessageHeaders"
        // static metadata: MNetworkVarNames "float m_flHeroMinimapIconScale"
        // static metadata: MNetworkVarNames "float m_flCreepMinimapIconScale"
        // static metadata: MNetworkVarNames "bool m_bCreepSpawningEnabled"
        // static metadata: MNetworkVarNames "float m_flRuneMinimapIconScale"
        // static metadata: MNetworkVarNames "char m_CustomVictoryMessage"
        // static metadata: MNetworkVarNames "float m_flCustomGameEndDelay"
        // static metadata: MNetworkVarNames "float m_flCustomGameSetupAutoLaunchDelay"
        // static metadata: MNetworkVarNames "float m_flCustomGameSetupTimeout"
        // static metadata: MNetworkVarNames "float m_flCustomVictoryMessageDuration"
        // static metadata: MNetworkVarNames "float m_flHeroSelectPenaltyTime"
        // static metadata: MNetworkVarNames "bool m_bCustomGameSetupAutoLaunchEnabled"
        // static metadata: MNetworkVarNames "bool m_bCustomGameTeamSelectionLocked"
        // static metadata: MNetworkVarNames "bool m_bCustomGameEnablePickRules"
        // static metadata: MNetworkVarNames "bool m_bCustomGameAllowHeroPickMusic"
        // static metadata: MNetworkVarNames "bool m_bCustomGameAllowMusicAtGameStart"
        // static metadata: MNetworkVarNames "bool m_bCustomGameAllowBattleMusic"
        // static metadata: MNetworkVarNames "bool m_bCustomGameDisableIK"
        // static metadata: MNetworkVarNames "bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits"
        // static metadata: MNetworkVarNames "int m_iCMModePickBanOrder"
        // static metadata: MNetworkVarNames "int m_iCDModePickBanOrder"
        // static metadata: MNetworkVarNames "int m_nGGTeam"
        // static metadata: MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
        // static metadata: MNetworkVarNames "bool m_bGGCalled"
        // static metadata: MNetworkVarNames "bool m_bWhiteListEnabled"
        // static metadata: MNetworkVarNames "uint64 m_bItemWhiteList"
        // static metadata: MNetworkVarNames "int m_nLastHitUIMode"
        // static metadata: MNetworkVarNames "bool m_bHUDTimerTutorialMode"
        // static metadata: MNetworkVarNames "float m_fExtraTimeRemaining"
        // static metadata: MNetworkVarNames "bool m_bHeroRespawnEnabled"
        // static metadata: MNetworkVarNames "bool m_bIsRandomingEnabled"
        // static metadata: MNetworkVarNames "PlayerID_t m_iCaptainPlayerIDs"
        // static metadata: MNetworkVarNames "HeroID_t m_BannedHeroes"
        // static metadata: MNetworkVarNames "HeroID_t m_SelectedHeroes"
        // static metadata: MNetworkVarNames "int m_iActiveTeam"
        // static metadata: MNetworkVarNames "int m_iStartingTeam"
        // static metadata: MNetworkVarNames "int m_iPenaltyLevelRadiant"
        // static metadata: MNetworkVarNames "int m_iPenaltyLevelDire"
        // static metadata: MNetworkVarNames "bool m_bIsLoadingScenario"
        // static metadata: MNetworkVarNames "HeroID_t m_vecNewBannedHeroes"
        // static metadata: MNetworkVarNames "HeroID_t m_vecWhitelistedHeroes"
        // static metadata: MNetworkVarNames "HeroID_t m_vecBlacklistedHeroes"
        // static metadata: MNetworkVarNames "bool m_bHideBlacklistedHeroes"
        // static metadata: MNetworkVarNames "int m_nSeriesType"
        // static metadata: MNetworkVarNames "int m_nRadiantSeriesWins"
        // static metadata: MNetworkVarNames "int m_nDireSeriesWins"
        // static metadata: MNetworkVarNames "CHeroesPerPlayer m_vecAvailableHerosPerPlayerID"
        // static metadata: MNetworkVarNames "CHeroesPerPlayer m_vecLockedHerosByPlayerID"
        // static metadata: MNetworkVarNames "CHeroesPerPlayer m_vecDisabledRandomHerosByPlayerID"
        // static metadata: MNetworkVarNames "int m_iGoodTomeCount"
        // static metadata: MNetworkVarNames "int m_iBadTomeCount"
        // static metadata: MNetworkVarNames "GameTime_t m_flPreGameStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameEndTime"
        // static metadata: MNetworkVarNames "float m_flGameLoadTime"
        // static metadata: MNetworkVarNames "int m_iCustomGameScore"
        // static metadata: MNetworkVarNames "int m_nCustomGameDifficulty"
        // static metadata: MNetworkVarNames "GameTime_t m_fGoodGlyphCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_fBadGlyphCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_flGlyphCooldowns"
        // static metadata: MNetworkVarNames "GameTime_t m_fGoodRadarCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_fBadRadarCooldown"
        // static metadata: MNetworkVarNames "GameTime_t m_flRadarCooldowns"
        // static metadata: MNetworkVarNames "int m_iGoodRadarCharges"
        // static metadata: MNetworkVarNames "int m_iBadRadarCharges"
        // static metadata: MNetworkVarNames "int m_iRadarCharges"
        // static metadata: MNetworkVarNames "float m_flOutpostTimes"
        // static metadata: MNetworkVarNames "bool m_bIsNightstalkerNight"
        // static metadata: MNetworkVarNames "bool m_bIsTemporaryNight"
        // static metadata: MNetworkVarNames "bool m_bIsTemporaryDay"
        // static metadata: MNetworkVarNames "int m_nRiverType"
        // static metadata: MNetworkVarNames "PlayerID_t m_nTeamFeaturedPlayerID"
        // static metadata: MNetworkVarNames "item_definition_index_t m_nTeamVersusScreen"
        // static metadata: MNetworkVarNames "CDOTA_ItemStockInfo m_vecItemStockInfo"
        // static metadata: MNetworkVarNames "DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData"
        // static metadata: MNetworkVarNames "int m_nGameWinner"
        // static metadata: MNetworkVarNames "MatchID_t m_unMatchID64"
        // static metadata: MNetworkVarNames "bool m_bMatchSignoutComplete"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSideShop1"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSideShop2"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSecretShop1"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSecretShop2"
        // static metadata: MNetworkVarNames "EHANDLE m_hTeamFountains"
        // static metadata: MNetworkVarNames "EHANDLE m_hTeamForts"
        // static metadata: MNetworkVarNames "EHANDLE m_hTeamShops"
        // static metadata: MNetworkVarNames "EHANDLE m_hWatchers"
        // static metadata: MNetworkVarNames "EHANDLE m_hWisdomShrines"
        // static metadata: MNetworkVarNames "EHANDLE m_hLotusPools"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAnnouncerGood"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAnnouncerBad"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAnnouncerSpectator"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAnnouncerGood_KillingSpree"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAnnouncerBad_KillingSpree"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAnnouncerSpectator_KillingSpree"
        // static metadata: MNetworkVarNames "bool m_arrTier1TowerDestroyed"
        // static metadata: MNetworkVarNames "bool m_arrTier2TowerDestroyed"
        // static metadata: MNetworkVarNames "bool m_arrTier3TowerDestroyed"
        // static metadata: MNetworkVarNames "bool m_arrMeleeBarracksDestroyed"
        // static metadata: MNetworkVarNames "bool m_bTier1TowerDestroyed"
        // static metadata: MNetworkVarNames "bool m_bTier2TowerDestroyed"
        // static metadata: MNetworkVarNames "bool m_bTier3TowerDestroyed"
        // static metadata: MNetworkVarNames "bool m_bMeleeBarracksDestroyed"
        // static metadata: MNetworkVarNames "int m_iNetTimeOfDay"
        // static metadata: MNetworkVarNames "float m_flDaytimeStart"
        // static metadata: MNetworkVarNames "float m_flNighttimeStart"
        // static metadata: MNetworkVarNames "int m_nLoadedPlayers"
        // static metadata: MNetworkVarNames "int m_nExpectedPlayers"
        // static metadata: MNetworkVarNames "int m_iMinimapDebugGridState"
        // static metadata: MNetworkVarNames "int m_iFoWFrameNumber"
        // static metadata: MNetworkVarNames "Vector m_vWeatherWindDirection"
        // static metadata: MNetworkVarNames "CTormentorSpawnPhase m_tormentorSpawnPhase"
        // static metadata: MNetworkVarNames "HeroID_t m_vecRequiredPlaytestHeroesStorage"
        // static metadata: MNetworkVarNames "HeroID_t m_vecRecommendedPlaytestHeroesStorage"
        // static metadata: MNetworkVarNames "bool m_bAllRequiredPlaytestHeroesPicked"
        // static metadata: MNetworkVarNames "int m_nLastPlaytestPickPhase"
        // static metadata: MNetworkVarNames "byte m_BotDebugPushLane"
        // static metadata: MNetworkVarNames "byte m_BotDebugDefendLane"
        // static metadata: MNetworkVarNames "byte m_BotDebugFarmLane"
        // static metadata: MNetworkVarNames "byte m_BotDebugRoam"
        // static metadata: MNetworkVarNames "EHANDLE m_hBotDebugRoamTarget"
        // static metadata: MNetworkVarNames "byte m_BotDebugRoshan"
        // static metadata: MNetworkVarNames "CDOTA_AbilityDraftAbilityState m_AbilityDraftAbilities"
        // static metadata: MNetworkVarNames "CDOTA_AbilityDraftHeroState m_AbilityDraftHeroes"
        // static metadata: MNetworkVarNames "bool m_bAbilityDraftCurrentPlayerHasPicked"
        // static metadata: MNetworkVarNames "int m_nAbilityDraftPlayerTracker"
        // static metadata: MNetworkVarNames "int m_nAbilityDraftRoundNumber"
        // static metadata: MNetworkVarNames "int m_nAbilityDraftAdvanceSteps"
        // static metadata: MNetworkVarNames "int m_nAbilityDraftPhase"
        // static metadata: MNetworkVarNames "bool m_bIsPlayerDraft"
        // static metadata: MNetworkVarNames "DOTA_PlayerDraftState m_ePlayerDraftState"
        // static metadata: MNetworkVarNames "uint8 m_vecPlayerDraftPickOrder"
        // static metadata: MNetworkVarNames "int m_nPlayerDraftPick"
        // static metadata: MNetworkVarNames "int m_nPlayerDraftActiveTeam"
        // static metadata: MNetworkVarNames "float m_flPlayerDraftTimeBank"
        // static metadata: MNetworkVarNames "int m_nAllDraftPhase"
        // static metadata: MNetworkVarNames "bool m_bAllDraftRadiantFirst"
        // static metadata: MNetworkVarNames "bool m_bAllowOverrideVPK"
        // static metadata: MNetworkVarNames "int m_nARDMHeroesRemaining"
        // static metadata: MNetworkVarNames "bool m_bExperimentalGameplay"
        // static metadata: MNetworkVarNames "uint32 m_lobbyType"
        // static metadata: MNetworkVarNames "LeagueID_t m_lobbyLeagueID"
        // static metadata: MNetworkVarNames "char m_lobbyGameName"
        // static metadata: MNetworkVarNames "CHeroStatueLiked m_vecHeroStatueLiked"
        // static metadata: MNetworkVarNames "int m_CustomGameTeamMaxPlayers"
        // static metadata: MNetworkVarNames "int m_iMutations"
        // static metadata: MNetworkVarNames "CHandle<CIngameEvent_Base> m_vecIngameEvents"
        // static metadata: MNetworkVarNames "int8 m_nPrimaryIngameEventIndex"
        // static metadata: MNetworkVarNames "bool m_bOfrendaEnabled"
        // static metadata: MNetworkVarNames "NeutralSpawnBoxes_t m_NeutralSpawnBoxes"
        // static metadata: MNetworkVarNames "RegionTriggerBoxes_t m_RegionTriggerBoxes"
        #pragma pack(push, 1)
        class C_DOTAGamerules : public source2sdk::client::C_MultiplayRules
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nRuneCycle; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMiscHeroPickCounter; // 0x_            
            // metadata: MNetworkEnable
            // m_hEndGameCinematicEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndGameCinematicEntity;
            char m_hEndGameCinematicEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hOverlayHealthBarUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hOverlayHealthBarUnit;
            char m_hOverlayHealthBarUnit[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nOverlayHealthBarType; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCinematicModeChanged"
            bool m_bIsInCinematicMode; // 0x_            
            bool m_bIsInClientSideCinematicMode; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFreeCourierMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nStartingGold; // 0x_            
            std::int32_t m_nGoldPerTick; // 0x_            
            float m_flGoldTickTime; // 0x_            
            bool m_bItemWhiteListChanged; // 0x_            
            bool m_bEnableSuggestAbilities; // 0x_            
            bool m_bEnableSuggestItems; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_unFanfareGoodGuys; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unFanfareBadGuys; // 0x_            
            std::int32_t m_iMapType; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_nGameState"
            std::int32_t m_nServerGameState; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_nHeroPickState"
            source2sdk::client::DOTA_HeroPickState m_nServerHeroPickState; // 0x_            
            std::int32_t m_nGameState; // 0x_            
            source2sdk::client::DOTA_HeroPickState m_nHeroPickState; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAlternateHeroGridsEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateTransitionTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flOverride_dota_hero_selection_time; // 0x_            
            // metadata: MNetworkEnable
            float m_flOverride_dota_pregame_time; // 0x_            
            // metadata: MNetworkEnable
            float m_flOverride_dota_postgame_time; // 0x_            
            // metadata: MNetworkEnable
            float m_flOverride_dota_strategy_time; // 0x_            
            // metadata: MNetworkEnable
            float m_flOverride_dota_team_showcase_duration; // 0x_            
            // metadata: MNetworkEnable
            float m_flOverride_dota_rune_spawn_time; // 0x_            
            // metadata: MNetworkEnable
            float m_flShowcaseTime[15]; // 0x_            
            // metadata: MNetworkEnable
            float m_flNeutralInitialSpawnOffset; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGameMode; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGameModeEntityChanged"
            // m_hGameModeEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGameModeEntity;
            char m_hGameModeEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hCustomHeroPickRulesEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCustomHeroPickRulesEntity;
            char m_hCustomHeroPickRulesEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroPickStateTransitionTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_iPlayerIDsInControl; // 0x_            
            // metadata: MNetworkEnable
            bool m_bSameHeroSelectionEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseCustomHeroXPValue; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseBaseGoldBountyOnHeroes; // 0x_            
            // metadata: MNetworkEnable
            bool m_bUseUniversalShopMode; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHideKillMessageHeaders; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flHeroMinimapIconScale; // 0x_            
            // metadata: MNetworkEnable
            float m_flCreepMinimapIconScale; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCreepSpawningEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flRuneMinimapIconScale; // 0x_            
            // metadata: MNetworkEnable
            char m_CustomVictoryMessage[256]; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomGameEndDelay; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomGameSetupAutoLaunchDelay; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomGameSetupTimeout; // 0x_            
            // metadata: MNetworkEnable
            float m_flCustomVictoryMessageDuration; // 0x_            
            // metadata: MNetworkEnable
            float m_flHeroSelectPenaltyTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameSetupAutoLaunchEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameTeamSelectionLocked; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameEnablePickRules; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowHeroPickMusic; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowMusicAtGameStart; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowBattleMusic; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameDisableIK; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCMModePickBanOrder; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCDModePickBanOrder; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nGGTeam; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGGCalled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bWhiteListEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnWhitelistChanged"
            std::uint64_t m_bItemWhiteList[4]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nLastHitUIMode; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHUDTimerTutorialMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_HeroPickMiscTimer; // 0x_            
            source2sdk::client::CountdownTimer m_ExtraTimeTimer; // 0x_            
            // metadata: MNetworkEnable
            float m_fExtraTimeRemaining[2]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHeroRespawnEnabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsRandomingEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iCaptainPlayerIDs[2]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_BannedHeroes[24]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_SelectedHeroes[24]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iActiveTeam; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iStartingTeam; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iPenaltyLevelRadiant; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iPenaltyLevelDire; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsLoadingScenario; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecNewBannedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecNewBannedHeroes;
            char m_vecNewBannedHeroes[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecWhitelistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecWhitelistedHeroes;
            char m_vecWhitelistedHeroes[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecBlacklistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecBlacklistedHeroes;
            char m_vecBlacklistedHeroes[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHideBlacklistedHeroes; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nSeriesType; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nRadiantSeriesWins; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nDireSeriesWins; // 0x_            
            // metadata: MNetworkEnable
            // m_vecAvailableHerosPerPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroesPerPlayer> m_vecAvailableHerosPerPlayerID;
            char m_vecAvailableHerosPerPlayerID[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecLockedHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroesPerPlayer> m_vecLockedHerosByPlayerID;
            char m_vecLockedHerosByPlayerID[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecDisabledRandomHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroesPerPlayer> m_vecDisabledRandomHerosByPlayerID;
            char m_vecDisabledRandomHerosByPlayerID[0x_]; // 0x_            
            source2sdk::client::HeroID_t m_CustomGameForceSelectHero[24]; // 0x_            
            float m_flGoldTime; // 0x_            
            float m_flXPTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flCreepSpawntime; // 0x_            
            float m_flAnnounceStartTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoodTomeCount; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBadTomeCount; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPreGameStartTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameEndTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flGameLoadTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomGameScore[2]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nCustomGameDifficulty; // 0x_            
            bool m_bEnemyModifiersEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iWaves; // 0x_            
            std::int32_t m_iCreepUpgradeState; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fGoodGlyphCooldown; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fBadGlyphCooldown; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGlyphCooldowns[15]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fGoodRadarCooldown; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fBadRadarCooldown; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRadarCooldowns[15]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iGoodRadarCharges; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBadRadarCharges; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRadarCharges[15]; // 0x_            
            // metadata: MNetworkEnable
            float m_flOutpostTimes[24]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsNightstalkerNight; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsTemporaryNight; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsTemporaryDay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nRiverType; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nTeamFeaturedPlayerID[15]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::item_definition_index_t m_nTeamVersusScreen[15]; // 0x_            
            float m_flGoldRedistributeTime; // 0x_            
            std::int32_t m_nGoldToRedistribute[2]; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextPreGameThink; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextAllDraftGoldThink; // 0x_            
            double m_flTimeEnteredState; // 0x_            
            std::uint32_t m_unRiverAccountID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::itemid_t m_ulRiverItemID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecItemStockInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_ItemStockInfo> m_vecItemStockInfo;
            char m_vecItemStockInfo[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nGameWinner; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID64; // 0x_            
            // metadata: MNetworkEnable
            bool m_bMatchSignoutComplete; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hSideShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSideShop1;
            char m_hSideShop1[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hSideShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSideShop2;
            char m_hSideShop2[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hSecretShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecretShop1;
            char m_hSecretShop1[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hSecretShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecretShop2;
            char m_hSecretShop2[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hTeamFountains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeamFountains[15];
            char m_hTeamFountains[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hTeamForts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeamForts[15];
            char m_hTeamForts[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hTeamShops has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeamShops[15];
            char m_hTeamShops[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hWatchers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hWatchers;
            char m_hWatchers[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hWisdomShrines has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWisdomShrines[15];
            char m_hWisdomShrines[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hLotusPools has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLotusPools[15];
            char m_hLotusPools[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hAnnouncerGood has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerGood;
            char m_hAnnouncerGood[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hAnnouncerBad has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerBad;
            char m_hAnnouncerBad[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hAnnouncerSpectator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerSpectator;
            char m_hAnnouncerSpectator[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hAnnouncerGood_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerGood_KillingSpree;
            char m_hAnnouncerGood_KillingSpree[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hAnnouncerBad_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerBad_KillingSpree;
            char m_hAnnouncerBad_KillingSpree[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hAnnouncerSpectator_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerSpectator_KillingSpree;
            char m_hAnnouncerSpectator_KillingSpree[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_arrTier1TowerDestroyed[15]; // 0x_            
            // metadata: MNetworkEnable
            bool m_arrTier2TowerDestroyed[15]; // 0x_            
            // metadata: MNetworkEnable
            bool m_arrTier3TowerDestroyed[15]; // 0x_            
            // metadata: MNetworkEnable
            bool m_arrMeleeBarracksDestroyed[15]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTier1TowerDestroyed; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTier2TowerDestroyed; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTier3TowerDestroyed; // 0x_            
            // metadata: MNetworkEnable
            bool m_bMeleeBarracksDestroyed; // 0x_            
            float m_fTimeOfDay; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iNetTimeOfDay; // 0x_            
            // metadata: MNetworkEnable
            float m_flDaytimeStart; // 0x_            
            // metadata: MNetworkEnable
            float m_flNighttimeStart; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nLoadedPlayers; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nExpectedPlayers; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iMinimapDebugGridState; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iFoWFrameNumber; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vWeatherWindDirection; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::CTormentorSpawnPhase m_tormentorSpawnPhase; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_vecRequiredPlaytestHeroesStorage[24]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_vecRecommendedPlaytestHeroesStorage[24]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAllRequiredPlaytestHeroesPicked; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nLastPlaytestPickPhase; // 0x_            
            std::int32_t m_nCustomGameFowTeamCount; // 0x_            
            bool m_bUseAlternateABRules; // 0x_            
            bool m_bLobbyIsAssociatedWithGame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_BotDebugTimer; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "48"
            std::uint8_t m_BotDebugPushLane[18]; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugDefendLane[18]; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugFarmLane[6]; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugRoam[8]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hBotDebugRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBotDebugRoamTarget[2];
            char m_hBotDebugRoamTarget[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugRoshan[2]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ERoshanSpawnPhase m_nRoshanRespawnPhase; // 0x_            
            source2sdk::entity2::GameTime_t m_flRoshanRespawnPhaseEndTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTA_AbilityDraftAbilityState[MAX_ABILITY_DRAFT_ABILITIES]"
            // m_AbilityDraftAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_AbilityDraftAbilityState> m_AbilityDraftAbilities;
            char m_AbilityDraftAbilities[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTA_AbilityDraftHeroState[DOTA_ABILITY_DRAFT_HEROES_PER_GAME]"
            // m_AbilityDraftHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_AbilityDraftHeroState> m_AbilityDraftHeroes;
            char m_AbilityDraftHeroes[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAbilityDraftCurrentPlayerHasPicked; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftPlayerTracker; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftRoundNumber; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftAdvanceSteps; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftPhase; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsPlayerDraft; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_PlayerDraftState m_ePlayerDraftState; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecPlayerDraftPickOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_vecPlayerDraftPickOrder;
            char m_vecPlayerDraftPickOrder[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerDraftPick; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerDraftActiveTeam; // 0x_            
            // metadata: MNetworkEnable
            float m_flPlayerDraftTimeBank[2]; // 0x_            
            // m_vecARDMHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_vecARDMHeroes[2];
            char m_vecARDMHeroes[0x_]; // 0x_            
            std::int32_t m_nARDMHeroesPrecached; // 0x_            
            float m_fLastARDMPrecache; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nAllDraftPhase; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAllDraftRadiantFirst; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAllowOverrideVPK; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nARDMHeroesRemaining[2]; // 0x_            
            bool m_bUpdateHeroStatues; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bExperimentalGameplay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_lobbyType; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::LeagueID_t m_lobbyLeagueID; // 0x_            
            // metadata: MNetworkEnable
            char m_lobbyGameName[256]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeroStatueLiked"
            // m_vecHeroStatueLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroStatueLiked> m_vecHeroStatueLiked;
            char m_vecHeroStatueLiked[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_CustomGameTeamMaxPlayers[15]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMutations[5]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecIngameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_IngameEvent_Base>> m_vecIngameEvents;
            char m_vecIngameEvents[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryIngameEventIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObsoleteIngameEventChanged"
            // metadata: MNetworkAlias "m_hIngameEvent"
            // m_hObsoleteIngameEvent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_IngameEvent_Base> m_hObsoleteIngameEvent;
            char m_hObsoleteIngameEvent[0x_]; // 0x_            
            std::uint32_t m_nOfrendaPledges; // 0x_            
            std::uint32_t m_nRadiantOfrendas; // 0x_            
            std::uint32_t m_nDireOfrendas; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOfrendaEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_NeutralSpawnBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::NeutralSpawnBoxes_t> m_NeutralSpawnBoxes;
            char m_NeutralSpawnBoxes[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_RegionTriggerBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::RegionTriggerBoxes_t> m_RegionTriggerBoxes;
            char m_RegionTriggerBoxes[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            double m_flLastPerfSampleTime; // 0x_            
            double m_flLastPerfSampleSendTime; // 0x_            
            bool m_bDidSeeStrategyTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            double m_flLastUnfocusedSleepTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAGamerules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAGamerules) == 0x_);
    };
};
