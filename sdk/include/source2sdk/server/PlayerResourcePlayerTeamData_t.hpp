#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/GuildID_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/DOTAThreatLevelInfo_t.hpp"
#include "source2sdk/server/PlayerResourcePlayerEventData_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Standard-layout class: true
        // Size: 0x208
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
        #pragma pack(push, 1)
        struct PlayerResourcePlayerTeamData_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
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
            // m_hSelectedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSelectedHero;
            char m_hSelectedHero[0x4]; // 0xc8            
            // metadata: MNetworkEnable
            bool m_bAFK; // 0xcc            
            uint8_t _pad00cd[0x3]; // 0xcd
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            source2sdk::client::HeroID_t m_nSuggestedHeroes[4]; // 0xd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            bool m_bBanSuggestedHeroes[4]; // 0xe0            
            // metadata: MNetworkEnable
            std::uint16_t m_unCompendiumLevel; // 0xe4            
            // metadata: MNetworkEnable
            bool m_bCanRepick; // 0xe6            
            // metadata: MNetworkEnable
            bool m_bCanEarnRewards; // 0xe7            
            // metadata: MNetworkEnable
            bool m_bHasRandomed; // 0xe8            
            uint8_t _pad00e9[0x3]; // 0xe9
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nRandomedHeroID; // 0xec            
            // metadata: MNetworkEnable
            bool m_bBattleBonusActive; // 0xf0            
            uint8_t _pad00f1[0x1]; // 0xf1
            // metadata: MNetworkEnable
            std::uint16_t m_iBattleBonusRate; // 0xf2            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomBuybackCost; // 0xf4            
            // metadata: MNetworkEnable
            Color m_CustomPlayerColor; // 0xf8            
            // metadata: MNetworkEnable
            bool m_bQualifiesForPAContractReward; // 0xfc            
            // metadata: MNetworkEnable
            bool m_bHasPredictedVictory; // 0xfd            
            uint8_t _pad00fe[0x2]; // 0xfe
            // metadata: MNetworkEnable
            std::int32_t m_UnitShareMasks; // 0x100            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataTeamChanged"
            std::int32_t m_iTeamSlot; // 0x104            
            // metadata: MNetworkEnable
            std::uint8_t m_iBattleCupWinStreak; // 0x108            
            uint8_t _pad0109[0x7]; // 0x109
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
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerEventData_t> m_vecPlayerEventData;
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
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecItemPreferenceLiked;
            char m_vecItemPreferenceLiked[0x18]; // 0x1d8            
            // metadata: MNetworkEnable
            // m_vecItemPreferenceDisliked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecItemPreferenceDisliked;
            char m_vecItemPreferenceDisliked[0x18]; // 0x1f0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_ThreatLevelInfos) == 0x30);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nSelectedHeroID) == 0x98);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nSelectedHeroFacet) == 0xa0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iKills) == 0xa8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iAssists) == 0xac);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iDeaths) == 0xb0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iStreak) == 0xb4);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iLevel) == 0xb8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iCustomIntParam) == 0xbc);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iRespawnSeconds) == 0xc0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_flLastBuybackTime) == 0xc4);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_hSelectedHero) == 0xc8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bAFK) == 0xcc);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nSuggestedHeroes) == 0xd0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bBanSuggestedHeroes) == 0xe0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unCompendiumLevel) == 0xe4);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bCanRepick) == 0xe6);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bCanEarnRewards) == 0xe7);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bHasRandomed) == 0xe8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nRandomedHeroID) == 0xec);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bBattleBonusActive) == 0xf0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleBonusRate) == 0xf2);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iCustomBuybackCost) == 0xf4);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_CustomPlayerColor) == 0xf8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bQualifiesForPAContractReward) == 0xfc);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bHasPredictedVictory) == 0xfd);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_UnitShareMasks) == 0x100);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iTeamSlot) == 0x104);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupWinStreak) == 0x108);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupWinDate) == 0x110);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupSkillLevel) == 0x118);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupTeamID) == 0x11c);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupTournamentID) == 0x120);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupDivision) == 0x124);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_flTeamFightParticipation) == 0x128);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iFirstBloodClaimed) == 0x12c);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iFirstBloodGiven) == 0x130);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unPickOrder) == 0x134);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_flTimeOfLastSaluteSent) == 0x138);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_vecPlayerEventData) == 0x140);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unSelectedHeroBadgeXP) == 0x1a8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBountyRunes) == 0x1ac);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iPowerRunes) == 0x1ad);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iWaterRunes) == 0x1ae);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iOutpostsCaptured) == 0x1af);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildTier) == 0x1b0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildLevel) == 0x1b2);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildPrimaryColor) == 0x1b4);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildSecondaryColor) == 0x1b5);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildPattern) == 0x1b6);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildLogo) == 0x1b8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildFlags) == 0x1c0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bIsPartyGuild) == 0x1c4);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildID) == 0x1c8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unHeroStickerDefIndex) == 0x1cc);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_eHeroStickerQuality) == 0x1d0);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_eLaneSelectionFlags) == 0x1d1);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredRoles) == 0x1d2);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredTeam) == 0x1d3);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nAvailableGifts) == 0x1d4);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unFowTeam) == 0x1d5);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_vecItemPreferenceLiked) == 0x1d8);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_vecItemPreferenceDisliked) == 0x1f0);
        
        static_assert(sizeof(source2sdk::server::PlayerResourcePlayerTeamData_t) == 0x208);
    };
};
