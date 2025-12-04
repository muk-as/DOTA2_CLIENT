#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // 
        // static metadata: MNetworkVarNames "float m_flKillability"
        // static metadata: MNetworkVarNames "int32 m_nEntIndex"
        #pragma pack(push, 1)
        struct DOTAThreatLevelInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flKillability; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nEntIndex; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::DOTAThreatLevelInfo_t, m_flKillability) == 0x_);
        static_assert(offsetof(source2sdk::server::DOTAThreatLevelInfo_t, m_nEntIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::server::DOTAThreatLevelInfo_t) == 0x_);
    };
};
