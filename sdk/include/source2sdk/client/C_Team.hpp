#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
    // static metadata: MNetworkVarNames "CHandle< C_BasePlayerPawn > m_aPlayers"
    // static metadata: MNetworkVarNames "int32 m_iScore"
    // static metadata: MNetworkVarNames "char m_szTeamname"
    #pragma pack(push, 1)
    class C_Team : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_aPlayers"
        // m_aPlayerControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::CBasePlayerController>> m_aPlayerControllers;
        char m_aPlayerControllers[0x18]; // 0x538        
        // metadata: MNetworkEnable
        // metadata: MNetworkAlias "m_aPawns"
        // m_aPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BasePlayerPawn>> m_aPlayers;
        char m_aPlayers[0x18]; // 0x550        
        // metadata: MNetworkEnable
        int32_t m_iScore; // 0x568        
        // metadata: MNetworkEnable
        char m_szTeamname[129]; // 0x56c        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Team because it is not a standard-layout class
    static_assert(sizeof(C_Team) == 0x5f0);
};
