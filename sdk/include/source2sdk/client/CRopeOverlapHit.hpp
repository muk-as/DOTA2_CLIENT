#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        #pragma pack(push, 1)
        class CRopeOverlapHit
        {
        public:
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_vecOverlappingLinks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecOverlappingLinks;
            char m_vecOverlappingLinks[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CRopeOverlapHit, m_hEntity) == 0x0);
        static_assert(offsetof(source2sdk::client::CRopeOverlapHit, m_vecOverlappingLinks) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CRopeOverlapHit) == 0x20);
    };
};
