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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct locksound_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge sLockedSound; // 0x_            
            CUtlSymbolLarge sUnlockedSound; // 0x_            
            source2sdk::entity2::GameTime_t flwaitSound; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::locksound_t, sLockedSound) == 0x_);
        static_assert(offsetof(source2sdk::server::locksound_t, sUnlockedSound) == 0x_);
        static_assert(offsetof(source2sdk::server::locksound_t, flwaitSound) == 0x_);
        
        static_assert(sizeof(source2sdk::server::locksound_t) == 0x_);
    };
};
