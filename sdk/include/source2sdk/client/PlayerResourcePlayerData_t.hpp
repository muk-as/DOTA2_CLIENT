#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CavernCrawlMapVariant_t.hpp"
#include "source2sdk/client/DOTATeam_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsValid"
        // static metadata: MNetworkVarNames "string_t m_iszPlayerName"
        // static metadata: MNetworkVarNames "int m_iPlayerTeam"
        // static metadata: MNetworkVarNames "bool m_bFullyJoinedServer"
        // static metadata: MNetworkVarNames "bool m_bFakeClient"
        // static metadata: MNetworkVarNames "bool m_bIsBroadcaster"
        // static metadata: MNetworkVarNames "uint32 m_iBroadcasterChannel"
        // static metadata: MNetworkVarNames "uint32 m_iBroadcasterChannelSlot"
        // static metadata: MNetworkVarNames "bool m_bIsBroadcasterChannelCameraman"
        // static metadata: MNetworkVarNames "int m_iConnectionState"
        // static metadata: MNetworkVarNames "uint64 m_iPlayerSteamID"
        // static metadata: MNetworkVarNames "DOTATeam_t m_eCoachTeam"
        // static metadata: MNetworkVarNames "PlayerID_t m_vecPrivateCoachPlayerIDs"
        // static metadata: MNetworkVarNames "CoachRating_t m_unCoachRating"
        // static metadata: MNetworkVarNames "DOTATeam_t m_eLiveSpectatorTeam"
        // static metadata: MNetworkVarNames "int m_nLiveSpectatorSpectatedHeroIndex"
        // static metadata: MNetworkVarNames "bool m_bIsPlusSubscriber"
        // static metadata: MNetworkVarNames "bool m_bWasMVPLastGame"
        // static metadata: MNetworkVarNames "CavernCrawlMapVariant_t m_nCavernCrawlMapVariant"
        // static metadata: MNetworkVarNames "int m_eAccoladeType"
        // static metadata: MNetworkVarNames "uint64 m_unAccoladeData"
        // static metadata: MNetworkVarNames "int m_iRankTier"
        // static metadata: MNetworkVarNames "int m_iLeaderboardRank"
        // static metadata: MNetworkVarNames "int m_eMmrBoostType"
        // static metadata: MNetworkVarNames "int m_iTitle"
        // static metadata: MNetworkVarNames "uint64 m_unFavTeamPacked"
        // static metadata: MNetworkVarNames "CPlayerSlot m_nPlayerSlot"
        // static metadata: MNetworkVarNames "bool m_bIsBot"
        // static metadata: MNetworkVarNames "bool m_bHasNeutralTier"
        // static metadata: MNetworkVarNames "bool m_bHasRedeemedNeutralTier"
        // static metadata: MNetworkVarNames "int m_nCommLevel"
        // static metadata: MNetworkVarNames "int m_nBehaviorLevel"
        // static metadata: MNetworkVarNames "float m_flLastCommsTime"
        #pragma pack(push, 1)
        struct PlayerResourcePlayerData_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bIsValid; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerDataPlayerNamesChanged"
            CUtlSymbolLarge m_iszPlayerName; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerDataTeamChanged"
            std::int32_t m_iPlayerTeam; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFullyJoinedServer; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerDataFakeClientChanged"
            bool m_bFakeClient; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsBroadcaster; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_iBroadcasterChannel; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_iBroadcasterChannelSlot; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsBroadcasterChannelCameraman; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerDataPlayerConnectionStateChanged"
            std::int32_t m_iConnectionState; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnPlayerDataPlayerSteamIDsChanged"
            std::uint64_t m_iPlayerSteamID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::DOTATeam_t m_eCoachTeam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerDataPlayerCoachedPlayerIDsChanged"
            // m_vecPrivateCoachPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::PlayerID_t> m_vecPrivateCoachPlayerIDs;
            char m_vecPrivateCoachPlayerIDs[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unCoachRating; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::DOTATeam_t m_eLiveSpectatorTeam; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nLiveSpectatorSpectatedHeroIndex; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsPlusSubscriber; // 0x_            
            // metadata: MNetworkEnable
            bool m_bWasMVPLastGame; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::CavernCrawlMapVariant_t m_nCavernCrawlMapVariant; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_eAccoladeType[3]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint64_t m_unAccoladeData[3]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRankTier; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iLeaderboardRank; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_eMmrBoostType; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTitle; // 0x_            
            // metadata: MNetworkEnable
            std::uint64_t m_unFavTeamPacked; // 0x_            
            // metadata: MNetworkEnable
            CPlayerSlot m_nPlayerSlot; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsBot; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHasNeutralTier[5]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bHasRedeemedNeutralTier[5]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nCommLevel; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nBehaviorLevel; // 0x_            
            // metadata: MNetworkEnable
            float m_flLastCommsTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bIsValid) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iszPlayerName) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iPlayerTeam) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bFullyJoinedServer) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bFakeClient) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bIsBroadcaster) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iBroadcasterChannel) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iBroadcasterChannelSlot) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bIsBroadcasterChannelCameraman) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iConnectionState) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iPlayerSteamID) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_eCoachTeam) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_vecPrivateCoachPlayerIDs) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_unCoachRating) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_eLiveSpectatorTeam) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_nLiveSpectatorSpectatedHeroIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bIsPlusSubscriber) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bWasMVPLastGame) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_nCavernCrawlMapVariant) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_eAccoladeType) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_unAccoladeData) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iRankTier) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iLeaderboardRank) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_eMmrBoostType) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_iTitle) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_unFavTeamPacked) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_nPlayerSlot) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bIsBot) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bHasNeutralTier) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_bHasRedeemedNeutralTier) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_nCommLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_nBehaviorLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerData_t, m_flLastCommsTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PlayerResourcePlayerData_t) == 0x_);
    };
};
