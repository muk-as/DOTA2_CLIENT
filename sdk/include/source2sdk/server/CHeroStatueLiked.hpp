#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerIDLiker"
        // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerIDLiked"
        #pragma pack(push, 1)
        class CHeroStatueLiked
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerIDLiker; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerIDLiked; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CHeroStatueLiked, m_iPlayerIDLiker) == 0x_);
        static_assert(offsetof(source2sdk::server::CHeroStatueLiked, m_iPlayerIDLiked) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CHeroStatueLiked) == 0x_);
    };
};
