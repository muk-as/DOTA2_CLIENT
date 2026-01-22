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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iHeroKills; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTowerKills; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iBarracksKills; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unTournamentTeamID; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamLogo; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamBaseLogo; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamBannerLogo; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTeamComplete; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTeamIsHomeTeam; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTeamCanSeeExactRoshanTimer; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTeamCanSeeNextPowerRune; // 0x_            
            std::int32_t m_nTeamCanSeeNextPowerRuneRefs; // 0x_            
            // metadata: MNetworkEnable
            Color m_CustomHealthbarColor; // 0x_            
            // metadata: MNetworkEnable
            char m_szTag[33]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_event_lobby_updated; // 0x_            
            std::int32_t m_nKillStreak; // 0x_            
            std::int32_t m_iRecentKillCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_RecentHeroKillTimer; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTATeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTATeam) == 0x_);
    };
};
