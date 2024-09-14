#pragma once
#include "source2sdk/client/CStopwatchBase.hpp"
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
    // Size: 0x14
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CRandStopwatch : public client::CStopwatchBase
    {
    public:
        float m_minInterval; // 0xc        
        float m_maxInterval; // 0x10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRandStopwatch because it is not a standard-layout class
    static_assert(sizeof(CRandStopwatch) == 0x14);
};
