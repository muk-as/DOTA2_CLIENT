#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class ResponseFollowup;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class ResponseParams
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        int16_t odds; // 0x10        
        int16_t flags; // 0x12        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        client::ResponseFollowup* m_pFollowup; // 0x18        
        
        // Datamap fields:
        // int32_t delay; // 0x0
        // int32_t respeakdelay; // 0x4
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ResponseParams, odds) == 0x10);
    static_assert(offsetof(ResponseParams, flags) == 0x12);
    static_assert(offsetof(ResponseParams, m_pFollowup) == 0x18);
    
    static_assert(sizeof(ResponseParams) == 0x20);
};
