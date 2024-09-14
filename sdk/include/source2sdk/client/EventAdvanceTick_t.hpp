#pragma once
#include "source2sdk/client/EventSimulate_t.hpp"
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
    // Size: 0x40
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct EventAdvanceTick_t : public client::EventSimulate_t
    {
    public:
        int32_t m_nCurrentTick; // 0x30        
        int32_t m_nCurrentTickThisFrame; // 0x34        
        int32_t m_nTotalTicksThisFrame; // 0x38        
        int32_t m_nTotalTicks; // 0x3c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in EventAdvanceTick_t because it is not a standard-layout class
    static_assert(sizeof(EventAdvanceTick_t) == 0x40);
};
