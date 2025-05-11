#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_ReconnectInfo.hpp"
#include "source2sdk/client/DOTA_HeroPickState.hpp"
#include "source2sdk/client/DOTA_PlayerDraftState.hpp"
#include "source2sdk/client/ERoshanSpawnPhase.hpp"
#include "source2sdk/client/HeroDeathRecord_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroPickRecord_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/client/NeutralSpawnBoxes_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/RegionTriggerBoxes_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/client/sMuertaPartingShotSoulDef.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_AbilityDraftAbilityState.hpp"
#include "source2sdk/server/CDOTA_AbilityDraftHeroState.hpp"
#include "source2sdk/server/CDOTA_ItemStockInfo.hpp"
#include "source2sdk/server/CHeroStatueLiked.hpp"
#include "source2sdk/server/CHeroesPerPlayer.hpp"
#include "source2sdk/server/CMultiplayRules.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/DOTA_AssassinMinigameNetworkState.hpp"
#include "source2sdk/server/EngineCountdownTimer.hpp"
#include "source2sdk/server/GameChatLogEntry_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Building;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Pet;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Tower;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CIngameEvent_Base;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x58f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nRuneCycle"
        // static metadata: MNetworkVarNames "int m_iMiscHeroPickCounter"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEndGameCinematicEntity"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hOverlayHealthBarUnit"
        // static metadata: MNetworkVarNames "int m_nOverlayHealthBarType"
        // static metadata: MNetworkVarNames "bool m_bIsInCinematicMode"
        // static metadata: MNetworkVarNames "bool m_bFreeCourierMode"
        // static metadata: MNetworkVarNames "uint32 m_unFanfareGoodGuys"
        // static metadata: MNetworkVarNames "uint32 m_unFanfareBadGuys"
        // static metadata: MNetworkVarNames "int m_nGameState"
        // static metadata: MNetworkVarNames "DOTA_HeroPickState m_nHeroPickState"
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
        class CDOTAGameRules : public source2sdk::server::CMultiplayRules
        {
        public:
            uint8_t _pad00c0[0x50]; // 0xc0
            // metadata: MNetworkEnable
            std::int32_t m_nRuneCycle; // 0x110            
            std::int32_t m_nNextPowerRuneSpawnIndex; // 0x114            
            double m_flPauseTime; // 0x118            
            source2sdk::client::PlayerID_t m_pausingPlayerId; // 0x120            
            source2sdk::client::PlayerID_t m_unpausingPlayerId; // 0x124            
            float m_fPauseRawTime; // 0x128            
            float m_fPauseCurTime; // 0x12c            
            float m_fUnpauseRawTime; // 0x130            
            float m_fUnpauseCurTime; // 0x134            
            std::int32_t m_nPausesRemaining[64]; // 0x138            
            float m_nLastPauseTime[64]; // 0x238            
            uint8_t _pad0338[0x8]; // 0x338
            // metadata: MNetworkEnable
            std::int32_t m_iMiscHeroPickCounter; // 0x340            
            // metadata: MNetworkEnable
            // m_hEndGameCinematicEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndGameCinematicEntity;
            char m_hEndGameCinematicEntity[0x4]; // 0x344            
            source2sdk::server::CountdownTimer m_EndGameCinematicTimer; // 0x348            
            // metadata: MNetworkEnable
            // m_hOverlayHealthBarUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hOverlayHealthBarUnit;
            char m_hOverlayHealthBarUnit[0x4]; // 0x360            
            // metadata: MNetworkEnable
            std::int32_t m_nOverlayHealthBarType; // 0x364            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCinematicModeChanged"
            bool m_bIsInCinematicMode; // 0x368            
            bool m_bIsInClientSideCinematicMode; // 0x369            
            // metadata: MNetworkEnable
            bool m_bFreeCourierMode; // 0x36a            
            uint8_t _pad036b[0x1]; // 0x36b
            std::int32_t m_nStartingGold; // 0x36c            
            std::int32_t m_nGoldPerTick; // 0x370            
            float m_flGoldTickTime; // 0x374            
            bool m_bEnableSuggestAbilities; // 0x378            
            bool m_bEnableSuggestItems; // 0x379            
            uint8_t _pad037a[0x1e]; // 0x37a
            // metadata: MNetworkEnable
            std::uint32_t m_unFanfareGoodGuys; // 0x398            
            // metadata: MNetworkEnable
            std::uint32_t m_unFanfareBadGuys; // 0x39c            
            source2sdk::entity2::GameTime_t m_flFanfareTime; // 0x3a0            
            bool m_bSpeechUseSpawnInsteadOfRespawnConcept; // 0x3a4            
            bool m_bSpeechSendTeamSpeaksToSpectators; // 0x3a5            
            bool m_bIgnoreLobbyTeamsInCustomGames; // 0x3a6            
            uint8_t _pad03a7[0x1]; // 0x3a7
            std::int32_t m_nCustomGameBansPerTeam; // 0x3a8            
            std::int32_t m_iFOWDefeatedTempViewer; // 0x3ac            
            uint8_t _pad03b0[0x48]; // 0x3b0
            // metadata: MNetworkEnable
            std::int32_t m_nGameState; // 0x3f8            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_HeroPickState m_nHeroPickState; // 0x3fc            
            // metadata: MNetworkEnable
            bool m_bAlternateHeroGridsEnabled; // 0x400            
            uint8_t _pad0401[0x3]; // 0x401
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateTransitionTime; // 0x404            
            // metadata: MNetworkEnable
            float m_flOverride_dota_hero_selection_time; // 0x408            
            // metadata: MNetworkEnable
            float m_flOverride_dota_pregame_time; // 0x40c            
            // metadata: MNetworkEnable
            float m_flOverride_dota_postgame_time; // 0x410            
            // metadata: MNetworkEnable
            float m_flOverride_dota_strategy_time; // 0x414            
            // metadata: MNetworkEnable
            float m_flOverride_dota_team_showcase_duration; // 0x418            
            // metadata: MNetworkEnable
            float m_flOverride_dota_rune_spawn_time; // 0x41c            
            // metadata: MNetworkEnable
            float m_flShowcaseTime[15]; // 0x420            
            // metadata: MNetworkEnable
            float m_flNeutralInitialSpawnOffset; // 0x45c            
            float m_flOverride_dota_tree_regrow_time; // 0x460            
            // metadata: MNetworkEnable
            std::int32_t m_iGameMode; // 0x464            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGameModeEntityChanged"
            // m_hGameModeEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGameModeEntity;
            char m_hGameModeEntity[0x4]; // 0x468            
            // metadata: MNetworkEnable
            // m_hCustomHeroPickRulesEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCustomHeroPickRulesEntity;
            char m_hCustomHeroPickRulesEntity[0x4]; // 0x46c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroPickStateTransitionTime; // 0x470            
            uint8_t _pad0474[0x4]; // 0x474
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_iPlayerIDsInControl; // 0x478            
            // metadata: MNetworkEnable
            bool m_bSameHeroSelectionEnabled; // 0x480            
            // metadata: MNetworkEnable
            bool m_bUseCustomHeroXPValue; // 0x481            
            // metadata: MNetworkEnable
            bool m_bUseBaseGoldBountyOnHeroes; // 0x482            
            // metadata: MNetworkEnable
            bool m_bUseUniversalShopMode; // 0x483            
            // metadata: MNetworkEnable
            bool m_bHideKillMessageHeaders; // 0x484            
            uint8_t _pad0485[0x3]; // 0x485
            // metadata: MNetworkEnable
            float m_flHeroMinimapIconScale; // 0x488            
            // metadata: MNetworkEnable
            float m_flCreepMinimapIconScale; // 0x48c            
            // metadata: MNetworkEnable
            bool m_bCreepSpawningEnabled; // 0x490            
            uint8_t _pad0491[0x3]; // 0x491
            // metadata: MNetworkEnable
            float m_flRuneMinimapIconScale; // 0x494            
            // metadata: MNetworkEnable
            char m_CustomVictoryMessage[256]; // 0x498            
            // metadata: MNetworkEnable
            float m_flCustomGameEndDelay; // 0x598            
            // metadata: MNetworkEnable
            float m_flCustomGameSetupAutoLaunchDelay; // 0x59c            
            // metadata: MNetworkEnable
            float m_flCustomGameSetupTimeout; // 0x5a0            
            // metadata: MNetworkEnable
            float m_flCustomVictoryMessageDuration; // 0x5a4            
            // metadata: MNetworkEnable
            float m_flHeroSelectPenaltyTime; // 0x5a8            
            // metadata: MNetworkEnable
            bool m_bCustomGameSetupAutoLaunchEnabled; // 0x5ac            
            // metadata: MNetworkEnable
            bool m_bCustomGameTeamSelectionLocked; // 0x5ad            
            // metadata: MNetworkEnable
            bool m_bCustomGameEnablePickRules; // 0x5ae            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowHeroPickMusic; // 0x5af            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowMusicAtGameStart; // 0x5b0            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowBattleMusic; // 0x5b1            
            // metadata: MNetworkEnable
            bool m_bCustomGameDisableIK; // 0x5b2            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // 0x5b3            
            // metadata: MNetworkEnable
            std::int32_t m_iCMModePickBanOrder; // 0x5b4            
            // metadata: MNetworkEnable
            std::int32_t m_iCDModePickBanOrder; // 0x5b8            
            // metadata: MNetworkEnable
            std::int32_t m_nGGTeam; // 0x5bc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x5c0            
            // metadata: MNetworkEnable
            bool m_bGGCalled; // 0x5c4            
            // metadata: MNetworkEnable
            bool m_bWhiteListEnabled; // 0x5c5            
            uint8_t _pad05c6[0x2]; // 0x5c6
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnWhitelistChanged"
            std::uint64_t m_bItemWhiteList[4]; // 0x5c8            
            // metadata: MNetworkEnable
            std::int32_t m_nLastHitUIMode; // 0x5e8            
            // metadata: MNetworkEnable
            bool m_bHUDTimerTutorialMode; // 0x5ec            
            uint8_t _pad05ed[0x3]; // 0x5ed
            source2sdk::server::CountdownTimer m_HeroPickMiscTimer; // 0x5f0            
            source2sdk::server::CountdownTimer m_ExtraTimeTimer; // 0x608            
            // metadata: MNetworkEnable
            float m_fExtraTimeRemaining[2]; // 0x620            
            // metadata: MNetworkEnable
            bool m_bHeroRespawnEnabled; // 0x628            
            // metadata: MNetworkEnable
            bool m_bIsRandomingEnabled; // 0x629            
            uint8_t _pad062a[0x6]; // 0x62a
            // m_HeroPickPhaseBitfield has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_HeroPickPhaseBitfield;
            char m_HeroPickPhaseBitfield[0x18]; // 0x630            
            bool m_bHasSwapped[64]; // 0x648            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iCaptainPlayerIDs[2]; // 0x688            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_BannedHeroes[24]; // 0x690            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_SelectedHeroes[24]; // 0x6f0            
            // metadata: MNetworkEnable
            std::int32_t m_iActiveTeam; // 0x750            
            // metadata: MNetworkEnable
            std::int32_t m_iStartingTeam; // 0x754            
            // metadata: MNetworkEnable
            std::int32_t m_iPenaltyLevelRadiant; // 0x758            
            // metadata: MNetworkEnable
            std::int32_t m_iPenaltyLevelDire; // 0x75c            
            // metadata: MNetworkEnable
            bool m_bIsLoadingScenario; // 0x760            
            uint8_t _pad0761[0x7]; // 0x761
            // m_vecBanNominatedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroID_t> m_vecBanNominatedHeroes;
            char m_vecBanNominatedHeroes[0x18]; // 0x768            
            // metadata: MNetworkEnable
            // m_vecNewBannedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecNewBannedHeroes;
            char m_vecNewBannedHeroes[0x18]; // 0x780            
            // metadata: MNetworkEnable
            // m_vecWhitelistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecWhitelistedHeroes;
            char m_vecWhitelistedHeroes[0x18]; // 0x798            
            // metadata: MNetworkEnable
            // m_vecBlacklistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecBlacklistedHeroes;
            char m_vecBlacklistedHeroes[0x18]; // 0x7b0            
            // metadata: MNetworkEnable
            bool m_bHideBlacklistedHeroes; // 0x7c8            
            uint8_t _pad07c9[0x3]; // 0x7c9
            // metadata: MNetworkEnable
            std::int32_t m_nSeriesType; // 0x7cc            
            // metadata: MNetworkEnable
            std::int32_t m_nRadiantSeriesWins; // 0x7d0            
            // metadata: MNetworkEnable
            std::int32_t m_nDireSeriesWins; // 0x7d4            
            // metadata: MNetworkEnable
            // m_vecAvailableHerosPerPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecAvailableHerosPerPlayerID;
            char m_vecAvailableHerosPerPlayerID[0x88]; // 0x7d8            
            // metadata: MNetworkEnable
            // m_vecLockedHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecLockedHerosByPlayerID;
            char m_vecLockedHerosByPlayerID[0x88]; // 0x860            
            // metadata: MNetworkEnable
            // m_vecDisabledRandomHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecDisabledRandomHerosByPlayerID;
            char m_vecDisabledRandomHerosByPlayerID[0x88]; // 0x8e8            
            source2sdk::client::HeroID_t m_CustomGameForceSelectHero[24]; // 0x970            
            float m_flGoldTime; // 0x9d0            
            float m_flXPTime; // 0x9d4            
            source2sdk::entity2::GameTime_t m_flCreepSpawntime; // 0x9d8            
            float m_flAnnounceStartTime; // 0x9dc            
            // metadata: MNetworkEnable
            std::int32_t m_iGoodTomeCount; // 0x9e0            
            // metadata: MNetworkEnable
            std::int32_t m_iBadTomeCount; // 0x9e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPreGameStartTime; // 0x9e8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0x9ec            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameEndTime; // 0x9f0            
            // metadata: MNetworkEnable
            float m_flGameLoadTime; // 0x9f4            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomGameScore[2]; // 0x9f8            
            // metadata: MNetworkEnable
            std::int32_t m_nCustomGameDifficulty; // 0xa00            
            bool m_bEnemyModifiersEnabled; // 0xa04            
            uint8_t _pad0a05[0x3]; // 0xa05
            std::int32_t m_iWaves; // 0xa08            
            std::int32_t m_iCreepUpgradeState; // 0xa0c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fGoodGlyphCooldown; // 0xa10            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fBadGlyphCooldown; // 0xa14            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGlyphCooldowns[15]; // 0xa18            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fGoodRadarCooldown; // 0xa54            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fBadRadarCooldown; // 0xa58            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRadarCooldowns[15]; // 0xa5c            
            // metadata: MNetworkEnable
            std::int32_t m_iGoodRadarCharges; // 0xa98            
            // metadata: MNetworkEnable
            std::int32_t m_iBadRadarCharges; // 0xa9c            
            // metadata: MNetworkEnable
            std::int32_t m_iRadarCharges[15]; // 0xaa0            
            // metadata: MNetworkEnable
            float m_flOutpostTimes[24]; // 0xadc            
            // metadata: MNetworkEnable
            bool m_bIsNightstalkerNight; // 0xb3c            
            // metadata: MNetworkEnable
            bool m_bIsTemporaryNight; // 0xb3d            
            // metadata: MNetworkEnable
            bool m_bIsTemporaryDay; // 0xb3e            
            uint8_t _pad0b3f[0x1]; // 0xb3f
            // metadata: MNetworkEnable
            std::int32_t m_nRiverType; // 0xb40            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nTeamFeaturedPlayerID[15]; // 0xb44            
            // metadata: MNetworkEnable
            source2sdk::client::item_definition_index_t m_nTeamVersusScreen[15]; // 0xb80            
            float m_flGoldRedistributeTime; // 0xbbc            
            std::int32_t m_nGoldToRedistribute[2]; // 0xbc0            
            source2sdk::entity2::GameTime_t m_flNextPreGameThink; // 0xbc8            
            source2sdk::entity2::GameTime_t m_flNextAllDraftGoldThink; // 0xbcc            
            double m_flTimeEnteredState; // 0xbd0            
            std::uint32_t m_unRiverAccountID; // 0xbd8            
            uint8_t _pad0bdc[0x4]; // 0xbdc
            source2sdk::client::itemid_t m_ulRiverItemID; // 0xbe0            
            uint8_t _pad0be8[0x40]; // 0xbe8
            // metadata: MNetworkEnable
            // m_vecItemStockInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_ItemStockInfo> m_vecItemStockInfo;
            char m_vecItemStockInfo[0x88]; // 0xc28            
            // metadata: MNetworkEnable
            source2sdk::server::DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // 0xcb0            
            // metadata: MNetworkEnable
            std::int32_t m_nGameWinner; // 0xcc0            
            uint8_t _pad0cc4[0x4]; // 0xcc4
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID64; // 0xcc8            
            // metadata: MNetworkEnable
            bool m_bMatchSignoutComplete; // 0xcd0            
            uint8_t _pad0cd1[0x3]; // 0xcd1
            // metadata: MNetworkEnable
            // m_hSideShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSideShop1;
            char m_hSideShop1[0x4]; // 0xcd4            
            // metadata: MNetworkEnable
            // m_hSideShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSideShop2;
            char m_hSideShop2[0x4]; // 0xcd8            
            // metadata: MNetworkEnable
            // m_hSecretShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecretShop1;
            char m_hSecretShop1[0x4]; // 0xcdc            
            // metadata: MNetworkEnable
            // m_hSecretShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecretShop2;
            char m_hSecretShop2[0x4]; // 0xce0            
            // metadata: MNetworkEnable
            // m_hTeamFountains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamFountains[15];
            char m_hTeamFountains[0x3c]; // 0xce4            
            // metadata: MNetworkEnable
            // m_hTeamForts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamForts[15];
            char m_hTeamForts[0x3c]; // 0xd20            
            // metadata: MNetworkEnable
            // m_hTeamShops has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamShops[15];
            char m_hTeamShops[0x3c]; // 0xd5c            
            // metadata: MNetworkEnable
            // m_hAnnouncerGood has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerGood;
            char m_hAnnouncerGood[0x4]; // 0xd98            
            // metadata: MNetworkEnable
            // m_hAnnouncerBad has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerBad;
            char m_hAnnouncerBad[0x4]; // 0xd9c            
            // metadata: MNetworkEnable
            // m_hAnnouncerSpectator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerSpectator;
            char m_hAnnouncerSpectator[0x4]; // 0xda0            
            // metadata: MNetworkEnable
            // m_hAnnouncerGood_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerGood_KillingSpree;
            char m_hAnnouncerGood_KillingSpree[0x4]; // 0xda4            
            // metadata: MNetworkEnable
            // m_hAnnouncerBad_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerBad_KillingSpree;
            char m_hAnnouncerBad_KillingSpree[0x4]; // 0xda8            
            // metadata: MNetworkEnable
            // m_hAnnouncerSpectator_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerSpectator_KillingSpree;
            char m_hAnnouncerSpectator_KillingSpree[0x4]; // 0xdac            
            // metadata: MNetworkEnable
            bool m_arrTier1TowerDestroyed[15]; // 0xdb0            
            // metadata: MNetworkEnable
            bool m_arrTier2TowerDestroyed[15]; // 0xdbf            
            // metadata: MNetworkEnable
            bool m_arrTier3TowerDestroyed[15]; // 0xdce            
            // metadata: MNetworkEnable
            bool m_arrMeleeBarracksDestroyed[15]; // 0xddd            
            // metadata: MNetworkEnable
            bool m_bTier1TowerDestroyed; // 0xdec            
            // metadata: MNetworkEnable
            bool m_bTier2TowerDestroyed; // 0xded            
            // metadata: MNetworkEnable
            bool m_bTier3TowerDestroyed; // 0xdee            
            // metadata: MNetworkEnable
            bool m_bMeleeBarracksDestroyed; // 0xdef            
            float m_fTimeOfDay; // 0xdf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iNetTimeOfDay; // 0xdf4            
            // metadata: MNetworkEnable
            float m_flDaytimeStart; // 0xdf8            
            // metadata: MNetworkEnable
            float m_flNighttimeStart; // 0xdfc            
            // metadata: MNetworkEnable
            std::int32_t m_nLoadedPlayers; // 0xe00            
            // metadata: MNetworkEnable
            std::int32_t m_nExpectedPlayers; // 0xe04            
            uint8_t _pad0e08[0x8]; // 0xe08
            // metadata: MNetworkEnable
            std::int32_t m_iMinimapDebugGridState; // 0xe10            
            uint8_t _pad0e14[0x7c]; // 0xe14
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iFoWFrameNumber; // 0xe90            
            // metadata: MNetworkEnable
            Vector m_vWeatherWindDirection; // 0xe94            
            KeyValues* m_pKVPostGameTable; // 0xea0            
            KeyValues* m_pKVEventMatchMetadata; // 0xea8            
            KeyValues* m_pKVEventSignout; // 0xeb0            
            uint8_t _pad0eb8[0x58]; // 0xeb8
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_vecRequiredPlaytestHeroesStorage[24]; // 0xf10            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_vecRecommendedPlaytestHeroesStorage[24]; // 0xf70            
            // metadata: MNetworkEnable
            bool m_bAllRequiredPlaytestHeroesPicked; // 0xfd0            
            uint8_t _pad0fd1[0x3]; // 0xfd1
            // metadata: MNetworkEnable
            std::int32_t m_nLastPlaytestPickPhase; // 0xfd4            
            std::int32_t m_nCustomGameFowTeamCount; // 0xfd8            
            bool m_bUseAlternateABRules; // 0xfdc            
            bool m_bLobbyIsAssociatedWithGame; // 0xfdd            
            uint8_t _pad0fde[0x2]; // 0xfde
            source2sdk::server::CountdownTimer m_BotDebugTimer; // 0xfe0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "48"
            std::uint8_t m_BotDebugPushLane[18]; // 0xff8            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugDefendLane[18]; // 0x100a            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugFarmLane[6]; // 0x101c            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugRoam[8]; // 0x1022            
            uint8_t _pad102a[0x2]; // 0x102a
            // metadata: MNetworkEnable
            // m_hBotDebugRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBotDebugRoamTarget[2];
            char m_hBotDebugRoamTarget[0x8]; // 0x102c            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugRoshan[2]; // 0x1034            
            uint8_t _pad1036[0x2]; // 0x1036
            source2sdk::client::ERoshanSpawnPhase m_nRoshanRespawnPhase; // 0x1038            
            source2sdk::entity2::GameTime_t m_flRoshanRespawnPhaseEndTime; // 0x103c            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTA_AbilityDraftAbilityState[MAX_ABILITY_DRAFT_ABILITIES]"
            // m_AbilityDraftAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_AbilityDraftAbilityState> m_AbilityDraftAbilities;
            char m_AbilityDraftAbilities[0x88]; // 0x1040            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTA_AbilityDraftHeroState[DOTA_ABILITY_DRAFT_HEROES_PER_GAME]"
            // m_AbilityDraftHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_AbilityDraftHeroState> m_AbilityDraftHeroes;
            char m_AbilityDraftHeroes[0x88]; // 0x10c8            
            // metadata: MNetworkEnable
            bool m_bAbilityDraftCurrentPlayerHasPicked; // 0x1150            
            uint8_t _pad1151[0x3]; // 0x1151
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftPlayerTracker; // 0x1154            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftRoundNumber; // 0x1158            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftAdvanceSteps; // 0x115c            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftPhase; // 0x1160            
            // metadata: MNetworkEnable
            bool m_bIsPlayerDraft; // 0x1164            
            uint8_t _pad1165[0x3]; // 0x1165
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_PlayerDraftState m_ePlayerDraftState; // 0x1168            
            uint8_t _pad116c[0x4]; // 0x116c
            // metadata: MNetworkEnable
            // m_vecPlayerDraftPickOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_vecPlayerDraftPickOrder;
            char m_vecPlayerDraftPickOrder[0x18]; // 0x1170            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerDraftPick; // 0x1188            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerDraftActiveTeam; // 0x118c            
            // metadata: MNetworkEnable
            float m_flPlayerDraftTimeBank[2]; // 0x1190            
            // m_vecARDMHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_vecARDMHeroes[2];
            char m_vecARDMHeroes[0x30]; // 0x1198            
            std::int32_t m_nARDMHeroesPrecached; // 0x11c8            
            float m_fLastARDMPrecache; // 0x11cc            
            // metadata: MNetworkEnable
            std::int32_t m_nAllDraftPhase; // 0x11d0            
            // metadata: MNetworkEnable
            bool m_bAllDraftRadiantFirst; // 0x11d4            
            // metadata: MNetworkEnable
            bool m_bAllowOverrideVPK; // 0x11d5            
            uint8_t _pad11d6[0x2]; // 0x11d6
            // metadata: MNetworkEnable
            std::int32_t m_nARDMHeroesRemaining[2]; // 0x11d8            
            // m_hGlobalPetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hGlobalPetList;
            char m_hGlobalPetList[0x18]; // 0x11e0            
            uint8_t _pad11f8[0x50]; // 0x11f8
            std::int32_t m_nRadiantRoshanKills; // 0x1248            
            std::int32_t m_nDireRoshanKills; // 0x124c            
            std::int32_t m_nRoshanKillsDay; // 0x1250            
            std::int32_t m_nRoshanKillsNight; // 0x1254            
            std::int32_t m_nTormentorKills; // 0x1258            
            std::int32_t m_nOutpostCaptures; // 0x125c            
            uint8_t _pad1260[0xc]; // 0x1260
            std::int32_t m_nDistanceCalculations; // 0x126c            
            bool m_bLaneVictoryPredicted; // 0x1270            
            uint8_t _pad1271[0x7]; // 0x1271
            // m_mapSuccessfulSmokes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,std::int32_t> m_mapSuccessfulSmokes;
            char m_mapSuccessfulSmokes[0x28]; // 0x1278            
            uint8_t _pad12a0[0x20]; // 0x12a0
            // metadata: MNetworkEnable
            bool m_bExperimentalGameplay; // 0x12c0            
            uint8_t _pad12c1[0x1f]; // 0x12c1
            // m_vecHeroPickRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroPickRecord_t> m_vecHeroPickRecord;
            char m_vecHeroPickRecord[0x18]; // 0x12e0            
            uint8_t _pad12f8[0x28]; // 0x12f8
            // m_vecHeroDeathRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroDeathRecord_t> m_vecHeroDeathRecord;
            char m_vecHeroDeathRecord[0x18]; // 0x1320            
            uint8_t _pad1338[0x18]; // 0x1338
            // m_BadResultPositionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_BadResultPositionTriggers;
            char m_BadResultPositionTriggers[0x18]; // 0x1350            
            // m_RoshanPositionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_RoshanPositionTriggers;
            char m_RoshanPositionTriggers[0x18]; // 0x1368            
            // m_vecAllDraftHeroPickRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroPickRecord_t> m_vecAllDraftHeroPickRecord;
            char m_vecAllDraftHeroPickRecord[0x18]; // 0x1380            
            // m_vecAbilityDraftOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,CUtlVector<source2sdk::client::AbilityID_t>> m_vecAbilityDraftOrder;
            char m_vecAbilityDraftOrder[0x28]; // 0x1398            
            uint8_t _pad13c0[0x18]; // 0x13c0
            std::int32_t m_nAllDraftHeroPickCollisionsThisPhase; // 0x13d8            
            uint8_t _pad13dc[0x4]; // 0x13dc
            // m_hRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hRuneSpawners;
            char m_hRuneSpawners[0x18]; // 0x13e0            
            // m_hBountyRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hBountyRuneSpawners;
            char m_hBountyRuneSpawners[0x18]; // 0x13f8            
            // m_hXPRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hXPRuneSpawners;
            char m_hXPRuneSpawners[0x18]; // 0x1410            
            // m_hNeutralSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hNeutralSpawners[2];
            char m_hNeutralSpawners[0x30]; // 0x1428            
            std::int32_t m_iPreviousRune1; // 0x1458            
            std::int32_t m_iPreviousRune2; // 0x145c            
            // m_vecAvailableRunes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecAvailableRunes;
            char m_vecAvailableRunes[0x18]; // 0x1460            
            float m_fNextPowerupRuneSpawnTime; // 0x1478            
            float m_fNextBountyRuneSpawnTime; // 0x147c            
            float m_fNextBountyRunePrepTime; // 0x1480            
            float m_fNextXPRuneSpawnTime; // 0x1484            
            bool m_aNeutralChoicesLoaded[5]; // 0x1488            
            bool m_bFirstPowerupRune; // 0x148d            
            bool m_bFirstBountyRune; // 0x148e            
            bool m_bFilterMoreGold; // 0x148f            
            bool m_bAllowOutpostXP; // 0x1490            
            uint8_t _pad1491[0x3]; // 0x1491
            // m_hRoshanSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoshanSpawner;
            char m_hRoshanSpawner[0x4]; // 0x1494            
            std::int32_t m_iPreviousSpectators; // 0x1498            
            std::uint32_t m_nMaxSpectators; // 0x149c            
            // m_hDroppedItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hDroppedItems;
            char m_hDroppedItems[0x18]; // 0x14a0            
            // m_hWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWards;
            char m_hWards[0x18]; // 0x14b8            
            // m_hGameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGameEvents;
            char m_hGameEvents[0x4]; // 0x14d0            
            uint8_t _pad14d4[0x1c]; // 0x14d4
            // m_Towers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Towers;
            char m_Towers[0x18]; // 0x14f0            
            // m_TeamTowers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Tower>> m_TeamTowers[10];
            char m_TeamTowers[0xf0]; // 0x1508            
            // m_Outposts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Outposts;
            char m_Outposts[0x18]; // 0x15f8            
            // m_TeamTowerPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_TeamTowerPositions[10];
            char m_TeamTowerPositions[0xf0]; // 0x1610            
            // m_TeamTowerLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_TeamTowerLevels[10];
            char m_TeamTowerLevels[0xf0]; // 0x1700            
            // m_TeamTowerLanes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_TeamTowerLanes[10];
            char m_TeamTowerLanes[0xf0]; // 0x17f0            
            // m_TeamBarracks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Building>> m_TeamBarracks[10];
            char m_TeamBarracks[0xf0]; // 0x18e0            
            // m_TeamShrines has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Building>> m_TeamShrines[10];
            char m_TeamShrines[0xf0]; // 0x19d0            
            source2sdk::server::CountdownTimer m_TempDayTimer; // 0x1ac0            
            source2sdk::server::CountdownTimer m_TempNightTimer; // 0x1ad8            
            source2sdk::server::CountdownTimer m_NightstalkerNightTimer; // 0x1af0            
            source2sdk::server::CountdownTimer m_TempRiverTimer; // 0x1b08            
            bool m_bUseLenientAFK[2]; // 0x1b20            
            bool m_bFirstBlood; // 0x1b22            
            uint8_t _pad1b23[0x1]; // 0x1b23
            std::int32_t m_nFirstBloodTime; // 0x1b24            
            source2sdk::server::CountdownTimer m_CheckIdleTimer; // 0x1b28            
            source2sdk::client::PlayerID_t m_nAnnounceHeroPickRadiantPlayerID; // 0x1b40            
            source2sdk::client::PlayerID_t m_nAnnounceHeroPickDirePlayerID; // 0x1b44            
            CUtlString m_pszLastUsedAbility[64]; // 0x1b48            
            // m_reconnectinfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_ReconnectInfo> m_reconnectinfos;
            char m_reconnectinfos[0x18]; // 0x1d48            
            // m_hEnemyCreepsInBase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemyCreepsInBase[10];
            char m_hEnemyCreepsInBase[0xf0]; // 0x1d60            
            bool m_bTeamHasAbandonedPlayer[10]; // 0x1e50            
            bool m_bLobbyHasLeaverDetected; // 0x1e5a            
            bool m_bGameIsForcedSafeToLeave; // 0x1e5b            
            bool m_bLobbyHasDicardMatchResults; // 0x1e5c            
            uint8_t _pad1e5d[0x3]; // 0x1e5d
            std::int32_t m_iGameEndReason; // 0x1e60            
            bool m_bNotifiedPlayerLeaverStatus[64]; // 0x1e64            
            bool m_bUploadedReplay; // 0x1ea4            
            uint8_t _pad1ea5[0x3]; // 0x1ea5
            float m_flLobbyWaitTime; // 0x1ea8            
            bool m_bGameWasLoaded; // 0x1eac            
            uint8_t _pad1ead[0x3]; // 0x1ead
            std::int32_t m_nLoadPauseFrameCount; // 0x1eb0            
            uint8_t _pad1eb4[0x4]; // 0x1eb4
            double m_flStateFallbackTransitionTime; // 0x1eb8            
            source2sdk::server::EngineCountdownTimer m_timerFinishReplay; // 0x1ec0            
            // m_vecChatLog has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::GameChatLogEntry_t> m_vecChatLog;
            char m_vecChatLog[0x18]; // 0x1ed8            
            uint8_t _pad1ef0[0x2658]; // 0x1ef0
            bool m_bFatalErrorAbortGame; // 0x4548            
            bool m_bFillEmptySlotsWithBots; // 0x4549            
            uint8_t _pad454a[0x2]; // 0x454a
            std::uint32_t m_dotaMapSpawnGroup; // 0x454c            
            uint8_t _pad4550[0x28]; // 0x4550
            // metadata: MNetworkEnable
            std::uint32_t m_lobbyType; // 0x4578            
            // metadata: MNetworkEnable
            source2sdk::client::LeagueID_t m_lobbyLeagueID; // 0x457c            
            // metadata: MNetworkEnable
            char m_lobbyGameName[256]; // 0x4580            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeroStatueLiked"
            // m_vecHeroStatueLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroStatueLiked> m_vecHeroStatueLiked;
            char m_vecHeroStatueLiked[0x88]; // 0x4680            
            // metadata: MNetworkEnable
            std::int32_t m_CustomGameTeamMaxPlayers[15]; // 0x4708            
            uint8_t _pad4744[0x44]; // 0x4744
            // metadata: MNetworkEnable
            std::int32_t m_iMutations[5]; // 0x4788            
            uint8_t _pad479c[0x4]; // 0x479c
            // metadata: MNetworkEnable
            // m_vecIngameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CIngameEvent_Base>> m_vecIngameEvents;
            char m_vecIngameEvents[0x18]; // 0x47a0            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryIngameEventIndex; // 0x47b8            
            uint8_t _pad47b9[0x3]; // 0x47b9
            std::uint32_t m_nOfrendaPledges; // 0x47bc            
            std::uint32_t m_nRadiantOfrendas; // 0x47c0            
            std::uint32_t m_nDireOfrendas; // 0x47c4            
            // metadata: MNetworkEnable
            bool m_bOfrendaEnabled; // 0x47c8            
            uint8_t _pad47c9[0x7]; // 0x47c9
            // m_vecMuertaPartingShotSouls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sMuertaPartingShotSoulDef> m_vecMuertaPartingShotSouls;
            char m_vecMuertaPartingShotSouls[0x18]; // 0x47d0            
            uint8_t _pad47e8[0x18]; // 0x47e8
            // metadata: MNetworkEnable
            // m_NeutralSpawnBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::NeutralSpawnBoxes_t> m_NeutralSpawnBoxes;
            char m_NeutralSpawnBoxes[0x60]; // 0x4800            
            // metadata: MNetworkEnable
            // m_RegionTriggerBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::RegionTriggerBoxes_t> m_RegionTriggerBoxes;
            char m_RegionTriggerBoxes[0x60]; // 0x4860            
            double m_flLastItemSuggestionRequestTime[15]; // 0x48c0            
            uint8_t _pad4938[0xfb8]; // 0x4938
            double m_flLastPerfSampleTime; // 0x58f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAGameRules) == 0x58f8);
    };
};
