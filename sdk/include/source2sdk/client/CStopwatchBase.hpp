#pragma once
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xc
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CStopwatchBase : public client::CSimpleSimTimer
    {
    public:
        bool m_fIsRunning; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CStopwatchBase because it is not a standard-layout class
    static_assert(sizeof(CStopwatchBase) == 0xc);
};
