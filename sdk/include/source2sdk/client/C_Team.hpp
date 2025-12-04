#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerController > m_aPlayerControllers"
        // static metadata: MNetworkVarNames "CHandle< C_BasePlayerPawn > m_aPlayers"
        // static metadata: MNetworkVarNames "int32 m_iScore"
        // static metadata: MNetworkVarNames "char m_szTeamname"
        #pragma pack(push, 1)
        class C_Team : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_aPlayers"
            // m_aPlayerControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CBasePlayerController>> m_aPlayerControllers;
            char m_aPlayerControllers[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_aPawns"
            // m_aPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BasePlayerPawn>> m_aPlayers;
            char m_aPlayers[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iScore; // 0x_            
            // metadata: MNetworkEnable
            char m_szTeamname[129]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Team because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Team) == 0x_);
    };
};
