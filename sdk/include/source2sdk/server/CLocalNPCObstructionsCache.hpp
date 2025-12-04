#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        #pragma pack(push, 1)
        class CLocalNPCObstructionsCache
        {
        public:
            source2sdk::entity2::GameTick_t m_nLastUpdatedTick; // 0x_            
            float m_flRadius; // 0x_            
            // m_hCachedNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_hCachedNPCs;
            char m_hCachedNPCs[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CLocalNPCObstructionsCache, m_nLastUpdatedTick) == 0x_);
        static_assert(offsetof(source2sdk::server::CLocalNPCObstructionsCache, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::server::CLocalNPCObstructionsCache, m_hCachedNPCs) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CLocalNPCObstructionsCache) == 0x_);
    };
};
