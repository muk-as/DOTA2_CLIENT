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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct PlayerSeatAssignment_t
        {
        public:
            std::uint32_t unAccountID; // 0x0            
            std::uint32_t unSeat; // 0x4            
            std::uint32_t unReversedSeat; // 0x8            
            std::uint32_t unTeamID; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unAccountID) == 0x0);
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unSeat) == 0x4);
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unReversedSeat) == 0x8);
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unTeamID) == 0xc);
        
        static_assert(sizeof(source2sdk::client::PlayerSeatAssignment_t) == 0x10);
    };
};
