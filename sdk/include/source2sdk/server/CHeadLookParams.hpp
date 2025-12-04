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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CHeadLookParams
        {
        public:
            source2sdk::server::CHeadLookParams_HeadLookPriority_t m_LookPriority; // 0x_            
            float m_flLookDuration; // 0x_            
            source2sdk::server::INextBotReply* m_pReplyWhenAimed; // 0x_            
            char* m_pReasonStr; // 0x_            
            bool m_bWaitForSteady; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flEaseInTime; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_LookPriority) == 0x_);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_flLookDuration) == 0x_);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_pReplyWhenAimed) == 0x_);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_pReasonStr) == 0x_);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_bWaitForSteady) == 0x_);
        static_assert(offsetof(source2sdk::server::CHeadLookParams, m_flEaseInTime) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CHeadLookParams) == 0x_);
    };
};
