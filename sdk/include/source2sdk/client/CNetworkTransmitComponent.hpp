#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x1c8
        // Has VTable
        #pragma pack(push, 1)
        class CNetworkTransmitComponent
        {
        public:
            uint8_t _pad0000[0x184]; // 0x0
            std::uint8_t m_nTransmitStateOwnedCounter; // 0x184            
            uint8_t _pad0185[0x43];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkTransmitComponent, m_nTransmitStateOwnedCounter) == 0x184);
        
        static_assert(sizeof(source2sdk::client::CNetworkTransmitComponent) == 0x1c8);
    };
};
