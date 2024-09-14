#pragma once
#include "source2sdk/client/CDOTA_AbilityDraftAbilityState.hpp"
#include "source2sdk/client/CDOTA_ItemStockInfo.hpp"
#include "source2sdk/client/CHeroStatueLiked.hpp"
#include "source2sdk/client/CHeroesPerPlayer.hpp"
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
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    class C_IngameEvent_Base;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xab98
    // Has VTable
    // MNetworkAssumeNotNetworkable
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
    // static metadata: MNetworkVarNames "ERoshanSpawnPhase m_nRoshanRespawnPhase"
    // static metadata: MNetworkVarNames "GameTime_t m_flRoshanRespawnPhaseEndTime"
    // static metadata: MNetworkVarNames "CDOTA_AbilityDraftAbilityState m_AbilityDraftAbilities"
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
    class C_DOTAGamerules : public client::C_MultiplayRules
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nRuneCycle; // 0x40        
        // metadata: MNetworkEnable
        int32_t m_iMiscHeroPickCounter; // 0x44        
        // metadata: MNetworkEnable
        // m_hEndGameCinematicEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEndGameCinematicEntity;
        char m_hEndGameCinematicEntity[0x4]; // 0x48        
        // metadata: MNetworkEnable
        // m_hOverlayHealthBarUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hOverlayHealthBarUnit;
        char m_hOverlayHealthBarUnit[0x4]; // 0x4c        
        // metadata: MNetworkEnable
        int32_t m_nOverlayHealthBarType; // 0x50        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnCinematicModeChanged"
        bool m_bIsInCinematicMode; // 0x54        
        bool m_bIsInClientSideCinematicMode; // 0x55        
        // metadata: MNetworkEnable
        bool m_bFreeCourierMode; // 0x56        
        [[maybe_unused]] std::uint8_t pad_0x57[0x1]; // 0x57
        int32_t m_nStartingGold; // 0x58        
        int32_t m_nGoldPerTick; // 0x5c        
        float m_flGoldTickTime; // 0x60        
        bool m_bItemWhiteListChanged; // 0x64        
        bool m_bEnableSuggestAbilities; // 0x65        
        bool m_bEnableSuggestItems; // 0x66        
        [[maybe_unused]] std::uint8_t pad_0x67[0x1]; // 0x67
        // metadata: MNetworkEnable
        uint32_t m_unFanfareGoodGuys; // 0x68        
        // metadata: MNetworkEnable
        uint32_t m_unFanfareBadGuys; // 0x6c        
        int32_t m_iMapType; // 0x70        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_nGameState"
        int32_t m_nServerGameState; // 0x74        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_nHeroPickState"
        client::DOTA_HeroPickState m_nServerHeroPickState; // 0x78        
        int32_t m_nGameState; // 0x7c        
        client::DOTA_HeroPickState m_nHeroPickState; // 0x80        
        // metadata: MNetworkEnable
        bool m_bAlternateHeroGridsEnabled; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x85[0x3]; // 0x85
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateTransitionTime; // 0x88        
        // metadata: MNetworkEnable
        float m_flOverride_dota_hero_selection_time; // 0x8c        
        // metadata: MNetworkEnable
        float m_flOverride_dota_pregame_time; // 0x90        
        // metadata: MNetworkEnable
        float m_flOverride_dota_postgame_time; // 0x94        
        // metadata: MNetworkEnable
        float m_flOverride_dota_strategy_time; // 0x98        
        // metadata: MNetworkEnable
        float m_flOverride_dota_team_showcase_duration; // 0x9c        
        // metadata: MNetworkEnable
        float m_flOverride_dota_rune_spawn_time; // 0xa0        
        // metadata: MNetworkEnable
        float m_flShowcaseTime[15]; // 0xa4        
        // metadata: MNetworkEnable
        float m_flNeutralInitialSpawnOffset; // 0xe0        
        // metadata: MNetworkEnable
        int32_t m_iGameMode; // 0xe4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGameModeEntityChanged"
        // m_hGameModeEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGameModeEntity;
        char m_hGameModeEntity[0x4]; // 0xe8        
        // metadata: MNetworkEnable
        // m_hCustomHeroPickRulesEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCustomHeroPickRulesEntity;
        char m_hCustomHeroPickRulesEntity[0x4]; // 0xec        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flHeroPickStateTransitionTime; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf4[0x4]; // 0xf4
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_iPlayerIDsInControl; // 0xf8        
        // metadata: MNetworkEnable
        bool m_bSameHeroSelectionEnabled; // 0x100        
        // metadata: MNetworkEnable
        bool m_bUseCustomHeroXPValue; // 0x101        
        // metadata: MNetworkEnable
        bool m_bUseBaseGoldBountyOnHeroes; // 0x102        
        // metadata: MNetworkEnable
        bool m_bUseUniversalShopMode; // 0x103        
        // metadata: MNetworkEnable
        bool m_bHideKillMessageHeaders; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x105[0x3]; // 0x105
        // metadata: MNetworkEnable
        float m_flHeroMinimapIconScale; // 0x108        
        // metadata: MNetworkEnable
        float m_flCreepMinimapIconScale; // 0x10c        
        // metadata: MNetworkEnable
        bool m_bCreepSpawningEnabled; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x111[0x3]; // 0x111
        // metadata: MNetworkEnable
        float m_flRuneMinimapIconScale; // 0x114        
        // metadata: MNetworkEnable
        char m_CustomVictoryMessage[256]; // 0x118        
        // metadata: MNetworkEnable
        float m_flCustomGameEndDelay; // 0x218        
        // metadata: MNetworkEnable
        float m_flCustomGameSetupAutoLaunchDelay; // 0x21c        
        // metadata: MNetworkEnable
        float m_flCustomGameSetupTimeout; // 0x220        
        // metadata: MNetworkEnable
        float m_flCustomVictoryMessageDuration; // 0x224        
        // metadata: MNetworkEnable
        float m_flHeroSelectPenaltyTime; // 0x228        
        // metadata: MNetworkEnable
        bool m_bCustomGameSetupAutoLaunchEnabled; // 0x22c        
        // metadata: MNetworkEnable
        bool m_bCustomGameTeamSelectionLocked; // 0x22d        
        // metadata: MNetworkEnable
        bool m_bCustomGameEnablePickRules; // 0x22e        
        // metadata: MNetworkEnable
        bool m_bCustomGameAllowHeroPickMusic; // 0x22f        
        // metadata: MNetworkEnable
        bool m_bCustomGameAllowMusicAtGameStart; // 0x230        
        // metadata: MNetworkEnable
        bool m_bCustomGameAllowBattleMusic; // 0x231        
        // metadata: MNetworkEnable
        bool m_bCustomGameDisableIK; // 0x232        
        // metadata: MNetworkEnable
        bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // 0x233        
        // metadata: MNetworkEnable
        int32_t m_iCMModePickBanOrder; // 0x234        
        // metadata: MNetworkEnable
        int32_t m_iCDModePickBanOrder; // 0x238        
        // metadata: MNetworkEnable
        int32_t m_nGGTeam; // 0x23c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGGEndsAtTime; // 0x240        
        // metadata: MNetworkEnable
        bool m_bGGCalled; // 0x244        
        // metadata: MNetworkEnable
        bool m_bWhiteListEnabled; // 0x245        
        [[maybe_unused]] std::uint8_t pad_0x246[0x2]; // 0x246
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnWhitelistChanged"
        uint64_t m_bItemWhiteList[4]; // 0x248        
        // metadata: MNetworkEnable
        int32_t m_nLastHitUIMode; // 0x268        
        // metadata: MNetworkEnable
        bool m_bHUDTimerTutorialMode; // 0x26c        
        [[maybe_unused]] std::uint8_t pad_0x26d[0x3]; // 0x26d
        client::CountdownTimer m_HeroPickMiscTimer; // 0x270        
        client::CountdownTimer m_ExtraTimeTimer; // 0x288        
        // metadata: MNetworkEnable
        float m_fExtraTimeRemaining[2]; // 0x2a0        
        // metadata: MNetworkEnable
        bool m_bHeroRespawnEnabled; // 0x2a8        
        // metadata: MNetworkEnable
        bool m_bIsRandomingEnabled; // 0x2a9        
        [[maybe_unused]] std::uint8_t pad_0x2aa[0x2]; // 0x2aa
        // metadata: MNetworkEnable
        client::PlayerID_t m_iCaptainPlayerIDs[2]; // 0x2ac        
        // metadata: MNetworkEnable
        client::HeroID_t m_BannedHeroes[24]; // 0x2b4        
        // metadata: MNetworkEnable
        client::HeroID_t m_SelectedHeroes[24]; // 0x314        
        // metadata: MNetworkEnable
        int32_t m_iActiveTeam; // 0x374        
        // metadata: MNetworkEnable
        int32_t m_iStartingTeam; // 0x378        
        // metadata: MNetworkEnable
        int32_t m_iPenaltyLevelRadiant; // 0x37c        
        // metadata: MNetworkEnable
        int32_t m_iPenaltyLevelDire; // 0x380        
        // metadata: MNetworkEnable
        bool m_bIsLoadingScenario; // 0x384        
        [[maybe_unused]] std::uint8_t pad_0x385[0x3]; // 0x385
        // metadata: MNetworkEnable
        // m_vecNewBannedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::HeroID_t> m_vecNewBannedHeroes;
        char m_vecNewBannedHeroes[0x18]; // 0x388        
        // metadata: MNetworkEnable
        // m_vecWhitelistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::HeroID_t> m_vecWhitelistedHeroes;
        char m_vecWhitelistedHeroes[0x18]; // 0x3a0        
        // metadata: MNetworkEnable
        // m_vecBlacklistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::HeroID_t> m_vecBlacklistedHeroes;
        char m_vecBlacklistedHeroes[0x18]; // 0x3b8        
        // metadata: MNetworkEnable
        bool m_bHideBlacklistedHeroes; // 0x3d0        
        [[maybe_unused]] std::uint8_t pad_0x3d1[0x3]; // 0x3d1
        // metadata: MNetworkEnable
        int32_t m_nSeriesType; // 0x3d4        
        // metadata: MNetworkEnable
        int32_t m_nRadiantSeriesWins; // 0x3d8        
        // metadata: MNetworkEnable
        int32_t m_nDireSeriesWins; // 0x3dc        
        // metadata: MNetworkEnable
        // m_vecAvailableHerosPerPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CHeroesPerPlayer> m_vecAvailableHerosPerPlayerID;
        char m_vecAvailableHerosPerPlayerID[0x50]; // 0x3e0        
        // metadata: MNetworkEnable
        // m_vecLockedHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CHeroesPerPlayer> m_vecLockedHerosByPlayerID;
        char m_vecLockedHerosByPlayerID[0x50]; // 0x430        
        // metadata: MNetworkEnable
        // m_vecDisabledRandomHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CHeroesPerPlayer> m_vecDisabledRandomHerosByPlayerID;
        char m_vecDisabledRandomHerosByPlayerID[0x50]; // 0x480        
        client::HeroID_t m_CustomGameForceSelectHero[24]; // 0x4d0        
        float m_flGoldTime; // 0x530        
        float m_flXPTime; // 0x534        
        entity2::GameTime_t m_flCreepSpawntime; // 0x538        
        float m_flAnnounceStartTime; // 0x53c        
        // metadata: MNetworkEnable
        int32_t m_iGoodTomeCount; // 0x540        
        // metadata: MNetworkEnable
        int32_t m_iBadTomeCount; // 0x544        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPreGameStartTime; // 0x548        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGameStartTime; // 0x54c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGameEndTime; // 0x550        
        // metadata: MNetworkEnable
        float m_flGameLoadTime; // 0x554        
        // metadata: MNetworkEnable
        int32_t m_iCustomGameScore[2]; // 0x558        
        // metadata: MNetworkEnable
        int32_t m_nCustomGameDifficulty; // 0x560        
        bool m_bEnemyModifiersEnabled; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        int32_t m_iWaves; // 0x568        
        int32_t m_iCreepUpgradeState; // 0x56c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fGoodGlyphCooldown; // 0x570        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fBadGlyphCooldown; // 0x574        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGlyphCooldowns[15]; // 0x578        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fGoodRadarCooldown; // 0x5b4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fBadRadarCooldown; // 0x5b8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRadarCooldowns[15]; // 0x5bc        
        // metadata: MNetworkEnable
        int32_t m_iGoodRadarCharges; // 0x5f8        
        // metadata: MNetworkEnable
        int32_t m_iBadRadarCharges; // 0x5fc        
        // metadata: MNetworkEnable
        int32_t m_iRadarCharges[15]; // 0x600        
        // metadata: MNetworkEnable
        float m_flOutpostTimes[24]; // 0x63c        
        // metadata: MNetworkEnable
        bool m_bIsNightstalkerNight; // 0x69c        
        // metadata: MNetworkEnable
        bool m_bIsTemporaryNight; // 0x69d        
        // metadata: MNetworkEnable
        bool m_bIsTemporaryDay; // 0x69e        
        [[maybe_unused]] std::uint8_t pad_0x69f[0x1]; // 0x69f
        // metadata: MNetworkEnable
        int32_t m_nRiverType; // 0x6a0        
        // metadata: MNetworkEnable
        client::PlayerID_t m_nTeamFeaturedPlayerID[15]; // 0x6a4        
        // metadata: MNetworkEnable
        client::item_definition_index_t m_nTeamVersusScreen[15]; // 0x6e0        
        float m_flGoldRedistributeTime; // 0x71c        
        int32_t m_nGoldToRedistribute[2]; // 0x720        
        entity2::GameTime_t m_flNextPreGameThink; // 0x728        
        entity2::GameTime_t m_flNextAllDraftGoldThink; // 0x72c        
        double m_flTimeEnteredState; // 0x730        
        uint32_t m_unRiverAccountID; // 0x738        
        [[maybe_unused]] std::uint8_t pad_0x73c[0x4]; // 0x73c
        client::itemid_t m_ulRiverItemID; // 0x740        
        [[maybe_unused]] std::uint8_t pad_0x748[0x40]; // 0x748
        // metadata: MNetworkEnable
        // m_vecItemStockInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTA_ItemStockInfo> m_vecItemStockInfo;
        char m_vecItemStockInfo[0x50]; // 0x788        
        // metadata: MNetworkEnable
        client::DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // 0x7d8        
        // metadata: MNetworkEnable
        int32_t m_nGameWinner; // 0x7e8        
        [[maybe_unused]] std::uint8_t pad_0x7ec[0x4]; // 0x7ec
        // metadata: MNetworkEnable
        client::MatchID_t m_unMatchID64; // 0x7f0        
        // metadata: MNetworkEnable
        bool m_bMatchSignoutComplete; // 0x7f8        
        [[maybe_unused]] std::uint8_t pad_0x7f9[0x3]; // 0x7f9
        // metadata: MNetworkEnable
        // m_hSideShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSideShop1;
        char m_hSideShop1[0x4]; // 0x7fc        
        // metadata: MNetworkEnable
        // m_hSideShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSideShop2;
        char m_hSideShop2[0x4]; // 0x800        
        // metadata: MNetworkEnable
        // m_hSecretShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSecretShop1;
        char m_hSecretShop1[0x4]; // 0x804        
        // metadata: MNetworkEnable
        // m_hSecretShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSecretShop2;
        char m_hSecretShop2[0x4]; // 0x808        
        // metadata: MNetworkEnable
        // m_hTeamFountains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTeamFountains[15];
        char m_hTeamFountains[0x3c]; // 0x80c        
        // metadata: MNetworkEnable
        // m_hTeamForts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTeamForts[15];
        char m_hTeamForts[0x3c]; // 0x848        
        // metadata: MNetworkEnable
        // m_hTeamShops has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTeamShops[15];
        char m_hTeamShops[0x3c]; // 0x884        
        // metadata: MNetworkEnable
        // m_hAnnouncerGood has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAnnouncerGood;
        char m_hAnnouncerGood[0x4]; // 0x8c0        
        // metadata: MNetworkEnable
        // m_hAnnouncerBad has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAnnouncerBad;
        char m_hAnnouncerBad[0x4]; // 0x8c4        
        // metadata: MNetworkEnable
        // m_hAnnouncerSpectator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAnnouncerSpectator;
        char m_hAnnouncerSpectator[0x4]; // 0x8c8        
        // metadata: MNetworkEnable
        // m_hAnnouncerGood_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAnnouncerGood_KillingSpree;
        char m_hAnnouncerGood_KillingSpree[0x4]; // 0x8cc        
        // metadata: MNetworkEnable
        // m_hAnnouncerBad_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAnnouncerBad_KillingSpree;
        char m_hAnnouncerBad_KillingSpree[0x4]; // 0x8d0        
        // metadata: MNetworkEnable
        // m_hAnnouncerSpectator_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAnnouncerSpectator_KillingSpree;
        char m_hAnnouncerSpectator_KillingSpree[0x4]; // 0x8d4        
        // metadata: MNetworkEnable
        bool m_arrTier1TowerDestroyed[15]; // 0x8d8        
        // metadata: MNetworkEnable
        bool m_arrTier2TowerDestroyed[15]; // 0x8e7        
        // metadata: MNetworkEnable
        bool m_arrTier3TowerDestroyed[15]; // 0x8f6        
        // metadata: MNetworkEnable
        bool m_arrMeleeBarracksDestroyed[15]; // 0x905        
        // metadata: MNetworkEnable
        bool m_bTier1TowerDestroyed; // 0x914        
        // metadata: MNetworkEnable
        bool m_bTier2TowerDestroyed; // 0x915        
        // metadata: MNetworkEnable
        bool m_bTier3TowerDestroyed; // 0x916        
        // metadata: MNetworkEnable
        bool m_bMeleeBarracksDestroyed; // 0x917        
        float m_fTimeOfDay; // 0x918        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iNetTimeOfDay; // 0x91c        
        // metadata: MNetworkEnable
        float m_flDaytimeStart; // 0x920        
        // metadata: MNetworkEnable
        float m_flNighttimeStart; // 0x924        
        // metadata: MNetworkEnable
        int32_t m_nLoadedPlayers; // 0x928        
        // metadata: MNetworkEnable
        int32_t m_nExpectedPlayers; // 0x92c        
        [[maybe_unused]] std::uint8_t pad_0x930[0x8]; // 0x930
        // metadata: MNetworkEnable
        int32_t m_iMinimapDebugGridState; // 0x938        
        [[maybe_unused]] std::uint8_t pad_0x93c[0x7c]; // 0x93c
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iFoWFrameNumber; // 0x9b8        
        // metadata: MNetworkEnable
        Vector m_vWeatherWindDirection; // 0x9bc        
        // metadata: MNetworkEnable
        client::HeroID_t m_vecRequiredPlaytestHeroesStorage[24]; // 0x9c8        
        // metadata: MNetworkEnable
        client::HeroID_t m_vecRecommendedPlaytestHeroesStorage[24]; // 0xa28        
        // metadata: MNetworkEnable
        bool m_bAllRequiredPlaytestHeroesPicked; // 0xa88        
        [[maybe_unused]] std::uint8_t pad_0xa89[0x3]; // 0xa89
        // metadata: MNetworkEnable
        int32_t m_nLastPlaytestPickPhase; // 0xa8c        
        int32_t m_nCustomGameFowTeamCount; // 0xa90        
        bool m_bUseAlternateABRules; // 0xa94        
        bool m_bLobbyIsAssociatedWithGame; // 0xa95        
        [[maybe_unused]] std::uint8_t pad_0xa96[0x2]; // 0xa96
        client::CountdownTimer m_BotDebugTimer; // 0xa98        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "48"
        uint8_t m_BotDebugPushLane[18]; // 0xab0        
        // metadata: MNetworkEnable
        uint8_t m_BotDebugDefendLane[18]; // 0xac2        
        // metadata: MNetworkEnable
        uint8_t m_BotDebugFarmLane[6]; // 0xad4        
        // metadata: MNetworkEnable
        uint8_t m_BotDebugRoam[8]; // 0xada        
        [[maybe_unused]] std::uint8_t pad_0xae2[0x2]; // 0xae2
        // metadata: MNetworkEnable
        // m_hBotDebugRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBotDebugRoamTarget[2];
        char m_hBotDebugRoamTarget[0x8]; // 0xae4        
        // metadata: MNetworkEnable
        uint8_t m_BotDebugRoshan[2]; // 0xaec        
        [[maybe_unused]] std::uint8_t pad_0xaee[0x2]; // 0xaee
        // metadata: MNetworkEnable
        client::ERoshanSpawnPhase m_nRoshanRespawnPhase; // 0xaf0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRoshanRespawnPhaseEndTime; // 0xaf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CDOTA_AbilityDraftAbilityState[MAX_ABILITY_DRAFT_ABILITIES]"
        // m_AbilityDraftAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CDOTA_AbilityDraftAbilityState> m_AbilityDraftAbilities;
        char m_AbilityDraftAbilities[0x50]; // 0xaf8        
        // metadata: MNetworkEnable
        bool m_bAbilityDraftCurrentPlayerHasPicked; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb49[0x3]; // 0xb49
        // metadata: MNetworkEnable
        int32_t m_nAbilityDraftPlayerTracker; // 0xb4c        
        // metadata: MNetworkEnable
        int32_t m_nAbilityDraftRoundNumber; // 0xb50        
        // metadata: MNetworkEnable
        int32_t m_nAbilityDraftAdvanceSteps; // 0xb54        
        // metadata: MNetworkEnable
        int32_t m_nAbilityDraftPhase; // 0xb58        
        // metadata: MNetworkEnable
        bool m_bIsPlayerDraft; // 0xb5c        
        [[maybe_unused]] std::uint8_t pad_0xb5d[0x3]; // 0xb5d
        // metadata: MNetworkEnable
        client::DOTA_PlayerDraftState m_ePlayerDraftState; // 0xb60        
        [[maybe_unused]] std::uint8_t pad_0xb64[0x4]; // 0xb64
        // metadata: MNetworkEnable
        // m_vecPlayerDraftPickOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint8_t> m_vecPlayerDraftPickOrder;
        char m_vecPlayerDraftPickOrder[0x18]; // 0xb68        
        // metadata: MNetworkEnable
        int32_t m_nPlayerDraftPick; // 0xb80        
        // metadata: MNetworkEnable
        int32_t m_nPlayerDraftActiveTeam; // 0xb84        
        // metadata: MNetworkEnable
        float m_flPlayerDraftTimeBank[2]; // 0xb88        
        // m_vecARDMHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<KeyValues*> m_vecARDMHeroes[2];
        char m_vecARDMHeroes[0x30]; // 0xb90        
        int32_t m_nARDMHeroesPrecached; // 0xbc0        
        float m_fLastARDMPrecache; // 0xbc4        
        // metadata: MNetworkEnable
        int32_t m_nAllDraftPhase; // 0xbc8        
        // metadata: MNetworkEnable
        bool m_bAllDraftRadiantFirst; // 0xbcc        
        // metadata: MNetworkEnable
        bool m_bAllowOverrideVPK; // 0xbcd        
        [[maybe_unused]] std::uint8_t pad_0xbce[0x2]; // 0xbce
        // metadata: MNetworkEnable
        int32_t m_nARDMHeroesRemaining[2]; // 0xbd0        
        bool m_bUpdateHeroStatues; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbd9[0x17]; // 0xbd9
        // metadata: MNetworkEnable
        bool m_bExperimentalGameplay; // 0xbf0        
        [[maybe_unused]] std::uint8_t pad_0xbf1[0x47]; // 0xbf1
        // metadata: MNetworkEnable
        uint32_t m_lobbyType; // 0xc38        
        // metadata: MNetworkEnable
        client::LeagueID_t m_lobbyLeagueID; // 0xc3c        
        // metadata: MNetworkEnable
        char m_lobbyGameName[256]; // 0xc40        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnHeroStatueLiked"
        // m_vecHeroStatueLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::CHeroStatueLiked> m_vecHeroStatueLiked;
        char m_vecHeroStatueLiked[0x50]; // 0xd40        
        // metadata: MNetworkEnable
        int32_t m_CustomGameTeamMaxPlayers[15]; // 0xd90        
        // metadata: MNetworkEnable
        int32_t m_iMutations[5]; // 0xdcc        
        // metadata: MNetworkEnable
        // m_vecIngameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_IngameEvent_Base>> m_vecIngameEvents;
        char m_vecIngameEvents[0x18]; // 0xde0        
        // metadata: MNetworkEnable
        int8_t m_nPrimaryIngameEventIndex; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0xdf9[0x3]; // 0xdf9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnObsoleteIngameEventChanged"
        // metadata: MNetworkAlias "m_hIngameEvent"
        // m_hObsoleteIngameEvent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_IngameEvent_Base> m_hObsoleteIngameEvent;
        char m_hObsoleteIngameEvent[0x4]; // 0xdfc        
        uint32_t m_nOfrendaPledges; // 0xe00        
        uint32_t m_nRadiantOfrendas; // 0xe04        
        uint32_t m_nDireOfrendas; // 0xe08        
        // metadata: MNetworkEnable
        bool m_bOfrendaEnabled; // 0xe0c        
        [[maybe_unused]] std::uint8_t pad_0xe0d[0x33]; // 0xe0d
        // metadata: MNetworkEnable
        // m_NeutralSpawnBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::NeutralSpawnBoxes_t> m_NeutralSpawnBoxes;
        char m_NeutralSpawnBoxes[0x18]; // 0xe40        
        // metadata: MNetworkEnable
        // m_RegionTriggerBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::RegionTriggerBoxes_t> m_RegionTriggerBoxes;
        char m_RegionTriggerBoxes[0x18]; // 0xe58        
        [[maybe_unused]] std::uint8_t pad_0xe70[0xfb8]; // 0xe70
        double m_flLastPerfSampleTime; // 0x1e28        
        double m_flLastPerfSampleSendTime; // 0x1e30        
        bool m_bDidSeeStrategyTime; // 0x1e38        
        [[maybe_unused]] std::uint8_t pad_0x1e39[0x8d57]; // 0x1e39
        double m_flLastUnfocusedSleepTime; // 0xab90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAGamerules because it is not a standard-layout class
    static_assert(sizeof(C_DOTAGamerules) == 0xab98);
};
