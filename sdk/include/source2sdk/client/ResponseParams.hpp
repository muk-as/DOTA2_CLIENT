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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class ResponseParams
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            std::int16_t odds; // 0x10            
            std::int16_t flags; // 0x12            
            uint8_t _pad0014[0x4]; // 0x14
            source2sdk::client::ResponseFollowup* m_pFollowup; // 0x18            
            
            // Datamap fields:
            // int32_t delay; // 0x0
            // int32_t respeakdelay; // 0x4
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ResponseParams, odds) == 0x10);
        static_assert(offsetof(source2sdk::client::ResponseParams, flags) == 0x12);
        static_assert(offsetof(source2sdk::client::ResponseParams, m_pFollowup) == 0x18);
        
        static_assert(sizeof(source2sdk::client::ResponseParams) == 0x20);
    };
};
