#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PeriodicResourceID_t.hpp"

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
        // static metadata: MNetworkVarNames "PeriodicResourceID_t m_unPeriodicResourceID"
        // static metadata: MNetworkVarNames "uint32 m_unPeriodicResourceMax"
        // static metadata: MNetworkVarNames "uint32 m_unPeriodicResourceRemaining"
        #pragma pack(push, 1)
        struct PlayerResourcePlayerPeriodicResourceData_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PeriodicResourceID_t m_unPeriodicResourceID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unPeriodicResourceMax; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unPeriodicResourceRemaining; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceID) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceMax) == 0x_);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceRemaining) == 0x_);
        
        static_assert(sizeof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t) == 0x_);
    };
};
