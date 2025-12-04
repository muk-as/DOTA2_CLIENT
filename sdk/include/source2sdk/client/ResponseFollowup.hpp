#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Type ResponseFollowup is misaligned. Its size should be 0x31, but with proper alignment it has size 0x_.
        // It has been replaced by a dummy. You can try uncommenting the struct below.
        struct ResponseFollowup
        {
        public:
            uint8_t _pad_[0x_];         };
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        /*
        #pragma pack(push, 1)
        class ResponseFollowup
        {
        public:
            char* followup_concept; // 0x_            
            char* followup_contexts; // 0x_            
            float followup_delay; // 0x_            
            // Property ResponseFollowup::followup_target is misaligned.
            char followup_target[0x_];
            // char* followup_target; // 0x_            
            // Property ResponseFollowup::followup_entityiotarget is misaligned.
            char followup_entityiotarget[0x_];
            // char* followup_entityiotarget; // 0x_            
            // Property ResponseFollowup::followup_entityioinput is misaligned.
            char followup_entityioinput[0x_];
            // char* followup_entityioinput; // 0x_            
            float followup_entityiodelay; // 0x_            
            bool bFired; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ResponseFollowup, followup_concept) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseFollowup, followup_contexts) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseFollowup, followup_delay) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseFollowup, followup_target) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseFollowup, followup_entityiotarget) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseFollowup, followup_entityioinput) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseFollowup, followup_entityiodelay) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseFollowup, bFired) == 0x_);
        */
        
        static_assert(sizeof(source2sdk::client::ResponseFollowup) == 0x_);
    };
};
