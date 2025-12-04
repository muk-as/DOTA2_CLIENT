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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct SoundOpvarTraceResult_t
        {
        public:
            Vector vPos; // 0x_            
            bool bDidHit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float flDistSqrToCenter; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::SoundOpvarTraceResult_t, vPos) == 0x_);
        static_assert(offsetof(source2sdk::server::SoundOpvarTraceResult_t, bDidHit) == 0x_);
        static_assert(offsetof(source2sdk::server::SoundOpvarTraceResult_t, flDistSqrToCenter) == 0x_);
        
        static_assert(sizeof(source2sdk::server::SoundOpvarTraceResult_t) == 0x_);
    };
};
