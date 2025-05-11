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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct SoundOpvarTraceResult_t
        {
        public:
            Vector vPos; // 0x0            
            bool bDidHit; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            float flDistSqrToCenter; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::SoundOpvarTraceResult_t, vPos) == 0x0);
        static_assert(offsetof(source2sdk::server::SoundOpvarTraceResult_t, bDidHit) == 0xc);
        static_assert(offsetof(source2sdk::server::SoundOpvarTraceResult_t, flDistSqrToCenter) == 0x10);
        
        static_assert(sizeof(source2sdk::server::SoundOpvarTraceResult_t) == 0x14);
    };
};
