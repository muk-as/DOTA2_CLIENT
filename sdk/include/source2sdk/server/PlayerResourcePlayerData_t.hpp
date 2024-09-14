#pragma once
#include "source2sdk/client/CavernCrawlMapVariant_t.hpp"
#include "source2sdk/client/DOTATeam_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xf0
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        bool m_bIsValid; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x31[0x7]; // 0x31
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerNamesChanged"
        CUtlSymbolLarge m_iszPlayerName; // 0x38        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamChanged"
        int32_t m_iPlayerTeam; // 0x40        
        // metadata: MNetworkEnable
        bool m_bFullyJoinedServer; // 0x44        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFakeClientChanged"
        bool m_bFakeClient; // 0x45        
        // metadata: MNetworkEnable
        bool m_bIsBroadcaster; // 0x46        
        [[maybe_unused]] std::uint8_t pad_0x47[0x1]; // 0x47
        // metadata: MNetworkEnable
        uint32_t m_iBroadcasterChannel; // 0x48        
        // metadata: MNetworkEnable
        uint32_t m_iBroadcasterChannelSlot; // 0x4c        
        // metadata: MNetworkEnable
        bool m_bIsBroadcasterChannelCameraman; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerConnectionStateChanged"
        int32_t m_iConnectionState; // 0x54        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnPlayerSteamIDsChanged"
        uint64_t m_iPlayerSteamID; // 0x58        
        // metadata: MNetworkEnable
        client::DOTATeam_t m_eCoachTeam; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4]; // 0x64
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerCoachedPlayerIDsChanged"
        // m_vecPrivateCoachPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::PlayerID_t> m_vecPrivateCoachPlayerIDs;
        char m_vecPrivateCoachPlayerIDs[0x18]; // 0x68        
        // metadata: MNetworkEnable
        uint32_t m_unCoachRating; // 0x80        
        // metadata: MNetworkEnable
        client::DOTATeam_t m_eLiveSpectatorTeam; // 0x84        
        // metadata: MNetworkEnable
        int32_t m_nLiveSpectatorSpectatedHeroIndex; // 0x88        
        // metadata: MNetworkEnable
        bool m_bIsPlusSubscriber; // 0x8c        
        // metadata: MNetworkEnable
        bool m_bWasMVPLastGame; // 0x8d        
        // metadata: MNetworkEnable
        client::CavernCrawlMapVariant_t m_nCavernCrawlMapVariant; // 0x8e        
        [[maybe_unused]] std::uint8_t pad_0x8f[0x1]; // 0x8f
        // metadata: MNetworkEnable
        int32_t m_eAccoladeType[3]; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x9c[0x4]; // 0x9c
        // metadata: MNetworkEnable
        uint64_t m_unAccoladeData[3]; // 0xa0        
        // metadata: MNetworkEnable
        int32_t m_iRankTier; // 0xb8        
        // metadata: MNetworkEnable
        int32_t m_iLeaderboardRank; // 0xbc        
        // metadata: MNetworkEnable
        int32_t m_eMmrBoostType; // 0xc0        
        // metadata: MNetworkEnable
        int32_t m_iTitle; // 0xc4        
        // metadata: MNetworkEnable
        uint64_t m_unFavTeamPacked; // 0xc8        
        // metadata: MNetworkEnable
        CPlayerSlot m_nPlayerSlot; // 0xd0        
        // metadata: MNetworkEnable
        bool m_bIsBot; // 0xd4        
        // metadata: MNetworkEnable
        bool m_bHasNeutralTier[5]; // 0xd5        
        // metadata: MNetworkEnable
        bool m_bHasRedeemedNeutralTier[5]; // 0xda        
        [[maybe_unused]] std::uint8_t pad_0xdf[0x1]; // 0xdf
        // metadata: MNetworkEnable
        int32_t m_nCommLevel; // 0xe0        
        // metadata: MNetworkEnable
        int32_t m_nBehaviorLevel; // 0xe4        
        // metadata: MNetworkEnable
        float m_flLastCommsTime; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bIsValid) == 0x30);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iszPlayerName) == 0x38);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iPlayerTeam) == 0x40);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bFullyJoinedServer) == 0x44);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bFakeClient) == 0x45);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bIsBroadcaster) == 0x46);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iBroadcasterChannel) == 0x48);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iBroadcasterChannelSlot) == 0x4c);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bIsBroadcasterChannelCameraman) == 0x50);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iConnectionState) == 0x54);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iPlayerSteamID) == 0x58);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_eCoachTeam) == 0x60);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_vecPrivateCoachPlayerIDs) == 0x68);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_unCoachRating) == 0x80);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_eLiveSpectatorTeam) == 0x84);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_nLiveSpectatorSpectatedHeroIndex) == 0x88);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bIsPlusSubscriber) == 0x8c);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bWasMVPLastGame) == 0x8d);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_nCavernCrawlMapVariant) == 0x8e);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_eAccoladeType) == 0x90);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_unAccoladeData) == 0xa0);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iRankTier) == 0xb8);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iLeaderboardRank) == 0xbc);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_eMmrBoostType) == 0xc0);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_iTitle) == 0xc4);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_unFavTeamPacked) == 0xc8);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_nPlayerSlot) == 0xd0);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bIsBot) == 0xd4);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bHasNeutralTier) == 0xd5);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_bHasRedeemedNeutralTier) == 0xda);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_nCommLevel) == 0xe0);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_nBehaviorLevel) == 0xe4);
    static_assert(offsetof(PlayerResourcePlayerData_t, m_flLastCommsTime) == 0xe8);
    
    static_assert(sizeof(PlayerResourcePlayerData_t) == 0xf0);
};
