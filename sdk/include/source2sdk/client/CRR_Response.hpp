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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x1d0
        #pragma pack(push, 1)
        class CRR_Response
        {
        public:
            std::uint8_t m_Type; // 0x0            
            char m_szResponseName[192]; // 0x1            
            char m_szMatchingRule[128]; // 0xc1            
            uint8_t _pad0141[0x1f]; // 0x141
            source2sdk::client::ResponseParams m_Params; // 0x160            
            float m_fMatchScore; // 0x180            
            bool m_bAnyMatchingRulesInCooldown; // 0x184            
            uint8_t _pad0185[0x3]; // 0x185
            char* m_szSpeakerContext; // 0x188            
            char* m_szWorldContext; // 0x190            
            source2sdk::client::ResponseFollowup m_Followup; // 0x198            
            uint8_t _pad01c9[0x1]; // 0x1c9
            CUtlSymbol m_recipientFilter; // 0x1ca            
            uint8_t _pad01cc[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Type) == 0x0);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szResponseName) == 0x1);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szMatchingRule) == 0xc1);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Params) == 0x160);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_fMatchScore) == 0x180);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_bAnyMatchingRulesInCooldown) == 0x184);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szSpeakerContext) == 0x188);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szWorldContext) == 0x190);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Followup) == 0x198);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_recipientFilter) == 0x1ca);
        
        static_assert(sizeof(source2sdk::client::CRR_Response) == 0x1d0);
    };
};
