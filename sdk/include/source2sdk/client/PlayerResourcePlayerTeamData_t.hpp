#pragma once
#include "source2sdk/client/DOTAThreatLevelInfo_t.hpp"
#include "source2sdk/client/GuildID_t.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerEventData_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1d0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "DOTAThreatLevelInfo_t m_ThreatLevelInfos"
    // static metadata: MNetworkVarNames "HeroID_t m_nSelectedHeroID"
    // static metadata: MNetworkVarNames "HeroFacetID_t m_nSelectedHeroVariant"
    // static metadata: MNetworkVarNames "int m_iKills"
    // static metadata: MNetworkVarNames "int m_iAssists"
    // static metadata: MNetworkVarNames "int m_iDeaths"
    // static metadata: MNetworkVarNames "int m_iStreak"
    // static metadata: MNetworkVarNames "int m_iLevel"
    // static metadata: MNetworkVarNames "int m_iCustomIntParam"
    // static metadata: MNetworkVarNames "int m_iRespawnSeconds"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastBuybackTime"
    // static metadata: MNetworkVarNames "int m_iLastBuybackTime_Obsolete"
    // static metadata: MNetworkVarNames "EHANDLE m_hSelectedHero"
    // static metadata: MNetworkVarNames "bool m_bAFK"
    // static metadata: MNetworkVarNames "HeroID_t m_nSuggestedHeroes"
    // static metadata: MNetworkVarNames "bool m_bBanSuggestedHeroes"
    // static metadata: MNetworkVarNames "uint16 m_unCompendiumLevel"
    // static metadata: MNetworkVarNames "bool m_bCanRepick"
    // static metadata: MNetworkVarNames "bool m_bCanEarnRewards"
    // static metadata: MNetworkVarNames "bool m_bHasRandomed"
    // static metadata: MNetworkVarNames "HeroID_t m_nRandomedHeroID"
    // static metadata: MNetworkVarNames "bool m_bBattleBonusActive"
    // static metadata: MNetworkVarNames "uint16 m_iBattleBonusRate"
    // static metadata: MNetworkVarNames "int m_iCustomBuybackCost"
    // static metadata: MNetworkVarNames "Color m_CustomPlayerColor"
    // static metadata: MNetworkVarNames "bool m_bQualifiesForPAContractReward"
    // static metadata: MNetworkVarNames "bool m_bHasPredictedVictory"
    // static metadata: MNetworkVarNames "UnitShareMask_t m_UnitShareMasks"
    // static metadata: MNetworkVarNames "int m_iTeamSlot"
    // static metadata: MNetworkVarNames "uint8 m_iBattleCupWinStreak"
    // static metadata: MNetworkVarNames "uint64 m_iBattleCupWinDate"
    // static metadata: MNetworkVarNames "uint16 m_iBattleCupSkillLevel"
    // static metadata: MNetworkVarNames "uint32 m_iBattleCupTeamID"
    // static metadata: MNetworkVarNames "uint32 m_iBattleCupTournamentID"
    // static metadata: MNetworkVarNames "uint8 m_iBattleCupDivision"
    // static metadata: MNetworkVarNames "float m_flTeamFightParticipation"
    // static metadata: MNetworkVarNames "int m_iFirstBloodClaimed"
    // static metadata: MNetworkVarNames "int m_iFirstBloodGiven"
    // static metadata: MNetworkVarNames "uint32 m_unPickOrder"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeOfLastSaluteSent"
    // static metadata: MNetworkVarNames "PlayerResourcePlayerEventData_t m_vecPlayerEventData"
    // static metadata: MNetworkVarNames "uint32 m_unSelectedHeroBadgeXP"
    // static metadata: MNetworkVarNames "uint8 m_iBountyRunes"
    // static metadata: MNetworkVarNames "uint8 m_iPowerRunes"
    // static metadata: MNetworkVarNames "uint8 m_iWaterRunes"
    // static metadata: MNetworkVarNames "uint8 m_iOutpostsCaptured"
    // static metadata: MNetworkVarNames "uint8 m_unGuildTier"
    // static metadata: MNetworkVarNames "uint16 m_unGuildLevel"
    // static metadata: MNetworkVarNames "uint8 m_unGuildPrimaryColor"
    // static metadata: MNetworkVarNames "uint8 m_unGuildSecondaryColor"
    // static metadata: MNetworkVarNames "uint8 m_unGuildPattern"
    // static metadata: MNetworkVarNames "uint64 m_unGuildLogo"
    // static metadata: MNetworkVarNames "uint32 m_unGuildFlags"
    // static metadata: MNetworkVarNames "bool m_bIsPartyGuild"
    // static metadata: MNetworkVarNames "GuildID_t m_unGuildID"
    // static metadata: MNetworkVarNames "item_definition_index_t m_unHeroStickerDefIndex"
    // static metadata: MNetworkVarNames "uint8 m_eHeroStickerQuality"
    // static metadata: MNetworkVarNames "uint8 m_eLaneSelectionFlags"
    // static metadata: MNetworkVarNames "uint8 m_nPlayerDraftPreferredRoles"
    // static metadata: MNetworkVarNames "int8 m_nPlayerDraftPreferredTeam"
    // static metadata: MNetworkVarNames "uint8 m_nAvailableGifts"
    // static metadata: MNetworkVarNames "uint8 m_unFowTeam"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventPoints"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventPremiumPoints"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventWagerTokensRemaining"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventWagerTokensMax"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventEffectsMask"
    // static metadata: MNetworkVarNames "uint16 m_iObsoleteEventRanks"
    // static metadata: MNetworkVarNames "bool m_bObsoleteIsEventOwned"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteRankWagersAvailable"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteRankWagersMax"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteEventPointAdjustmentsRemaining"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteAvailableSalutes"
    // static metadata: MNetworkVarNames "uint32 m_iObsoleteSaluteAmounts"
    #pragma pack(push, 1)
    struct PlayerResourcePlayerTeamData_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
        char m_ThreatLevelInfos[0x50]; // 0x30        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSelectionDirty"
        client::HeroID_t m_nSelectedHeroID; // 0x80        
        // metadata: MNetworkEnable
        client::HeroFacetID_t m_nSelectedHeroVariant; // 0x84        
        // metadata: MNetworkEnable
        int32_t m_iKills; // 0x88        
        // metadata: MNetworkEnable
        int32_t m_iAssists; // 0x8c        
        // metadata: MNetworkEnable
        int32_t m_iDeaths; // 0x90        
        // metadata: MNetworkEnable
        int32_t m_iStreak; // 0x94        
        // metadata: MNetworkEnable
        int32_t m_iLevel; // 0x98        
        // metadata: MNetworkEnable
        int32_t m_iCustomIntParam; // 0x9c        
        // metadata: MNetworkEnable
        int32_t m_iRespawnSeconds; // 0xa0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastBuybackTime; // 0xa4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLastBuybackTimeChanged"
        int32_t m_iLastBuybackTime_Obsolete; // 0xa8        
        // metadata: MNetworkEnable
        // m_hSelectedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSelectedHero;
        char m_hSelectedHero[0x4]; // 0xac        
        // metadata: MNetworkEnable
        bool m_bAFK; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb1[0x3]; // 0xb1
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSelectionDirty"
        client::HeroID_t m_nSuggestedHeroes[4]; // 0xb4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSelectionDirty"
        bool m_bBanSuggestedHeroes[4]; // 0xc4        
        // metadata: MNetworkEnable
        uint16_t m_unCompendiumLevel; // 0xc8        
        // metadata: MNetworkEnable
        bool m_bCanRepick; // 0xca        
        // metadata: MNetworkEnable
        bool m_bCanEarnRewards; // 0xcb        
        // metadata: MNetworkEnable
        bool m_bHasRandomed; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xcd[0x3]; // 0xcd
        // metadata: MNetworkEnable
        client::HeroID_t m_nRandomedHeroID; // 0xd0        
        // metadata: MNetworkEnable
        bool m_bBattleBonusActive; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd5[0x1]; // 0xd5
        // metadata: MNetworkEnable
        uint16_t m_iBattleBonusRate; // 0xd6        
        // metadata: MNetworkEnable
        int32_t m_iCustomBuybackCost; // 0xd8        
        // metadata: MNetworkEnable
        Color m_CustomPlayerColor; // 0xdc        
        // metadata: MNetworkEnable
        bool m_bQualifiesForPAContractReward; // 0xe0        
        // metadata: MNetworkEnable
        bool m_bHasPredictedVictory; // 0xe1        
        [[maybe_unused]] std::uint8_t pad_0xe2[0x2]; // 0xe2
        // metadata: MNetworkEnable
        int32_t m_UnitShareMasks; // 0xe4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamChanged"
        int32_t m_iTeamSlot; // 0xe8        
        // metadata: MNetworkEnable
        uint8_t m_iBattleCupWinStreak; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xed[0x3]; // 0xed
        // metadata: MNetworkEnable
        uint64_t m_iBattleCupWinDate; // 0xf0        
        // metadata: MNetworkEnable
        uint16_t m_iBattleCupSkillLevel; // 0xf8        
        [[maybe_unused]] std::uint8_t pad_0xfa[0x2]; // 0xfa
        // metadata: MNetworkEnable
        uint32_t m_iBattleCupTeamID; // 0xfc        
        // metadata: MNetworkEnable
        uint32_t m_iBattleCupTournamentID; // 0x100        
        // metadata: MNetworkEnable
        uint8_t m_iBattleCupDivision; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x105[0x3]; // 0x105
        // metadata: MNetworkEnable
        float m_flTeamFightParticipation; // 0x108        
        // metadata: MNetworkEnable
        int32_t m_iFirstBloodClaimed; // 0x10c        
        // metadata: MNetworkEnable
        int32_t m_iFirstBloodGiven; // 0x110        
        // metadata: MNetworkEnable
        uint32_t m_unPickOrder; // 0x114        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeOfLastSaluteSent; // 0x118        
        [[maybe_unused]] std::uint8_t pad_0x11c[0x4]; // 0x11c
        // metadata: MNetworkEnable
        // m_vecPlayerEventData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PlayerResourcePlayerEventData_t> m_vecPlayerEventData;
        char m_vecPlayerEventData[0x50]; // 0x120        
        // metadata: MNetworkEnable
        uint32_t m_unSelectedHeroBadgeXP; // 0x170        
        // metadata: MNetworkEnable
        uint8_t m_iBountyRunes; // 0x174        
        // metadata: MNetworkEnable
        uint8_t m_iPowerRunes; // 0x175        
        // metadata: MNetworkEnable
        uint8_t m_iWaterRunes; // 0x176        
        // metadata: MNetworkEnable
        uint8_t m_iOutpostsCaptured; // 0x177        
        // metadata: MNetworkEnable
        uint8_t m_unGuildTier; // 0x178        
        [[maybe_unused]] std::uint8_t pad_0x179[0x1]; // 0x179
        // metadata: MNetworkEnable
        uint16_t m_unGuildLevel; // 0x17a        
        // metadata: MNetworkEnable
        uint8_t m_unGuildPrimaryColor; // 0x17c        
        // metadata: MNetworkEnable
        uint8_t m_unGuildSecondaryColor; // 0x17d        
        // metadata: MNetworkEnable
        uint8_t m_unGuildPattern; // 0x17e        
        [[maybe_unused]] std::uint8_t pad_0x17f[0x1]; // 0x17f
        // metadata: MNetworkEnable
        uint64_t m_unGuildLogo; // 0x180        
        // metadata: MNetworkEnable
        uint32_t m_unGuildFlags; // 0x188        
        // metadata: MNetworkEnable
        bool m_bIsPartyGuild; // 0x18c        
        [[maybe_unused]] std::uint8_t pad_0x18d[0x3]; // 0x18d
        // metadata: MNetworkEnable
        client::GuildID_t m_unGuildID; // 0x190        
        // metadata: MNetworkEnable
        client::item_definition_index_t m_unHeroStickerDefIndex; // 0x194        
        // metadata: MNetworkEnable
        uint8_t m_eHeroStickerQuality; // 0x198        
        // metadata: MNetworkEnable
        uint8_t m_eLaneSelectionFlags; // 0x199        
        // metadata: MNetworkEnable
        uint8_t m_nPlayerDraftPreferredRoles; // 0x19a        
        // metadata: MNetworkEnable
        int8_t m_nPlayerDraftPreferredTeam; // 0x19b        
        // metadata: MNetworkEnable
        uint8_t m_nAvailableGifts; // 0x19c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamFoWChanged"
        uint8_t m_unFowTeam; // 0x19d        
        [[maybe_unused]] std::uint8_t pad_0x19e[0x2]; // 0x19e
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventPoints"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteEventPoints; // 0x1a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventPremiumPoints"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteEventPremiumPoints; // 0x1a4        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventWagerTokensRemaining"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteEventWagerTokensRemaining; // 0x1a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventWagerTokensMax"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteEventWagerTokensMax; // 0x1ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventEffectsMask"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteEventEffectsMask; // 0x1b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventRanks"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint16_t m_iObsoleteEventRanks; // 0x1b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_bIsEventOwned"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        bool m_bObsoleteIsEventOwned; // 0x1b6        
        [[maybe_unused]] std::uint8_t pad_0x1b7[0x1]; // 0x1b7
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iRankWagersAvailable"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteRankWagersAvailable; // 0x1b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iRankWagersMax"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteRankWagersMax; // 0x1bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iEventPointAdjustmentsRemaining"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteEventPointAdjustmentsRemaining; // 0x1c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iAvailableSalutes"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteAvailableSalutes; // 0x1c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_iSaluteAmounts"
        // metadata: MNetworkChangeCallback "OnObsoleteEvent"
        uint32_t m_iObsoleteSaluteAmounts; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_ThreatLevelInfos) == 0x30);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_nSelectedHeroID) == 0x80);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_nSelectedHeroVariant) == 0x84);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iKills) == 0x88);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iAssists) == 0x8c);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iDeaths) == 0x90);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iStreak) == 0x94);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iLevel) == 0x98);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iCustomIntParam) == 0x9c);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iRespawnSeconds) == 0xa0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_flLastBuybackTime) == 0xa4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iLastBuybackTime_Obsolete) == 0xa8);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_hSelectedHero) == 0xac);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bAFK) == 0xb0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_nSuggestedHeroes) == 0xb4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bBanSuggestedHeroes) == 0xc4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unCompendiumLevel) == 0xc8);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bCanRepick) == 0xca);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bCanEarnRewards) == 0xcb);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bHasRandomed) == 0xcc);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_nRandomedHeroID) == 0xd0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bBattleBonusActive) == 0xd4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBattleBonusRate) == 0xd6);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iCustomBuybackCost) == 0xd8);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_CustomPlayerColor) == 0xdc);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bQualifiesForPAContractReward) == 0xe0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bHasPredictedVictory) == 0xe1);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_UnitShareMasks) == 0xe4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iTeamSlot) == 0xe8);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBattleCupWinStreak) == 0xec);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBattleCupWinDate) == 0xf0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBattleCupSkillLevel) == 0xf8);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBattleCupTeamID) == 0xfc);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBattleCupTournamentID) == 0x100);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBattleCupDivision) == 0x104);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_flTeamFightParticipation) == 0x108);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iFirstBloodClaimed) == 0x10c);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iFirstBloodGiven) == 0x110);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unPickOrder) == 0x114);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_flTimeOfLastSaluteSent) == 0x118);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_vecPlayerEventData) == 0x120);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unSelectedHeroBadgeXP) == 0x170);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iBountyRunes) == 0x174);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iPowerRunes) == 0x175);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iWaterRunes) == 0x176);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iOutpostsCaptured) == 0x177);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildTier) == 0x178);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildLevel) == 0x17a);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildPrimaryColor) == 0x17c);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildSecondaryColor) == 0x17d);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildPattern) == 0x17e);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildLogo) == 0x180);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildFlags) == 0x188);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bIsPartyGuild) == 0x18c);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unGuildID) == 0x190);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unHeroStickerDefIndex) == 0x194);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_eHeroStickerQuality) == 0x198);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_eLaneSelectionFlags) == 0x199);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredRoles) == 0x19a);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredTeam) == 0x19b);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_nAvailableGifts) == 0x19c);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_unFowTeam) == 0x19d);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteEventPoints) == 0x1a0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteEventPremiumPoints) == 0x1a4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteEventWagerTokensRemaining) == 0x1a8);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteEventWagerTokensMax) == 0x1ac);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteEventEffectsMask) == 0x1b0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteEventRanks) == 0x1b4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_bObsoleteIsEventOwned) == 0x1b6);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteRankWagersAvailable) == 0x1b8);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteRankWagersMax) == 0x1bc);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteEventPointAdjustmentsRemaining) == 0x1c0);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteAvailableSalutes) == 0x1c4);
    static_assert(offsetof(PlayerResourcePlayerTeamData_t, m_iObsoleteSaluteAmounts) == 0x1c8);
    
    static_assert(sizeof(PlayerResourcePlayerTeamData_t) == 0x1d0);
};
