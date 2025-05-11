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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "PeriodicResourceID_t m_unPeriodicResourceID"
        // static metadata: MNetworkVarNames "uint32 m_unPeriodicResourceMax"
        // static metadata: MNetworkVarNames "uint32 m_unPeriodicResourceRemaining"
        #pragma pack(push, 1)
        struct PlayerResourcePlayerPeriodicResourceData_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::PeriodicResourceID_t m_unPeriodicResourceID; // 0x30            
            // metadata: MNetworkEnable
            std::uint32_t m_unPeriodicResourceMax; // 0x34            
            // metadata: MNetworkEnable
            std::uint32_t m_unPeriodicResourceRemaining; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceID) == 0x30);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceMax) == 0x34);
        static_assert(offsetof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceRemaining) == 0x38);
        
        static_assert(sizeof(source2sdk::server::PlayerResourcePlayerPeriodicResourceData_t) == 0x40);
    };
};
