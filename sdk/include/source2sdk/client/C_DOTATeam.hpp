#pragma once
#include "source2sdk/client/C_Team.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x670
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
    class C_DOTATeam : public client::C_Team
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iHeroKills; // 0x618        
        // metadata: MNetworkEnable
        int32_t m_iTowerKills; // 0x61c        
        // metadata: MNetworkEnable
        int32_t m_iBarracksKills; // 0x620        
        // metadata: MNetworkEnable
        uint32_t m_unTournamentTeamID; // 0x624        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_ulTeamLogo; // 0x628        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_ulTeamBaseLogo; // 0x630        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_ulTeamBannerLogo; // 0x638        
        // metadata: MNetworkEnable
        bool m_bTeamComplete; // 0x640        
        // metadata: MNetworkEnable
        bool m_bTeamIsHomeTeam; // 0x641        
        // metadata: MNetworkEnable
        bool m_bTeamCanSeeRoshanTimer; // 0x642        
        // metadata: MNetworkEnable
        bool m_bTeamCanSeeNextPowerRune; // 0x643        
        // metadata: MNetworkEnable
        Color m_CustomHealthbarColor; // 0x644        
        // metadata: MNetworkEnable
        char m_szTag[33]; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x669[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTATeam because it is not a standard-layout class
    static_assert(sizeof(C_DOTATeam) == 0x670);
};
