#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x598
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerPawn > m_aPlayers"
        // static metadata: MNetworkVarNames "int32 m_iScore"
        // static metadata: MNetworkVarNames "char m_szTeamname"
        #pragma pack(push, 1)
        class CTeam : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_aPlayers"
            // m_aPlayerControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBasePlayerController>> m_aPlayerControllers;
            char m_aPlayerControllers[0x18]; // 0x4e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_aPawns"
            // m_aPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBasePlayerPawn>> m_aPlayers;
            char m_aPlayers[0x18]; // 0x4f8            
            // metadata: MNetworkEnable
            std::int32_t m_iScore; // 0x510            
            // metadata: MNetworkEnable
            char m_szTeamname[129]; // 0x514            
            uint8_t _pad0595[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTeam) == 0x598);
    };
};
