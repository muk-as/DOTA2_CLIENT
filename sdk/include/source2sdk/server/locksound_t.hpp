#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct locksound_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlSymbolLarge sLockedSound; // 0x8            
            CUtlSymbolLarge sUnlockedSound; // 0x10            
            source2sdk::entity2::GameTime_t flwaitSound; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::locksound_t, sLockedSound) == 0x8);
        static_assert(offsetof(source2sdk::server::locksound_t, sUnlockedSound) == 0x10);
        static_assert(offsetof(source2sdk::server::locksound_t, flwaitSound) == 0x18);
        
        static_assert(sizeof(source2sdk::server::locksound_t) == 0x20);
    };
};
