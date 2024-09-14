#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
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
        [[maybe_unused]] std::uint8_t pad_0x0d[0x3]; // 0xd
        float flDistSqrToCenter; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SoundOpvarTraceResult_t, vPos) == 0x0);
    static_assert(offsetof(SoundOpvarTraceResult_t, bDidHit) == 0xc);
    static_assert(offsetof(SoundOpvarTraceResult_t, flDistSqrToCenter) == 0x10);
    
    static_assert(sizeof(SoundOpvarTraceResult_t) == 0x14);
};
