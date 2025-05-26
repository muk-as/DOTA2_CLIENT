#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/DOTAThreatLevelInfo_t.hpp"
#include "source2sdk/client/GuildID_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerEventData_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x238
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "DOTAThreatLevelInfo_t m_ThreatLevelInfos"
        // static metadata: MNetworkVarNames "HeroID_t m_nSelectedHeroID"
        // static metadata: MNetworkVarNames "HeroFacetKey_t m_nSelectedHeroFacet"
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
        // static metadata: MNetworkVarNames "AbilityID_t m_vecItemPreferenceLiked"
        // static metadata: MNetworkVarNames "AbilityID_t m_vecItemPreferenceDisliked"
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
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
            char m_ThreatLevelInfos[0x68]; // 0x30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            source2sdk::client::HeroID_t m_nSelectedHeroID; // 0x98            
            uint8_t _pad009c[0x4]; // 0x9c
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_nSelectedHeroFacet; // 0xa0            
            // metadata: MNetworkEnable
            std::int32_t m_iKills; // 0xa8            
            // metadata: MNetworkEnable
            std::int32_t m_iAssists; // 0xac            
            // metadata: MNetworkEnable
            std::int32_t m_iDeaths; // 0xb0            
            // metadata: MNetworkEnable
            std::int32_t m_iStreak; // 0xb4            
            // metadata: MNetworkEnable
            std::int32_t m_iLevel; // 0xb8            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomIntParam; // 0xbc            
            // metadata: MNetworkEnable
            std::int32_t m_iRespawnSeconds; // 0xc0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastBuybackTime; // 0xc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLastBuybackTimeChanged"
            std::int32_t m_iLastBuybackTime_Obsolete; // 0xc8            
            // metadata: MNetworkEnable
            // m_hSelectedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSelectedHero;
            char m_hSelectedHero[0x4]; // 0xcc            
            // metadata: MNetworkEnable
            bool m_bAFK; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            source2sdk::client::HeroID_t m_nSuggestedHeroes[4]; // 0xd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            bool m_bBanSuggestedHeroes[4]; // 0xe4            
            // metadata: MNetworkEnable
            std::uint16_t m_unCompendiumLevel; // 0xe8            
            // metadata: MNetworkEnable
            bool m_bCanRepick; // 0xea            
            // metadata: MNetworkEnable
            bool m_bCanEarnRewards; // 0xeb            
            // metadata: MNetworkEnable
            bool m_bHasRandomed; // 0xec            
            uint8_t _pad00ed[0x3]; // 0xed
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nRandomedHeroID; // 0xf0            
            // metadata: MNetworkEnable
            bool m_bBattleBonusActive; // 0xf4            
            uint8_t _pad00f5[0x1]; // 0xf5
            // metadata: MNetworkEnable
            std::uint16_t m_iBattleBonusRate; // 0xf6            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomBuybackCost; // 0xf8            
            // metadata: MNetworkEnable
            Color m_CustomPlayerColor; // 0xfc            
            // metadata: MNetworkEnable
            bool m_bQualifiesForPAContractReward; // 0x100            
            // metadata: MNetworkEnable
            bool m_bHasPredictedVictory; // 0x101            
            uint8_t _pad0102[0x2]; // 0x102
            // metadata: MNetworkEnable
            std::int32_t m_UnitShareMasks; // 0x104            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataTeamChanged"
            std::int32_t m_iTeamSlot; // 0x108            
            // metadata: MNetworkEnable
            std::uint8_t m_iBattleCupWinStreak; // 0x10c            
            uint8_t _pad010d[0x3]; // 0x10d
            // metadata: MNetworkEnable
            std::uint64_t m_iBattleCupWinDate; // 0x110            
            // metadata: MNetworkEnable
            std::uint16_t m_iBattleCupSkillLevel; // 0x118            
            uint8_t _pad011a[0x2]; // 0x11a
            // metadata: MNetworkEnable
            std::uint32_t m_iBattleCupTeamID; // 0x11c            
            // metadata: MNetworkEnable
            std::uint32_t m_iBattleCupTournamentID; // 0x120            
            // metadata: MNetworkEnable
            std::uint8_t m_iBattleCupDivision; // 0x124            
            uint8_t _pad0125[0x3]; // 0x125
            // metadata: MNetworkEnable
            float m_flTeamFightParticipation; // 0x128            
            // metadata: MNetworkEnable
            std::int32_t m_iFirstBloodClaimed; // 0x12c            
            // metadata: MNetworkEnable
            std::int32_t m_iFirstBloodGiven; // 0x130            
            // metadata: MNetworkEnable
            std::uint32_t m_unPickOrder; // 0x134            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeOfLastSaluteSent; // 0x138            
            uint8_t _pad013c[0x4]; // 0x13c
            // metadata: MNetworkEnable
            // m_vecPlayerEventData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerEventData_t> m_vecPlayerEventData;
            char m_vecPlayerEventData[0x68]; // 0x140            
            // metadata: MNetworkEnable
            std::uint32_t m_unSelectedHeroBadgeXP; // 0x1a8            
            // metadata: MNetworkEnable
            std::uint8_t m_iBountyRunes; // 0x1ac            
            // metadata: MNetworkEnable
            std::uint8_t m_iPowerRunes; // 0x1ad            
            // metadata: MNetworkEnable
            std::uint8_t m_iWaterRunes; // 0x1ae            
            // metadata: MNetworkEnable
            std::uint8_t m_iOutpostsCaptured; // 0x1af            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0x1b0            
            uint8_t _pad01b1[0x1]; // 0x1b1
            // metadata: MNetworkEnable
            std::uint16_t m_unGuildLevel; // 0x1b2            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildPrimaryColor; // 0x1b4            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildSecondaryColor; // 0x1b5            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildPattern; // 0x1b6            
            uint8_t _pad01b7[0x1]; // 0x1b7
            // metadata: MNetworkEnable
            std::uint64_t m_unGuildLogo; // 0x1b8            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0x1c0            
            // metadata: MNetworkEnable
            bool m_bIsPartyGuild; // 0x1c4            
            uint8_t _pad01c5[0x3]; // 0x1c5
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0x1c8            
            // metadata: MNetworkEnable
            source2sdk::client::item_definition_index_t m_unHeroStickerDefIndex; // 0x1cc            
            // metadata: MNetworkEnable
            std::uint8_t m_eHeroStickerQuality; // 0x1d0            
            // metadata: MNetworkEnable
            std::uint8_t m_eLaneSelectionFlags; // 0x1d1            
            // metadata: MNetworkEnable
            std::uint8_t m_nPlayerDraftPreferredRoles; // 0x1d2            
            // metadata: MNetworkEnable
            std::int8_t m_nPlayerDraftPreferredTeam; // 0x1d3            
            // metadata: MNetworkEnable
            std::uint8_t m_nAvailableGifts; // 0x1d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataTeamFoWChanged"
            std::uint8_t m_unFowTeam; // 0x1d5            
            uint8_t _pad01d6[0x2]; // 0x1d6
            // metadata: MNetworkEnable
            // m_vecItemPreferenceLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecItemPreferenceLiked;
            char m_vecItemPreferenceLiked[0x18]; // 0x1d8            
            // metadata: MNetworkEnable
            // m_vecItemPreferenceDisliked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecItemPreferenceDisliked;
            char m_vecItemPreferenceDisliked[0x18]; // 0x1f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventPoints"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteEventPoints; // 0x208            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventPremiumPoints"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteEventPremiumPoints; // 0x20c            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventWagerTokensRemaining"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteEventWagerTokensRemaining; // 0x210            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventWagerTokensMax"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteEventWagerTokensMax; // 0x214            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventEffectsMask"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteEventEffectsMask; // 0x218            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventRanks"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint16_t m_iObsoleteEventRanks; // 0x21c            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_bIsEventOwned"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            bool m_bObsoleteIsEventOwned; // 0x21e            
            uint8_t _pad021f[0x1]; // 0x21f
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iRankWagersAvailable"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteRankWagersAvailable; // 0x220            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iRankWagersMax"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteRankWagersMax; // 0x224            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iEventPointAdjustmentsRemaining"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteEventPointAdjustmentsRemaining; // 0x228            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iAvailableSalutes"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteAvailableSalutes; // 0x22c            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_iSaluteAmounts"
            // metadata: MNetworkChangeCallback "OnObsoleteEvent"
            std::uint32_t m_iObsoleteSaluteAmounts; // 0x230            
            uint8_t _pad0234[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_ThreatLevelInfos) == 0x30);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_nSelectedHeroID) == 0x98);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_nSelectedHeroFacet) == 0xa0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iKills) == 0xa8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iAssists) == 0xac);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iDeaths) == 0xb0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iStreak) == 0xb4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iLevel) == 0xb8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iCustomIntParam) == 0xbc);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iRespawnSeconds) == 0xc0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_flLastBuybackTime) == 0xc4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iLastBuybackTime_Obsolete) == 0xc8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_hSelectedHero) == 0xcc);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bAFK) == 0xd0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_nSuggestedHeroes) == 0xd4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bBanSuggestedHeroes) == 0xe4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unCompendiumLevel) == 0xe8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bCanRepick) == 0xea);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bCanEarnRewards) == 0xeb);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bHasRandomed) == 0xec);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_nRandomedHeroID) == 0xf0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bBattleBonusActive) == 0xf4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBattleBonusRate) == 0xf6);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iCustomBuybackCost) == 0xf8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_CustomPlayerColor) == 0xfc);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bQualifiesForPAContractReward) == 0x100);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bHasPredictedVictory) == 0x101);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_UnitShareMasks) == 0x104);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iTeamSlot) == 0x108);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBattleCupWinStreak) == 0x10c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBattleCupWinDate) == 0x110);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBattleCupSkillLevel) == 0x118);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBattleCupTeamID) == 0x11c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBattleCupTournamentID) == 0x120);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBattleCupDivision) == 0x124);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_flTeamFightParticipation) == 0x128);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iFirstBloodClaimed) == 0x12c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iFirstBloodGiven) == 0x130);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unPickOrder) == 0x134);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_flTimeOfLastSaluteSent) == 0x138);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_vecPlayerEventData) == 0x140);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unSelectedHeroBadgeXP) == 0x1a8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iBountyRunes) == 0x1ac);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iPowerRunes) == 0x1ad);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iWaterRunes) == 0x1ae);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iOutpostsCaptured) == 0x1af);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildTier) == 0x1b0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildLevel) == 0x1b2);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildPrimaryColor) == 0x1b4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildSecondaryColor) == 0x1b5);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildPattern) == 0x1b6);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildLogo) == 0x1b8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildFlags) == 0x1c0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bIsPartyGuild) == 0x1c4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unGuildID) == 0x1c8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unHeroStickerDefIndex) == 0x1cc);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_eHeroStickerQuality) == 0x1d0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_eLaneSelectionFlags) == 0x1d1);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredRoles) == 0x1d2);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredTeam) == 0x1d3);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_nAvailableGifts) == 0x1d4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_unFowTeam) == 0x1d5);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_vecItemPreferenceLiked) == 0x1d8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_vecItemPreferenceDisliked) == 0x1f0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteEventPoints) == 0x208);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteEventPremiumPoints) == 0x20c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteEventWagerTokensRemaining) == 0x210);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteEventWagerTokensMax) == 0x214);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteEventEffectsMask) == 0x218);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteEventRanks) == 0x21c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_bObsoleteIsEventOwned) == 0x21e);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteRankWagersAvailable) == 0x220);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteRankWagersMax) == 0x224);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteEventPointAdjustmentsRemaining) == 0x228);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteAvailableSalutes) == 0x22c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerTeamData_t, m_iObsoleteSaluteAmounts) == 0x230);
        
        static_assert(sizeof(source2sdk::client::PlayerResourcePlayerTeamData_t) == 0x238);
    };
};
