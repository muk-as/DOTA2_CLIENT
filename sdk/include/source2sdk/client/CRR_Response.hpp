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
        // Size: 0x1e8
        #pragma pack(push, 1)
        class CRR_Response
        {
        public:
            std::uint8_t m_Type; // 0x0            
            char m_szResponseName[192]; // 0x1            
            char m_szMatchingRule[128]; // 0xc1            
            uint8_t _pad0141[0x7]; // 0x141
            source2sdk::client::ResponseParams m_Params; // 0x148            
            float m_fMatchScore; // 0x168            
            uint8_t _pad016c[0x4]; // 0x16c
            char* m_szSpeakerContext; // 0x170            
            char* m_szWorldContext; // 0x178            
            source2sdk::client::ResponseFollowup m_Followup; // 0x180            
            uint8_t _pad01b1[0x1]; // 0x1b1
            CUtlSymbol m_recipientFilter; // 0x1b2            
            uint8_t _pad01b4[0x4]; // 0x1b4
            // m_pchCriteriaNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_pchCriteriaNames;
            char m_pchCriteriaNames[0x18]; // 0x1b8            
            // m_pchCriteriaValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_pchCriteriaValues;
            char m_pchCriteriaValues[0x18]; // 0x1d0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Type) == 0x0);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szResponseName) == 0x1);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szMatchingRule) == 0xc1);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Params) == 0x148);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_fMatchScore) == 0x168);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szSpeakerContext) == 0x170);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_szWorldContext) == 0x178);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_Followup) == 0x180);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_recipientFilter) == 0x1b2);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_pchCriteriaNames) == 0x1b8);
        static_assert(offsetof(source2sdk::client::CRR_Response, m_pchCriteriaValues) == 0x1d0);
        
        static_assert(sizeof(source2sdk::client::CRR_Response) == 0x1e8);
    };
};
