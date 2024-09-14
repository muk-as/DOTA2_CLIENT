#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerController;
};

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x570
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerPawn > m_aPlayers"
    // static metadata: MNetworkVarNames "int32 m_iScore"
    // static metadata: MNetworkVarNames "char m_szTeamname"
    #pragma pack(push, 1)
    class CTeam : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_aPlayers"
        // m_aPlayerControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBasePlayerController>> m_aPlayerControllers;
        char m_aPlayerControllers[0x18]; // 0x4b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_aPawns"
        // m_aPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBasePlayerPawn>> m_aPlayers;
        char m_aPlayers[0x18]; // 0x4d0        
        // metadata: MNetworkEnable
        int32_t m_iScore; // 0x4e8        
        // metadata: MNetworkEnable
        char m_szTeamname[129]; // 0x4ec        
        [[maybe_unused]] std::uint8_t pad_0x56d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTeam because it is not a standard-layout class
    static_assert(sizeof(CTeam) == 0x570);
};
