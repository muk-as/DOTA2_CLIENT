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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
            char m_ThreatLevelInfos[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            source2sdk::client::HeroID_t m_nSelectedHeroID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_nSelectedHeroFacet; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iKills; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iAssists; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iDeaths; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iStreak; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iLevel; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomIntParam; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRespawnSeconds; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastBuybackTime; // 0x_            
            // metadata: MNetworkEnable
            // m_hSelectedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSelectedHero;
            char m_hSelectedHero[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAFK; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            source2sdk::client::HeroID_t m_nSuggestedHeroes[4]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataSelectionDirty"
            bool m_bBanSuggestedHeroes[4]; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_unCompendiumLevel; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanRepick; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanEarnRewards; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHasRandomed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nRandomedHeroID; // 0x_            
            // metadata: MNetworkEnable
            bool m_bBattleBonusActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint16_t m_iBattleBonusRate; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iCustomBuybackCost; // 0x_            
            // metadata: MNetworkEnable
            Color m_CustomPlayerColor; // 0x_            
            // metadata: MNetworkEnable
            bool m_bQualifiesForPAContractReward; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHasPredictedVictory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_UnitShareMasks; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataTeamChanged"
            std::int32_t m_iTeamSlot; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iBattleCupWinStreak; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint64_t m_iBattleCupWinDate; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_iBattleCupSkillLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_iBattleCupTeamID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iBattleCupTournamentID; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iBattleCupDivision; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flTeamFightParticipation; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iFirstBloodClaimed; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iFirstBloodGiven; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unPickOrder; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeOfLastSaluteSent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecPlayerEventData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayerResourcePlayerEventData_t> m_vecPlayerEventData;
            char m_vecPlayerEventData[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unSelectedHeroBadgeXP; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iBountyRunes; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iPowerRunes; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iWaterRunes; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iOutpostsCaptured; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildTier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint16_t m_unGuildLevel; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildPrimaryColor; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildSecondaryColor; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_unGuildPattern; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint64_t m_unGuildLogo; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unGuildFlags; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsPartyGuild; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::GuildID_t m_unGuildID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::item_definition_index_t m_unHeroStickerDefIndex; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_eHeroStickerQuality; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_eLaneSelectionFlags; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nPlayerDraftPreferredRoles; // 0x_            
            // metadata: MNetworkEnable
            std::int8_t m_nPlayerDraftPreferredTeam; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nAvailableGifts; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerTeamDataTeamFoWChanged"
            std::uint8_t m_unFowTeam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_vecItemPreferenceLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecItemPreferenceLiked;
            char m_vecItemPreferenceLiked[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_vecItemPreferenceDisliked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecItemPreferenceDisliked;
            char m_vecItemPreferenceDisliked[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_ThreatLevelInfos) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nSelectedHeroID) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nSelectedHeroFacet) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iKills) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iAssists) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iDeaths) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iStreak) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iLevel) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iCustomIntParam) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iRespawnSeconds) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_flLastBuybackTime) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_hSelectedHero) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bAFK) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nSuggestedHeroes) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bBanSuggestedHeroes) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unCompendiumLevel) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bCanRepick) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bCanEarnRewards) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bHasRandomed) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nRandomedHeroID) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bBattleBonusActive) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleBonusRate) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iCustomBuybackCost) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_CustomPlayerColor) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bQualifiesForPAContractReward) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bHasPredictedVictory) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_UnitShareMasks) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iTeamSlot) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupWinStreak) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupWinDate) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupSkillLevel) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupTeamID) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupTournamentID) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBattleCupDivision) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_flTeamFightParticipation) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iFirstBloodClaimed) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iFirstBloodGiven) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unPickOrder) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_flTimeOfLastSaluteSent) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_vecPlayerEventData) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unSelectedHeroBadgeXP) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iBountyRunes) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iPowerRunes) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iWaterRunes) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_iOutpostsCaptured) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildTier) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildLevel) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildPrimaryColor) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildSecondaryColor) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildPattern) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildLogo) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildFlags) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_bIsPartyGuild) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unGuildID) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unHeroStickerDefIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_eHeroStickerQuality) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_eLaneSelectionFlags) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredRoles) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nPlayerDraftPreferredTeam) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_nAvailableGifts) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_unFowTeam) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_vecItemPreferenceLiked) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerTeamData_t, m_vecItemPreferenceDisliked) == 0x_);
        
        static_assert(sizeof(source2sdk::server::PlayerResourcePlayerTeamData_t) == 0x_);
    };
};
