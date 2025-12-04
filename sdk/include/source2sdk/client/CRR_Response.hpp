#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ResponseFollowup.hpp"
#include "source2sdk/client/ResponseParams.hpp"

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
        #pragma pack(push, 1)
        class CRR_Response
        {
        public:
            std::uint8_t m_Type; // 0x_            
            char m_szResponseName[192]; // 0x_            
            char m_szMatchingRule[128]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ResponseParams m_Params; // 0x_            
            float m_fMatchScore; // 0x_            
            bool m_bAnyMatchingRulesInCooldown; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_szSpeakerContext; // 0x_            
            char* m_szWorldContext; // 0x_            
            source2sdk::client::ResponseFollowup m_Followup; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbol m_recipientFilter; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Type) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szResponseName) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szMatchingRule) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Params) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_fMatchScore) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_bAnyMatchingRulesInCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szSpeakerContext) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szWorldContext) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Followup) == 0x_);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_recipientFilter) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CRR_Response) == 0x_);
    };
};
