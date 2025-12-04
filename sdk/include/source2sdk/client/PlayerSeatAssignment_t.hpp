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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct PlayerSeatAssignment_t
        {
        public:
            std::uint32_t unAccountID; // 0x_            
            std::uint32_t unSeat; // 0x_            
            std::uint32_t unReversedSeat; // 0x_            
            std::uint32_t unTeamID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unAccountID) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unSeat) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unReversedSeat) == 0x_);
        static_assert(offsetof(source2sdk::client::PlayerSeatAssignment_t, unTeamID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PlayerSeatAssignment_t) == 0x_);
    };
};
