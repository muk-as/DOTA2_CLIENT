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
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CRandSimTimer : public client::CSimpleSimTimer
    {
    public:
        float m_minInterval; // 0x8        
        float m_maxInterval; // 0xc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRandSimTimer because it is not a standard-layout class
    static_assert(sizeof(CRandSimTimer) == 0x10);
};
