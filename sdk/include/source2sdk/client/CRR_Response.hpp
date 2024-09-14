#pragma once
#include "source2sdk/client/ResponseFollowup.hpp"
#include "source2sdk/client/ResponseParams.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1e8
    #pragma pack(push, 1)
    class CRR_Response
    {
    public:
        uint8_t m_Type; // 0x0        
        char m_szResponseName[192]; // 0x1        
        char m_szMatchingRule[128]; // 0xc1        
        [[maybe_unused]] std::uint8_t pad_0x141[0x7]; // 0x141
        client::ResponseParams m_Params; // 0x148        
        float m_fMatchScore; // 0x168        
        [[maybe_unused]] std::uint8_t pad_0x16c[0x4]; // 0x16c
        char* m_szSpeakerContext; // 0x170        
        char* m_szWorldContext; // 0x178        
        client::ResponseFollowup m_Followup; // 0x180        
        [[maybe_unused]] std::uint8_t pad_0x1b1[0x1]; // 0x1b1
        CUtlSymbol m_recipientFilter; // 0x1b2        
        [[maybe_unused]] std::uint8_t pad_0x1b4[0x4]; // 0x1b4
        // m_pchCriteriaNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbol> m_pchCriteriaNames;
        char m_pchCriteriaNames[0x18]; // 0x1b8        
        // m_pchCriteriaValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<char*> m_pchCriteriaValues;
        char m_pchCriteriaValues[0x18]; // 0x1d0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRR_Response, m_Type) == 0x0);
    static_assert(offsetof(CRR_Response, m_szResponseName) == 0x1);
    static_assert(offsetof(CRR_Response, m_szMatchingRule) == 0xc1);
    static_assert(offsetof(CRR_Response, m_Params) == 0x148);
    static_assert(offsetof(CRR_Response, m_fMatchScore) == 0x168);
    static_assert(offsetof(CRR_Response, m_szSpeakerContext) == 0x170);
    static_assert(offsetof(CRR_Response, m_szWorldContext) == 0x178);
    static_assert(offsetof(CRR_Response, m_Followup) == 0x180);
    static_assert(offsetof(CRR_Response, m_recipientFilter) == 0x1b2);
    static_assert(offsetof(CRR_Response, m_pchCriteriaNames) == 0x1b8);
    static_assert(offsetof(CRR_Response, m_pchCriteriaValues) == 0x1d0);
    
    static_assert(sizeof(CRR_Response) == 0x1e8);
};
