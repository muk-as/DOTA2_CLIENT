#pragma once
#include "source2sdk/server/CTeam.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_iHeroKills"
    // static metadata: MNetworkVarNames "int m_iTowerKills"
    // static metadata: MNetworkVarNames "int m_iBarracksKills"
    // static metadata: MNetworkVarNames "uint32 m_unTournamentTeamID"
    // static metadata: MNetworkVarNames "uint64 m_ulTeamLogo"
    // static metadata: MNetworkVarNames "uint64 m_ulTeamBaseLogo"
    // static metadata: MNetworkVarNames "uint64 m_ulTeamBannerLogo"
    // static metadata: MNetworkVarNames "bool m_bTeamComplete"
    // static metadata: MNetworkVarNames "bool m_bTeamIsHomeTeam"
    // static metadata: MNetworkVarNames "bool m_bTeamCanSeeRoshanTimer"
    // static metadata: MNetworkVarNames "bool m_bTeamCanSeeNextPowerRune"
    // static metadata: MNetworkVarNames "Color m_CustomHealthbarColor"
    // static metadata: MNetworkVarNames "char m_szTag"
    #pragma pack(push, 1)
    class CDOTATeam : public server::CTeam
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x598[0x10]; // 0x598
        // metadata: MNetworkEnable
        int32_t m_iHeroKills; // 0x5a8        
        // metadata: MNetworkEnable
        int32_t m_iTowerKills; // 0x5ac        
        // metadata: MNetworkEnable
        int32_t m_iBarracksKills; // 0x5b0        
        // metadata: MNetworkEnable
        uint32_t m_unTournamentTeamID; // 0x5b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_ulTeamLogo; // 0x5b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_ulTeamBaseLogo; // 0x5c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_ulTeamBannerLogo; // 0x5c8        
        // metadata: MNetworkEnable
        bool m_bTeamComplete; // 0x5d0        
        // metadata: MNetworkEnable
        bool m_bTeamIsHomeTeam; // 0x5d1        
        // metadata: MNetworkEnable
        bool m_bTeamCanSeeRoshanTimer; // 0x5d2        
        // metadata: MNetworkEnable
        bool m_bTeamCanSeeNextPowerRune; // 0x5d3        
        // metadata: MNetworkEnable
        Color m_CustomHealthbarColor; // 0x5d4        
        // metadata: MNetworkEnable
        char m_szTag[33]; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x3]; // 0x5f9
        int32_t m_event_lobby_updated; // 0x5fc        
        int32_t m_nKillStreak; // 0x600        
        int32_t m_iRecentKillCount; // 0x604        
        int32_t m_iRandomNumber; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4]; // 0x60c
        server::CountdownTimer m_RecentHeroKillTimer; // 0x610        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTATeam because it is not a standard-layout class
    static_assert(sizeof(CDOTATeam) == 0x628);
};
