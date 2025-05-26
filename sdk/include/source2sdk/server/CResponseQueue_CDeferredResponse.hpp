#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CRR_Response.hpp"
#include "source2sdk/client/CResponseCriteriaSet.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x238
        #pragma pack(push, 1)
        class CResponseQueue_CDeferredResponse
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::CResponseCriteriaSet m_contexts; // 0x8            
            source2sdk::entity2::GameTime_t m_flDispatchTime; // 0x30            
            // m_hIssuer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIssuer;
            char m_hIssuer[0x4]; // 0x34            
            uint8_t _pad0038[0x8]; // 0x38
            // m_recipientBitVec has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CTypedBitVec<64> m_recipientBitVec;
            char m_recipientBitVec[0x8]; // 0x40            
            source2sdk::client::CRR_Response m_response; // 0x48            
            bool m_bResponseValid; // 0x230            
            uint8_t _pad0231[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CResponseQueue_CDeferredResponse, m_contexts) == 0x8);
        static_assert(offsetof(source2sdk::server::CResponseQueue_CDeferredResponse, m_flDispatchTime) == 0x30);
        static_assert(offsetof(source2sdk::server::CResponseQueue_CDeferredResponse, m_hIssuer) == 0x34);
        static_assert(offsetof(source2sdk::server::CResponseQueue_CDeferredResponse, m_recipientBitVec) == 0x40);
        static_assert(offsetof(source2sdk::server::CResponseQueue_CDeferredResponse, m_response) == 0x48);
        static_assert(offsetof(source2sdk::server::CResponseQueue_CDeferredResponse, m_bResponseValid) == 0x230);
        
        static_assert(sizeof(source2sdk::server::CResponseQueue_CDeferredResponse) == 0x238);
    };
};
