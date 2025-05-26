#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTeam.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
        // static metadata: MNetworkVarNames "bool m_bTeamCanSeeExactRoshanTimer"
        // static metadata: MNetworkVarNames "bool m_bTeamCanSeeNextPowerRune"
        // static metadata: MNetworkVarNames "Color m_CustomHealthbarColor"
        // static metadata: MNetworkVarNames "char m_szTag"
        #pragma pack(push, 1)
        class CDOTATeam : public source2sdk::server::CTeam
        {
        public:
            uint8_t _pad0598[0x10]; // 0x598
            // metadata: MNetworkEnable
            std::int32_t m_iHeroKills; // 0x5a8            
            // metadata: MNetworkEnable
            std::int32_t m_iTowerKills; // 0x5ac            
            // metadata: MNetworkEnable
            std::int32_t m_iBarracksKills; // 0x5b0            
            // metadata: MNetworkEnable
            std::uint32_t m_unTournamentTeamID; // 0x5b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamLogo; // 0x5b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamBaseLogo; // 0x5c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamBannerLogo; // 0x5c8            
            // metadata: MNetworkEnable
            bool m_bTeamComplete; // 0x5d0            
            // metadata: MNetworkEnable
            bool m_bTeamIsHomeTeam; // 0x5d1            
            // metadata: MNetworkEnable
            bool m_bTeamCanSeeExactRoshanTimer; // 0x5d2            
            // metadata: MNetworkEnable
            bool m_bTeamCanSeeNextPowerRune; // 0x5d3            
            // metadata: MNetworkEnable
            Color m_CustomHealthbarColor; // 0x5d4            
            // metadata: MNetworkEnable
            char m_szTag[33]; // 0x5d8            
            uint8_t _pad05f9[0x3]; // 0x5f9
            std::int32_t m_event_lobby_updated; // 0x5fc            
            std::int32_t m_nKillStreak; // 0x600            
            std::int32_t m_iRecentKillCount; // 0x604            
            std::int32_t m_iRandomNumber; // 0x608            
            uint8_t _pad060c[0x4]; // 0x60c
            source2sdk::server::CountdownTimer m_RecentHeroKillTimer; // 0x610            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTATeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTATeam) == 0x628);
    };
};
