#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTime"
        // static metadata: MNetworkVarNames "Vector2D m_vPosition"
        // static metadata: MNetworkVarNames "bool m_bIsOutpost"
        #pragma pack(push, 1)
        struct DOTATeleportInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTime; // 0x_            
            // metadata: MNetworkEnable
            Vector2D m_vPosition; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsOutpost; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTATeleportInfo_t, m_flTime) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTATeleportInfo_t, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTATeleportInfo_t, m_bIsOutpost) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DOTATeleportInfo_t) == 0x_);
    };
};
