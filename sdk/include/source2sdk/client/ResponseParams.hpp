#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct ResponseFollowup;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class ResponseParams
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int16_t odds; // 0x_            
            std::int16_t flags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ResponseFollowup* m_pFollowup; // 0x_            
            
            // Datamap fields:
            // int32_t delay; // 0x_
            // int32_t respeakdelay; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ResponseParams, odds) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseParams, flags) == 0x_);
        static_assert(offsetof(source2sdk::client::ResponseParams, m_pFollowup) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ResponseParams) == 0x_);
    };
};
