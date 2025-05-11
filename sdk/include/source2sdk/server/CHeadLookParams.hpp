#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CHeadLookParams_HeadLookPriority_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct INextBotReply;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CHeadLookParams
        {
        public:
            source2sdk::server::CHeadLookParams_HeadLookPriority_t m_LookPriority; // 0x0            
            float m_flLookDuration; // 0x4            
            source2sdk::server::INextBotReply* m_pReplyWhenAimed; // 0x8            
            char* m_pReasonStr; // 0x10            
            bool m_bWaitForSteady; // 0x18            
            uint8_t _pad0019[0x3]; // 0x19
            float m_flEaseInTime; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_LookPriority) == 0x0);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_flLookDuration) == 0x4);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_pReplyWhenAimed) == 0x8);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_pReasonStr) == 0x10);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_bWaitForSteady) == 0x18);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_flEaseInTime) == 0x1c);
        
        static_assert(sizeof(source2sdk::server::CHeadLookParams) == 0x20);
    };
};
