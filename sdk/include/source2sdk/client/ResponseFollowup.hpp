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
    // Type ResponseFollowup is misaligned. Its size should be 0x31, but with proper alignment it has size 0x38.
    // It has been replaced by a dummy. You can try uncommenting the struct below.
    struct ResponseFollowup
    {
    public:
        std::uint8_t pad_0x00[0x31];
    };
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x31
    // Has Trivial Destructor
    /*
    #pragma pack(push, 1)
    class ResponseFollowup
    {
    public:
        char* followup_concept; // 0x0        
        char* followup_contexts; // 0x8        
        float followup_delay; // 0x10        
        // Property ResponseFollowup::followup_target is misaligned.
        char followup_target[0x8];
        // char* followup_target; // 0x14        
        // Property ResponseFollowup::followup_entityiotarget is misaligned.
        char followup_entityiotarget[0x8];
        // char* followup_entityiotarget; // 0x1c        
        // Property ResponseFollowup::followup_entityioinput is misaligned.
        char followup_entityioinput[0x8];
        // char* followup_entityioinput; // 0x24        
        float followup_entityiodelay; // 0x2c        
        bool bFired; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ResponseFollowup, followup_concept) == 0x0);
    static_assert(offsetof(ResponseFollowup, followup_contexts) == 0x8);
    static_assert(offsetof(ResponseFollowup, followup_delay) == 0x10);
    static_assert(offsetof(ResponseFollowup, followup_target) == 0x14);
    static_assert(offsetof(ResponseFollowup, followup_entityiotarget) == 0x1c);
    static_assert(offsetof(ResponseFollowup, followup_entityioinput) == 0x24);
    static_assert(offsetof(ResponseFollowup, followup_entityiodelay) == 0x2c);
    static_assert(offsetof(ResponseFollowup, bFired) == 0x30);
    */
    
    static_assert(sizeof(ResponseFollowup) == 0x31);
};
