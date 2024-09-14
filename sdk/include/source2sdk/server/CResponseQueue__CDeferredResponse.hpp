#pragma once
#include "source2sdk/client/CRR_Response.hpp"
#include "source2sdk/client/CResponseCriteriaSet.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x230
    #pragma pack(push, 1)
    class CResponseQueue__CDeferredResponse
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::CResponseCriteriaSet m_contexts; // 0x8        
        float m_fDispatchTime; // 0x30        
        // m_hIssuer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hIssuer;
        char m_hIssuer[0x4]; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x38[0x8]; // 0x38
        client::CRR_Response m_response; // 0x40        
        bool m_bResponseValid; // 0x228        
        [[maybe_unused]] std::uint8_t pad_0x229[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CResponseQueue__CDeferredResponse, m_contexts) == 0x8);
    static_assert(offsetof(CResponseQueue__CDeferredResponse, m_fDispatchTime) == 0x30);
    static_assert(offsetof(CResponseQueue__CDeferredResponse, m_hIssuer) == 0x34);
    static_assert(offsetof(CResponseQueue__CDeferredResponse, m_response) == 0x40);
    static_assert(offsetof(CResponseQueue__CDeferredResponse, m_bResponseValid) == 0x228);
    
    static_assert(sizeof(CResponseQueue__CDeferredResponse) == 0x230);
};
