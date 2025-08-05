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
        // Size: 0x5900
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
            std::int32_t m_nNextPowerRuneType; // 0x114            
            std::int32_t m_nNextPowerRuneSpawnIndex; // 0x118            
            uint8_t _pad011c[0x4]; // 0x11c
            double m_flPauseTime; // 0x120            
            source2sdk::client::PlayerID_t m_pausingPlayerId; // 0x128            
            source2sdk::client::PlayerID_t m_unpausingPlayerId; // 0x12c            
            float m_fPauseRawTime; // 0x130            
            float m_fPauseCurTime; // 0x134            
            float m_fUnpauseRawTime; // 0x138            
            float m_fUnpauseCurTime; // 0x13c            
            std::int32_t m_nPausesRemaining[64]; // 0x140            
            float m_nLastPauseTime[64]; // 0x240            
            uint8_t _pad0340[0x8]; // 0x340
            // metadata: MNetworkEnable
            std::int32_t m_iMiscHeroPickCounter; // 0x348            
            // metadata: MNetworkEnable
            // m_hEndGameCinematicEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndGameCinematicEntity;
            char m_hEndGameCinematicEntity[0x4]; // 0x34c            
            source2sdk::server::CountdownTimer m_EndGameCinematicTimer; // 0x350            
            // metadata: MNetworkEnable
            // m_hOverlayHealthBarUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hOverlayHealthBarUnit;
            char m_hOverlayHealthBarUnit[0x4]; // 0x368            
            // metadata: MNetworkEnable
            std::int32_t m_nOverlayHealthBarType; // 0x36c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCinematicModeChanged"
            bool m_bIsInCinematicMode; // 0x370            
            bool m_bIsInClientSideCinematicMode; // 0x371            
            // metadata: MNetworkEnable
            bool m_bFreeCourierMode; // 0x372            
            uint8_t _pad0373[0x1]; // 0x373
            std::int32_t m_nStartingGold; // 0x374            
            std::int32_t m_nGoldPerTick; // 0x378            
            float m_flGoldTickTime; // 0x37c            
            bool m_bEnableSuggestAbilities; // 0x380            
            bool m_bEnableSuggestItems; // 0x381            
            uint8_t _pad0382[0x1e]; // 0x382
            // metadata: MNetworkEnable
            std::uint32_t m_unFanfareGoodGuys; // 0x3a0            
            // metadata: MNetworkEnable
            std::uint32_t m_unFanfareBadGuys; // 0x3a4            
            source2sdk::entity2::GameTime_t m_flFanfareTime; // 0x3a8            
            bool m_bSpeechUseSpawnInsteadOfRespawnConcept; // 0x3ac            
            bool m_bSpeechSendTeamSpeaksToSpectators; // 0x3ad            
            bool m_bIgnoreLobbyTeamsInCustomGames; // 0x3ae            
            uint8_t _pad03af[0x1]; // 0x3af
            std::int32_t m_nCustomGameBansPerTeam; // 0x3b0            
            std::int32_t m_iFOWDefeatedTempViewer; // 0x3b4            
            uint8_t _pad03b8[0x48]; // 0x3b8
            // metadata: MNetworkEnable
            std::int32_t m_nGameState; // 0x400            
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_HeroPickState m_nHeroPickState; // 0x404            
            // metadata: MNetworkEnable
            bool m_bAlternateHeroGridsEnabled; // 0x408            
            uint8_t _pad0409[0x3]; // 0x409
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateTransitionTime; // 0x40c            
            // metadata: MNetworkEnable
            float m_flOverride_dota_hero_selection_time; // 0x410            
            // metadata: MNetworkEnable
            float m_flOverride_dota_pregame_time; // 0x414            
            // metadata: MNetworkEnable
            float m_flOverride_dota_postgame_time; // 0x418            
            // metadata: MNetworkEnable
            float m_flOverride_dota_strategy_time; // 0x41c            
            // metadata: MNetworkEnable
            float m_flOverride_dota_team_showcase_duration; // 0x420            
            // metadata: MNetworkEnable
            float m_flOverride_dota_rune_spawn_time; // 0x424            
            // metadata: MNetworkEnable
            float m_flShowcaseTime[15]; // 0x428            
            // metadata: MNetworkEnable
            float m_flNeutralInitialSpawnOffset; // 0x464            
            float m_flOverride_dota_tree_regrow_time; // 0x468            
            // metadata: MNetworkEnable
            std::int32_t m_iGameMode; // 0x46c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGameModeEntityChanged"
            // m_hGameModeEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGameModeEntity;
            char m_hGameModeEntity[0x4]; // 0x470            
            // metadata: MNetworkEnable
            // m_hCustomHeroPickRulesEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCustomHeroPickRulesEntity;
            char m_hCustomHeroPickRulesEntity[0x4]; // 0x474            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroPickStateTransitionTime; // 0x478            
            uint8_t _pad047c[0x4]; // 0x47c
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_iPlayerIDsInControl; // 0x480            
            // metadata: MNetworkEnable
            bool m_bSameHeroSelectionEnabled; // 0x488            
            // metadata: MNetworkEnable
            bool m_bUseCustomHeroXPValue; // 0x489            
            // metadata: MNetworkEnable
            bool m_bUseBaseGoldBountyOnHeroes; // 0x48a            
            // metadata: MNetworkEnable
            bool m_bUseUniversalShopMode; // 0x48b            
            // metadata: MNetworkEnable
            bool m_bHideKillMessageHeaders; // 0x48c            
            uint8_t _pad048d[0x3]; // 0x48d
            // metadata: MNetworkEnable
            float m_flHeroMinimapIconScale; // 0x490            
            // metadata: MNetworkEnable
            float m_flCreepMinimapIconScale; // 0x494            
            // metadata: MNetworkEnable
            bool m_bCreepSpawningEnabled; // 0x498            
            uint8_t _pad0499[0x3]; // 0x499
            // metadata: MNetworkEnable
            float m_flRuneMinimapIconScale; // 0x49c            
            // metadata: MNetworkEnable
            char m_CustomVictoryMessage[256]; // 0x4a0            
            // metadata: MNetworkEnable
            float m_flCustomGameEndDelay; // 0x5a0            
            // metadata: MNetworkEnable
            float m_flCustomGameSetupAutoLaunchDelay; // 0x5a4            
            // metadata: MNetworkEnable
            float m_flCustomGameSetupTimeout; // 0x5a8            
            // metadata: MNetworkEnable
            float m_flCustomVictoryMessageDuration; // 0x5ac            
            // metadata: MNetworkEnable
            float m_flHeroSelectPenaltyTime; // 0x5b0            
            // metadata: MNetworkEnable
            bool m_bCustomGameSetupAutoLaunchEnabled; // 0x5b4            
            // metadata: MNetworkEnable
            bool m_bCustomGameTeamSelectionLocked; // 0x5b5            
            // metadata: MNetworkEnable
            bool m_bCustomGameEnablePickRules; // 0x5b6            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowHeroPickMusic; // 0x5b7            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowMusicAtGameStart; // 0x5b8            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowBattleMusic; // 0x5b9            
            // metadata: MNetworkEnable
            bool m_bCustomGameDisableIK; // 0x5ba            
            // metadata: MNetworkEnable
            bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // 0x5bb            
            // metadata: MNetworkEnable
            std::int32_t m_iCMModePickBanOrder; // 0x5bc            
            // metadata: MNetworkEnable
            std::int32_t m_iCDModePickBanOrder; // 0x5c0            
            // metadata: MNetworkEnable
            std::int32_t m_nGGTeam; // 0x5c4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x5c8            
            // metadata: MNetworkEnable
            bool m_bGGCalled; // 0x5cc            
            // metadata: MNetworkEnable
            bool m_bWhiteListEnabled; // 0x5cd            
            uint8_t _pad05ce[0x2]; // 0x5ce
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnWhitelistChanged"
            std::uint64_t m_bItemWhiteList[4]; // 0x5d0            
            // metadata: MNetworkEnable
            std::int32_t m_nLastHitUIMode; // 0x5f0            
            // metadata: MNetworkEnable
            bool m_bHUDTimerTutorialMode; // 0x5f4            
            uint8_t _pad05f5[0x3]; // 0x5f5
            source2sdk::server::CountdownTimer m_HeroPickMiscTimer; // 0x5f8            
            source2sdk::server::CountdownTimer m_ExtraTimeTimer; // 0x610            
            // metadata: MNetworkEnable
            float m_fExtraTimeRemaining[2]; // 0x628            
            // metadata: MNetworkEnable
            bool m_bHeroRespawnEnabled; // 0x630            
            // metadata: MNetworkEnable
            bool m_bIsRandomingEnabled; // 0x631            
            uint8_t _pad0632[0x6]; // 0x632
            // m_HeroPickPhaseBitfield has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_HeroPickPhaseBitfield;
            char m_HeroPickPhaseBitfield[0x18]; // 0x638            
            bool m_bHasSwapped[64]; // 0x650            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iCaptainPlayerIDs[2]; // 0x690            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_BannedHeroes[24]; // 0x698            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_SelectedHeroes[24]; // 0x6f8            
            // metadata: MNetworkEnable
            std::int32_t m_iActiveTeam; // 0x758            
            // metadata: MNetworkEnable
            std::int32_t m_iStartingTeam; // 0x75c            
            // metadata: MNetworkEnable
            std::int32_t m_iPenaltyLevelRadiant; // 0x760            
            // metadata: MNetworkEnable
            std::int32_t m_iPenaltyLevelDire; // 0x764            
            // metadata: MNetworkEnable
            bool m_bIsLoadingScenario; // 0x768            
            uint8_t _pad0769[0x7]; // 0x769
            // m_vecBanNominatedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroID_t> m_vecBanNominatedHeroes;
            char m_vecBanNominatedHeroes[0x18]; // 0x770            
            // metadata: MNetworkEnable
            // m_vecNewBannedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecNewBannedHeroes;
            char m_vecNewBannedHeroes[0x18]; // 0x788            
            // metadata: MNetworkEnable
            // m_vecWhitelistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecWhitelistedHeroes;
            char m_vecWhitelistedHeroes[0x18]; // 0x7a0            
            // metadata: MNetworkEnable
            // m_vecBlacklistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecBlacklistedHeroes;
            char m_vecBlacklistedHeroes[0x18]; // 0x7b8            
            // metadata: MNetworkEnable
            bool m_bHideBlacklistedHeroes; // 0x7d0            
            uint8_t _pad07d1[0x3]; // 0x7d1
            // metadata: MNetworkEnable
            std::int32_t m_nSeriesType; // 0x7d4            
            // metadata: MNetworkEnable
            std::int32_t m_nRadiantSeriesWins; // 0x7d8            
            // metadata: MNetworkEnable
            std::int32_t m_nDireSeriesWins; // 0x7dc            
            // metadata: MNetworkEnable
            // m_vecAvailableHerosPerPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecAvailableHerosPerPlayerID;
            char m_vecAvailableHerosPerPlayerID[0x88]; // 0x7e0            
            // metadata: MNetworkEnable
            // m_vecLockedHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecLockedHerosByPlayerID;
            char m_vecLockedHerosByPlayerID[0x88]; // 0x868            
            // metadata: MNetworkEnable
            // m_vecDisabledRandomHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecDisabledRandomHerosByPlayerID;
            char m_vecDisabledRandomHerosByPlayerID[0x88]; // 0x8f0            
            source2sdk::client::HeroID_t m_CustomGameForceSelectHero[24]; // 0x978            
            float m_flGoldTime; // 0x9d8            
            float m_flXPTime; // 0x9dc            
            source2sdk::entity2::GameTime_t m_flCreepSpawntime; // 0x9e0            
            float m_flAnnounceStartTime; // 0x9e4            
            // metadata: MNetworkEnable
            std::int32_t m_iGoodTomeCount; // 0x9e8            
            // metadata: MNetworkEnable
            std::int32_t m_iBadTomeCount; // 0x9ec            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPreGameStartTime; // 0x9f0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0x9f4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameEndTime; // 0x9f8            
            // metadata: MNetworkEnable
            float m_flGameLoadTime; // 0x9fc            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomGameScore[2]; // 0xa00            
            // metadata: MNetworkEnable
            std::int32_t m_nCustomGameDifficulty; // 0xa08            
            bool m_bEnemyModifiersEnabled; // 0xa0c            
            uint8_t _pad0a0d[0x3]; // 0xa0d
            std::int32_t m_iWaves; // 0xa10            
            std::int32_t m_iCreepUpgradeState; // 0xa14            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fGoodGlyphCooldown; // 0xa18            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fBadGlyphCooldown; // 0xa1c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGlyphCooldowns[15]; // 0xa20            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fGoodRadarCooldown; // 0xa5c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fBadRadarCooldown; // 0xa60            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRadarCooldowns[15]; // 0xa64            
            // metadata: MNetworkEnable
            std::int32_t m_iGoodRadarCharges; // 0xaa0            
            // metadata: MNetworkEnable
            std::int32_t m_iBadRadarCharges; // 0xaa4            
            // metadata: MNetworkEnable
            std::int32_t m_iRadarCharges[15]; // 0xaa8            
            // metadata: MNetworkEnable
            float m_flOutpostTimes[24]; // 0xae4            
            // metadata: MNetworkEnable
            bool m_bIsNightstalkerNight; // 0xb44            
            // metadata: MNetworkEnable
            bool m_bIsTemporaryNight; // 0xb45            
            // metadata: MNetworkEnable
            bool m_bIsTemporaryDay; // 0xb46            
            uint8_t _pad0b47[0x1]; // 0xb47
            // metadata: MNetworkEnable
            std::int32_t m_nRiverType; // 0xb48            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nTeamFeaturedPlayerID[15]; // 0xb4c            
            // metadata: MNetworkEnable
            source2sdk::client::item_definition_index_t m_nTeamVersusScreen[15]; // 0xb88            
            float m_flGoldRedistributeTime; // 0xbc4            
            std::int32_t m_nGoldToRedistribute[2]; // 0xbc8            
            source2sdk::entity2::GameTime_t m_flNextPreGameThink; // 0xbd0            
            source2sdk::entity2::GameTime_t m_flNextAllDraftGoldThink; // 0xbd4            
            double m_flTimeEnteredState; // 0xbd8            
            std::uint32_t m_unRiverAccountID; // 0xbe0            
            uint8_t _pad0be4[0x4]; // 0xbe4
            source2sdk::client::itemid_t m_ulRiverItemID; // 0xbe8            
            uint8_t _pad0bf0[0x40]; // 0xbf0
            // metadata: MNetworkEnable
            // m_vecItemStockInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_ItemStockInfo> m_vecItemStockInfo;
            char m_vecItemStockInfo[0x88]; // 0xc30            
            // metadata: MNetworkEnable
            source2sdk::server::DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // 0xcb8            
            // metadata: MNetworkEnable
            std::int32_t m_nGameWinner; // 0xcc8            
            uint8_t _pad0ccc[0x4]; // 0xccc
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID64; // 0xcd0            
            // metadata: MNetworkEnable
            bool m_bMatchSignoutComplete; // 0xcd8            
            uint8_t _pad0cd9[0x3]; // 0xcd9
            // metadata: MNetworkEnable
            // m_hSideShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSideShop1;
            char m_hSideShop1[0x4]; // 0xcdc            
            // metadata: MNetworkEnable
            // m_hSideShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSideShop2;
            char m_hSideShop2[0x4]; // 0xce0            
            // metadata: MNetworkEnable
            // m_hSecretShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecretShop1;
            char m_hSecretShop1[0x4]; // 0xce4            
            // metadata: MNetworkEnable
            // m_hSecretShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecretShop2;
            char m_hSecretShop2[0x4]; // 0xce8            
            // metadata: MNetworkEnable
            // m_hTeamFountains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamFountains[15];
            char m_hTeamFountains[0x3c]; // 0xcec            
            // metadata: MNetworkEnable
            // m_hTeamForts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamForts[15];
            char m_hTeamForts[0x3c]; // 0xd28            
            // metadata: MNetworkEnable
            // m_hTeamShops has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamShops[15];
            char m_hTeamShops[0x3c]; // 0xd64            
            // metadata: MNetworkEnable
            // m_hAnnouncerGood has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerGood;
            char m_hAnnouncerGood[0x4]; // 0xda0            
            // metadata: MNetworkEnable
            // m_hAnnouncerBad has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerBad;
            char m_hAnnouncerBad[0x4]; // 0xda4            
            // metadata: MNetworkEnable
            // m_hAnnouncerSpectator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerSpectator;
            char m_hAnnouncerSpectator[0x4]; // 0xda8            
            // metadata: MNetworkEnable
            // m_hAnnouncerGood_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerGood_KillingSpree;
            char m_hAnnouncerGood_KillingSpree[0x4]; // 0xdac            
            // metadata: MNetworkEnable
            // m_hAnnouncerBad_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerBad_KillingSpree;
            char m_hAnnouncerBad_KillingSpree[0x4]; // 0xdb0            
            // metadata: MNetworkEnable
            // m_hAnnouncerSpectator_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerSpectator_KillingSpree;
            char m_hAnnouncerSpectator_KillingSpree[0x4]; // 0xdb4            
            // metadata: MNetworkEnable
            bool m_arrTier1TowerDestroyed[15]; // 0xdb8            
            // metadata: MNetworkEnable
            bool m_arrTier2TowerDestroyed[15]; // 0xdc7            
            // metadata: MNetworkEnable
            bool m_arrTier3TowerDestroyed[15]; // 0xdd6            
            // metadata: MNetworkEnable
            bool m_arrMeleeBarracksDestroyed[15]; // 0xde5            
            // metadata: MNetworkEnable
            bool m_bTier1TowerDestroyed; // 0xdf4            
            // metadata: MNetworkEnable
            bool m_bTier2TowerDestroyed; // 0xdf5            
            // metadata: MNetworkEnable
            bool m_bTier3TowerDestroyed; // 0xdf6            
            // metadata: MNetworkEnable
            bool m_bMeleeBarracksDestroyed; // 0xdf7            
            float m_fTimeOfDay; // 0xdf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iNetTimeOfDay; // 0xdfc            
            // metadata: MNetworkEnable
            float m_flDaytimeStart; // 0xe00            
            // metadata: MNetworkEnable
            float m_flNighttimeStart; // 0xe04            
            // metadata: MNetworkEnable
            std::int32_t m_nLoadedPlayers; // 0xe08            
            // metadata: MNetworkEnable
            std::int32_t m_nExpectedPlayers; // 0xe0c            
            uint8_t _pad0e10[0x8]; // 0xe10
            // metadata: MNetworkEnable
            std::int32_t m_iMinimapDebugGridState; // 0xe18            
            uint8_t _pad0e1c[0x7c]; // 0xe1c
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iFoWFrameNumber; // 0xe98            
            // metadata: MNetworkEnable
            Vector m_vWeatherWindDirection; // 0xe9c            
            KeyValues* m_pKVPostGameTable; // 0xea8            
            KeyValues* m_pKVEventMatchMetadata; // 0xeb0            
            KeyValues* m_pKVEventSignout; // 0xeb8            
            uint8_t _pad0ec0[0x48]; // 0xec0
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_vecRequiredPlaytestHeroesStorage[24]; // 0xf08            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_vecRecommendedPlaytestHeroesStorage[24]; // 0xf68            
            // metadata: MNetworkEnable
            bool m_bAllRequiredPlaytestHeroesPicked; // 0xfc8            
            uint8_t _pad0fc9[0x3]; // 0xfc9
            // metadata: MNetworkEnable
            std::int32_t m_nLastPlaytestPickPhase; // 0xfcc            
            std::int32_t m_nCustomGameFowTeamCount; // 0xfd0            
            bool m_bUseAlternateABRules; // 0xfd4            
            bool m_bLobbyIsAssociatedWithGame; // 0xfd5            
            uint8_t _pad0fd6[0x2]; // 0xfd6
            source2sdk::server::CountdownTimer m_BotDebugTimer; // 0xfd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "48"
            std::uint8_t m_BotDebugPushLane[18]; // 0xff0            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugDefendLane[18]; // 0x1002            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugFarmLane[6]; // 0x1014            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugRoam[8]; // 0x101a            
            uint8_t _pad1022[0x2]; // 0x1022
            // metadata: MNetworkEnable
            // m_hBotDebugRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBotDebugRoamTarget[2];
            char m_hBotDebugRoamTarget[0x8]; // 0x1024            
            // metadata: MNetworkEnable
            std::uint8_t m_BotDebugRoshan[2]; // 0x102c            
            uint8_t _pad102e[0x2]; // 0x102e
            source2sdk::client::ERoshanSpawnPhase m_nRoshanRespawnPhase; // 0x1030            
            source2sdk::entity2::GameTime_t m_flRoshanRespawnPhaseEndTime; // 0x1034            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTA_AbilityDraftAbilityState[MAX_ABILITY_DRAFT_ABILITIES]"
            // m_AbilityDraftAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_AbilityDraftAbilityState> m_AbilityDraftAbilities;
            char m_AbilityDraftAbilities[0x88]; // 0x1038            
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CDOTA_AbilityDraftHeroState[DOTA_ABILITY_DRAFT_HEROES_PER_GAME]"
            // m_AbilityDraftHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_AbilityDraftHeroState> m_AbilityDraftHeroes;
            char m_AbilityDraftHeroes[0x88]; // 0x10c0            
            // metadata: MNetworkEnable
            bool m_bAbilityDraftCurrentPlayerHasPicked; // 0x1148            
            uint8_t _pad1149[0x3]; // 0x1149
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftPlayerTracker; // 0x114c            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftRoundNumber; // 0x1150            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftAdvanceSteps; // 0x1154            
            // metadata: MNetworkEnable
            std::int32_t m_nAbilityDraftPhase; // 0x1158            
            // metadata: MNetworkEnable
            bool m_bIsPlayerDraft; // 0x115c            
            uint8_t _pad115d[0x3]; // 0x115d
            // metadata: MNetworkEnable
            source2sdk::client::DOTA_PlayerDraftState m_ePlayerDraftState; // 0x1160            
            uint8_t _pad1164[0x4]; // 0x1164
            // metadata: MNetworkEnable
            // m_vecPlayerDraftPickOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_vecPlayerDraftPickOrder;
            char m_vecPlayerDraftPickOrder[0x18]; // 0x1168            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerDraftPick; // 0x1180            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerDraftActiveTeam; // 0x1184            
            // metadata: MNetworkEnable
            float m_flPlayerDraftTimeBank[2]; // 0x1188            
            // m_vecARDMHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_vecARDMHeroes[2];
            char m_vecARDMHeroes[0x30]; // 0x1190            
            std::int32_t m_nARDMHeroesPrecached; // 0x11c0            
            float m_fLastARDMPrecache; // 0x11c4            
            // metadata: MNetworkEnable
            std::int32_t m_nAllDraftPhase; // 0x11c8            
            // metadata: MNetworkEnable
            bool m_bAllDraftRadiantFirst; // 0x11cc            
            // metadata: MNetworkEnable
            bool m_bAllowOverrideVPK; // 0x11cd            
            uint8_t _pad11ce[0x2]; // 0x11ce
            // metadata: MNetworkEnable
            std::int32_t m_nARDMHeroesRemaining[2]; // 0x11d0            
            // m_hGlobalPetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hGlobalPetList;
            char m_hGlobalPetList[0x18]; // 0x11d8            
            uint8_t _pad11f0[0x50]; // 0x11f0
            std::int32_t m_nRadiantRoshanKills; // 0x1240            
            std::int32_t m_nDireRoshanKills; // 0x1244            
            std::int32_t m_nRoshanKillsDay; // 0x1248            
            std::int32_t m_nRoshanKillsNight; // 0x124c            
            std::int32_t m_nTormentorKills; // 0x1250            
            std::int32_t m_nOutpostCaptures; // 0x1254            
            uint8_t _pad1258[0xc]; // 0x1258
            std::int32_t m_nDistanceCalculations; // 0x1264            
            bool m_bLaneVictoryPredicted; // 0x1268            
            uint8_t _pad1269[0x7]; // 0x1269
            // m_mapSuccessfulSmokes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,std::int32_t> m_mapSuccessfulSmokes;
            char m_mapSuccessfulSmokes[0x28]; // 0x1270            
            uint8_t _pad1298[0x20]; // 0x1298
            // metadata: MNetworkEnable
            bool m_bExperimentalGameplay; // 0x12b8            
            uint8_t _pad12b9[0x1f]; // 0x12b9
            // m_vecHeroPickRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroPickRecord_t> m_vecHeroPickRecord;
            char m_vecHeroPickRecord[0x18]; // 0x12d8            
            uint8_t _pad12f0[0x28]; // 0x12f0
            // m_vecHeroDeathRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroDeathRecord_t> m_vecHeroDeathRecord;
            char m_vecHeroDeathRecord[0x18]; // 0x1318            
            uint8_t _pad1330[0x18]; // 0x1330
            // m_BadResultPositionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_BadResultPositionTriggers;
            char m_BadResultPositionTriggers[0x18]; // 0x1348            
            // m_RoshanPositionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_RoshanPositionTriggers;
            char m_RoshanPositionTriggers[0x18]; // 0x1360            
            // m_vecAllDraftHeroPickRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroPickRecord_t> m_vecAllDraftHeroPickRecord;
            char m_vecAllDraftHeroPickRecord[0x18]; // 0x1378            
            // m_vecAbilityDraftOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,CUtlVector<source2sdk::client::AbilityID_t>> m_vecAbilityDraftOrder;
            char m_vecAbilityDraftOrder[0x28]; // 0x1390            
            uint8_t _pad13b8[0x18]; // 0x13b8
            std::int32_t m_nAllDraftHeroPickCollisionsThisPhase; // 0x13d0            
            uint8_t _pad13d4[0x4]; // 0x13d4
            // m_hRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hRuneSpawners;
            char m_hRuneSpawners[0x18]; // 0x13d8            
            // m_hBountyRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hBountyRuneSpawners;
            char m_hBountyRuneSpawners[0x18]; // 0x13f0            
            // m_hXPRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hXPRuneSpawners;
            char m_hXPRuneSpawners[0x18]; // 0x1408            
            // m_hNeutralSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hNeutralSpawners[2];
            char m_hNeutralSpawners[0x30]; // 0x1420            
            std::int32_t m_iPreviousRune1; // 0x1450            
            std::int32_t m_iPreviousRune2; // 0x1454            
            // m_vecAvailableRunes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecAvailableRunes;
            char m_vecAvailableRunes[0x18]; // 0x1458            
            float m_fNextPowerupRuneSpawnTime; // 0x1470            
            float m_fNextBountyRuneSpawnTime; // 0x1474            
            float m_fNextBountyRunePrepTime; // 0x1478            
            float m_fNextXPRuneSpawnTime; // 0x147c            
            bool m_aNeutralChoicesLoaded[5]; // 0x1480            
            bool m_bFirstPowerupRune; // 0x1485            
            bool m_bFirstBountyRune; // 0x1486            
            bool m_bFilterMoreGold; // 0x1487            
            bool m_bAllowOutpostXP; // 0x1488            
            uint8_t _pad1489[0x3]; // 0x1489
            // m_hRoshanSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoshanSpawner;
            char m_hRoshanSpawner[0x4]; // 0x148c            
            std::int32_t m_iPreviousSpectators; // 0x1490            
            std::uint32_t m_nMaxSpectators; // 0x1494            
            // m_hDroppedItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hDroppedItems;
            char m_hDroppedItems[0x18]; // 0x1498            
            // m_hWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWards;
            char m_hWards[0x18]; // 0x14b0            
            // m_hGameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGameEvents;
            char m_hGameEvents[0x4]; // 0x14c8            
            uint8_t _pad14cc[0x1c]; // 0x14cc
            // m_Towers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Towers;
            char m_Towers[0x18]; // 0x14e8            
            // m_TeamTowers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Tower>> m_TeamTowers[10];
            char m_TeamTowers[0xf0]; // 0x1500            
            // m_Outposts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Outposts;
            char m_Outposts[0x18]; // 0x15f0            
            // m_TeamTowerPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_TeamTowerPositions[10];
            char m_TeamTowerPositions[0xf0]; // 0x1608            
            // m_TeamTowerLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_TeamTowerLevels[10];
            char m_TeamTowerLevels[0xf0]; // 0x16f8            
            // m_TeamTowerLanes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_TeamTowerLanes[10];
            char m_TeamTowerLanes[0xf0]; // 0x17e8            
            // m_TeamBarracks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Building>> m_TeamBarracks[10];
            char m_TeamBarracks[0xf0]; // 0x18d8            
            // m_TeamShrines has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Building>> m_TeamShrines[10];
            char m_TeamShrines[0xf0]; // 0x19c8            
            source2sdk::server::CountdownTimer m_TempDayTimer; // 0x1ab8            
            source2sdk::server::CountdownTimer m_TempNightTimer; // 0x1ad0            
            source2sdk::server::CountdownTimer m_NightstalkerNightTimer; // 0x1ae8            
            source2sdk::server::CountdownTimer m_TempRiverTimer; // 0x1b00            
            bool m_bUseLenientAFK[2]; // 0x1b18            
            bool m_bFirstBlood; // 0x1b1a            
            uint8_t _pad1b1b[0x1]; // 0x1b1b
            std::int32_t m_nFirstBloodTime; // 0x1b1c            
            source2sdk::server::CountdownTimer m_CheckIdleTimer; // 0x1b20            
            source2sdk::client::PlayerID_t m_nAnnounceHeroPickRadiantPlayerID; // 0x1b38            
            source2sdk::client::PlayerID_t m_nAnnounceHeroPickDirePlayerID; // 0x1b3c            
            CUtlString m_pszLastUsedAbility[64]; // 0x1b40            
            // m_reconnectinfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_ReconnectInfo> m_reconnectinfos;
            char m_reconnectinfos[0x18]; // 0x1d40            
            // m_hEnemyCreepsInBase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemyCreepsInBase[10];
            char m_hEnemyCreepsInBase[0xf0]; // 0x1d58            
            bool m_bTeamHasAbandonedPlayer[10]; // 0x1e48            
            bool m_bLobbyHasLeaverDetected; // 0x1e52            
            bool m_bGameIsForcedSafeToLeave; // 0x1e53            
            bool m_bLobbyHasDicardMatchResults; // 0x1e54            
            uint8_t _pad1e55[0x3]; // 0x1e55
            std::int32_t m_iGameEndReason; // 0x1e58            
            bool m_bNotifiedPlayerLeaverStatus[64]; // 0x1e5c            
            bool m_bUploadedReplay; // 0x1e9c            
            uint8_t _pad1e9d[0x3]; // 0x1e9d
            float m_flLobbyWaitTime; // 0x1ea0            
            bool m_bGameWasLoaded; // 0x1ea4            
            uint8_t _pad1ea5[0x3]; // 0x1ea5
            std::int32_t m_nLoadPauseFrameCount; // 0x1ea8            
            uint8_t _pad1eac[0x4]; // 0x1eac
            double m_flDemoModeStartTime; // 0x1eb0            
            uint8_t _pad1eb8[0x8]; // 0x1eb8
            double m_flStateFallbackTransitionTime; // 0x1ec0            
            source2sdk::server::EngineCountdownTimer m_timerFinishReplay; // 0x1ec8            
            // m_vecChatLog has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::GameChatLogEntry_t> m_vecChatLog;
            char m_vecChatLog[0x18]; // 0x1ee0            
            uint8_t _pad1ef8[0x2658]; // 0x1ef8
            bool m_bFatalErrorAbortGame; // 0x4550            
            bool m_bFillEmptySlotsWithBots; // 0x4551            
            uint8_t _pad4552[0x2]; // 0x4552
            std::uint32_t m_dotaMapSpawnGroup; // 0x4554            
            uint8_t _pad4558[0x28]; // 0x4558
            // metadata: MNetworkEnable
            std::uint32_t m_lobbyType; // 0x4580            
            // metadata: MNetworkEnable
            source2sdk::client::LeagueID_t m_lobbyLeagueID; // 0x4584            
            // metadata: MNetworkEnable
            char m_lobbyGameName[256]; // 0x4588            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeroStatueLiked"
            // m_vecHeroStatueLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroStatueLiked> m_vecHeroStatueLiked;
            char m_vecHeroStatueLiked[0x88]; // 0x4688            
            // metadata: MNetworkEnable
            std::int32_t m_CustomGameTeamMaxPlayers[15]; // 0x4710            
            uint8_t _pad474c[0x44]; // 0x474c
            // metadata: MNetworkEnable
            std::int32_t m_iMutations[5]; // 0x4790            
            uint8_t _pad47a4[0x4]; // 0x47a4
            // metadata: MNetworkEnable
            // m_vecIngameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CIngameEvent_Base>> m_vecIngameEvents;
            char m_vecIngameEvents[0x18]; // 0x47a8            
            // metadata: MNetworkEnable
            std::int8_t m_nPrimaryIngameEventIndex; // 0x47c0            
            uint8_t _pad47c1[0x3]; // 0x47c1
            std::uint32_t m_nOfrendaPledges; // 0x47c4            
            std::uint32_t m_nRadiantOfrendas; // 0x47c8            
            std::uint32_t m_nDireOfrendas; // 0x47cc            
            // metadata: MNetworkEnable
            bool m_bOfrendaEnabled; // 0x47d0            
            uint8_t _pad47d1[0x7]; // 0x47d1
            // m_vecMuertaPartingShotSouls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sMuertaPartingShotSoulDef> m_vecMuertaPartingShotSouls;
            char m_vecMuertaPartingShotSouls[0x18]; // 0x47d8            
            uint8_t _pad47f0[0x18]; // 0x47f0
            // metadata: MNetworkEnable
            // m_NeutralSpawnBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::NeutralSpawnBoxes_t> m_NeutralSpawnBoxes;
            char m_NeutralSpawnBoxes[0x60]; // 0x4808            
            // metadata: MNetworkEnable
            // m_RegionTriggerBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::RegionTriggerBoxes_t> m_RegionTriggerBoxes;
            char m_RegionTriggerBoxes[0x60]; // 0x4868            
            double m_flLastItemSuggestionRequestTime[15]; // 0x48c8            
            uint8_t _pad4940[0xfb8]; // 0x4940
            double m_flLastPerfSampleTime; // 0x58f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAGameRules) == 0x5900);
    };
};
